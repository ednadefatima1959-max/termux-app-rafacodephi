package com.termux.shared.termux;

import androidx.annotation.NonNull;

import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public final class TermuxConstants {

    // ------------------------------------------------------------
    // 1. Organização e URLs
    // ------------------------------------------------------------
    public static final String TERMUX_GITHUB_ORGANIZATION_NAME = "instituto-Rafael";
    @NonNull
    public static final String TERMUX_GITHUB_ORGANIZATION_URL = "https://github.com/" + TERMUX_GITHUB_ORGANIZATION_NAME;
    @NonNull
    public static final String FDROID_PACKAGES_BASE_URL = "https://f-droid.org/en/packages";

    // ------------------------------------------------------------
    // 2. App principal
    // ------------------------------------------------------------
    @NonNull
    public static final String TERMUX_APP_NAME = "Termux RAFCODEΦ";
    @NonNull
    public static final String TERMUX_PACKAGE_NAME = "com.termux.rafacodephi";
    @NonNull
    public static final String TERMUX_GITHUB_REPO_NAME = "termux-app-rafacodephi";
    @NonNull
    public static final String TERMUX_GITHUB_REPO_URL = TERMUX_GITHUB_ORGANIZATION_URL + "/" + TERMUX_GITHUB_REPO_NAME;
    @NonNull
    public static final String TERMUX_GITHUB_ISSUES_REPO_URL = TERMUX_GITHUB_REPO_URL + "/issues";
    @NonNull
    public static final String TERMUX_FDROID_PACKAGE_URL = FDROID_PACKAGES_BASE_URL + "/" + TERMUX_PACKAGE_NAME;

    // ------------------------------------------------------------
    // 3. Plugins (nomes e pacotes)
    // ------------------------------------------------------------
    @NonNull
    public static final String TERMUX_API_APP_NAME = "Termux:API";
    @NonNull
    public static final String TERMUX_API_PACKAGE_NAME = TERMUX_PACKAGE_NAME + ".api";
    @NonNull
    public static final String TERMUX_API_GITHUB_REPO_NAME = "termux-api";
    @NonNull
    public static final String TERMUX_API_GITHUB_REPO_URL = TERMUX_GITHUB_ORGANIZATION_URL + "/" + TERMUX_API_GITHUB_REPO_NAME;
    @NonNull
    public static final String TERMUX_API_GITHUB_ISSUES_REPO_URL = TERMUX_API_GITHUB_REPO_URL + "/issues";

    @NonNull
    public static final String TERMUX_BOOT_APP_NAME = "Termux:Boot";
    @NonNull
    public static final String TERMUX_BOOT_PACKAGE_NAME = TERMUX_PACKAGE_NAME + ".boot";
    @NonNull
    public static final String TERMUX_BOOT_GITHUB_REPO_NAME = "termux-boot";
    @NonNull
    public static final String TERMUX_BOOT_GITHUB_REPO_URL = TERMUX_GITHUB_ORGANIZATION_URL + "/" + TERMUX_BOOT_GITHUB_REPO_NAME;
    @NonNull
    public static final String TERMUX_BOOT_GITHUB_ISSUES_REPO_URL = TERMUX_BOOT_GITHUB_REPO_URL + "/issues";

    @NonNull
    public static final String TERMUX_FLOAT_APP_NAME = "Termux:Float";
    @NonNull
    public static final String TERMUX_FLOAT_PACKAGE_NAME = TERMUX_PACKAGE_NAME + ".float";
    @NonNull
    public static final String TERMUX_FLOAT_GITHUB_REPO_NAME = "termux-float";
    @NonNull
    public static final String TERMUX_FLOAT_GITHUB_REPO_URL = TERMUX_GITHUB_ORGANIZATION_URL + "/" + TERMUX_FLOAT_GITHUB_REPO_NAME;
    @NonNull
    public static final String TERMUX_FLOAT_GITHUB_ISSUES_REPO_URL = TERMUX_FLOAT_GITHUB_REPO_URL + "/issues";

    @NonNull
    public static final String TERMUX_STYLING_APP_NAME = "Termux:Styling";
    @NonNull
    public static final String TERMUX_STYLING_PACKAGE_NAME = TERMUX_PACKAGE_NAME + ".styling";
    @NonNull
    public static final String TERMUX_STYLING_GITHUB_REPO_NAME = "termux-styling";
    @NonNull
    public static final String TERMUX_STYLING_GITHUB_REPO_URL = TERMUX_GITHUB_ORGANIZATION_URL + "/" + TERMUX_STYLING_GITHUB_REPO_NAME;
    @NonNull
    public static final String TERMUX_STYLING_GITHUB_ISSUES_REPO_URL = TERMUX_STYLING_GITHUB_REPO_URL + "/issues";

    @NonNull
    public static final String TERMUX_TASKER_APP_NAME = "Termux:Tasker";
    @NonNull
    public static final String TERMUX_TASKER_PACKAGE_NAME = TERMUX_PACKAGE_NAME + ".tasker";
    @NonNull
    public static final String TERMUX_TASKER_GITHUB_REPO_NAME = "termux-tasker";
    @NonNull
    public static final String TERMUX_TASKER_GITHUB_REPO_URL = TERMUX_GITHUB_ORGANIZATION_URL + "/" + TERMUX_TASKER_GITHUB_REPO_NAME;
    @NonNull
    public static final String TERMUX_TASKER_GITHUB_ISSUES_REPO_URL = TERMUX_TASKER_GITHUB_REPO_URL + "/issues";

    @NonNull
    public static final String TERMUX_WIDGET_APP_NAME = "Termux:Widget";
    @NonNull
    public static final String TERMUX_WIDGET_PACKAGE_NAME = TERMUX_PACKAGE_NAME + ".widget";
    @NonNull
    public static final String TERMUX_WIDGET_GITHUB_REPO_NAME = "termux-widget";
    @NonNull
    public static final String TERMUX_WIDGET_GITHUB_REPO_URL = TERMUX_GITHUB_ORGANIZATION_URL + "/" + TERMUX_WIDGET_GITHUB_REPO_NAME;
    @NonNull
    public static final String TERMUX_WIDGET_GITHUB_ISSUES_REPO_URL = TERMUX_WIDGET_GITHUB_REPO_URL + "/issues";

    // ------------------------------------------------------------
    // 4. Repositórios adicionais
    // ------------------------------------------------------------
    @NonNull
    public static final String PROOT_DISTRO_GITHUB_REPO_NAME = "proot-distro";
    @NonNull
    public static final String PROOT_DISTRO_GITHUB_REPO_URL = TERMUX_GITHUB_ORGANIZATION_URL + "/" + PROOT_DISTRO_GITHUB_REPO_NAME;
    @NonNull
    public static final String PROOT_DISTRO_GITHUB_ISSUES_URL = PROOT_DISTRO_GITHUB_REPO_URL + "/issues";

    @NonNull
    public static final String TERMUX_PACKAGES_GITHUB_REPO_NAME = "termux-packages";
    @NonNull
    public static final String TERMUX_PACKAGES_GITHUB_REPO_URL = TERMUX_GITHUB_ORGANIZATION_URL + "/" + TERMUX_PACKAGES_GITHUB_REPO_NAME;
    @NonNull
    public static final String TERMUX_PACKAGES_GITHUB_ISSUES_URL = TERMUX_PACKAGES_GITHUB_REPO_URL + "/issues";
    @NonNull
    public static final String TERMUX_PACKAGES_GITHUB_ISSUES_REPO_URL = TERMUX_PACKAGES_GITHUB_ISSUES_URL;
    @NonNull
    public static final String TERMUX_PACKAGES_GITHUB_WIKI_URL = TERMUX_PACKAGES_GITHUB_REPO_URL + "/wiki";
    @NonNull
    public static final String TERMUX_PACKAGES_GITHUB_WIKI_REPO_URL = TERMUX_PACKAGES_GITHUB_WIKI_URL;
    @NonNull
    public static final String TERMUX_GITHUB_WIKI_REPO_URL = TERMUX_GITHUB_REPO_URL + "/wiki";

    // ------------------------------------------------------------
    // 5. Diretórios e arquivos (essenciais)
    // ------------------------------------------------------------
    @NonNull
    public static final String TERMUX_INTERNAL_PRIVATE_APP_DATA_DIR_PATH = "/data/data/" + TERMUX_PACKAGE_NAME;
    @NonNull
    public static final String TERMUX_FILES_DIR_PATH = TERMUX_INTERNAL_PRIVATE_APP_DATA_DIR_PATH + "/files";
    @NonNull
    public static final String TERMUX_CACHE_DIR_PATH = TERMUX_INTERNAL_PRIVATE_APP_DATA_DIR_PATH + "/cache";
    @NonNull
    public static final String TERMUX_DATABASES_DIR_PATH = TERMUX_INTERNAL_PRIVATE_APP_DATA_DIR_PATH + "/databases";
    @NonNull
    public static final String TERMUX_SHARED_PREFERENCES_DIR_PATH = TERMUX_INTERNAL_PRIVATE_APP_DATA_DIR_PATH + "/shared_prefs";
    @NonNull
    public static final String TERMUX_PREFIX_DIR_PATH = TERMUX_FILES_DIR_PATH + "/usr";
    @NonNull
    public static final String TERMUX_BIN_PREFIX_DIR_PATH = TERMUX_PREFIX_DIR_PATH + "/bin";
    @NonNull
    public static final String TERMUX_ETC_DIR_PATH = TERMUX_PREFIX_DIR_PATH + "/etc";
    @NonNull
    public static final String TERMUX_INCLUDE_DIR_PATH = TERMUX_PREFIX_DIR_PATH + "/include";
    @NonNull
    public static final String TERMUX_LIB_DIR_PATH = TERMUX_PREFIX_DIR_PATH + "/lib";
    @NonNull
    public static final String TERMUX_LIBEXEC_DIR_PATH = TERMUX_PREFIX_DIR_PATH + "/libexec";
    @NonNull
    public static final String TERMUX_SHARE_DIR_PATH = TERMUX_PREFIX_DIR_PATH + "/share";
    @NonNull
    public static final String TERMUX_TMP_DIR_PATH = TERMUX_PREFIX_DIR_PATH + "/tmp";
    @NonNull
    public static final String TERMUX_VAR_DIR_PATH = TERMUX_PREFIX_DIR_PATH + "/var";
    @NonNull
    public static final String TERMUX_USR_DIR_PATH = TERMUX_PREFIX_DIR_PATH;
    @NonNull
    public static final String TERMUX_HOME_DIR_PATH = TERMUX_FILES_DIR_PATH + "/home";
    @NonNull
    public static final String TERMUX_STORAGE_HOME_DIR_PATH = TERMUX_FILES_DIR_PATH + "/storage";
    @NonNull
    public static final String TERMUX_PROPERTIES_FILE_PATH = TERMUX_ETC_DIR_PATH + "/termux.properties";
    @NonNull
    public static final String TERMUX_ENV_FILE_PATH = TERMUX_USR_DIR_PATH + "/etc/termux-login-environment";
    @NonNull
    public static final String TERMUX_ENV_TEMP_FILE_PATH = TERMUX_USR_DIR_PATH + "/etc/termux-login-environment.tmp";
    @NonNull
    public static final String TERMUX_AM_SOCKET_FILE_PATH = TERMUX_PREFIX_DIR_PATH + "/tmp/am.socket";
    @NonNull
    public static final String TERMUX_CRASH_LOG_FILE_PATH = TERMUX_CACHE_DIR_PATH + "/crash_log";
    @NonNull
    public static final String TERMUX_CRASH_LOG_BACKUP_FILE_PATH = TERMUX_CACHE_DIR_PATH + "/crash_log.bak";

    // ------------------------------------------------------------
    // 6. Wikis, Reddit, Suporte
    // ------------------------------------------------------------
    @NonNull
    public static final String TERMUX_WIKI = "Termux Wiki";
    @NonNull
    public static final String TERMUX_WIKI_URL = "https://wiki.termux.com";
    @NonNull
    public static final String TERMUX_SUPPORT_EMAIL_URL = "support@termux.dev";
    @NonNull
    public static final String TERMUX_SUPPORT_EMAIL_MAILTO_URL = "mailto:" + TERMUX_SUPPORT_EMAIL_URL;
    @NonNull
    public static final String TERMUX_REDDIT_SUBREDDIT = "termux";
    @NonNull
    public static final String TERMUX_REDDIT_SUBREDDIT_URL = "https://reddit.com/r/" + TERMUX_REDDIT_SUBREDDIT;
    @NonNull
    public static final String TERMUX_DONATE_URL = "https://termux.dev/donate";

    // ------------------------------------------------------------
    // 7. Actions, broadcasts, serviços
    // ------------------------------------------------------------
    public static final String BROADCAST_TERMUX_OPENED = TERMUX_PACKAGE_NAME + ".action.OPENED";
    public static final String TERMUX_ACTIVITY_NAME = TERMUX_PACKAGE_NAME + ".TermuxActivity";
    public static final String TERMUX_ACTIVITY_ACTION_REQUEST_PERMISSIONS = TERMUX_PACKAGE_NAME + ".action.REQUEST_PERMISSIONS";
    public static final String TERMUX_SERVICE_NAME = TERMUX_PACKAGE_NAME + ".TermuxService";
    public static final String RUN_COMMAND_SERVICE_NAME = TERMUX_PACKAGE_NAME + ".RunCommandService";

    // ------------------------------------------------------------
    // 8. Notificações (IDs como int, canais como String)
    // ------------------------------------------------------------
    public static final int TERMUX_APP_NOTIFICATION_ID = 1;
    public static final int TERMUX_RUN_COMMAND_NOTIFICATION_ID = 2;   // int, não String!
    public static final String TERMUX_APP_NOTIFICATION_CHANNEL_ID = TERMUX_PACKAGE_NAME + ".general";
    public static final String TERMUX_APP_NOTIFICATION_CHANNEL_NAME = "Termux RAFCODEΦ";
    public static final String TERMUX_CRASH_REPORTS_NOTIFICATION_CHANNEL_ID = TERMUX_PACKAGE_NAME + ".crash_reports";
    public static final String TERMUX_CRASH_REPORTS_NOTIFICATION_CHANNEL_NAME = "Termux Crash Reports";

    // ------------------------------------------------------------
    // 9. Lista de pacotes dos plugins (imutável)
    // ------------------------------------------------------------
    public static final List<String> TERMUX_PLUGIN_APP_PACKAGE_NAMES_LIST = Collections.unmodifiableList(Arrays.asList(
            TERMUX_API_PACKAGE_NAME,
            TERMUX_BOOT_PACKAGE_NAME,
            TERMUX_FLOAT_PACKAGE_NAME,
            TERMUX_STYLING_PACKAGE_NAME,
            TERMUX_TASKER_PACKAGE_NAME,
            TERMUX_WIDGET_PACKAGE_NAME
    ));

    // ------------------------------------------------------------
    // 10. APK release types (placeholders - troque pelos hashes reais depois)
    // ------------------------------------------------------------
    public static final String APK_RELEASE_FDROID = "f-droid";
    public static final String APK_RELEASE_FDROID_SIGNING_CERTIFICATE_SHA256_DIGEST = "fdroid_cert_hash";
    public static final String APK_RELEASE_GITHUB = "github";
    public static final String APK_RELEASE_GITHUB_SIGNING_CERTIFICATE_SHA256_DIGEST = "github_cert_hash";
    public static final String APK_RELEASE_GOOGLE_PLAYSTORE = "playstore";
    public static final String APK_RELEASE_GOOGLE_PLAYSTORE_SIGNING_CERTIFICATE_SHA256_DIGEST = "playstore_cert_hash";
    public static final String APK_RELEASE_TERMUX_DEVS = "termux_devs";
    public static final String APK_RELEASE_TERMUX_DEVS_SIGNING_CERTIFICATE_SHA256_DIGEST = "termux_devs_cert_hash";

    // ------------------------------------------------------------
    // 11. Propriedades de configuração
    // ------------------------------------------------------------
    public static final String PROP_ALLOW_EXTERNAL_APPS = "allow-external-apps";

    // ------------------------------------------------------------
    // 12. Inner class TERMUX_APP (necessária para imports como TERMUX_APP.TERMUX_ACTIVITY)
    // ------------------------------------------------------------
    public static final class TERMUX_APP {
        public static final String BUILD_CONFIG_CLASS_NAME = TERMUX_PACKAGE_NAME + ".BuildConfig";
        public static final String TERMUX_ACTIVITY_NAME = TermuxConstants.TERMUX_ACTIVITY_NAME;

        public static final class TERMUX_ACTIVITY {
            public static final String ACTION_NOTIFY_APP_CRASH = TERMUX_PACKAGE_NAME + ".action.NOTIFY_APP_CRASH";
        }

        public static final class TERMUX_SERVICE {
            // vazio, apenas para satisfazer referências como TERMUX_APP.TERMUX_SERVICE
        }
    }

    private TermuxConstants() {}
}
