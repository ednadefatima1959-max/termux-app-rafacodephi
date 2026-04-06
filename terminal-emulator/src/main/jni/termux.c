#include <dirent.h>
#include <fcntl.h>
#include <jni.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/wait.h>
#include <termios.h>
#include <unistd.h>

#define TERMUX_UNUSED(x) x __attribute__((__unused__))
#ifdef __APPLE__
# define LACKS_PTSNAME_R
#endif

static int throw_runtime_exception(JNIEnv* env, const char* msg) {
    jclass exClass = (*env)->FindClass(env, "java/lang/RuntimeException");
    (*env)->ThrowNew(env, exClass, msg);
    return -1;
}

static int create_subprocess(JNIEnv* env,
        const char* cmd, const char* cwd,
        char* const argv[], char** envp,
        int* pProcessId, jint rows, jint cols,
        jint cell_width, jint cell_height) {

    int ptm = open("/dev/ptmx", O_RDWR | O_CLOEXEC);
    if (ptm < 0) return throw_runtime_exception(env, "Cannot open /dev/ptmx");

#ifdef LACKS_PTSNAME_R
    char* devname;
#else
    char devname[64];
#endif

    if (grantpt(ptm) || unlockpt(ptm) ||
#ifdef LACKS_PTSNAME_R
        (devname = ptsname(ptm)) == NULL
#else
        ptsname_r(ptm, devname, sizeof(devname))
#endif
    ) return throw_runtime_exception(env, "Failed grantpt/unlockpt/ptsname");

    struct termios tios;
    tcgetattr(ptm, &tios);
    tios.c_iflag |= IUTF8;
    tios.c_iflag &= ~(IXON | IXOFF);
    tcsetattr(ptm, TCSANOW, &tios);

    struct winsize sz = {
        .ws_row = (unsigned short)rows,
        .ws_col = (unsigned short)cols,
        .ws_xpixel = (unsigned short)(cols * cell_width),
        .ws_ypixel = (unsigned short)(rows * cell_height)
    };
    ioctl(ptm, TIOCSWINSZ, &sz);

    pid_t pid = fork();
    if (pid < 0) return throw_runtime_exception(env, "Fork failed");
    if (pid > 0) { *pProcessId = (int)pid; return ptm; }

    /* filho */
    sigset_t s; sigfillset(&s); sigprocmask(SIG_UNBLOCK, &s, 0);
    close(ptm); setsid();

    int pts = open(devname, O_RDWR);
    if (pts < 0) _exit(-1);

    dup2(pts, 0); dup2(pts, 1); dup2(pts, 2);

    DIR* d = opendir("/proc/self/fd");
    if (d) {
        int dfd = dirfd(d);
        struct dirent* e;
        while ((e = readdir(d))) {
            int fd = atoi(e->d_name);
            if (fd > 2 && fd != dfd) close(fd);
        }
        closedir(d);
    }

    clearenv();
    if (envp) for (; *envp; ++envp) putenv(*envp);
    if (chdir(cwd) != 0) { perror("chdir"); fflush(stderr); }
    execvp(cmd, argv);
    perror("exec"); _exit(1);
}

JNIEXPORT jint JNICALL Java_com_termux_terminal_JNI_createSubprocess(
        JNIEnv* env, jclass TERMUX_UNUSED(clazz),
        jstring cmd, jstring cwd,
        jobjectArray args, jobjectArray envVars,
        jintArray processIdArray,
        jint rows, jint cols, jint cell_width, jint cell_height) {

    jsize sz = args ? (*env)->GetArrayLength(env, args) : 0;
    char** argv = NULL;
    if (sz > 0) {
        argv = malloc((sz+1)*sizeof(char*));
        if (!argv) return throw_runtime_exception(env, "malloc argv");
        for (int i=0; i<sz; i++) {
            jstring s = (jstring)(*env)->GetObjectArrayElement(env,args,i);
            const char* u = (*env)->GetStringUTFChars(env,s,NULL);
            argv[i] = strdup(u);
            (*env)->ReleaseStringUTFChars(env,s,u);
        }
        argv[sz] = NULL;
    }

    sz = envVars ? (*env)->GetArrayLength(env, envVars) : 0;
    char** envp = NULL;
    if (sz > 0) {
        envp = malloc((sz+1)*sizeof(char*));
        if (!envp) {
            if(argv){for(char**t=argv;*t;t++) free(*t); free(argv);}
            return throw_runtime_exception(env, "malloc envp");
        }
        for (int i=0; i<sz; i++) {
            jstring s = (jstring)(*env)->GetObjectArrayElement(env,envVars,i);
            const char* u = (*env)->GetStringUTFChars(env,s,NULL);
            envp[i] = strdup(u);
            (*env)->ReleaseStringUTFChars(env,s,u);
        }
        envp[sz] = NULL;
    }

    const char* cwd_u = (*env)->GetStringUTFChars(env,cwd,NULL);
    const char* cmd_u = (*env)->GetStringUTFChars(env,cmd,NULL);
    int procId = 0;

    int ptm = create_subprocess(env, cmd_u, cwd_u, argv, envp, &procId, rows, cols, cell_width, cell_height);

    (*env)->ReleaseStringUTFChars(env,cmd,cmd_u);
    (*env)->ReleaseStringUTFChars(env,cwd,cwd_u);

    if (argv) { for(char**t=argv;*t;t++) free(*t); free(argv); }
    if (envp) { for(char**t=envp;*t;t++) free(*t); free(envp); }

    int* p = (int*)(*env)->GetPrimitiveArrayCritical(env,processIdArray,NULL);
    if (!p) return throw_runtime_exception(env,"GetPrimitiveArrayCritical");
    *p = procId;
    (*env)->ReleasePrimitiveArrayCritical(env,processIdArray,p,0);

    return ptm;
}

JNIEXPORT void JNICALL Java_com_termux_terminal_JNI_setPtyWindowSize(
        JNIEnv* TERMUX_UNUSED(env), jclass TERMUX_UNUSED(clazz),
        jint fd, jint rows, jint cols, jint cell_width, jint cell_height) {
    struct winsize sz = {
        .ws_row=(unsigned short)rows,
        .ws_col=(unsigned short)cols,
        .ws_xpixel=(unsigned short)(cols*cell_width),
        .ws_ypixel=(unsigned short)(rows*cell_height)
    };
    ioctl(fd,TIOCSWINSZ,&sz);
}

JNIEXPORT void JNICALL Java_com_termux_terminal_JNI_setPtyUTF8Mode(
        JNIEnv* TERMUX_UNUSED(env), jclass TERMUX_UNUSED(clazz),
        jint fd) {
    struct termios t; tcgetattr(fd,&t);
    if(!(t.c_iflag&IUTF8)){t.c_iflag|=IUTF8; tcsetattr(fd,TCSANOW,&t);}
}

JNIEXPORT jint JNICALL Java_com_termux_terminal_JNI_waitFor(
        JNIEnv* TERMUX_UNUSED(env), jclass TERMUX_UNUSED(clazz),
        jint pid) {
    int status; waitpid(pid,&status,0);
    if(WIFEXITED(status)) return WEXITSTATUS(status);
    if(WIFSIGNALED(status)) return -WTERMSIG(status);
    return 0;
}

JNIEXPORT void JNICALL Java_com_termux_terminal_JNI_close(
        JNIEnv* TERMUX_UNUSED(env), jclass TERMUX_UNUSED(clazz),
        jint fd) {
    close(fd);
}
