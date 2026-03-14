/* raf_termux_packages.c
   IDs deterministicos de pacotes Termux (sem libc, gerado)
*/

#include "raf_termux_packages.h"

#define RAF_TERMUX_PKG_VERIFY_SEED 0xA5A55A5Au

#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
#define RAF_PKG_INIT(ID, NLEN, FLG, VFY, NPTR) { (ID), (NLEN), (FLG), (VFY), (NPTR) }

static const char g_termux_pkg_names[] =
  "0verkill\0"
  "2048-c\0"
  "2ping\0"
  "6tunnel\0"
  "7zip\0"
  "8086tiny\0"
  "aalib\0"
  "aapt\0"
  "abduco\0"
  "abook\0"
  "abootimg\0"
  "abseil-cpp\0"
  "ack-grep\0"
  "acr\0"
  "ada\0"
  "adms\0"
  "aerc\0"
  "agate\0"
  "age\0"
  "agg\0"
  "aha\0"
  "aichat\0"
  "alass\0"
  "alembic\0"
  "algernon\0"
  "alpine\0"
  "alsa-lib\0"
  "alsa-plugins\0"
  "alsa-utils\0"
  "amber\0"
  "amfora\0"
  "android-tools\0"
  "anewer\0"
  "angband\0"
  "angle-android\0"
  "angle-grinder\0"
  "ani-cli\0"
  "ansifilter\0"
  "ant\0"
  "antibody\0"
  "antiword\0"
  "aosp-libs\0"
  "apache-orc\0"
  "apache2\0"
  "apkeep\0"
  "apksigner\0"
  "appstream\0"
  "apr\0"
  "apr-util\0"
  "apt\0"
  "apt-file\0"
  "apt-show-versions\0"
  "aptly\0"
  "argon2\0"
  "argp\0"
  "aria2\0"
  "arj\0"
  "arpack-ng\0"
  "artalk\0"
  "arturo\0"
  "ascii\0"
  "asciidoc\0"
  "asciidoctor\0"
  "asciinema\0"
  "asm-lsp\0"
  "aspell\0"
  "aspell-de\0"
  "aspell-en\0"
  "aspell-es\0"
  "aspell-fr\0"
  "assimp\0"
  "asymptote\0"
  "at\0"
  "at-spi2-core\0"
  "atomicparsley\0"
  "atomvm\0"
  "atool\0"
  "attr\0"
  "atuin\0"
  "aubio\0"
  "audiofile\0"
  "autoconf\0"
  "autoconf-archive\0"
  "autojump\0"
  "automake\0"
  "autossh\0"
  "aview\0"
  "avra\0"
  "await\0"
  "awscli\0"
  "axel\0"
  "b3sum\0"
  "babl\0"
  "bacula-fd\0"
  "barcode\0"
  "base16384\0"
  "bash\0"
  "bash-completion\0"
  "bastet\0"
  "bat\0"
  "bc\0"
  "bc-gh\0"
  "bcal\0"
  "bchunk\0"
  "bdsup2sub\0"
  "beanshell\0"
  "bear\0"
  "bed\0"
  "bftpd\0"
  "bgrep\0"
  "biboumi\0"
  "binaryen\0"
  "binutils\0"
  "bison\0"
  "bitcoin\0"
  "bitlbee\0"
  "bk\0"
  "blackbox\0"
  "blink\0"
  "blogc\0"
  "blueprint-compiler\0"
  "bmon\0"
  "boinc\0"
  "boinctui\0"
  "bombadillo\0"
  "boost\0"
  "bore\0"
  "borgbackup\0"
  "botan3\0"
  "boxes\0"
  "brainfuck\0"
  "brogue\0"
  "brook\0"
  "broot\0"
  "brotli\0"
  "bsd-finger\0"
  "bsd-games\0"
  "btfs2\0"
  "btrfs-progs\0"
  "buf\0"
  "build-essential\0"
  "busybox\0"
  "bvi\0"
  "byacc\0"
  "byobu\0"
  "c-ares\0"
  "c-toxcore\0"
  "ca-certificates\0"
  "cabal-install\0"
  "cabextract\0"
  "cabin\0"
  "cadaver\0"
  "caddy\0"
  "calc\0"
  "calcurse\0"
  "capnproto\0"
  "capstone\0"
  "carapace\0"
  "cargo-c\0"
  "cargo-leptos\0"
  "catdoc\0"
  "catgirl\0"
  "catimg\0"
  "cava\0"
  "cavez-of-phear\0"
  "cavif\0"
  "cboard\0"
  "cbonsai\0"
  "cc65\0"
  "ccache\0"
  "cccc\0"
  "ccextractor\0"
  "ccls\0"
  "ccrypt\0"
  "cfengine\0"
  "cfm\0"
  "cgal\0"
  "cgdb\0"
  "cgif\0"
  "chafa\0"
  "check\0"
  "chezmoi\0"
  "chicken\0"
  "chntpw\0"
  "choose\0"
  "chrony\0"
  "cicada\0"
  "ciso\0"
  "cjson\0"
  "ckermit\0"
  "clamav\0"
  "clblast\0"
  "clidle\0"
  "clifm\0"
  "clinfo\0"
  "clipp\0"
  "cloneit\0"
  "cloudflared\0"
  "clpeak\0"
  "clvk\0"
  "cmake\0"
  "cmark\0"
  "cmatrix\0"
  "cmocka\0"
  "cmus\0"
  "cmusfm\0"
  "codecrypt\0"
  "codon\0"
  "coinor-cbc\0"
  "coinor-clp\0"
  "cointop\0"
  "colm\0"
  "colordiff\0"
  "command-not-found\0"
  "composer\0"
  "console-bridge\0"
  "convertlit\0"
  "cookcli\0"
  "coreutils\0"
  "corgi\0"
  "corkscrew\0"
  "corrosion\0"
  "cowsay\0"
  "cpio\0"
  "cppcheck\0"
  "cppi\0"
  "cppunit\0"
  "cpufetch\0"
  "cpulimit\0"
  "crawl\0"
  "croc\0"
  "cronie\0"
  "crowbook\0"
  "crunch\0"
  "cryptopp\0"
  "crystal\0"
  "cscope\0"
  "csh\0"
  "csol\0"
  "csview\0"
  "ctags\0"
  "ctypes-sh\0"
  "cuetools\0"
  "cups\0"
  "cups-pdf\0"
  "curlie\0"
  "curseofwar\0"
  "cvs\0"
  "d8\0"
  "daemonize\0"
  "dar\0"
  "darkhttpd\0"
  "dart\0"
  "dasel\0"
  "dash\0"
  "dasm\0"
  "datamash\0"
  "dateutils\0"
  "dbus\0"
  "dbus-python\0"
  "dcmtk\0"
  "dcraw\0"
  "ddrescue\0"
  "debianutils\0"
  "debootstrap\0"
  "delve\0"
  "deno\0"
  "desed\0"
  "deutex\0"
  "dex2jar\0"
  "dialog\0"
  "dictd\0"
  "diff-so-fancy\0"
  "diffstat\0"
  "difftastic\0"
  "diffutils\0"
  "dirb\0"
  "direnv\0"
  "direvent\0"
  "discordo\0"
  "discount\0"
  "diskus\0"
  "distant\0"
  "distcc\0"
  "djvulibre\0"
  "dmagnetic\0"
  "dmtx-utils\0"
  "dnglab\0"
  "dnote\0"
  "dnote-server\0"
  "dns2tcp\0"
  "dnscontrol\0"
  "dnslookup\0"
  "dnsmap\0"
  "dnstop\0"
  "dnsutils\0"
  "docbook-xml\0"
  "docbook-xsl\0"
  "docopt\0"
  "doctest\0"
  "doge\0"
  "dopewars\0"
  "dos2unix\0"
  "dosfstools\0"
  "dotconf\0"
  "dotnet-host\0"
  "dotnet10.0\0"
  "dotnet8.0\0"
  "dotnet9.0\0"
  "double-conversion\0"
  "doxygen\0"
  "dpkg\0"
  "draco\0"
  "dropbear\0"
  "dtach\0"
  "dtc\0"
  "dte\0"
  "dua\0"
  "duc\0"
  "duf\0"
  "dufs\0"
  "dust\0"
  "dvdauthor\0"
  "dvtm\0"
  "dwarves\0"
  "dx\0"
  "e2fsprogs\0"
  "e2tools\0"
  "ebook-tools\0"
  "ecj\0"
  "ecl\0"
  "ed\0"
  "edbrowse\0"
  "editorconfig-core-c\0"
  "eigen\0"
  "eja\0"
  "electric-fence\0"
  "electrum\0"
  "elinks\0"
  "elixir\0"
  "eltclsh\0"
  "elvish\0"
  "emacs\0"
  "emmylua-ls\0"
  "emscripten\0"
  "enblend\0"
  "enchant\0"
  "enscript\0"
  "entr\0"
  "erlang\0"
  "esbuild\0"
  "espeak\0"
  "et\0"
  "etsh\0"
  "exercism\0"
  "exfatprogs\0"
  "exhale\0"
  "exiftool\0"
  "exiv2\0"
  "expect\0"
  "eza\0"
  "fact++\0"
  "fakeroot\0"
  "fasd\0"
  "fastfetch\0"
  "fastmod\0"
  "fatsort\0"
  "faust\0"
  "fclones\0"
  "fcp\0"
  "fd\0"
  "fdkaac\0"
  "fdm\0"
  "fdroidcl\0"
  "fdupes\0"
  "fennel\0"
  "feroxbuster\0"
  "fetchmail\0"
  "fff\0"
  "ffmpeg\0"
  "ffmpegthumbnailer\0"
  "ffsend\0"
  "fftw\0"
  "figlet\0"
  "file\0"
  "finch\0"
  "findomain\0"
  "findutils\0"
  "fish\0"
  "flang\0"
  "flatbuffers\0"
  "flex\0"
  "fluidsynth\0"
  "flyctl\0"
  "fm\0"
  "fmt\0"
  "fontconfig\0"
  "forgejo\0"
  "fortune\0"
  "fossil\0"
  "freecolor\0"
  "freeimage\0"
  "freetype\0"
  "frei0r-plugins\0"
  "fresh-editor\0"
  "fribidi\0"
  "frobtads\0"
  "frotz\0"
  "frp\0"
  "fselect\0"
  "fsmon\0"
  "fwknop\0"
  "fx\0"
  "fzf\0"
  "fzy\0"
  "game-music-emu\0"
  "gap\0"
  "gatling\0"
  "gauche\0"
  "gawk\0"
  "gbt\0"
  "gcab\0"
  "gcal\0"
  "gdal\0"
  "gdb\0"
  "gdbm\0"
  "gdk-pixbuf\0"
  "gdrive-downloader\0"
  "gdu\0"
  "geckodriver\0"
  "gecode\0"
  "gegl\0"
  "gengetopt\0"
  "geographiclib\0"
  "geoip2-database\0"
  "germanium\0"
  "getconf\0"
  "geth\0"
  "gettext\0"
  "gexiv2\0"
  "gflags\0"
  "gforth\0"
  "gh\0"
  "ghc\0"
  "ghostscript\0"
  "giflib\0"
  "gifsicle\0"
  "gifski\0"
  "git\0"
  "git-credential-manager\0"
  "git-crypt\0"
  "git-delta\0"
  "git-extras\0"
  "git-lfs\0"
  "git-sizer\0"
  "git-town\0"
  "gitea\0"
  "gitflow-avh\0"
  "gitoxide\0"
  "gitui\0"
  "gkermit\0"
  "glab-cli\0"
  "gleam\0"
  "glib\0"
  "glib-networking\0"
  "glibc-repo\0"
  "glm\0"
  "global\0"
  "glow\0"
  "glpk\0"
  "glslang\0"
  "gluelang\0"
  "glulxe\0"
  "gmic\0"
  "gn\0"
  "gnucap\0"
  "gnuchess\0"
  "gnucobol\0"
  "gnugo\0"
  "gnuit\0"
  "gnunet\0"
  "gnupg\0"
  "gnuplot\0"
  "gnurl\0"
  "gnushogi\0"
  "gnuski\0"
  "gnustep-make\0"
  "go-findimagedupes\0"
  "go-musicfox\0"
  "goaccess\0"
  "gobang\0"
  "gobject-introspection\0"
  "gogs\0"
  "gojq\0"
  "golang\0"
  "gomp\0"
  "gomuks\0"
  "google-glog\0"
  "googletest\0"
  "goose\0"
  "gopass\0"
  "gopher\0"
  "gopls\0"
  "goresym\0"
  "gost\0"
  "gotify\0"
  "gotop\0"
  "gotorrent\0"
  "gotty\0"
  "gpac\0"
  "gperf\0"
  "gpgme\0"
  "gpgmepp\0"
  "gping\0"
  "gpsbabel\0"
  "gradle\0"
  "grafana\0"
  "grap\0"
  "graphene\0"
  "graphicsmagick\0"
  "graphviz\0"
  "greed\0"
  "grep\0"
  "grex\0"
  "groff\0"
  "gron\0"
  "groonga\0"
  "groovy\0"
  "grpcurl\0"
  "gsl\0"
  "gst-libav\0"
  "gst-plugins-bad\0"
  "gst-plugins-base\0"
  "gst-plugins-good\0"
  "gst-plugins-ugly\0"
  "gst-python\0"
  "gstreamer\0"
  "gtypist\0"
  "guile\0"
  "gum\0"
  "gumbo-parser\0"
  "gweather-locations\0"
  "gzip\0"
  "haproxy\0"
  "harfbuzz\0"
  "hash-slinger\0"
  "hashdeep\0"
  "hcl\0"
  "hcloud\0"
  "helix\0"
  "hello\0"
  "helm\0"
  "helm-ls\0"
  "help2man\0"
  "hexcurse\0"
  "hexedit\0"
  "hexer\0"
  "hexyl\0"
  "heyu\0"
  "hfsutils\0"
  "hidapi\0"
  "hilbish\0"
  "hledger\0"
  "hledger-ui\0"
  "hoedown\0"
  "hollywood\0"
  "hors\0"
  "hstr\0"
  "html-xml-utils\0"
  "html2text\0"
  "htop\0"
  "htslib\0"
  "httping\0"
  "httrack\0"
  "hub\0"
  "hugo\0"
  "hummin\0"
  "hunspell\0"
  "hunspell-en-us\0"
  "hunspell-fr\0"
  "hunspell-hu\0"
  "hunspell-nl\0"
  "hunspell-ru\0"
  "hut\0"
  "hwdata\0"
  "hydroxide\0"
  "hyperfine\0"
  "hz\0"
  "i2pd\0"
  "iat\0"
  "icecast\0"
  "ices\0"
  "icon-naming-utils\0"
  "icoutils\0"
  "id3lib\0"
  "id3v2\0"
  "imagemagick\0"
  "imath\0"
  "imlib2\0"
  "indent\0"
  "inetutils\0"
  "influxdb\0"
  "innoextract\0"
  "inotify-tools\0"
  "intltool\0"
  "inxi\0"
  "ipcalc\0"
  "iperf3\0"
  "ipmitool\0"
  "iproute2\0"
  "ipv6calc\0"
  "ipv6toolkit\0"
  "ircd-irc2\0"
  "ired\0"
  "irssi\0"
  "isync\0"
  "iverilog\0"
  "iwyu\0"
  "jack\0"
  "jack-example-tools\0"
  "jack2\0"
  "jackett\0"
  "jadx\0"
  "jbig2dec\0"
  "jbig2enc\0"
  "jcal\0"
  "jellyfin-server\0"
  "jfrog-cli\0"
  "jftui\0"
  "jhead\0"
  "jigdo\0"
  "jira-go\0"
  "jless\0"
  "jo\0"
  "joe\0"
  "jove\0"
  "jp2a\0"
  "jpegoptim\0"
  "jq\0"
  "jq-lsp\0"
  "jql\0"
  "json-c\0"
  "json-glib\0"
  "jsoncpp\0"
  "jump\0"
  "jupp\0"
  "just\0"
  "jython\0"
  "k2pdfopt\0"
  "k9s\0"
  "kainjow-mustache\0"
  "kakoune\0"
  "kakoune-lsp\0"
  "kbd\0"
  "keybase\0"
  "keychain\0"
  "kibi\0"
  "kiwix-tools\0"
  "knockd\0"
  "kona\0"
  "kotlin\0"
  "krb5\0"
  "kubecolor\0"
  "kubectl\0"
  "kubelogin\0"
  "kubo\0"
  "ladspa-sdk\0"
  "lastpass-cli\0"
  "lazygit\0"
  "lcal\0"
  "ldc\0"
  "ldd\0"
  "ldns\0"
  "ledger\0"
  "lego\0"
  "leptonica\0"
  "less\0"
  "lesspipe\0"
  "leveldb\0"
  "lexbor\0"
  "lexter\0"
  "lf\0"
  "lfortran\0"
  "lftp\0"
  "lgogdownloader\0"
  "lhasa\0"
  "liba52\0"
  "libacl\0"
  "libaml\0"
  "libandroid-complex-math\0"
  "libandroid-execinfo\0"
  "libandroid-glob\0"
  "libandroid-posix-semaphore\0"
  "libandroid-selinux\0"
  "libandroid-shmem\0"
  "libandroid-spawn\0"
  "libandroid-stub\0"
  "libandroid-support\0"
  "libandroid-sysv-semaphore\0"
  "libandroid-utimes\0"
  "libandroid-wordexp\0"
  "libao\0"
  "libaom\0"
  "libapt-pkg-perl\0"
  "libarchive\0"
  "libarrow-cpp\0"
  "libasio\0"
  "libass\0"
  "libassuan\0"
  "libatomic-ops\0"
  "libavif\0"
  "libbcprov-java\0"
  "libblosc\0"
  "libblosc2\0"
  "libbluray\0"
  "libbs2b\0"
  "libbsd\0"
  "libbullet\0"
  "libburn\0"
  "libbz2\0"
  "libc++\0"
  "libc++utilities\0"
  "libc-client\0"
  "libcaca\0"
  "libcairo\0"
  "libcairomm-1.0\0"
  "libcairomm-1.16\0"
  "libcap\0"
  "libcap-ng\0"
  "libccd\0"
  "libcddb\0"
  "libcdk\0"
  "libcec\0"
  "libceres-solver\0"
  "libchipmunk\0"
  "libchromaprint\0"
  "libclc\0"
  "libcln\0"
  "libcoap\0"
  "libcoinor-cgl\0"
  "libcoinor-osi\0"
  "libcoinor-utils\0"
  "libcommons-lang3-java\0"
  "libconfig\0"
  "libconfuse\0"
  "libcpufeatures\0"
  "libcroco\0"
  "libcrypt\0"
  "libcue\0"
  "libcunit\0"
  "libcurl\0"
  "libczmq\0"
  "libdaemon\0"
  "libdart\0"
  "libdav1d\0"
  "libdb\0"
  "libde265\0"
  "libdeflate\0"
  "libdevil\0"
  "libdispatch\0"
  "libdisplay-info\0"
  "libdjinterop\0"
  "libdmtx\0"
  "libdrm\0"
  "libduckdb\0"
  "libduktape\0"
  "libdvbcsa\0"
  "libdvbpsi\0"
  "libdvdnav\0"
  "libdvdread\0"
  "libebml\0"
  "libebur128\0"
  "libedit\0"
  "libelf\0"
  "libenet\0"
  "libepoxy\0"
  "libesqlite3\0"
  "libetonyek\0"
  "libev\0"
  "libevent\0"
  "libexif\0"
  "libexpat\0"
  "libfann\0"
  "libfcl\0"
  "libfdk-aac\0"
  "libffi\0"
  "libfixposix\0"
  "libflac\0"
  "libflann\0"
  "libforestdb\0"
  "libfreexl\0"
  "libftxui\0"
  "libfyaml\0"
  "libgc\0"
  "libgcrypt\0"
  "libgd\0"
  "libgedit-gfls\0"
  "libgee\0"
  "libgeos\0"
  "libgeotiff\0"
  "libgf2x\0"
  "libgfshare\0"
  "libgit2\0"
  "libglibmm-2.4\0"
  "libglibmm-2.68\0"
  "libglvnd\0"
  "libgmime\0"
  "libgmp\0"
  "libgnt\0"
  "libgnustep-base\0"
  "libgnutls\0"
  "libgpg-error\0"
  "libgraphite\0"
  "libgrpc\0"
  "libgsasl\0"
  "libgsf\0"
  "libgtop\0"
  "libgts\0"
  "libgxps\0"
  "libhangul\0"
  "libharu\0"
  "libhdf5\0"
  "libheif\0"
  "libhiredis\0"
  "libhtmlcxx\0"
  "libhyphen\0"
  "libical\0"
  "libice\0"
  "libiconv\0"
  "libicu\0"
  "libid3tag\0"
  "libidn\0"
  "libidn2\0"
  "libimagequant\0"
  "libimobiledevice\0"
  "libimobiledevice-glue\0"
  "libimtui\0"
  "libinih\0"
  "libiniparser\0"
  "libiodbc\0"
  "libisoburn\0"
  "libisofs\0"
  "libjanet\0"
  "libjansi\0"
  "libjansson\0"
  "libjasper\0"
  "libjpeg-turbo\0"
  "libjxl\0"
  "libkeyfinder\0"
  "libkiwix\0"
  "libknot\0"
  "libkokkos\0"
  "libksba\0"
  "liblangtag\0"
  "liblightning\0"
  "libliquid-dsp\0"
  "libllvm\0"
  "liblmdb\0"
  "liblo\0"
  "liblog4c\0"
  "liblog4cxx\0"
  "liblqr\0"
  "liblrdf\0"
  "liblz4\0"
  "liblzma\0"
  "liblzo\0"
  "libmaa\0"
  "libmad\0"
  "libmariadbcpp\0"
  "libmatio\0"
  "libmatroska\0"
  "libmaxminddb\0"
  "libmcrypt\0"
  "libmd\0"
  "libmdbx\0"
  "libmediainfo\0"
  "libmesode\0"
  "libmhash\0"
  "libmicrohttpd\0"
  "libminizip\0"
  "libminizip-ng\0"
  "libmnl\0"
  "libmodplug\0"
  "libmosquitto\0"
  "libmp3lame\0"
  "libmp3splt\0"
  "libmpc\0"
  "libmpdclient\0"
  "libmpeg2\0"
  "libmpfr\0"
  "libmpg123\0"
  "libmsgpack\0"
  "libmsgpack-cxx\0"
  "libmuparser\0"
  "libmypaint\0"
  "libnats-c\0"
  "libneon\0"
  "libnet\0"
  "libnettle\0"
  "libnewt\0"
  "libnfc\0"
  "libnfs\0"
  "libnftnl\0"
  "libnghttp2\0"
  "libnghttp3\0"
  "libngtcp2\0"
  "libnl\0"
  "libnova\0"
  "libnpth\0"
  "libnspr\0"
  "libnss\0"
  "libntl\0"
  "libobjc2\0"
  "libode\0"
  "libodfgen\0"
  "libogg\0"
  "liboggz\0"
  "libolm\0"
  "libopenblas\0"
  "libopencc\0"
  "libopencore-amr\0"
  "libopenfec\0"
  "libopenmpt\0"
  "libopus\0"
  "libopusenc\0"
  "liborc\0"
  "libosmium\0"
  "libosmpbf\0"
  "libotr\0"
  "libowfat\0"
  "libp11\0"
  "libp8-platform\0"
  "libpagmo\0"
  "libpangomm-1.4\0"
  "libpangomm-2.48\0"
  "libpano13\0"
  "libpaper\0"
  "libpcap\0"
  "libpcsclite\0"
  "libphysfs\0"
  "libpinyin\0"
  "libpipeline\0"
  "libpixman\0"
  "libplacebo\0"
  "libplist\0"
  "libpluto\0"
  "libpng\0"
  "libpngwriter\0"
  "libpoco\0"
  "libpopt\0"
  "libprotobuf\0"
  "libprotobuf-c\0"
  "libprotozero\0"
  "libpsl\0"
  "libpugixml\0"
  "libqrencode\0"
  "libraptor2\0"
  "libraqm\0"
  "librasqal\0"
  "librav1e\0"
  "libraw\0"
  "libre2\0"
  "libregexp-assemble-perl\0"
  "libresolv-wrapper\0"
  "libretls\0"
  "librevenge\0"
  "librime\0"
  "librinutils\0"
  "librnnoise\0"
  "librocksdb\0"
  "librsvg\0"
  "librsync\0"
  "librtmidi\0"
  "librttopo\0"
  "libsamplerate\0"
  "libsasl\0"
  "libsass\0"
  "libsearpc\0"
  "libseat\0"
  "libseccomp\0"
  "libsecp256k1\0"
  "libsecret\0"
  "libsfdo\0"
  "libshout\0"
  "libsigc++-2.0\0"
  "libsigc++-3.0\0"
  "libsignal-protocol-c\0"
  "libsigsegv\0"
  "libsixel\0"
  "libskiasharp\0"
  "libslirp\0"
  "libsm\0"
  "libsnappy\0"
  "libsndfile\0"
  "libsodium\0"
  "libsoldout\0"
  "libsophia\0"
  "libsoundtouch\0"
  "libsoup\0"
  "libsoup3\0"
  "libsoxr\0"
  "libspatialindex\0"
  "libspatialite\0"
  "libspdlog\0"
  "libspectre\0"
  "libspeex\0"
  "libspice-protocol\0"
  "libspice-server\0"
  "libsqlite\0"
  "libsrt\0"
  "libssh\0"
  "libssh2\0"
  "libstemmer\0"
  "libstrophe\0"
  "libt3config\0"
  "libt3highlight\0"
  "libt3key\0"
  "libt3widget\0"
  "libt3window\0"
  "libtalloc\0"
  "libtasn1\0"
  "libtatsu\0"
  "libtbb\0"
  "libtd\0"
  "libtdb\0"
  "libtermkey\0"
  "libtheora\0"
  "libthread-db\0"
  "libtiff\0"
  "libtiledb\0"
  "libtins\0"
  "libtinyxml\0"
  "libtinyxml2\0"
  "libtirpc\0"
  "libtllist\0"
  "libtomcrypt\0"
  "libtommath\0"
  "libtool\0"
  "libtorrent\0"
  "libtorrent-rasterbar\0"
  "libtpms\0"
  "libtranscript\0"
  "libtree-ldd\0"
  "libtsduck\0"
  "libtvision\0"
  "libtwolame\0"
  "libuber-h3\0"
  "libuchardet\0"
  "libucontext\0"
  "libudfread\0"
  "libunbound\0"
  "libunibilium\0"
  "libunistring\0"
  "libunqlite\0"
  "liburcu\0"
  "libusb\0"
  "libusbmuxd\0"
  "libusbredir\0"
  "libuv\0"
  "libv4l\0"
  "libvbisam\0"
  "libvidstab\0"
  "libvigra\0"
  "libvips\0"
  "libvisio\0"
  "libvmaf\0"
  "libvo-amrwbenc\0"
  "libvoikko\0"
  "libvorbis\0"
  "libvpx\0"
  "libvterm\0"
  "libvxl\0"
  "libwavpack\0"
  "libwayland\0"
  "libwayland-protocols\0"
  "libwebp\0"
  "libwebrtc-audio-processing\0"
  "libwebsockets\0"
  "libwolfssl\0"
  "libwpd\0"
  "libwpg\0"
  "libwps\0"
  "libwren\0"
  "libwslay\0"
  "libwv\0"
  "libx11\0"
  "libx264\0"
  "libx265\0"
  "libxapian\0"
  "libxau\0"
  "libxcb\0"
  "libxcfun\0"
  "libxcursor\0"
  "libxdg-basedir\0"
  "libxdmcp\0"
  "libxdrfile\0"
  "libxext\0"
  "libxfixes\0"
  "libxft\0"
  "libxi\0"
  "libxls\0"
  "libxlsxwriter\0"
  "libxml2\0"
  "libxmlb\0"
  "libxmlrpc\0"
  "libxrandr\0"
  "libxrender\0"
  "libxshmfence\0"
  "libxslt\0"
  "libxss\0"
  "libxt\0"
  "libxtst\0"
  "libxv\0"
  "libxxf86vm\0"
  "libyaml\0"
  "libyaml-cpp\0"
  "libzen\0"
  "libzim\0"
  "libzimg\0"
  "libzip\0"
  "libzita-convolver\0"
  "libzix\0"
  "libzmq\0"
  "libzopfli\0"
  "libzxing-cpp\0"
  "lighttpd\0"
  "lilv\0"
  "lilypond\0"
  "links\0"
  "lipl\0"
  "lit\0"
  "litespeedtest\0"
  "littlecms\0"
  "llama-cpp\0"
  "llbuild\0"
  "llvm-mingw-w64\0"
  "llvm-mingw-w64-tools\0"
  "lnav\0"
  "lnd\0"
  "locustdb\0"
  "logo-ls\0"
  "logrotate\0"
  "loksh\0"
  "lowdown\0"
  "lr\0"
  "lrzip\0"
  "lrzsz\0"
  "lsd\0"
  "lsix\0"
  "lsof\0"
  "ltrace\0"
  "lua-language-server\0"
  "lua-lgi\0"
  "lua-lpeg\0"
  "lua51\0"
  "lua52\0"
  "lua53\0"
  "lua54\0"
  "lua55\0"
  "luajit\0"
  "luajit-lgi\0"
  "luarocks\0"
  "luv\0"
  "luvi\0"
  "luvit\0"
  "lux\0"
  "lux-cli\0"
  "lv2\0"
  "lychee\0"
  "lynx\0"
  "lyrebird\0"
  "lzip\0"
  "lzlib\0"
  "lzop\0"
  "m4\0"
  "macchina\0"
  "magic-wormhole-rs\0"
  "mailsync\0"
  "mailutils\0"
  "make\0"
  "make-guile\0"
  "mandoc\0"
  "mangal\0"
  "manim\0"
  "manpages\0"
  "mapserver\0"
  "mariadb\0"
  "marisa\0"
  "markdown-flashcards\0"
  "marksman\0"
  "mathomatic\0"
  "matplotlib\0"
  "matterbridge\0"
  "matterircd\0"
  "matugen\0"
  "mautrix-whatsapp\0"
  "maven\0"
  "maxcso\0"
  "maxima\0"
  "mazter\0"
  "mbedtls\0"
  "mc\0"
  "mcfly\0"
  "mdbook\0"
  "mdbook-auto-gen-summary\0"
  "mdbook-cat-prep\0"
  "mdbook-epub\0"
  "mdbook-graphviz\0"
  "mdbook-katex\0"
  "mdbook-linkcheck\0"
  "mdbook-mermaid\0"
  "mdbook-open-on-gh\0"
  "mdbook-pikchr\0"
  "mdbook-plantuml\0"
  "mdbook-presentation-preprocessor\0"
  "mdbook-svgbob\0"
  "mdbook-svgbob2\0"
  "mdbook-tera\0"
  "mdbook-toc\0"
  "mdbtools\0"
  "mdds\0"
  "mdns-scan\0"
  "mdp\0"
  "media-types\0"
  "mediainfo\0"
  "mediamtx\0"
  "megacmd\0"
  "megatools\0"
  "memcached\0"
  "mercury\0"
  "mesa\0"
  "mfcuk\0"
  "mg\0"
  "micro\0"
  "microsocks\0"
  "miller\0"
  "mimetic\0"
  "minesweeper\0"
  "minicom\0"
  "minidlna\0"
  "miniflux\0"
  "minimodem\0"
  "minio\0"
  "miniserve\0"
  "minisign\0"
  "miniupnpc\0"
  "minizinc\0"
  "mkbootimg\0"
  "mkp224o\0"
  "mksh\0"
  "mktorrent\0"
  "mlocate\0"
  "mold\0"
  "monero\0"
  "monetdb\0"
  "mono\0"
  "monolith\0"
  "moon-buggy\0"
  "moor\0"
  "mop\0"
  "moreutils\0"
  "moria\0"
  "morse2ascii\0"
  "mosh\0"
  "most\0"
  "mp3cat\0"
  "mp3cat-go\0"
  "mp3gain\0"
  "mp3splt\0"
  "mp3wrap\0"
  "mpc\0"
  "mpd\0"
  "mpdscribble\0"
  "mplayer\0"
  "mpv\0"
  "mruby\0"
  "ms-gsl\0"
  "msedit\0"
  "msitools\0"
  "msmtp\0"
  "mtd-utils\0"
  "mtools\0"
  "mu\0"
  "muchsync\0"
  "mujs\0"
  "multitail\0"
  "mupdf\0"
  "music-file-organizer\0"
  "mutt\0"
  "myman\0"
  "mympd\0"
  "mypaint-brushes\0"
  "myrepos\0"
  "n-t-roff-sc\0"
  "n2n\0"
  "nala\0"
  "nali\0"
  "nano\0"
  "nasm\0"
  "natpmpc\0"
  "navi\0"
  "navidrome\0"
  "ncdc\0"
  "ncdu\0"
  "ncdu2\0"
  "ncftp\0"
  "ncmpcpp\0"
  "ncompress\0"
  "ncpamixer\0"
  "ncspot\0"
  "ncurses\0"
  "ndk-multilib\0"
  "ndk-sysroot\0"
  "ne\0"
  "nelua\0"
  "neocmakelsp\0"
  "neofetch\0"
  "neomutt\0"
  "neovim\0"
  "neovim-nightly\0"
  "nerdfix\0"
  "net-snmp\0"
  "net-tools\0"
  "netcat-openbsd\0"
  "netcdf-c\0"
  "nethack\0"
  "netpbm\0"
  "netsed\0"
  "netstandard-targeting-pack-2.1\0"
  "newsboat\0"
  "newsraft\0"
  "nginx\0"
  "ngircd\0"
  "ngspice\0"
  "nim\0"
  "ninja\0"
  "ninvaders\0"
  "nlohmann-json\0"
  "nlopt\0"
  "nmap\0"
  "nmh\0"
  "nmon\0"
  "nnn\0"
  "no-more-secrets\0"
  "nodejs\0"
  "nodejs-lts\0"
  "notcurses\0"
  "notmuch\0"
  "npm\0"
  "npush\0"
  "nsis\0"
  "nsnake\0"
  "nudoku\0"
  "nushell\0"
  "nyancat\0"
  "nzbget\0"
  "oathtool\0"
  "ocl-icd\0"
  "ocrad\0"
  "octave\0"
  "octomap\0"
  "odt2txt\0"
  "oh-my-posh\0"
  "oidn\0"
  "okc-agents\0"
  "ol\0"
  "oleo\0"
  "ollama\0"
  "oma\0"
  "onefetch\0"
  "onigmo\0"
  "oniguruma\0"
  "onnxruntime\0"
  "oorexx\0"
  "open-adventure\0"
  "openal-soft\0"
  "openbabel\0"
  "opencl-clhpp\0"
  "opencl-headers\0"
  "opencl-vendor-driver\0"
  "opencolorio\0"
  "openexr\0"
  "openfoam\0"
  "opengl\0"
  "openh264\0"
  "openjdk-17\0"
  "openjdk-21\0"
  "openjdk-25\0"
  "openjpeg\0"
  "openldap\0"
  "openlist\0"
  "openmpi\0"
  "openpgl\0"
  "opensc\0"
  "openscad\0"
  "openssh\0"
  "openssl\0"
  "opentimelineio\0"
  "openxr\0"
  "optipng\0"
  "opus-tools\0"
  "opusfile\0"
  "opustags\0"
  "orbiton\0"
  "osm2pgsql\0"
  "osmctools\0"
  "osmium-tool\0"
  "osslsigncode\0"
  "ossp-uuid\0"
  "ovmf\0"
  "oxlint\0"
  "p11-kit\0"
  "p7zip\0"
  "pacman\0"
  "pacman4console\0"
  "panda3d\0"
  "pandoc\0"
  "pango\0"
  "paperkey\0"
  "par2\0"
  "parallel\0"
  "pari\0"
  "parted\0"
  "paruz\0"
  "pass\0"
  "pass-otp\0"
  "passage\0"
  "passphrase2pgp\0"
  "pastebinit\0"
  "pastel\0"
  "patch\0"
  "patchelf\0"
  "pathpicker\0"
  "pb\0"
  "pcal\0"
  "pcaudiolib\0"
  "pcre\0"
  "pcre2\0"
  "pdf2svg\0"
  "pdfcpu\0"
  "pdfgrep\0"
  "pdftk\0"
  "peaclock\0"
  "peco\0"
  "perl\0"
  "perl-rename\0"
  "pet\0"
  "pforth\0"
  "pgroonga\0"
  "photon-rss\0"
  "php\0"
  "php-apcu\0"
  "php-imagick\0"
  "php-psr\0"
  "php-redis\0"
  "php-zephir-parser\0"
  "phpmyadmin\0"
  "pianobar\0"
  "pick\0"
  "picocom\0"
  "picolisp\0"
  "pigz\0"
  "pikiwidb\0"
  "pinentry\0"
  "pingme\0"
  "pipebuffer\0"
  "pipes.sh\0"
  "pipewire\0"
  "pkg-config\0"
  "pkgfile\0"
  "pkgtop\0"
  "plantuml\0"
  "play-audio\0"
  "plzip\0"
  "pngcrush\0"
  "pngquant\0"
  "pocketbase\0"
  "poke\0"
  "polipo\0"
  "polyml\0"
  "pomodoro-curses\0"
  "poppler\0"
  "poppler-data\0"
  "portaudio\0"
  "portmidi\0"
  "posixvala\0"
  "postgis\0"
  "postgresql\0"
  "potrace\0"
  "pounce\0"
  "povray\0"
  "predict\0"
  "privoxy\0"
  "procps\0"
  "procs\0"
  "procyon-decompiler\0"
  "profanity\0"
  "progress\0"
  "proj\0"
  "proot\0"
  "proot-distro\0"
  "proton-bridge\0"
  "prover9\0"
  "proxmark3\0"
  "proxychains-ng\0"
  "psmisc\0"
  "ptex\0"
  "ptunnel-ng\0"
  "pueue\0"
  "pulseaudio\0"
  "pup\0"
  "pure-ftpd\0"
  "pv\0"
  "pwgen\0"
  "pybind11\0"
  "pycairo\0"
  "pygobject\0"
  "pypy\0"
  "pypy3\0"
  "pyrefly\0"
  "pystring\0"
  "python\0"
  "python-apsw\0"
  "python-apt\0"
  "python-bcrypt\0"
  "python-brotli\0"
  "python-cmake\0"
  "python-contourpy\0"
  "python-cryptography\0"
  "python-greenlet\0"
  "python-grpcio\0"
  "python-lameenc\0"
  "python-libsass\0"
  "python-llvmlite\0"
  "python-lxml\0"
  "python-msgpack\0"
  "python-numpy\0"
  "python-pillow\0"
  "python-pip\0"
  "python-psutil\0"
  "python-pycryptodomex\0"
  "python-pynvim\0"
  "python-sabyenc3\0"
  "python-scipy\0"
  "python-skia-pathops\0"
  "python-tflite-runtime\0"
  "python-tldp\0"
  "python-torch\0"
  "python-torchaudio\0"
  "python-torchcodec\0"
  "python-torchvision\0"
  "python-xlib\0"
  "python-yt-dlp\0"
  "python2\0"
  "q-dns-client\0"
  "qalc\0"
  "qemu-system-x86-64-headless\0"
  "qhull\0"
  "qpdf\0"
  "qrsspig\0"
  "qrupdate-ng\0"
  "quick-lint-js\0"
  "quickjs-ng\0"
  "quilt\0"
  "rabbitmq-server\0"
  "racket\0"
  "radare2\0"
  "rage\0"
  "ragel\0"
  "railway-cli\0"
  "range-v3\0"
  "ranger\0"
  "rapidjson\0"
  "ratt\0"
  "ravencoin\0"
  "rbw\0"
  "rc\0"
  "rclone\0"
  "rcm\0"
  "rcs\0"
  "rdfind\0"
  "rdiff-backup\0"
  "rdircd\0"
  "rdrview\0"
  "re2c\0"
  "readline\0"
  "recode\0"
  "recoll\0"
  "recutils\0"
  "redir\0"
  "redis\0"
  "remind\0"
  "renameutils\0"
  "reptyr\0"
  "resolv-conf\0"
  "restic\0"
  "restic-server\0"
  "restish\0"
  "rgbds\0"
  "rhash\0"
  "rig\0"
  "rinetd\0"
  "rip2\0"
  "ripgrep\0"
  "ripgrep-all\0"
  "ripsecrets\0"
  "rirc\0"
  "rizin\0"
  "rlwrap\0"
  "rmpc\0"
  "rnr\0"
  "robin-map\0"
  "robotfindskitten\0"
  "root-repo\0"
  "rp-pppoe\0"
  "rpm\0"
  "rq\0"
  "rsgain\0"
  "rsnapshot\0"
  "rsync\0"
  "rtmpdump\0"
  "rtorrent\0"
  "rubberband\0"
  "rubiks-cube\0"
  "ruby\0"
  "ruff\0"
  "runit\0"
  "rush\0"
  "rust\0"
  "rust-analyzer\0"
  "rust-bindgen\0"
  "rustscan\0"
  "rxfetch\0"
  "sabnzbd\0"
  "samba\0"
  "samefile\0"
  "samurai\0"
  "sassc\0"
  "sbcl\0"
  "sc-im\0"
  "scala\0"
  "scc\0"
  "sccache\0"
  "scdoc\0"
  "screen\0"
  "screenfetch\0"
  "scrub\0"
  "scrypt\0"
  "sd\0"
  "sdcv\0"
  "seafile-client\0"
  "seanime\0"
  "seccure\0"
  "secure-delete\0"
  "sed\0"
  "sendme\0"
  "sendxmpp\0"
  "senpai\0"
  "sensible-utils\0"
  "serd\0"
  "serf\0"
  "sfeed\0"
  "sftpgo\0"
  "shaderc\0"
  "sharutils\0"
  "shc\0"
  "sheldon\0"
  "shell2http\0"
  "shellcheck\0"
  "shellharden\0"
  "shellinabox\0"
  "shfmt\0"
  "shiori\0"
  "shntool\0"
  "shtool\0"
  "signify\0"
  "silicon\0"
  "silversearcher-ag\0"
  "simde\0"
  "simdjson\0"
  "simh\0"
  "simulavr\0"
  "sing-box\0"
  "skate\0"
  "sl\0"
  "slang\0"
  "slashtime\0"
  "sleuthkit\0"
  "slides\0"
  "slugify\0"
  "smalltalk\0"
  "snapcast-server\0"
  "snmptt\0"
  "snowflake\0"
  "socat\0"
  "softether-vpn\0"
  "soju\0"
  "solidity\0"
  "sops\0"
  "sord\0"
  "sound-theme-freedesktop\0"
  "sox\0"
  "spatialite-tools\0"
  "speechd\0"
  "speedtest-go\0"
  "speexdsp\0"
  "spglib\0"
  "spidermonkey\0"
  "spiped\0"
  "spirv-headers\0"
  "spirv-llvm-translator\0"
  "spirv-tools\0"
  "sqlcipher\0"
  "squashfs-tools-ng\0"
  "squeezelite\0"
  "squid\0"
  "sratom\0"
  "srelay\0"
  "srt2vobsub\0"
  "ssdb\0"
  "ssdeep\0"
  "sse2neon\0"
  "sshpass\0"
  "sshping\0"
  "sslscan\0"
  "sssnake\0"
  "ssss\0"
  "stag\0"
  "starship\0"
  "stdman\0"
  "stdoutisatty\0"
  "steghide\0"
  "step-cli\0"
  "stfl\0"
  "stockfish\0"
  "stoken\0"
  "stone\0"
  "storj-uplink\0"
  "stow\0"
  "strace\0"
  "streamripper\0"
  "stunnel\0"
  "stuntman\0"
  "stylua\0"
  "subtitleripper\0"
  "subversion\0"
  "sudo\0"
  "suil\0"
  "suite3270\0"
  "suitesparse\0"
  "sun\0"
  "sundials\0"
  "supercollider\0"
  "surfraw\0"
  "svt-av1\0"
  "swaks\0"
  "swi-prolog\0"
  "swift\0"
  "swiftshader\0"
  "swig\0"
  "swtpm\0"
  "syncthing\0"
  "sysprop\0"
  "ta-lib\0"
  "taglib\0"
  "taplo\0"
  "tar\0"
  "task-spooler\0"
  "tasksh\0"
  "taskwarrior\0"
  "tcc\0"
  "tcl\0"
  "tcllib\0"
  "tcsh\0"
  "tdl\0"
  "tea\0"
  "tealdeer\0"
  "teckit\0"
  "tectonic\0"
  "telegram-bot-api\0"
  "teleport-tsh\0"
  "tere\0"
  "tergent\0"
  "termimage\0"
  "termplay\0"
  "termux-am\0"
  "termux-am-socket\0"
  "termux-api\0"
  "termux-apt-repo\0"
  "termux-auth\0"
  "termux-core\0"
  "termux-create-package\0"
  "termux-elf-cleaner\0"
  "termux-exec\0"
  "termux-gui-bash\0"
  "termux-gui-c\0"
  "termux-gui-package\0"
  "termux-gui-pm\0"
  "termux-keyring\0"
  "termux-licenses\0"
  "termux-services\0"
  "termux-tools\0"
  "teseq\0"
  "tesseract\0"
  "testssl.sh\0"
  "tex-gyre\0"
  "texinfo\0"
  "texlab\0"
  "texlive-bin\0"
  "texlive-installer\0"
  "tgpt\0"
  "thrift\0"
  "tidy\0"
  "tig\0"
  "tilde\0"
  "time\0"
  "timewarrior\0"
  "timg\0"
  "timidity++\0"
  "tin-summer\0"
  "tintin++\0"
  "tinyfugue\0"
  "tinygo\0"
  "tinymist\0"
  "tinyproxy\0"
  "tinyscheme\0"
  "tinysparql\0"
  "tizonia\0"
  "tk\0"
  "tmate\0"
  "tmux\0"
  "toilet\0"
  "tokei\0"
  "tome2\0"
  "toml11\0"
  "topgrade\0"
  "tor\0"
  "torsocks\0"
  "totem-pl-parser\0"
  "toxic\0"
  "tracepath\0"
  "traceroute\0"
  "translate-shell\0"
  "transmission\0"
  "tree\0"
  "tree-sitter\0"
  "tree-sitter-bash\0"
  "tree-sitter-c\0"
  "tree-sitter-css\0"
  "tree-sitter-go\0"
  "tree-sitter-html\0"
  "tree-sitter-java\0"
  "tree-sitter-javascript\0"
  "tree-sitter-json\0"
  "tree-sitter-latex\0"
  "tree-sitter-lua\0"
  "tree-sitter-markdown\0"
  "tree-sitter-parsers\0"
  "tree-sitter-python\0"
  "tree-sitter-query\0"
  "tree-sitter-regex\0"
  "tree-sitter-rust\0"
  "tree-sitter-sql\0"
  "tree-sitter-toml\0"
  "tree-sitter-vim\0"
  "tree-sitter-vimdoc\0"
  "tree-sitter-xml\0"
  "tree-sitter-yaml\0"
  "trojan-go\0"
  "trunk\0"
  "trurl\0"
  "trzsz-go\0"
  "trzsz-ssh\0"
  "tsocks\0"
  "tsu\0"
  "ttf-dejavu\0"
  "ttf-jetbrains-mono\0"
  "ttf-nerd-fonts-symbols\0"
  "tty-clock\0"
  "tty-solitaire\0"
  "ttyc\0"
  "ttyd\0"
  "ttyper\0"
  "ttyplot\0"
  "ttyrec\0"
  "tudo\0"
  "tur-repo\0"
  "turbo\0"
  "turbopack\0"
  "tut\0"
  "tvheadend\0"
  "tweego\0"
  "txikijs\0"
  "typst\0"
  "typstfmt\0"
  "udftools\0"
  "udocker\0"
  "uftrace\0"
  "ugrep\0"
  "unar\0"
  "unicode-cldr\0"
  "unicode-data\0"
  "unicode-emoji\0"
  "unicorn\0"
  "unifdef\0"
  "units\0"
  "unixodbc\0"
  "unpaper\0"
  "unrar\0"
  "unshield\0"
  "unzip\0"
  "up\0"
  "upower\0"
  "upx\0"
  "urdfdom\0"
  "urdfdom-headers\0"
  "usbmuxd\0"
  "usql\0"
  "utf8cpp\0"
  "utf8proc\0"
  "uthash\0"
  "util-linux\0"
  "uucp\0"
  "uv\0"
  "uwsgi\0"
  "v2ray\0"
  "valac\0"
  "vale\0"
  "valgrind\0"
  "valkey\0"
  "vamp-plugin-sdk\0"
  "vapoursynth\0"
  "vbindiff\0"
  "vcsh\0"
  "vde2\0"
  "vegeta\0"
  "vera\0"
  "vgmstream\0"
  "vgmtools\0"
  "viddy\0"
  "vifm\0"
  "vile\0"
  "vim\0"
  "virglrenderer\0"
  "virglrenderer-android\0"
  "virustotal-cli\0"
  "vis\0"
  "vitetris\0"
  "viu\0"
  "vivid\0"
  "vlc\0"
  "vobsub2srt\0"
  "vorbis-tools\0"
  "vtm\0"
  "vttest\0"
  "vulkan-extension-layer\0"
  "vulkan-headers\0"
  "vulkan-icd\0"
  "vulkan-loader\0"
  "vulkan-loader-android\0"
  "vulkan-loader-generic\0"
  "vulkan-tools\0"
  "vulkan-utility-libraries\0"
  "vulkan-validation-layers\0"
  "vulkan-volk\0"
  "w3m\0"
  "wabt\0"
  "wakatime-cli\0"
  "walk\0"
  "wallust\0"
  "wasi-libc\0"
  "wasm-component-ld\0"
  "wasmedge\0"
  "wasmer\0"
  "wasmtime\0"
  "watchexec\0"
  "waypipe\0"
  "wcalc\0"
  "wdiff\0"
  "webp-pixbuf-loader\0"
  "websocat\0"
  "websocketd\0"
  "webtunnel\0"
  "weechat\0"
  "weechat-matrix-rs\0"
  "weggli\0"
  "wego\0"
  "wget\0"
  "wget2\0"
  "wgetpaste\0"
  "which\0"
  "whitebox-tools\0"
  "whois\0"
  "wireguard-tools\0"
  "wireproxy\0"
  "wiz\0"
  "woff2\0"
  "wol\0"
  "wordgrinder\0"
  "wren\0"
  "wrk\0"
  "wtfutil\0"
  "wuzz\0"
  "x11-repo\0"
  "xcb-proto\0"
  "xdelta3\0"
  "xh\0"
  "xmake\0"
  "xmlsec\0"
  "xmlstarlet\0"
  "xmlto\0"
  "xmppc\0"
  "xorg-util-macros\0"
  "xorgproto\0"
  "xorriso\0"
  "xtrans\0"
  "xvidcore\0"
  "xxhash\0"
  "yadm\0"
  "yajl\0"
  "yara\0"
  "yarn\0"
  "yasm\0"
  "yazi\0"
  "yosys\0"
  "youtubedr\0"
  "yq\0"
  "yt-dlp-ejs\0"
  "ytfzf\0"
  "ytui-music\0"
  "yuma123\0"
  "z-push\0"
  "z3\0"
  "zbar\0"
  "zellij\0"
  "zeronet\0"
  "zig\0"
  "zile\0"
  "zip\0"
  "zipios\0"
  "zk\0"
  "zlib\0"
  "zls\0"
  "znc\0"
  "zola\0"
  "zoxide\0"
  "zpaq\0"
  "zrok\0"
  "zsh\0"
  "zsh-completions\0"
  "zssh\0"
  "zstd\0"
  "zsync\0"
  "zziplib\0"
  "zzuf\0"
  ;

static const u32 g_termux_pkg_name_offs[] = {
  0u,
  9u,
  16u,
  22u,
  30u,
  35u,
  44u,
  50u,
  55u,
  62u,
  68u,
  77u,
  88u,
  97u,
  101u,
  105u,
  110u,
  115u,
  121u,
  125u,
  129u,
  133u,
  140u,
  146u,
  154u,
  163u,
  170u,
  179u,
  192u,
  203u,
  209u,
  216u,
  230u,
  237u,
  245u,
  259u,
  273u,
  281u,
  292u,
  296u,
  305u,
  314u,
  324u,
  335u,
  343u,
  350u,
  360u,
  370u,
  374u,
  383u,
  387u,
  396u,
  414u,
  420u,
  427u,
  432u,
  438u,
  442u,
  452u,
  459u,
  466u,
  472u,
  481u,
  493u,
  503u,
  511u,
  518u,
  528u,
  538u,
  548u,
  558u,
  565u,
  575u,
  578u,
  591u,
  605u,
  612u,
  618u,
  623u,
  629u,
  635u,
  645u,
  654u,
  671u,
  680u,
  689u,
  697u,
  703u,
  708u,
  714u,
  721u,
  726u,
  732u,
  737u,
  747u,
  755u,
  765u,
  770u,
  786u,
  793u,
  797u,
  800u,
  806u,
  811u,
  818u,
  828u,
  838u,
  843u,
  847u,
  853u,
  859u,
  867u,
  876u,
  885u,
  891u,
  899u,
  907u,
  910u,
  919u,
  925u,
  931u,
  950u,
  955u,
  961u,
  970u,
  981u,
  987u,
  992u,
  1003u,
  1010u,
  1016u,
  1026u,
  1033u,
  1039u,
  1045u,
  1052u,
  1063u,
  1073u,
  1079u,
  1091u,
  1095u,
  1111u,
  1119u,
  1123u,
  1129u,
  1135u,
  1142u,
  1152u,
  1168u,
  1182u,
  1193u,
  1199u,
  1207u,
  1213u,
  1218u,
  1227u,
  1237u,
  1246u,
  1255u,
  1263u,
  1276u,
  1283u,
  1291u,
  1298u,
  1303u,
  1318u,
  1324u,
  1331u,
  1339u,
  1344u,
  1351u,
  1356u,
  1368u,
  1373u,
  1380u,
  1389u,
  1393u,
  1398u,
  1403u,
  1408u,
  1414u,
  1420u,
  1428u,
  1436u,
  1443u,
  1450u,
  1457u,
  1464u,
  1469u,
  1475u,
  1483u,
  1490u,
  1498u,
  1505u,
  1511u,
  1518u,
  1524u,
  1532u,
  1544u,
  1551u,
  1556u,
  1562u,
  1568u,
  1576u,
  1583u,
  1588u,
  1595u,
  1605u,
  1611u,
  1622u,
  1633u,
  1641u,
  1646u,
  1656u,
  1674u,
  1683u,
  1698u,
  1709u,
  1717u,
  1727u,
  1733u,
  1743u,
  1753u,
  1760u,
  1765u,
  1774u,
  1779u,
  1787u,
  1796u,
  1805u,
  1811u,
  1816u,
  1823u,
  1832u,
  1839u,
  1848u,
  1856u,
  1863u,
  1867u,
  1872u,
  1879u,
  1885u,
  1895u,
  1904u,
  1909u,
  1918u,
  1925u,
  1936u,
  1940u,
  1943u,
  1953u,
  1957u,
  1967u,
  1972u,
  1978u,
  1983u,
  1988u,
  1997u,
  2007u,
  2012u,
  2024u,
  2030u,
  2036u,
  2045u,
  2057u,
  2069u,
  2075u,
  2080u,
  2086u,
  2093u,
  2101u,
  2108u,
  2114u,
  2128u,
  2137u,
  2148u,
  2158u,
  2163u,
  2170u,
  2179u,
  2188u,
  2197u,
  2204u,
  2212u,
  2219u,
  2229u,
  2239u,
  2250u,
  2257u,
  2263u,
  2276u,
  2284u,
  2295u,
  2305u,
  2312u,
  2319u,
  2328u,
  2340u,
  2352u,
  2359u,
  2367u,
  2372u,
  2381u,
  2390u,
  2401u,
  2409u,
  2421u,
  2432u,
  2442u,
  2452u,
  2470u,
  2478u,
  2483u,
  2489u,
  2498u,
  2504u,
  2508u,
  2512u,
  2516u,
  2520u,
  2524u,
  2529u,
  2534u,
  2544u,
  2549u,
  2557u,
  2560u,
  2570u,
  2578u,
  2590u,
  2594u,
  2598u,
  2601u,
  2610u,
  2630u,
  2636u,
  2640u,
  2655u,
  2664u,
  2671u,
  2678u,
  2686u,
  2693u,
  2699u,
  2710u,
  2721u,
  2729u,
  2737u,
  2746u,
  2751u,
  2758u,
  2766u,
  2773u,
  2776u,
  2781u,
  2790u,
  2801u,
  2808u,
  2817u,
  2823u,
  2830u,
  2834u,
  2841u,
  2850u,
  2855u,
  2865u,
  2873u,
  2881u,
  2887u,
  2895u,
  2899u,
  2902u,
  2909u,
  2913u,
  2922u,
  2929u,
  2936u,
  2948u,
  2958u,
  2962u,
  2969u,
  2987u,
  2994u,
  2999u,
  3006u,
  3011u,
  3017u,
  3027u,
  3037u,
  3042u,
  3048u,
  3060u,
  3065u,
  3076u,
  3083u,
  3086u,
  3090u,
  3101u,
  3109u,
  3117u,
  3124u,
  3134u,
  3144u,
  3153u,
  3168u,
  3181u,
  3189u,
  3198u,
  3204u,
  3208u,
  3216u,
  3222u,
  3229u,
  3232u,
  3236u,
  3240u,
  3255u,
  3259u,
  3267u,
  3274u,
  3279u,
  3283u,
  3288u,
  3293u,
  3298u,
  3302u,
  3307u,
  3318u,
  3336u,
  3340u,
  3352u,
  3359u,
  3364u,
  3374u,
  3388u,
  3404u,
  3414u,
  3422u,
  3427u,
  3435u,
  3442u,
  3449u,
  3456u,
  3459u,
  3463u,
  3475u,
  3482u,
  3491u,
  3498u,
  3502u,
  3525u,
  3535u,
  3545u,
  3556u,
  3564u,
  3574u,
  3583u,
  3589u,
  3601u,
  3610u,
  3616u,
  3624u,
  3633u,
  3639u,
  3644u,
  3660u,
  3671u,
  3675u,
  3682u,
  3687u,
  3692u,
  3700u,
  3709u,
  3716u,
  3721u,
  3724u,
  3731u,
  3740u,
  3749u,
  3755u,
  3761u,
  3768u,
  3774u,
  3782u,
  3788u,
  3797u,
  3804u,
  3817u,
  3835u,
  3847u,
  3856u,
  3863u,
  3885u,
  3890u,
  3895u,
  3902u,
  3907u,
  3914u,
  3926u,
  3937u,
  3943u,
  3950u,
  3957u,
  3963u,
  3971u,
  3976u,
  3983u,
  3989u,
  3999u,
  4005u,
  4010u,
  4016u,
  4022u,
  4030u,
  4036u,
  4045u,
  4052u,
  4060u,
  4065u,
  4074u,
  4089u,
  4098u,
  4104u,
  4109u,
  4114u,
  4120u,
  4125u,
  4133u,
  4140u,
  4148u,
  4152u,
  4162u,
  4178u,
  4195u,
  4212u,
  4229u,
  4240u,
  4250u,
  4258u,
  4264u,
  4268u,
  4281u,
  4300u,
  4305u,
  4313u,
  4322u,
  4335u,
  4344u,
  4348u,
  4355u,
  4361u,
  4367u,
  4372u,
  4380u,
  4389u,
  4398u,
  4406u,
  4412u,
  4418u,
  4423u,
  4432u,
  4439u,
  4447u,
  4455u,
  4466u,
  4474u,
  4484u,
  4489u,
  4494u,
  4509u,
  4519u,
  4524u,
  4531u,
  4539u,
  4547u,
  4551u,
  4556u,
  4563u,
  4572u,
  4587u,
  4599u,
  4611u,
  4623u,
  4635u,
  4639u,
  4646u,
  4656u,
  4666u,
  4669u,
  4674u,
  4678u,
  4686u,
  4691u,
  4709u,
  4718u,
  4725u,
  4731u,
  4743u,
  4749u,
  4756u,
  4763u,
  4773u,
  4782u,
  4794u,
  4808u,
  4817u,
  4822u,
  4829u,
  4836u,
  4845u,
  4854u,
  4863u,
  4875u,
  4885u,
  4890u,
  4896u,
  4902u,
  4911u,
  4916u,
  4921u,
  4940u,
  4946u,
  4954u,
  4959u,
  4968u,
  4977u,
  4982u,
  4998u,
  5008u,
  5014u,
  5020u,
  5026u,
  5034u,
  5040u,
  5043u,
  5047u,
  5052u,
  5057u,
  5067u,
  5070u,
  5077u,
  5081u,
  5088u,
  5098u,
  5106u,
  5111u,
  5116u,
  5121u,
  5128u,
  5137u,
  5141u,
  5158u,
  5166u,
  5178u,
  5182u,
  5190u,
  5199u,
  5204u,
  5216u,
  5223u,
  5228u,
  5235u,
  5240u,
  5250u,
  5258u,
  5268u,
  5273u,
  5284u,
  5297u,
  5305u,
  5310u,
  5314u,
  5318u,
  5323u,
  5330u,
  5335u,
  5345u,
  5350u,
  5359u,
  5367u,
  5374u,
  5381u,
  5384u,
  5393u,
  5398u,
  5413u,
  5419u,
  5426u,
  5433u,
  5440u,
  5464u,
  5484u,
  5500u,
  5527u,
  5546u,
  5563u,
  5580u,
  5596u,
  5615u,
  5641u,
  5659u,
  5678u,
  5684u,
  5691u,
  5707u,
  5718u,
  5731u,
  5739u,
  5746u,
  5756u,
  5770u,
  5778u,
  5793u,
  5802u,
  5812u,
  5822u,
  5830u,
  5837u,
  5847u,
  5855u,
  5862u,
  5869u,
  5885u,
  5897u,
  5905u,
  5914u,
  5929u,
  5945u,
  5952u,
  5962u,
  5969u,
  5977u,
  5984u,
  5991u,
  6007u,
  6019u,
  6034u,
  6041u,
  6048u,
  6056u,
  6070u,
  6084u,
  6100u,
  6122u,
  6132u,
  6143u,
  6158u,
  6167u,
  6176u,
  6183u,
  6192u,
  6200u,
  6208u,
  6218u,
  6226u,
  6235u,
  6241u,
  6250u,
  6261u,
  6270u,
  6282u,
  6298u,
  6311u,
  6319u,
  6326u,
  6336u,
  6347u,
  6357u,
  6367u,
  6377u,
  6388u,
  6396u,
  6407u,
  6415u,
  6422u,
  6430u,
  6439u,
  6451u,
  6462u,
  6468u,
  6477u,
  6485u,
  6494u,
  6502u,
  6509u,
  6520u,
  6527u,
  6539u,
  6547u,
  6556u,
  6568u,
  6578u,
  6587u,
  6596u,
  6602u,
  6612u,
  6618u,
  6632u,
  6639u,
  6647u,
  6658u,
  6666u,
  6677u,
  6685u,
  6699u,
  6714u,
  6723u,
  6732u,
  6739u,
  6746u,
  6762u,
  6772u,
  6785u,
  6797u,
  6805u,
  6814u,
  6821u,
  6829u,
  6836u,
  6844u,
  6854u,
  6862u,
  6870u,
  6878u,
  6889u,
  6900u,
  6910u,
  6918u,
  6925u,
  6934u,
  6941u,
  6951u,
  6958u,
  6966u,
  6980u,
  6997u,
  7019u,
  7028u,
  7036u,
  7049u,
  7058u,
  7069u,
  7078u,
  7087u,
  7096u,
  7107u,
  7117u,
  7131u,
  7138u,
  7151u,
  7160u,
  7168u,
  7178u,
  7186u,
  7197u,
  7210u,
  7224u,
  7232u,
  7240u,
  7246u,
  7255u,
  7266u,
  7273u,
  7281u,
  7288u,
  7296u,
  7303u,
  7310u,
  7317u,
  7331u,
  7340u,
  7352u,
  7365u,
  7375u,
  7381u,
  7389u,
  7402u,
  7412u,
  7421u,
  7435u,
  7446u,
  7460u,
  7467u,
  7478u,
  7491u,
  7502u,
  7513u,
  7520u,
  7533u,
  7542u,
  7550u,
  7560u,
  7571u,
  7586u,
  7598u,
  7609u,
  7619u,
  7627u,
  7634u,
  7644u,
  7652u,
  7659u,
  7666u,
  7675u,
  7686u,
  7697u,
  7707u,
  7713u,
  7721u,
  7729u,
  7737u,
  7744u,
  7751u,
  7760u,
  7767u,
  7777u,
  7784u,
  7792u,
  7799u,
  7811u,
  7821u,
  7837u,
  7848u,
  7859u,
  7867u,
  7878u,
  7885u,
  7895u,
  7905u,
  7912u,
  7921u,
  7928u,
  7943u,
  7952u,
  7967u,
  7983u,
  7993u,
  8002u,
  8010u,
  8022u,
  8032u,
  8042u,
  8054u,
  8064u,
  8075u,
  8084u,
  8093u,
  8100u,
  8113u,
  8121u,
  8129u,
  8141u,
  8155u,
  8168u,
  8175u,
  8186u,
  8198u,
  8209u,
  8217u,
  8227u,
  8236u,
  8243u,
  8250u,
  8274u,
  8292u,
  8301u,
  8312u,
  8320u,
  8332u,
  8343u,
  8354u,
  8362u,
  8371u,
  8381u,
  8391u,
  8405u,
  8413u,
  8421u,
  8431u,
  8439u,
  8450u,
  8463u,
  8473u,
  8481u,
  8490u,
  8504u,
  8518u,
  8539u,
  8550u,
  8559u,
  8572u,
  8581u,
  8587u,
  8597u,
  8608u,
  8618u,
  8629u,
  8639u,
  8653u,
  8661u,
  8670u,
  8678u,
  8694u,
  8708u,
  8718u,
  8729u,
  8738u,
  8756u,
  8772u,
  8782u,
  8789u,
  8796u,
  8804u,
  8815u,
  8826u,
  8838u,
  8853u,
  8862u,
  8874u,
  8886u,
  8896u,
  8905u,
  8914u,
  8921u,
  8927u,
  8934u,
  8945u,
  8955u,
  8968u,
  8976u,
  8986u,
  8994u,
  9005u,
  9017u,
  9026u,
  9036u,
  9048u,
  9059u,
  9067u,
  9078u,
  9099u,
  9107u,
  9121u,
  9133u,
  9143u,
  9154u,
  9165u,
  9176u,
  9188u,
  9200u,
  9211u,
  9222u,
  9235u,
  9248u,
  9259u,
  9267u,
  9274u,
  9285u,
  9297u,
  9303u,
  9310u,
  9320u,
  9331u,
  9340u,
  9348u,
  9357u,
  9365u,
  9380u,
  9390u,
  9400u,
  9407u,
  9416u,
  9423u,
  9434u,
  9445u,
  9466u,
  9474u,
  9501u,
  9515u,
  9526u,
  9533u,
  9540u,
  9547u,
  9555u,
  9564u,
  9570u,
  9577u,
  9585u,
  9593u,
  9603u,
  9610u,
  9617u,
  9626u,
  9637u,
  9652u,
  9661u,
  9672u,
  9680u,
  9690u,
  9697u,
  9703u,
  9710u,
  9724u,
  9732u,
  9740u,
  9750u,
  9760u,
  9771u,
  9784u,
  9792u,
  9799u,
  9805u,
  9813u,
  9819u,
  9830u,
  9838u,
  9850u,
  9857u,
  9864u,
  9872u,
  9879u,
  9897u,
  9904u,
  9911u,
  9921u,
  9934u,
  9943u,
  9948u,
  9957u,
  9963u,
  9968u,
  9972u,
  9986u,
  9996u,
  10006u,
  10014u,
  10029u,
  10050u,
  10055u,
  10059u,
  10068u,
  10076u,
  10086u,
  10092u,
  10100u,
  10103u,
  10109u,
  10115u,
  10119u,
  10124u,
  10129u,
  10136u,
  10156u,
  10164u,
  10173u,
  10179u,
  10185u,
  10191u,
  10197u,
  10203u,
  10210u,
  10221u,
  10230u,
  10234u,
  10239u,
  10245u,
  10249u,
  10257u,
  10261u,
  10268u,
  10273u,
  10282u,
  10287u,
  10293u,
  10298u,
  10301u,
  10310u,
  10328u,
  10337u,
  10347u,
  10352u,
  10363u,
  10370u,
  10377u,
  10383u,
  10392u,
  10402u,
  10410u,
  10417u,
  10437u,
  10446u,
  10457u,
  10468u,
  10481u,
  10492u,
  10500u,
  10517u,
  10523u,
  10530u,
  10537u,
  10544u,
  10552u,
  10555u,
  10561u,
  10568u,
  10592u,
  10608u,
  10620u,
  10636u,
  10649u,
  10666u,
  10681u,
  10699u,
  10713u,
  10729u,
  10762u,
  10776u,
  10791u,
  10803u,
  10814u,
  10823u,
  10828u,
  10838u,
  10842u,
  10854u,
  10864u,
  10873u,
  10881u,
  10891u,
  10901u,
  10909u,
  10914u,
  10920u,
  10923u,
  10929u,
  10940u,
  10947u,
  10955u,
  10967u,
  10975u,
  10984u,
  10993u,
  11003u,
  11009u,
  11019u,
  11028u,
  11038u,
  11047u,
  11057u,
  11065u,
  11070u,
  11080u,
  11088u,
  11093u,
  11100u,
  11108u,
  11113u,
  11122u,
  11133u,
  11138u,
  11142u,
  11152u,
  11158u,
  11170u,
  11175u,
  11180u,
  11187u,
  11197u,
  11205u,
  11213u,
  11221u,
  11225u,
  11229u,
  11241u,
  11249u,
  11253u,
  11259u,
  11266u,
  11273u,
  11282u,
  11288u,
  11298u,
  11305u,
  11308u,
  11317u,
  11322u,
  11332u,
  11338u,
  11359u,
  11364u,
  11370u,
  11376u,
  11392u,
  11400u,
  11412u,
  11416u,
  11421u,
  11426u,
  11431u,
  11436u,
  11444u,
  11449u,
  11459u,
  11464u,
  11469u,
  11475u,
  11481u,
  11489u,
  11499u,
  11509u,
  11516u,
  11524u,
  11537u,
  11549u,
  11552u,
  11558u,
  11570u,
  11579u,
  11587u,
  11594u,
  11609u,
  11617u,
  11626u,
  11636u,
  11651u,
  11660u,
  11668u,
  11675u,
  11682u,
  11713u,
  11722u,
  11731u,
  11737u,
  11744u,
  11752u,
  11756u,
  11762u,
  11772u,
  11786u,
  11792u,
  11797u,
  11801u,
  11806u,
  11810u,
  11826u,
  11833u,
  11844u,
  11854u,
  11862u,
  11866u,
  11872u,
  11877u,
  11884u,
  11891u,
  11899u,
  11907u,
  11914u,
  11923u,
  11931u,
  11937u,
  11944u,
  11952u,
  11960u,
  11971u,
  11976u,
  11987u,
  11990u,
  11995u,
  12002u,
  12006u,
  12015u,
  12022u,
  12032u,
  12044u,
  12051u,
  12066u,
  12078u,
  12088u,
  12101u,
  12116u,
  12137u,
  12149u,
  12157u,
  12166u,
  12173u,
  12182u,
  12193u,
  12204u,
  12215u,
  12224u,
  12233u,
  12242u,
  12250u,
  12258u,
  12265u,
  12274u,
  12282u,
  12290u,
  12305u,
  12312u,
  12320u,
  12331u,
  12340u,
  12349u,
  12357u,
  12367u,
  12377u,
  12389u,
  12402u,
  12412u,
  12417u,
  12424u,
  12432u,
  12438u,
  12445u,
  12460u,
  12468u,
  12475u,
  12481u,
  12490u,
  12495u,
  12504u,
  12509u,
  12516u,
  12522u,
  12527u,
  12536u,
  12544u,
  12559u,
  12570u,
  12577u,
  12583u,
  12592u,
  12603u,
  12606u,
  12611u,
  12622u,
  12627u,
  12633u,
  12641u,
  12648u,
  12656u,
  12662u,
  12671u,
  12676u,
  12681u,
  12693u,
  12697u,
  12704u,
  12713u,
  12724u,
  12728u,
  12737u,
  12749u,
  12757u,
  12767u,
  12785u,
  12796u,
  12805u,
  12810u,
  12818u,
  12827u,
  12832u,
  12841u,
  12850u,
  12857u,
  12868u,
  12877u,
  12886u,
  12897u,
  12905u,
  12912u,
  12921u,
  12932u,
  12938u,
  12947u,
  12956u,
  12967u,
  12972u,
  12979u,
  12986u,
  13002u,
  13010u,
  13023u,
  13033u,
  13042u,
  13052u,
  13060u,
  13071u,
  13079u,
  13086u,
  13093u,
  13101u,
  13109u,
  13116u,
  13122u,
  13141u,
  13151u,
  13160u,
  13165u,
  13171u,
  13184u,
  13198u,
  13206u,
  13216u,
  13231u,
  13238u,
  13243u,
  13254u,
  13260u,
  13271u,
  13275u,
  13285u,
  13288u,
  13294u,
  13303u,
  13311u,
  13321u,
  13326u,
  13332u,
  13340u,
  13349u,
  13356u,
  13368u,
  13379u,
  13393u,
  13407u,
  13420u,
  13437u,
  13457u,
  13473u,
  13487u,
  13502u,
  13517u,
  13533u,
  13545u,
  13560u,
  13573u,
  13587u,
  13598u,
  13612u,
  13633u,
  13647u,
  13663u,
  13676u,
  13696u,
  13718u,
  13730u,
  13743u,
  13761u,
  13779u,
  13798u,
  13810u,
  13824u,
  13832u,
  13845u,
  13850u,
  13878u,
  13884u,
  13889u,
  13897u,
  13909u,
  13923u,
  13934u,
  13940u,
  13956u,
  13963u,
  13971u,
  13976u,
  13982u,
  13994u,
  14003u,
  14010u,
  14020u,
  14025u,
  14035u,
  14039u,
  14042u,
  14049u,
  14053u,
  14057u,
  14064u,
  14077u,
  14084u,
  14092u,
  14097u,
  14106u,
  14113u,
  14120u,
  14129u,
  14135u,
  14141u,
  14148u,
  14160u,
  14167u,
  14179u,
  14186u,
  14200u,
  14208u,
  14214u,
  14220u,
  14224u,
  14231u,
  14236u,
  14244u,
  14256u,
  14267u,
  14272u,
  14278u,
  14285u,
  14290u,
  14294u,
  14304u,
  14321u,
  14331u,
  14340u,
  14344u,
  14347u,
  14354u,
  14364u,
  14370u,
  14379u,
  14388u,
  14399u,
  14411u,
  14416u,
  14421u,
  14427u,
  14432u,
  14437u,
  14451u,
  14464u,
  14473u,
  14481u,
  14489u,
  14495u,
  14504u,
  14512u,
  14518u,
  14523u,
  14529u,
  14535u,
  14539u,
  14547u,
  14553u,
  14560u,
  14572u,
  14578u,
  14585u,
  14588u,
  14593u,
  14608u,
  14616u,
  14624u,
  14638u,
  14642u,
  14649u,
  14658u,
  14665u,
  14680u,
  14685u,
  14690u,
  14696u,
  14703u,
  14711u,
  14721u,
  14725u,
  14733u,
  14744u,
  14755u,
  14767u,
  14779u,
  14785u,
  14792u,
  14800u,
  14807u,
  14815u,
  14823u,
  14841u,
  14847u,
  14856u,
  14861u,
  14870u,
  14879u,
  14885u,
  14888u,
  14894u,
  14904u,
  14914u,
  14921u,
  14929u,
  14939u,
  14955u,
  14962u,
  14972u,
  14978u,
  14992u,
  14997u,
  15006u,
  15011u,
  15016u,
  15040u,
  15044u,
  15061u,
  15069u,
  15082u,
  15091u,
  15098u,
  15111u,
  15118u,
  15132u,
  15154u,
  15166u,
  15176u,
  15194u,
  15206u,
  15212u,
  15219u,
  15226u,
  15237u,
  15242u,
  15249u,
  15258u,
  15266u,
  15274u,
  15282u,
  15290u,
  15295u,
  15300u,
  15309u,
  15316u,
  15329u,
  15338u,
  15347u,
  15352u,
  15362u,
  15369u,
  15375u,
  15388u,
  15393u,
  15400u,
  15413u,
  15421u,
  15430u,
  15437u,
  15452u,
  15463u,
  15468u,
  15473u,
  15483u,
  15495u,
  15499u,
  15508u,
  15522u,
  15530u,
  15538u,
  15544u,
  15555u,
  15561u,
  15573u,
  15578u,
  15584u,
  15594u,
  15602u,
  15609u,
  15616u,
  15622u,
  15626u,
  15639u,
  15646u,
  15658u,
  15662u,
  15666u,
  15673u,
  15678u,
  15682u,
  15686u,
  15695u,
  15702u,
  15711u,
  15728u,
  15741u,
  15746u,
  15754u,
  15764u,
  15773u,
  15783u,
  15800u,
  15811u,
  15827u,
  15839u,
  15851u,
  15873u,
  15892u,
  15904u,
  15920u,
  15933u,
  15952u,
  15966u,
  15981u,
  15997u,
  16013u,
  16026u,
  16032u,
  16042u,
  16053u,
  16062u,
  16070u,
  16077u,
  16089u,
  16107u,
  16112u,
  16119u,
  16124u,
  16128u,
  16134u,
  16139u,
  16151u,
  16156u,
  16167u,
  16178u,
  16187u,
  16197u,
  16204u,
  16213u,
  16223u,
  16234u,
  16245u,
  16253u,
  16256u,
  16262u,
  16267u,
  16274u,
  16280u,
  16286u,
  16293u,
  16302u,
  16306u,
  16315u,
  16331u,
  16337u,
  16347u,
  16358u,
  16374u,
  16387u,
  16392u,
  16404u,
  16421u,
  16435u,
  16451u,
  16466u,
  16483u,
  16500u,
  16523u,
  16540u,
  16558u,
  16574u,
  16595u,
  16615u,
  16634u,
  16652u,
  16670u,
  16687u,
  16703u,
  16720u,
  16736u,
  16755u,
  16771u,
  16788u,
  16798u,
  16804u,
  16810u,
  16819u,
  16829u,
  16836u,
  16840u,
  16851u,
  16870u,
  16893u,
  16903u,
  16917u,
  16922u,
  16927u,
  16934u,
  16942u,
  16949u,
  16954u,
  16963u,
  16969u,
  16979u,
  16983u,
  16993u,
  17000u,
  17008u,
  17014u,
  17023u,
  17032u,
  17040u,
  17048u,
  17054u,
  17059u,
  17072u,
  17085u,
  17099u,
  17107u,
  17115u,
  17121u,
  17130u,
  17138u,
  17144u,
  17153u,
  17159u,
  17162u,
  17169u,
  17173u,
  17181u,
  17197u,
  17205u,
  17210u,
  17218u,
  17227u,
  17234u,
  17245u,
  17250u,
  17253u,
  17259u,
  17265u,
  17271u,
  17276u,
  17285u,
  17292u,
  17308u,
  17320u,
  17329u,
  17334u,
  17339u,
  17346u,
  17351u,
  17361u,
  17370u,
  17376u,
  17381u,
  17386u,
  17390u,
  17404u,
  17426u,
  17441u,
  17445u,
  17454u,
  17458u,
  17464u,
  17468u,
  17479u,
  17492u,
  17496u,
  17503u,
  17526u,
  17541u,
  17552u,
  17566u,
  17588u,
  17610u,
  17623u,
  17648u,
  17673u,
  17685u,
  17689u,
  17694u,
  17707u,
  17712u,
  17720u,
  17730u,
  17748u,
  17757u,
  17764u,
  17773u,
  17783u,
  17791u,
  17797u,
  17803u,
  17822u,
  17831u,
  17842u,
  17852u,
  17860u,
  17878u,
  17885u,
  17890u,
  17895u,
  17901u,
  17911u,
  17917u,
  17932u,
  17938u,
  17954u,
  17964u,
  17968u,
  17974u,
  17978u,
  17990u,
  17995u,
  17999u,
  18007u,
  18012u,
  18021u,
  18031u,
  18039u,
  18042u,
  18048u,
  18055u,
  18066u,
  18072u,
  18078u,
  18095u,
  18105u,
  18113u,
  18120u,
  18129u,
  18136u,
  18141u,
  18146u,
  18151u,
  18156u,
  18161u,
  18166u,
  18172u,
  18182u,
  18185u,
  18196u,
  18202u,
  18213u,
  18221u,
  18228u,
  18231u,
  18236u,
  18243u,
  18251u,
  18255u,
  18260u,
  18264u,
  18271u,
  18274u,
  18279u,
  18283u,
  18287u,
  18292u,
  18299u,
  18304u,
  18309u,
  18313u,
  18329u,
  18334u,
  18339u,
  18345u,
  18353u,
};
#else
#define RAF_PKG_INIT(ID, NLEN, FLG, VFY, NPTR) { (ID), (NLEN), (FLG), (VFY) }
#endif

static const raf_termux_pkg_id_t g_termux_pkgs[] = {
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7baf4038u, 8u, 0u, 0xf26fc5ffu, &g_termux_pkg_names[g_termux_pkg_name_offs[0u]]), /* 0verkill */
#else
  RAF_PKG_INIT(0x7baf4038u, 8u, 0u, 0xf26fc5ffu, 0), /* 0verkill */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb09d2723u, 6u, 0u, 0xade2d828u, &g_termux_pkg_names[g_termux_pkg_name_offs[1u]]), /* 2048-c */
#else
  RAF_PKG_INIT(0xb09d2723u, 6u, 0u, 0xade2d828u, 0), /* 2048-c */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x575564b9u, 5u, 0u, 0x35e59270u, &g_termux_pkg_names[g_termux_pkg_name_offs[2u]]), /* 2ping */
#else
  RAF_PKG_INIT(0x575564b9u, 5u, 0u, 0x35e59270u, 0), /* 2ping */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xda4d003bu, 7u, 0u, 0x3729a5eeu, &g_termux_pkg_names[g_termux_pkg_name_offs[3u]]), /* 6tunnel */
#else
  RAF_PKG_INIT(0xda4d003bu, 7u, 0u, 0x3729a5eeu, 0), /* 6tunnel */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfcfe8405u, 4u, 0u, 0x8877041eu, &g_termux_pkg_names[g_termux_pkg_name_offs[4u]]), /* 7zip */
#else
  RAF_PKG_INIT(0xfcfe8405u, 4u, 0u, 0x8877041eu, 0), /* 7zip */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xadebb3e5u, 8u, 0u, 0x4073e0b6u, &g_termux_pkg_names[g_termux_pkg_name_offs[5u]]), /* 8086tiny */
#else
  RAF_PKG_INIT(0xadebb3e5u, 8u, 0u, 0x4073e0b6u, 0), /* 8086tiny */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x10675f6eu, 5u, 0u, 0x250b9f2fu, &g_termux_pkg_names[g_termux_pkg_name_offs[6u]]), /* aalib */
#else
  RAF_PKG_INIT(0x10675f6eu, 5u, 0u, 0x250b9f2fu, 0), /* aalib */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5dc677a3u, 4u, 0u, 0x42fedc2cu, &g_termux_pkg_names[g_termux_pkg_name_offs[7u]]), /* aapt */
#else
  RAF_PKG_INIT(0x5dc677a3u, 4u, 0u, 0x42fedc2cu, 0), /* aapt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x28df39dfu, 6u, 0u, 0xce5b3700u, &g_termux_pkg_names[g_termux_pkg_name_offs[8u]]), /* abduco */
#else
  RAF_PKG_INIT(0x28df39dfu, 6u, 0u, 0xce5b3700u, 0), /* abduco */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb632a181u, 5u, 0u, 0xbd870b14u, &g_termux_pkg_names[g_termux_pkg_name_offs[9u]]), /* abook */
#else
  RAF_PKG_INIT(0xb632a181u, 5u, 0u, 0xbd870b14u, 0), /* abook */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x83b92de3u, 8u, 0u, 0x57e1a540u, &g_termux_pkg_names[g_termux_pkg_name_offs[10u]]), /* abootimg */
#else
  RAF_PKG_INIT(0x83b92de3u, 8u, 0u, 0x57e1a540u, 0), /* abootimg */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x85af1ba7u, 10u, 0u, 0x5872f240u, &g_termux_pkg_names[g_termux_pkg_name_offs[11u]]), /* abseil-cpp */
#else
  RAF_PKG_INIT(0x85af1ba7u, 10u, 0u, 0x5872f240u, 0), /* abseil-cpp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0c32e369u, 8u, 0u, 0x89940c1eu, &g_termux_pkg_names[g_termux_pkg_name_offs[12u]]), /* ack-grep */
#else
  RAF_PKG_INIT(0x0c32e369u, 8u, 0u, 0x89940c1eu, 0), /* ack-grep */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x334a4efdu, 3u, 0u, 0x939f8bbcu, &g_termux_pkg_names[g_termux_pkg_name_offs[13u]]), /* acr */
#else
  RAF_PKG_INIT(0x334a4efdu, 3u, 0u, 0x939f8bbcu, 0), /* acr */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x38390dbbu, 3u, 0u, 0xb6a67e9au, &g_termux_pkg_names[g_termux_pkg_name_offs[14u]]), /* ada */
#else
  RAF_PKG_INIT(0x38390dbbu, 3u, 0u, 0xb6a67e9au, 0), /* ada */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x51c63114u, 4u, 0u, 0x68fba71fu, &g_termux_pkg_names[g_termux_pkg_name_offs[15u]]), /* adms */
#else
  RAF_PKG_INIT(0x51c63114u, 4u, 0u, 0x68fba71fu, 0), /* adms */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc638b6a8u, 4u, 0u, 0x1462447bu, &g_termux_pkg_names[g_termux_pkg_name_offs[16u]]), /* aerc */
#else
  RAF_PKG_INIT(0xc638b6a8u, 4u, 0u, 0x1462447bu, 0), /* aerc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x980bdf6bu, 5u, 0u, 0x0263f766u, &g_termux_pkg_names[g_termux_pkg_name_offs[17u]]), /* agate */
#else
  RAF_PKG_INIT(0x980bdf6bu, 5u, 0u, 0x0263f766u, 0), /* agate */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2c41499cu, 3u, 0u, 0xa2a89db5u, &g_termux_pkg_names[g_termux_pkg_name_offs[18u]]), /* age */
#else
  RAF_PKG_INIT(0x2c41499cu, 3u, 0u, 0xa2a89db5u, 0), /* age */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2e414cc2u, 3u, 0u, 0xa0a89a8fu, &g_termux_pkg_names[g_termux_pkg_name_offs[19u]]), /* agg */
#else
  RAF_PKG_INIT(0x2e414cc2u, 3u, 0u, 0xa0a89a8fu, 0), /* agg */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x202fed97u, 3u, 0u, 0x8eb0ccfeu, &g_termux_pkg_names[g_termux_pkg_name_offs[20u]]), /* aha */
#else
  RAF_PKG_INIT(0x202fed97u, 3u, 0u, 0x8eb0ccfeu, 0), /* aha */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe48a2881u, 6u, 0u, 0x9b8ad5feu, &g_termux_pkg_names[g_termux_pkg_name_offs[21u]]), /* aichat */
#else
  RAF_PKG_INIT(0xe48a2881u, 6u, 0u, 0x9b8ad5feu, 0), /* aichat */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfbe97f09u, 5u, 0u, 0x4afd9bd0u, &g_termux_pkg_names[g_termux_pkg_name_offs[22u]]), /* alass */
#else
  RAF_PKG_INIT(0xfbe97f09u, 5u, 0u, 0x4afd9bd0u, 0), /* alass */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2a178da4u, 7u, 0u, 0x9ac6eee9u, &g_termux_pkg_names[g_termux_pkg_name_offs[23u]]), /* alembic */
#else
  RAF_PKG_INIT(0x2a178da4u, 7u, 0u, 0x9ac6eee9u, 0), /* alembic */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7f46d551u, 8u, 0u, 0x968f4e66u, &g_termux_pkg_names[g_termux_pkg_name_offs[24u]]), /* algernon */
#else
  RAF_PKG_INIT(0x7f46d551u, 8u, 0u, 0x968f4e66u, 0), /* algernon */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7d538ddeu, 6u, 0u, 0xc00a3ee1u, &g_termux_pkg_names[g_termux_pkg_name_offs[25u]]), /* alpine */
#else
  RAF_PKG_INIT(0x7d538ddeu, 6u, 0u, 0xc00a3ee1u, 0), /* alpine */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc4359436u, 8u, 0u, 0x12cacf4du, &g_termux_pkg_names[g_termux_pkg_name_offs[26u]]), /* alsa-lib */
#else
  RAF_PKG_INIT(0xc4359436u, 8u, 0u, 0x12cacf4du, 0), /* alsa-lib */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc7e1e725u, 12u, 0u, 0xb14b5d9eu, &g_termux_pkg_names[g_termux_pkg_name_offs[27u]]), /* alsa-plugins */
#else
  RAF_PKG_INIT(0xc7e1e725u, 12u, 0u, 0xb14b5d9eu, 0), /* alsa-plugins */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x53909808u, 10u, 0u, 0x28723f4bu, &g_termux_pkg_names[g_termux_pkg_name_offs[28u]]), /* alsa-utils */
#else
  RAF_PKG_INIT(0x53909808u, 10u, 0u, 0x28723f4bu, 0), /* alsa-utils */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6fd4bec0u, 5u, 0u, 0xdf2eeac5u, &g_termux_pkg_names[g_termux_pkg_name_offs[29u]]), /* amber */
#else
  RAF_PKG_INIT(0x6fd4bec0u, 5u, 0u, 0xdf2eeac5u, 0), /* amber */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa6fe3f35u, 6u, 0u, 0xd6bed1ceu, &g_termux_pkg_names[g_termux_pkg_name_offs[30u]]), /* amfora */
#else
  RAF_PKG_INIT(0xa6fe3f35u, 6u, 0u, 0xd6bed1ceu, 0), /* amfora */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x951cbe8au, 13u, 0u, 0x02cc2677u, &g_termux_pkg_names[g_termux_pkg_name_offs[31u]]), /* android-tools */
#else
  RAF_PKG_INIT(0x951cbe8au, 13u, 0u, 0x02cc2677u, 0), /* android-tools */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc24f769du, 6u, 0u, 0xb37aa03eu, &g_termux_pkg_names[g_termux_pkg_name_offs[32u]]), /* anewer */
#else
  RAF_PKG_INIT(0xc24f769du, 6u, 0u, 0xb37aa03eu, 0), /* anewer */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe1b6cdf4u, 7u, 0u, 0x72f7a265u, &g_termux_pkg_names[g_termux_pkg_name_offs[33u]]), /* angband */
#else
  RAF_PKG_INIT(0xe1b6cdf4u, 7u, 0u, 0x72f7a265u, 0), /* angband */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x04c917eeu, 13u, 0u, 0x14bbfa8bu, &g_termux_pkg_names[g_termux_pkg_name_offs[34u]]), /* angle-android */
#else
  RAF_PKG_INIT(0x04c917eeu, 13u, 0u, 0x14bbfa8bu, 0), /* angle-android */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x72eb13b4u, 13u, 0u, 0x6b184d1du, &g_termux_pkg_names[g_termux_pkg_name_offs[35u]]), /* angle-grinder */
#else
  RAF_PKG_INIT(0x72eb13b4u, 13u, 0u, 0x6b184d1du, 0), /* angle-grinder */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xba16c8a2u, 7u, 0u, 0x9b0568d7u, &g_termux_pkg_names[g_termux_pkg_name_offs[36u]]), /* ani-cli */
#else
  RAF_PKG_INIT(0xba16c8a2u, 7u, 0u, 0x9b0568d7u, 0), /* ani-cli */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa277b92cu, 10u, 0u, 0x5fb3a76bu, &g_termux_pkg_names[g_termux_pkg_name_offs[37u]]), /* ansifilter */
#else
  RAF_PKG_INIT(0xa277b92cu, 10u, 0u, 0x5fb3a76bu, 0), /* ansifilter */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1f29dbd6u, 3u, 0u, 0x9fbff24bu, &g_termux_pkg_names[g_termux_pkg_name_offs[38u]]), /* ant */
#else
  RAF_PKG_INIT(0x1f29dbd6u, 3u, 0u, 0x9fbff24bu, 0), /* ant */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x82d38dbdu, 8u, 0u, 0xde83403au, &g_termux_pkg_names[g_termux_pkg_name_offs[39u]]), /* antibody */
#else
  RAF_PKG_INIT(0x82d38dbdu, 8u, 0u, 0xde83403au, 0), /* antibody */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe6d746b5u, 8u, 0u, 0xdce13832u, &g_termux_pkg_names[g_termux_pkg_name_offs[40u]]), /* antiword */
#else
  RAF_PKG_INIT(0xe6d746b5u, 8u, 0u, 0xdce13832u, 0), /* antiword */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5877e06du, 9u, 0u, 0x23df2750u, &g_termux_pkg_names[g_termux_pkg_name_offs[41u]]), /* aosp-libs */
#else
  RAF_PKG_INIT(0x5877e06du, 9u, 0u, 0x23df2750u, 0), /* aosp-libs */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbd4680ccu, 10u, 0u, 0xe893a487u, &g_termux_pkg_names[g_termux_pkg_name_offs[42u]]), /* apache-orc */
#else
  RAF_PKG_INIT(0xbd4680ccu, 10u, 0u, 0xe893a487u, 0), /* apache-orc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x03a707f3u, 7u, 0u, 0xd7ab1f66u, &g_termux_pkg_names[g_termux_pkg_name_offs[43u]]), /* apache2 */
#else
  RAF_PKG_INIT(0x03a707f3u, 7u, 0u, 0xd7ab1f66u, 0), /* apache2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb43188d5u, 6u, 0u, 0x7eca4c22u, &g_termux_pkg_names[g_termux_pkg_name_offs[44u]]), /* apkeep */
#else
  RAF_PKG_INIT(0xb43188d5u, 6u, 0u, 0x7eca4c22u, 0), /* apkeep */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xad57fe9bu, 9u, 0u, 0xb9760382u, &g_termux_pkg_names[g_termux_pkg_name_offs[45u]]), /* apksigner */
#else
  RAF_PKG_INIT(0xad57fe9bu, 9u, 0u, 0xb9760382u, 0), /* apksigner */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbb019554u, 9u, 0u, 0x01b54b71u, &g_termux_pkg_names[g_termux_pkg_name_offs[46u]]), /* appstream */
#else
  RAF_PKG_INIT(0xbb019554u, 9u, 0u, 0x01b54b71u, 0), /* appstream */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x216a8652u, 3u, 0u, 0x8dc45323u, &g_termux_pkg_names[g_termux_pkg_name_offs[47u]]), /* apr */
#else
  RAF_PKG_INIT(0x216a8652u, 3u, 0u, 0x8dc45323u, 0), /* apr */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1df1f291u, 8u, 0u, 0x7fd6c1aeu, &g_termux_pkg_names[g_termux_pkg_name_offs[48u]]), /* apr-util */
#else
  RAF_PKG_INIT(0x1df1f291u, 8u, 0u, 0x7fd6c1aeu, 0), /* apr-util */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1b6a7ce0u, 3u, 0u, 0x93c45c95u, &g_termux_pkg_names[g_termux_pkg_name_offs[49u]]), /* apt */
#else
  RAF_PKG_INIT(0x1b6a7ce0u, 3u, 0u, 0x93c45c95u, 0), /* apt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xea5899a9u, 8u, 0u, 0xe5a1dc7eu, &g_termux_pkg_names[g_termux_pkg_name_offs[50u]]), /* apt-file */
#else
  RAF_PKG_INIT(0xea5899a9u, 8u, 0u, 0xe5a1dc7eu, 0), /* apt-file */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf31c0bccu, 17u, 0u, 0xb4cf3b51u, &g_termux_pkg_names[g_termux_pkg_name_offs[51u]]), /* apt-show-versions */
#else
  RAF_PKG_INIT(0xf31c0bccu, 17u, 0u, 0xb4cf3b51u, 0), /* apt-show-versions */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x781f5da7u, 5u, 0u, 0x66ca0da6u, &g_termux_pkg_names[g_termux_pkg_name_offs[52u]]), /* aptly */
#else
  RAF_PKG_INIT(0x781f5da7u, 5u, 0u, 0x66ca0da6u, 0), /* aptly */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe264ce90u, 6u, 0u, 0xdfb9d2e3u, &g_termux_pkg_names[g_termux_pkg_name_offs[53u]]), /* argon2 */
#else
  RAF_PKG_INIT(0xe264ce90u, 6u, 0u, 0xdfb9d2e3u, 0), /* argon2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa00aabf5u, 4u, 0u, 0x66280f0eu, &g_termux_pkg_names[g_termux_pkg_name_offs[54u]]), /* argp */
#else
  RAF_PKG_INIT(0xa00aabf5u, 4u, 0u, 0x66280f0eu, 0), /* argp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfb62789eu, 5u, 0u, 0x024c6a13u, &g_termux_pkg_names[g_termux_pkg_name_offs[55u]]), /* aria2 */
#else
  RAF_PKG_INIT(0xfb62789eu, 5u, 0u, 0x024c6a13u, 0), /* aria2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x316f1cb0u, 3u, 0u, 0x85c8c3b9u, &g_termux_pkg_names[g_termux_pkg_name_offs[56u]]), /* arj */
#else
  RAF_PKG_INIT(0x316f1cb0u, 3u, 0u, 0x85c8c3b9u, 0), /* arj */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x220319e1u, 9u, 0u, 0x291b44d8u, &g_termux_pkg_names[g_termux_pkg_name_offs[57u]]), /* arpack-ng */
#else
  RAF_PKG_INIT(0x220319e1u, 9u, 0u, 0x291b44d8u, 0), /* arpack-ng */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x73fdf8a4u, 6u, 0u, 0x1abc34c3u, &g_termux_pkg_names[g_termux_pkg_name_offs[58u]]), /* artalk */
#else
  RAF_PKG_INIT(0x73fdf8a4u, 6u, 0u, 0x1abc34c3u, 0), /* artalk */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf2125b06u, 6u, 0u, 0x19e0de39u, &g_termux_pkg_names[g_termux_pkg_name_offs[59u]]), /* arturo */
#else
  RAF_PKG_INIT(0xf2125b06u, 6u, 0u, 0x19e0de39u, 0), /* arturo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x11f85eb0u, 5u, 0u, 0x400dc701u, &g_termux_pkg_names[g_termux_pkg_name_offs[60u]]), /* ascii */
#else
  RAF_PKG_INIT(0x11f85eb0u, 5u, 0u, 0x400dc701u, 0), /* ascii */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x03c3377eu, 8u, 0u, 0xa9202d29u, &g_termux_pkg_names[g_termux_pkg_name_offs[61u]]), /* asciidoc */
#else
  RAF_PKG_INIT(0x03c3377eu, 8u, 0u, 0xa9202d29u, 0), /* asciidoc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb8d8e0e3u, 11u, 0u, 0x8ac8655eu, &g_termux_pkg_names[g_termux_pkg_name_offs[62u]]), /* asciidoctor */
#else
  RAF_PKG_INIT(0xb8d8e0e3u, 11u, 0u, 0x8ac8655eu, 0), /* asciidoctor */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x958d1913u, 9u, 0u, 0xac4d57bau, &g_termux_pkg_names[g_termux_pkg_name_offs[63u]]), /* asciinema */
#else
  RAF_PKG_INIT(0x958d1913u, 9u, 0u, 0xac4d57bau, 0), /* asciinema */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7d6c6572u, 7u, 0u, 0x1b583353u, &g_termux_pkg_names[g_termux_pkg_name_offs[64u]]), /* asm-lsp */
#else
  RAF_PKG_INIT(0x7d6c6572u, 7u, 0u, 0x1b583353u, 0), /* asm-lsp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb4b115b6u, 6u, 0u, 0xae3202b5u, &g_termux_pkg_names[g_termux_pkg_name_offs[65u]]), /* aspell */
#else
  RAF_PKG_INIT(0xb4b115b6u, 6u, 0u, 0xae3202b5u, 0), /* aspell */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2935e76eu, 9u, 0u, 0xd9c16ff3u, &g_termux_pkg_names[g_termux_pkg_name_offs[66u]]), /* aspell-de */
#else
  RAF_PKG_INIT(0x2935e76eu, 9u, 0u, 0xd9c16ff3u, 0), /* aspell-de */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfe336526u, 9u, 0u, 0x04c3f23bu, &g_termux_pkg_names[g_termux_pkg_name_offs[67u]]), /* aspell-en */
#else
  RAF_PKG_INIT(0xfe336526u, 9u, 0u, 0x04c3f23bu, 0), /* aspell-en */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1b3392cdu, 9u, 0u, 0xefc3d12cu, &g_termux_pkg_names[g_termux_pkg_name_offs[68u]]), /* aspell-es */
#else
  RAF_PKG_INIT(0x1b3392cdu, 9u, 0u, 0xefc3d12cu, 0), /* aspell-es */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0c3bc9f5u, 9u, 0u, 0xf6c61ac8u, &g_termux_pkg_names[g_termux_pkg_name_offs[69u]]), /* aspell-fr */
#else
  RAF_PKG_INIT(0x0c3bc9f5u, 9u, 0u, 0xf6c61ac8u, 0), /* aspell-fr */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8bbcfcd4u, 6u, 0u, 0x2f506297u, &g_termux_pkg_names[g_termux_pkg_name_offs[70u]]), /* assimp */
#else
  RAF_PKG_INIT(0x8bbcfcd4u, 6u, 0u, 0x2f506297u, 0), /* assimp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7eb50a73u, 9u, 0u, 0x28e26e46u, &g_termux_pkg_names[g_termux_pkg_name_offs[71u]]), /* asymptote */
#else
  RAF_PKG_INIT(0x7eb50a73u, 9u, 0u, 0x28e26e46u, 0), /* asymptote */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x57251588u, 2u, 0u, 0xe847a88fu, &g_termux_pkg_names[g_termux_pkg_name_offs[72u]]), /* at */
#else
  RAF_PKG_INIT(0x57251588u, 2u, 0u, 0xe847a88fu, 0), /* at */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6368ee81u, 12u, 0u, 0x9ea52b8eu, &g_termux_pkg_names[g_termux_pkg_name_offs[73u]]), /* at-spi2-core */
#else
  RAF_PKG_INIT(0x6368ee81u, 12u, 0u, 0x9ea52b8eu, 0), /* at-spi2-core */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x65b13e8eu, 13u, 0u, 0x4eda88b7u, &g_termux_pkg_names[g_termux_pkg_name_offs[74u]]), /* atomicparsley */
#else
  RAF_PKG_INIT(0x65b13e8eu, 13u, 0u, 0x4eda88b7u, 0), /* atomicparsley */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd7b01f85u, 6u, 0u, 0x8b77821au, &g_termux_pkg_names[g_termux_pkg_name_offs[75u]]), /* atomvm */
#else
  RAF_PKG_INIT(0xd7b01f85u, 6u, 0u, 0x8b77821au, 0), /* atomvm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2812f6d6u, 5u, 0u, 0xefc74da3u, &g_termux_pkg_names[g_termux_pkg_name_offs[76u]]), /* atool */
#else
  RAF_PKG_INIT(0x2812f6d6u, 5u, 0u, 0xefc74da3u, 0), /* atool */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x10a838b2u, 4u, 0u, 0x31e23ba9u, &g_termux_pkg_names[g_termux_pkg_name_offs[77u]]), /* attr */
#else
  RAF_PKG_INIT(0x10a838b2u, 4u, 0u, 0x31e23ba9u, 0), /* attr */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x614cc34cu, 5u, 0u, 0xe19e1991u, &g_termux_pkg_names[g_termux_pkg_name_offs[78u]]), /* atuin */
#else
  RAF_PKG_INIT(0x614cc34cu, 5u, 0u, 0xe19e1991u, 0), /* atuin */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x72f918bbu, 5u, 0u, 0xa4b06c32u, &g_termux_pkg_names[g_termux_pkg_name_offs[79u]]), /* aubio */
#else
  RAF_PKG_INIT(0x72f918bbu, 5u, 0u, 0xa4b06c32u, 0), /* aubio */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcb8177dfu, 9u, 0u, 0x6a0f6a22u, &g_termux_pkg_names[g_termux_pkg_name_offs[80u]]), /* audiofile */
#else
  RAF_PKG_INIT(0xcb8177dfu, 9u, 0u, 0x6a0f6a22u, 0), /* audiofile */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x40d3e6e4u, 8u, 0u, 0x3d9d6927u, &g_termux_pkg_names[g_termux_pkg_name_offs[81u]]), /* autoconf */
#else
  RAF_PKG_INIT(0x40d3e6e4u, 8u, 0u, 0x3d9d6927u, 0), /* autoconf */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf776d733u, 16u, 0u, 0x8da5e9dcu, &g_termux_pkg_names[g_termux_pkg_name_offs[82u]]), /* autoconf-archive */
#else
  RAF_PKG_INIT(0xf776d733u, 16u, 0u, 0x8da5e9dcu, 0), /* autoconf-archive */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb26875deu, 8u, 0u, 0x85724d9du, &g_termux_pkg_names[g_termux_pkg_name_offs[83u]]), /* autojump */
#else
  RAF_PKG_INIT(0xb26875deu, 8u, 0u, 0x85724d9du, 0), /* autojump */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa1748b3cu, 8u, 0u, 0x024b407fu, &g_termux_pkg_names[g_termux_pkg_name_offs[84u]]), /* automake */
#else
  RAF_PKG_INIT(0xa1748b3cu, 8u, 0u, 0x024b407fu, 0), /* automake */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa2de9b64u, 7u, 0u, 0x73121581u, &g_termux_pkg_names[g_termux_pkg_name_offs[85u]]), /* autossh */
#else
  RAF_PKG_INIT(0xa2de9b64u, 7u, 0u, 0x73121581u, 0), /* autossh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbb9f4335u, 5u, 0u, 0x6e7bbe3cu, &g_termux_pkg_names[g_termux_pkg_name_offs[86u]]), /* aview */
#else
  RAF_PKG_INIT(0xbb9f4335u, 5u, 0u, 0x6e7bbe3cu, 0), /* aview */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf8c7d96fu, 4u, 0u, 0xffd016acu, &g_termux_pkg_names[g_termux_pkg_name_offs[87u]]), /* avra */
#else
  RAF_PKG_INIT(0xf8c7d96fu, 4u, 0u, 0xffd016acu, 0), /* avra */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdc0bbf8du, 5u, 0u, 0x2339a50cu, &g_termux_pkg_names[g_termux_pkg_name_offs[88u]]), /* await */
#else
  RAF_PKG_INIT(0xdc0bbf8du, 5u, 0u, 0x2339a50cu, 0), /* await */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xab044050u, 6u, 0u, 0x41d4ab37u, &g_termux_pkg_names[g_termux_pkg_name_offs[89u]]), /* awscli */
#else
  RAF_PKG_INIT(0xab044050u, 6u, 0u, 0x41d4ab37u, 0), /* awscli */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x74364655u, 4u, 0u, 0x0029c8c2u, &g_termux_pkg_names[g_termux_pkg_name_offs[90u]]), /* axel */
#else
  RAF_PKG_INIT(0x74364655u, 4u, 0u, 0x0029c8c2u, 0), /* axel */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xafc06ebdu, 5u, 0u, 0xecfa5e3cu, &g_termux_pkg_names[g_termux_pkg_name_offs[91u]]), /* b3sum */
#else
  RAF_PKG_INIT(0xafc06ebdu, 5u, 0u, 0xecfa5e3cu, 0), /* b3sum */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x38b1abf2u, 4u, 0u, 0x5d993245u, &g_termux_pkg_names[g_termux_pkg_name_offs[92u]]), /* babl */
#else
  RAF_PKG_INIT(0x38b1abf2u, 4u, 0u, 0x5d993245u, 0), /* babl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1d923ca4u, 9u, 0u, 0xca93ee85u, &g_termux_pkg_names[g_termux_pkg_name_offs[93u]]), /* bacula-fd */
#else
  RAF_PKG_INIT(0x1d923ca4u, 9u, 0u, 0xca93ee85u, 0), /* bacula-fd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2811fd57u, 7u, 0u, 0x022cdd22u, &g_termux_pkg_names[g_termux_pkg_name_offs[94u]]), /* barcode */
#else
  RAF_PKG_INIT(0x2811fd57u, 7u, 0u, 0x022cdd22u, 0), /* barcode */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf99695c8u, 9u, 0u, 0xbdc32381u, &g_termux_pkg_names[g_termux_pkg_name_offs[95u]]), /* base16384 */
#else
  RAF_PKG_INIT(0xf99695c8u, 9u, 0u, 0xbdc32381u, 0), /* base16384 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3adc901fu, 4u, 0u, 0x53bdf360u, &g_termux_pkg_names[g_termux_pkg_name_offs[96u]]), /* bash */
#else
  RAF_PKG_INIT(0x3adc901fu, 4u, 0u, 0x53bdf360u, 0), /* bash */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd3ec2954u, 15u, 0u, 0x1fbd40b9u, &g_termux_pkg_names[g_termux_pkg_name_offs[97u]]), /* bash-completion */
#else
  RAF_PKG_INIT(0xd3ec2954u, 15u, 0u, 0x1fbd40b9u, 0), /* bash-completion */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6c5ef5eau, 6u, 0u, 0x27eac515u, &g_termux_pkg_names[g_termux_pkg_name_offs[98u]]), /* bastet */
#else
  RAF_PKG_INIT(0x6c5ef5eau, 6u, 0u, 0x27eac515u, 0), /* bastet */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x70b773a8u, 3u, 0u, 0x5e27e64du, &g_termux_pkg_names[g_termux_pkg_name_offs[99u]]), /* bat */
#else
  RAF_PKG_INIT(0x70b773a8u, 3u, 0u, 0x5e27e64du, 0), /* bat */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3e2ba9f2u, 2u, 0u, 0xe540e811u, &g_termux_pkg_names[g_termux_pkg_name_offs[100u]]), /* bc */
#else
  RAF_PKG_INIT(0x3e2ba9f2u, 2u, 0u, 0xe540e811u, 0), /* bc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x05d1ea82u, 5u, 0u, 0xeb5cf813u, &g_termux_pkg_names[g_termux_pkg_name_offs[101u]]), /* bc-gh */
#else
  RAF_PKG_INIT(0x05d1ea82u, 5u, 0u, 0xeb5cf813u, 0), /* bc-gh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0fddfddfu, 4u, 0u, 0x53449674u, &g_termux_pkg_names[g_termux_pkg_name_offs[102u]]), /* bcal */
#else
  RAF_PKG_INIT(0x0fddfddfu, 4u, 0u, 0x53449674u, 0), /* bcal */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2f5fc862u, 6u, 0u, 0x26f54a05u, &g_termux_pkg_names[g_termux_pkg_name_offs[103u]]), /* bchunk */
#else
  RAF_PKG_INIT(0x2f5fc862u, 6u, 0u, 0x26f54a05u, 0), /* bchunk */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa83d748du, 9u, 0u, 0x70ede264u, &g_termux_pkg_names[g_termux_pkg_name_offs[104u]]), /* bdsup2sub */
#else
  RAF_PKG_INIT(0xa83d748du, 9u, 0u, 0x70ede264u, 0), /* bdsup2sub */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x83a174fbu, 9u, 0u, 0x49d36cd6u, &g_termux_pkg_names[g_termux_pkg_name_offs[105u]]), /* beanshell */
#else
  RAF_PKG_INIT(0x83a174fbu, 9u, 0u, 0x49d36cd6u, 0), /* beanshell */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8a524c53u, 4u, 0u, 0x12730130u, &g_termux_pkg_names[g_termux_pkg_name_offs[106u]]), /* bear */
#else
  RAF_PKG_INIT(0x8a524c53u, 4u, 0u, 0x12730130u, 0), /* bear */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x50ae46ecu, 3u, 0u, 0x5e3273a9u, &g_termux_pkg_names[g_termux_pkg_name_offs[107u]]), /* bed */
#else
  RAF_PKG_INIT(0x50ae46ecu, 3u, 0u, 0x5e3273a9u, 0), /* bed */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3fb3b273u, 5u, 0u, 0xe4083dceu, &g_termux_pkg_names[g_termux_pkg_name_offs[108u]]), /* bftpd */
#else
  RAF_PKG_INIT(0x3fb3b273u, 5u, 0u, 0xe4083dceu, 0), /* bftpd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb51696f1u, 5u, 0u, 0x0dd04028u, &g_termux_pkg_names[g_termux_pkg_name_offs[109u]]), /* bgrep */
#else
  RAF_PKG_INIT(0xb51696f1u, 5u, 0u, 0x0dd04028u, 0), /* bgrep */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x90e3bd58u, 7u, 0u, 0x4dfe3379u, &g_termux_pkg_names[g_termux_pkg_name_offs[110u]]), /* biboumi */
#else
  RAF_PKG_INIT(0x90e3bd58u, 7u, 0u, 0x4dfe3379u, 0), /* biboumi */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdaac38efu, 8u, 0u, 0xded80d5cu, &g_termux_pkg_names[g_termux_pkg_name_offs[111u]]), /* binaryen */
#else
  RAF_PKG_INIT(0xdaac38efu, 8u, 0u, 0xded80d5cu, 0), /* binaryen */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x526286bbu, 8u, 0u, 0x965a8cf0u, &g_termux_pkg_names[g_termux_pkg_name_offs[112u]]), /* binutils */
#else
  RAF_PKG_INIT(0x526286bbu, 8u, 0u, 0x965a8cf0u, 0), /* binutils */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x900c5a40u, 5u, 0u, 0xcf157d89u, &g_termux_pkg_names[g_termux_pkg_name_offs[113u]]), /* bison */
#else
  RAF_PKG_INIT(0x900c5a40u, 5u, 0u, 0xcf157d89u, 0), /* bison */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x55f7427du, 7u, 0u, 0xab23f1acu, &g_termux_pkg_names[g_termux_pkg_name_offs[114u]]), /* bitcoin */
#else
  RAF_PKG_INIT(0x55f7427du, 7u, 0u, 0xab23f1acu, 0), /* bitcoin */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbdef1f40u, 7u, 0u, 0xcf04f63du, &g_termux_pkg_names[g_termux_pkg_name_offs[115u]]), /* bitlbee */
#else
  RAF_PKG_INIT(0xbdef1f40u, 7u, 0u, 0xcf04f63du, 0), /* bitlbee */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x462bb68au, 2u, 0u, 0xdd40db79u, &g_termux_pkg_names[g_termux_pkg_name_offs[116u]]), /* bk */
#else
  RAF_PKG_INIT(0x462bb68au, 2u, 0u, 0xdd40db79u, 0), /* bk */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb044c34du, 8u, 0u, 0xc65df342u, &g_termux_pkg_names[g_termux_pkg_name_offs[117u]]), /* blackbox */
#else
  RAF_PKG_INIT(0xb044c34du, 8u, 0u, 0xc65df342u, 0), /* blackbox */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x07617589u, 5u, 0u, 0x667bb7f8u, &g_termux_pkg_names[g_termux_pkg_name_offs[118u]]), /* blink */
#else
  RAF_PKG_INIT(0x07617589u, 5u, 0u, 0x667bb7f8u, 0), /* blink */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdb0216d6u, 5u, 0u, 0xb57cc17bu, &g_termux_pkg_names[g_termux_pkg_name_offs[119u]]), /* blogc */
#else
  RAF_PKG_INIT(0xdb0216d6u, 5u, 0u, 0xb57cc17bu, 0), /* blogc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xca1ed16au, 18u, 0u, 0xdac18a05u, &g_termux_pkg_names[g_termux_pkg_name_offs[120u]]), /* blueprint-compiler */
#else
  RAF_PKG_INIT(0xca1ed16au, 18u, 0u, 0xdac18a05u, 0), /* blueprint-compiler */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0d82b2e1u, 4u, 0u, 0xc7b9b41au, &g_termux_pkg_names[g_termux_pkg_name_offs[121u]]), /* bmon */
#else
  RAF_PKG_INIT(0x0d82b2e1u, 4u, 0u, 0xc7b9b41au, 0), /* bmon */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x73650e46u, 5u, 0u, 0x47158847u, &g_termux_pkg_names[g_termux_pkg_name_offs[122u]]), /* boinc */
#else
  RAF_PKG_INIT(0x73650e46u, 5u, 0u, 0x47158847u, 0), /* boinc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd993b0b0u, 8u, 0u, 0x543bcfa7u, &g_termux_pkg_names[g_termux_pkg_name_offs[123u]]), /* boinctui */
#else
  RAF_PKG_INIT(0xd993b0b0u, 8u, 0u, 0x543bcfa7u, 0), /* boinctui */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcaa8e760u, 10u, 0u, 0x45d326cbu, &g_termux_pkg_names[g_termux_pkg_name_offs[124u]]), /* bombadillo */
#else
  RAF_PKG_INIT(0xcaa8e760u, 10u, 0u, 0x45d326cbu, 0), /* bombadillo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf8e9242cu, 5u, 0u, 0x4d4c38d9u, &g_termux_pkg_names[g_termux_pkg_name_offs[125u]]), /* boost */
#else
  RAF_PKG_INIT(0xf8e9242cu, 5u, 0u, 0x4d4c38d9u, 0), /* boost */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbb87b4d3u, 4u, 0u, 0x979c5950u, &g_termux_pkg_names[g_termux_pkg_name_offs[126u]]), /* bore */
#else
  RAF_PKG_INIT(0xbb87b4d3u, 4u, 0u, 0x979c5950u, 0), /* bore */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x726f5b4bu, 10u, 0u, 0xb3ebfa00u, &g_termux_pkg_names[g_termux_pkg_name_offs[127u]]), /* borgbackup */
#else
  RAF_PKG_INIT(0x726f5b4bu, 10u, 0u, 0xb3ebfa00u, 0), /* borgbackup */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0efc679eu, 6u, 0u, 0xc34c6d31u, &g_termux_pkg_names[g_termux_pkg_name_offs[128u]]), /* botan3 */
#else
  RAF_PKG_INIT(0x0efc679eu, 6u, 0u, 0xc34c6d31u, 0), /* botan3 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x514c98f2u, 5u, 0u, 0x6388b1efu, &g_termux_pkg_names[g_termux_pkg_name_offs[129u]]), /* boxes */
#else
  RAF_PKG_INIT(0x514c98f2u, 5u, 0u, 0x6388b1efu, 0), /* boxes */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x117a5234u, 9u, 0u, 0x24e7ec4du, &g_termux_pkg_names[g_termux_pkg_name_offs[130u]]), /* brainfuck */
#else
  RAF_PKG_INIT(0x117a5234u, 9u, 0u, 0x24e7ec4du, 0), /* brainfuck */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x55680a0du, 6u, 0u, 0xaefffdaau, &g_termux_pkg_names[g_termux_pkg_name_offs[131u]]), /* brogue */
#else
  RAF_PKG_INIT(0x55680a0du, 6u, 0u, 0xaefffdaau, 0), /* brogue */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2b820528u, 5u, 0u, 0xc80b5b4du, &g_termux_pkg_names[g_termux_pkg_name_offs[132u]]), /* brook */
#else
  RAF_PKG_INIT(0x2b820528u, 5u, 0u, 0xc80b5b4du, 0), /* brook */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1a81ea65u, 5u, 0u, 0xa90b2a80u, &g_termux_pkg_names[g_termux_pkg_name_offs[133u]]), /* broot */
#else
  RAF_PKG_INIT(0x1a81ea65u, 5u, 0u, 0xa90b2a80u, 0), /* broot */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6da9909du, 6u, 0u, 0x1ae2d066u, &g_termux_pkg_names[g_termux_pkg_name_offs[134u]]), /* brotli */
#else
  RAF_PKG_INIT(0x6da9909du, 6u, 0u, 0x1ae2d066u, 0), /* brotli */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6e14f2e4u, 10u, 0u, 0x08998d0fu, &g_termux_pkg_names[g_termux_pkg_name_offs[135u]]), /* bsd-finger */
#else
  RAF_PKG_INIT(0x6e14f2e4u, 10u, 0u, 0x08998d0fu, 0), /* bsd-finger */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2e968b64u, 9u, 0u, 0x053637fdu, &g_termux_pkg_names[g_termux_pkg_name_offs[136u]]), /* bsd-games */
#else
  RAF_PKG_INIT(0x2e968b64u, 9u, 0u, 0x053637fdu, 0), /* bsd-games */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfd08d422u, 5u, 0u, 0x69ff8257u, &g_termux_pkg_names[g_termux_pkg_name_offs[137u]]), /* btfs2 */
#else
  RAF_PKG_INIT(0xfd08d422u, 5u, 0u, 0x69ff8257u, 0), /* btfs2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa60484f4u, 11u, 0u, 0x1042fe85u, &g_termux_pkg_names[g_termux_pkg_name_offs[138u]]), /* btrfs-progs */
#else
  RAF_PKG_INIT(0xa60484f4u, 11u, 0u, 0x1042fe85u, 0), /* btrfs-progs */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x72d58be2u, 3u, 0u, 0x3c594d93u, &g_termux_pkg_names[g_termux_pkg_name_offs[139u]]), /* buf */
#else
  RAF_PKG_INIT(0x72d58be2u, 3u, 0u, 0x3c594d93u, 0), /* buf */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa12e5dfeu, 15u, 0u, 0x5a73f1d3u, &g_termux_pkg_names[g_termux_pkg_name_offs[140u]]), /* build-essential */
#else
  RAF_PKG_INIT(0xa12e5dfeu, 15u, 0u, 0x5a73f1d3u, 0), /* build-essential */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe3282e09u, 7u, 0u, 0x4f6ef4c0u, &g_termux_pkg_names[g_termux_pkg_name_offs[141u]]), /* busybox */
#else
  RAF_PKG_INIT(0xe3282e09u, 7u, 0u, 0x4f6ef4c0u, 0), /* busybox */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x55dc1a00u, 3u, 0u, 0x615bc669u, &g_termux_pkg_names[g_termux_pkg_name_offs[142u]]), /* bvi */
#else
  RAF_PKG_INIT(0x55dc1a00u, 3u, 0u, 0x615bc669u, 0), /* bvi */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x348a6fc5u, 5u, 0u, 0x98e24954u, &g_termux_pkg_names[g_termux_pkg_name_offs[143u]]), /* byacc */
#else
  RAF_PKG_INIT(0x348a6fc5u, 5u, 0u, 0x98e24954u, 0), /* byacc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdbfe24e4u, 5u, 0u, 0xb92a4625u, &g_termux_pkg_names[g_termux_pkg_name_offs[144u]]), /* byobu */
#else
  RAF_PKG_INIT(0xdbfe24e4u, 5u, 0u, 0xb92a4625u, 0), /* byobu */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x40c33102u, 6u, 0u, 0x55ec537du, &g_termux_pkg_names[g_termux_pkg_name_offs[145u]]), /* c-ares */
#else
  RAF_PKG_INIT(0x40c33102u, 6u, 0u, 0x55ec537du, 0), /* c-ares */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xeff0a74bu, 9u, 0u, 0xd60bfae6u, &g_termux_pkg_names[g_termux_pkg_name_offs[146u]]), /* c-toxcore */
#else
  RAF_PKG_INIT(0xeff0a74bu, 9u, 0u, 0xd60bfae6u, 0), /* c-toxcore */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x36f64460u, 15u, 0u, 0x77fbcac5u, &g_termux_pkg_names[g_termux_pkg_name_offs[147u]]), /* ca-certificates */
#else
  RAF_PKG_INIT(0x36f64460u, 15u, 0u, 0x77fbcac5u, 0), /* ca-certificates */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x655c9c1au, 13u, 0u, 0x54404bb7u, &g_termux_pkg_names[g_termux_pkg_name_offs[148u]]), /* cabal-install */
#else
  RAF_PKG_INIT(0x655c9c1au, 13u, 0u, 0x54404bb7u, 0), /* cabal-install */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdd69276au, 10u, 0u, 0xfbcecd05u, &g_termux_pkg_names[g_termux_pkg_name_offs[149u]]), /* cabextract */
#else
  RAF_PKG_INIT(0xdd69276au, 10u, 0u, 0xfbcecd05u, 0), /* cabextract */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x97cbb392u, 5u, 0u, 0xc6f2fe9bu, &g_termux_pkg_names[g_termux_pkg_name_offs[150u]]), /* cabin */
#else
  RAF_PKG_INIT(0x97cbb392u, 5u, 0u, 0xc6f2fe9bu, 0), /* cabin */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb10cd42bu, 7u, 0u, 0x9da3419au, &g_termux_pkg_names[g_termux_pkg_name_offs[151u]]), /* cadaver */
#else
  RAF_PKG_INIT(0xb10cd42bu, 7u, 0u, 0x9da3419au, 0), /* cadaver */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7bde8210u, 5u, 0u, 0xe0c76db5u, &g_termux_pkg_names[g_termux_pkg_name_offs[152u]]), /* caddy */
#else
  RAF_PKG_INIT(0x7bde8210u, 5u, 0u, 0xe0c76db5u, 0), /* caddy */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbcf192d4u, 4u, 0u, 0x381bb25fu, &g_termux_pkg_names[g_termux_pkg_name_offs[153u]]), /* calc */
#else
  RAF_PKG_INIT(0xbcf192d4u, 4u, 0u, 0x381bb25fu, 0), /* calc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x13cf901fu, 8u, 0u, 0x624e8e90u, &g_termux_pkg_names[g_termux_pkg_name_offs[154u]]), /* calcurse */
#else
  RAF_PKG_INIT(0x13cf901fu, 8u, 0u, 0x624e8e90u, 0), /* calcurse */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1949031bu, 9u, 0u, 0x2c652d22u, &g_termux_pkg_names[g_termux_pkg_name_offs[155u]]), /* capnproto */
#else
  RAF_PKG_INIT(0x1949031bu, 9u, 0u, 0x2c652d22u, 0), /* capnproto */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0b300438u, 8u, 0u, 0x6e4e4c27u, &g_termux_pkg_names[g_termux_pkg_name_offs[156u]]), /* capstone */
#else
  RAF_PKG_INIT(0x0b300438u, 8u, 0u, 0x6e4e4c27u, 0), /* capstone */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0d5e7e3fu, 8u, 0u, 0xde129a00u, &g_termux_pkg_names[g_termux_pkg_name_offs[157u]]), /* carapace */
#else
  RAF_PKG_INIT(0x0d5e7e3fu, 8u, 0u, 0xde129a00u, 0), /* carapace */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf2a9a5e7u, 7u, 0u, 0xff21288au, &g_termux_pkg_names[g_termux_pkg_name_offs[158u]]), /* cargo-c */
#else
  RAF_PKG_INIT(0xf2a9a5e7u, 7u, 0u, 0xff21288au, 0), /* cargo-c */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd2dac0dfu, 12u, 0u, 0x86ff9508u, &g_termux_pkg_names[g_termux_pkg_name_offs[159u]]), /* cargo-leptos */
#else
  RAF_PKG_INIT(0xd2dac0dfu, 12u, 0u, 0x86ff9508u, 0), /* cargo-leptos */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x684c2333u, 6u, 0u, 0x9dd88e60u, &g_termux_pkg_names[g_termux_pkg_name_offs[160u]]), /* catdoc */
#else
  RAF_PKG_INIT(0x684c2333u, 6u, 0u, 0x9dd88e60u, 0), /* catdoc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb31d0b15u, 7u, 0u, 0xa21f89f0u, &g_termux_pkg_names[g_termux_pkg_name_offs[161u]]), /* catgirl */
#else
  RAF_PKG_INIT(0xb31d0b15u, 7u, 0u, 0xa21f89f0u, 0), /* catgirl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1ad3a506u, 6u, 0u, 0x8bea604du, &g_termux_pkg_names[g_termux_pkg_name_offs[162u]]), /* catimg */
#else
  RAF_PKG_INIT(0x1ad3a506u, 6u, 0u, 0x8bea604du, 0), /* catimg */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9b3204a4u, 4u, 0u, 0x3e5368cbu, &g_termux_pkg_names[g_termux_pkg_name_offs[163u]]), /* cava */
#else
  RAF_PKG_INIT(0x9b3204a4u, 4u, 0u, 0x3e5368cbu, 0), /* cava */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2df33549u, 14u, 0u, 0x16d7cdb6u, &g_termux_pkg_names[g_termux_pkg_name_offs[164u]]), /* cavez-of-phear */
#else
  RAF_PKG_INIT(0x2df33549u, 14u, 0u, 0x16d7cdb6u, 0), /* cavez-of-phear */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x21aa0edeu, 5u, 0u, 0xda3a59cfu, &g_termux_pkg_names[g_termux_pkg_name_offs[165u]]), /* cavif */
#else
  RAF_PKG_INIT(0x21aa0edeu, 5u, 0u, 0xda3a59cfu, 0), /* cavif */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0bdb4e32u, 6u, 0u, 0xa507ccd1u, &g_termux_pkg_names[g_termux_pkg_name_offs[166u]]), /* cboard */
#else
  RAF_PKG_INIT(0x0bdb4e32u, 6u, 0u, 0xa507ccd1u, 0), /* cboard */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc60585acu, 7u, 0u, 0x1e6ac409u, &g_termux_pkg_names[g_termux_pkg_name_offs[167u]]), /* cbonsai */
#else
  RAF_PKG_INIT(0xc60585acu, 7u, 0u, 0x1e6ac409u, 0), /* cbonsai */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x915ac74eu, 4u, 0u, 0x3ca3477du, &g_termux_pkg_names[g_termux_pkg_name_offs[168u]]), /* cc65 */
#else
  RAF_PKG_INIT(0x915ac74eu, 4u, 0u, 0x3ca3477du, 0), /* cc65 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x200d62d0u, 6u, 0u, 0x34f9c34fu, &g_termux_pkg_names[g_termux_pkg_name_offs[169u]]), /* ccache */
#else
  RAF_PKG_INIT(0x200d62d0u, 6u, 0u, 0x34f9c34fu, 0), /* ccache */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xabc4e599u, 4u, 0u, 0x77121556u, &g_termux_pkg_names[g_termux_pkg_name_offs[170u]]), /* cccc */
#else
  RAF_PKG_INIT(0xabc4e599u, 4u, 0u, 0x77121556u, 0), /* cccc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe988811du, 11u, 0u, 0xf45cd310u, &g_termux_pkg_names[g_termux_pkg_name_offs[171u]]), /* ccextractor */
#else
  RAF_PKG_INIT(0xe988811du, 11u, 0u, 0xf45cd310u, 0), /* ccextractor */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd3e9f56au, 4u, 0u, 0x7f00d8cdu, &g_termux_pkg_names[g_termux_pkg_name_offs[172u]]), /* ccls */
#else
  RAF_PKG_INIT(0xd3e9f56au, 4u, 0u, 0x7f00d8cdu, 0), /* ccls */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xefc435eau, 6u, 0u, 0x259ea011u, &g_termux_pkg_names[g_termux_pkg_name_offs[173u]]), /* ccrypt */
#else
  RAF_PKG_INIT(0xefc435eau, 6u, 0u, 0x259ea011u, 0), /* ccrypt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe98bebb6u, 8u, 0u, 0xd744af99u, &g_termux_pkg_names[g_termux_pkg_name_offs[174u]]), /* cfengine */
#else
  RAF_PKG_INIT(0xe98bebb6u, 8u, 0u, 0xd744af99u, 0), /* cfengine */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0d76a5a3u, 3u, 0u, 0xb210f93eu, &g_termux_pkg_names[g_termux_pkg_name_offs[175u]]), /* cfm */
#else
  RAF_PKG_INIT(0x0d76a5a3u, 3u, 0u, 0xb210f93eu, 0), /* cfm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6b283192u, 4u, 0u, 0x186aa4b9u, &g_termux_pkg_names[g_termux_pkg_name_offs[176u]]), /* cgal */
#else
  RAF_PKG_INIT(0x6b283192u, 4u, 0u, 0x186aa4b9u, 0), /* cgal */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7f200249u, 4u, 0u, 0x285f84f6u, &g_termux_pkg_names[g_termux_pkg_name_offs[177u]]), /* cgdb */
#else
  RAF_PKG_INIT(0x7f200249u, 4u, 0u, 0x285f84f6u, 0), /* cgdb */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8113397cu, 4u, 0u, 0x0e7fafb3u, &g_termux_pkg_names[g_termux_pkg_name_offs[178u]]), /* cgif */
#else
  RAF_PKG_INIT(0x8113397cu, 4u, 0u, 0x0e7fafb3u, 0), /* cgif */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x33c73920u, 5u, 0u, 0x20fe5221u, &g_termux_pkg_names[g_termux_pkg_name_offs[179u]]), /* chafa */
#else
  RAF_PKG_INIT(0x33c73920u, 5u, 0u, 0x20fe5221u, 0), /* chafa */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb3711c47u, 5u, 0u, 0xb32f8d6au, &g_termux_pkg_names[g_termux_pkg_name_offs[180u]]), /* check */
#else
  RAF_PKG_INIT(0xb3711c47u, 5u, 0u, 0xb32f8d6au, 0), /* check */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbf320178u, 7u, 0u, 0x1d91cd45u, &g_termux_pkg_names[g_termux_pkg_name_offs[181u]]), /* chezmoi */
#else
  RAF_PKG_INIT(0xbf320178u, 7u, 0u, 0x1d91cd45u, 0), /* chezmoi */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf161ff1cu, 7u, 0u, 0x13cae305u, &g_termux_pkg_names[g_termux_pkg_name_offs[182u]]), /* chicken */
#else
  RAF_PKG_INIT(0xf161ff1cu, 7u, 0u, 0x13cae305u, 0), /* chicken */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4ad92969u, 6u, 0u, 0x291e23fau, &g_termux_pkg_names[g_termux_pkg_name_offs[183u]]), /* chntpw */
#else
  RAF_PKG_INIT(0x4ad92969u, 6u, 0u, 0x291e23fau, 0), /* chntpw */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x46ff9c40u, 6u, 0u, 0x4872715bu, &g_termux_pkg_names[g_termux_pkg_name_offs[184u]]), /* choose */
#else
  RAF_PKG_INIT(0x46ff9c40u, 6u, 0u, 0x4872715bu, 0), /* choose */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2c1fa60cu, 6u, 0u, 0x1a05936fu, &g_termux_pkg_names[g_termux_pkg_name_offs[185u]]), /* chrony */
#else
  RAF_PKG_INIT(0x2c1fa60cu, 6u, 0u, 0x1a05936fu, 0), /* chrony */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x39fef3d6u, 6u, 0u, 0xe8eb5751u, &g_termux_pkg_names[g_termux_pkg_name_offs[186u]]), /* cicada */
#else
  RAF_PKG_INIT(0x39fef3d6u, 6u, 0u, 0xe8eb5751u, 0), /* cicada */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x17bc423bu, 4u, 0u, 0xf5783830u, &g_termux_pkg_names[g_termux_pkg_name_offs[187u]]), /* ciso */
#else
  RAF_PKG_INIT(0x17bc423bu, 4u, 0u, 0xf5783830u, 0), /* ciso */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xaf16b94cu, 5u, 0u, 0xb6064c79u, &g_termux_pkg_names[g_termux_pkg_name_offs[188u]]), /* cjson */
#else
  RAF_PKG_INIT(0xaf16b94cu, 5u, 0u, 0xb6064c79u, 0), /* cjson */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x98a1fdb2u, 7u, 0u, 0x49cccd73u, &g_termux_pkg_names[g_termux_pkg_name_offs[189u]]), /* ckermit */
#else
  RAF_PKG_INIT(0x98a1fdb2u, 7u, 0u, 0x49cccd73u, 0), /* ckermit */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8dd3244bu, 6u, 0u, 0x4b98a350u, &g_termux_pkg_names[g_termux_pkg_name_offs[190u]]), /* clamav */
#else
  RAF_PKG_INIT(0x8dd3244bu, 6u, 0u, 0x4b98a350u, 0), /* clamav */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd4d2bd88u, 7u, 0u, 0x0b5c12c9u, &g_termux_pkg_names[g_termux_pkg_name_offs[191u]]), /* clblast */
#else
  RAF_PKG_INIT(0xd4d2bd88u, 7u, 0u, 0x0b5c12c9u, 0), /* clblast */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd974e38cu, 6u, 0u, 0xd36eefc3u, &g_termux_pkg_names[g_termux_pkg_name_offs[192u]]), /* clidle */
#else
  RAF_PKG_INIT(0xd974e38cu, 6u, 0u, 0xd36eefc3u, 0), /* clidle */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x568b6af0u, 5u, 0u, 0xfab37c81u, &g_termux_pkg_names[g_termux_pkg_name_offs[193u]]), /* clifm */
#else
  RAF_PKG_INIT(0x568b6af0u, 5u, 0u, 0xfab37c81u, 0), /* clifm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x755e6422u, 6u, 0u, 0x1f835675u, &g_termux_pkg_names[g_termux_pkg_name_offs[194u]]), /* clinfo */
#else
  RAF_PKG_INIT(0x755e6422u, 6u, 0u, 0x1f835675u, 0), /* clinfo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4fa364d1u, 5u, 0u, 0xf190dc14u, &g_termux_pkg_names[g_termux_pkg_name_offs[195u]]), /* clipp */
#else
  RAF_PKG_INIT(0x4fa364d1u, 5u, 0u, 0xf190dc14u, 0), /* clipp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0491075fu, 7u, 0u, 0xd5674ee2u, &g_termux_pkg_names[g_termux_pkg_name_offs[196u]]), /* cloneit */
#else
  RAF_PKG_INIT(0x0491075fu, 7u, 0u, 0xd5674ee2u, 0), /* cloneit */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x33068c5eu, 11u, 0u, 0x583b113bu, &g_termux_pkg_names[g_termux_pkg_name_offs[197u]]), /* cloudflared */
#else
  RAF_PKG_INIT(0x33068c5eu, 11u, 0u, 0x583b113bu, 0), /* cloudflared */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe4565df1u, 6u, 0u, 0x4719a3a2u, &g_termux_pkg_names[g_termux_pkg_name_offs[198u]]), /* clpeak */
#else
  RAF_PKG_INIT(0xe4565df1u, 6u, 0u, 0x4719a3a2u, 0), /* clpeak */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x44002e3du, 4u, 0u, 0x101c4596u, &g_termux_pkg_names[g_termux_pkg_name_offs[199u]]), /* clvk */
#else
  RAF_PKG_INIT(0x44002e3du, 4u, 0u, 0x101c4596u, 0), /* clvk */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6be07ca8u, 5u, 0u, 0xaa752d09u, &g_termux_pkg_names[g_termux_pkg_name_offs[200u]]), /* cmake */
#else
  RAF_PKG_INIT(0x6be07ca8u, 5u, 0u, 0xaa752d09u, 0), /* cmake */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x41f183abu, 5u, 0u, 0xac63e70eu, &g_termux_pkg_names[g_termux_pkg_name_offs[201u]]), /* cmark */
#else
  RAF_PKG_INIT(0x41f183abu, 5u, 0u, 0xac63e70eu, 0), /* cmark */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6293923fu, 7u, 0u, 0x5a60c04eu, &g_termux_pkg_names[g_termux_pkg_name_offs[202u]]), /* cmatrix */
#else
  RAF_PKG_INIT(0x6293923fu, 7u, 0u, 0x5a60c04eu, 0), /* cmatrix */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xef70a987u, 6u, 0u, 0x5a90f0bcu, &g_termux_pkg_names[g_termux_pkg_name_offs[203u]]), /* cmocka */
#else
  RAF_PKG_INIT(0xef70a987u, 6u, 0u, 0x5a90f0bcu, 0), /* cmocka */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc0864821u, 4u, 0u, 0x93962bb2u, &g_termux_pkg_names[g_termux_pkg_name_offs[204u]]), /* cmus */
#else
  RAF_PKG_INIT(0xc0864821u, 4u, 0u, 0x93962bb2u, 0), /* cmus */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf3134d78u, 6u, 0u, 0xfe232303u, &g_termux_pkg_names[g_termux_pkg_name_offs[205u]]), /* cmusfm */
#else
  RAF_PKG_INIT(0xf3134d78u, 6u, 0u, 0xfe232303u, 0), /* cmusfm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5e2f0c28u, 9u, 0u, 0x3ec6233du, &g_termux_pkg_names[g_termux_pkg_name_offs[206u]]), /* codecrypt */
#else
  RAF_PKG_INIT(0x5e2f0c28u, 9u, 0u, 0x3ec6233du, 0), /* codecrypt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc2c04c84u, 5u, 0u, 0x70a1f611u, &g_termux_pkg_names[g_termux_pkg_name_offs[207u]]), /* codon */
#else
  RAF_PKG_INIT(0xc2c04c84u, 5u, 0u, 0x70a1f611u, 0), /* codon */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6b314042u, 10u, 0u, 0x2c561881u, &g_termux_pkg_names[g_termux_pkg_name_offs[208u]]), /* coinor-cbc */
#else
  RAF_PKG_INIT(0x6b314042u, 10u, 0u, 0x2c561881u, 0), /* coinor-cbc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6635b591u, 10u, 0u, 0x0d516a86u, &g_termux_pkg_names[g_termux_pkg_name_offs[209u]]), /* coinor-clp */
#else
  RAF_PKG_INIT(0x6635b591u, 10u, 0u, 0x0d516a86u, 0), /* coinor-clp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x60f71bafu, 7u, 0u, 0xc6e7326au, &g_termux_pkg_names[g_termux_pkg_name_offs[210u]]), /* cointop */
#else
  RAF_PKG_INIT(0x60f71bafu, 7u, 0u, 0xc6e7326au, 0), /* cointop */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf144e814u, 4u, 0u, 0xccb394a7u, &g_termux_pkg_names[g_termux_pkg_name_offs[211u]]), /* colm */
#else
  RAF_PKG_INIT(0xf144e814u, 4u, 0u, 0xccb394a7u, 0), /* colm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2fba9aefu, 9u, 0u, 0x33f33152u, &g_termux_pkg_names[g_termux_pkg_name_offs[212u]]), /* colordiff */
#else
  RAF_PKG_INIT(0x2fba9aefu, 9u, 0u, 0x33f33152u, 0), /* colordiff */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x44f58687u, 17u, 0u, 0x9ac4adf2u, &g_termux_pkg_names[g_termux_pkg_name_offs[213u]]), /* command-not-found */
#else
  RAF_PKG_INIT(0x44f58687u, 17u, 0u, 0x9ac4adf2u, 0), /* command-not-found */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8a35b313u, 8u, 0u, 0xbd921230u, &g_termux_pkg_names[g_termux_pkg_name_offs[214u]]), /* composer */
#else
  RAF_PKG_INIT(0x8a35b313u, 8u, 0u, 0xbd921230u, 0), /* composer */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x26859250u, 14u, 0u, 0xcc9853abu, &g_termux_pkg_names[g_termux_pkg_name_offs[215u]]), /* console-bridge */
#else
  RAF_PKG_INIT(0x26859250u, 14u, 0u, 0xcc9853abu, 0), /* console-bridge */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb031bda1u, 10u, 0u, 0xe2b9d372u, &g_termux_pkg_names[g_termux_pkg_name_offs[216u]]), /* convertlit */
#else
  RAF_PKG_INIT(0xb031bda1u, 10u, 0u, 0xe2b9d372u, 0), /* convertlit */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x72850e2du, 7u, 0u, 0xa9608a60u, &g_termux_pkg_names[g_termux_pkg_name_offs[217u]]), /* cookcli */
#else
  RAF_PKG_INIT(0x72850e2du, 7u, 0u, 0xa9608a60u, 0), /* cookcli */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4a02fe7bu, 9u, 0u, 0x02c19e16u, &g_termux_pkg_names[g_termux_pkg_name_offs[218u]]), /* coreutils */
#else
  RAF_PKG_INIT(0x4a02fe7bu, 9u, 0u, 0x02c19e16u, 0), /* coreutils */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x868cb423u, 5u, 0u, 0x536b471au, &g_termux_pkg_names[g_termux_pkg_name_offs[219u]]), /* corgi */
#else
  RAF_PKG_INIT(0x868cb423u, 5u, 0u, 0x536b471au, 0), /* corgi */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x51cd4300u, 9u, 0u, 0x933f4491u, &g_termux_pkg_names[g_termux_pkg_name_offs[220u]]), /* corkscrew */
#else
  RAF_PKG_INIT(0x51cd4300u, 9u, 0u, 0x933f4491u, 0), /* corkscrew */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x93f80051u, 9u, 0u, 0x769ac9bcu, &g_termux_pkg_names[g_termux_pkg_name_offs[221u]]), /* corrosion */
#else
  RAF_PKG_INIT(0x93f80051u, 9u, 0u, 0x769ac9bcu, 0), /* corrosion */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbcd8db43u, 6u, 0u, 0x556de994u, &g_termux_pkg_names[g_termux_pkg_name_offs[222u]]), /* cowsay */
#else
  RAF_PKG_INIT(0xbcd8db43u, 6u, 0u, 0x556de994u, 0), /* cowsay */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x76fd0a16u, 4u, 0u, 0xdb64e105u, &g_termux_pkg_names[g_termux_pkg_name_offs[223u]]), /* cpio */
#else
  RAF_PKG_INIT(0x76fd0a16u, 4u, 0u, 0xdb64e105u, 0), /* cpio */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x153d7642u, 8u, 0u, 0x33a9a995u, &g_termux_pkg_names[g_termux_pkg_name_offs[224u]]), /* cppcheck */
#else
  RAF_PKG_INIT(0x153d7642u, 8u, 0u, 0x33a9a995u, 0), /* cppcheck */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x550e1db1u, 4u, 0u, 0xf92cb7aeu, &g_termux_pkg_names[g_termux_pkg_name_offs[225u]]), /* cppi */
#else
  RAF_PKG_INIT(0x550e1db1u, 4u, 0u, 0xf92cb7aeu, 0), /* cppi */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc54a3b44u, 7u, 0u, 0x7f08a189u, &g_termux_pkg_names[g_termux_pkg_name_offs[226u]]), /* cppunit */
#else
  RAF_PKG_INIT(0xc54a3b44u, 7u, 0u, 0x7f08a189u, 0), /* cppunit */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe3e0c0a7u, 8u, 0u, 0xbbcd6164u, &g_termux_pkg_names[g_termux_pkg_name_offs[227u]]), /* cpufetch */
#else
  RAF_PKG_INIT(0xe3e0c0a7u, 8u, 0u, 0xbbcd6164u, 0), /* cpufetch */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x33cf95f8u, 8u, 0u, 0xf69c348fu, &g_termux_pkg_names[g_termux_pkg_name_offs[228u]]), /* cpulimit */
#else
  RAF_PKG_INIT(0x33cf95f8u, 8u, 0u, 0xf69c348fu, 0), /* cpulimit */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1e565680u, 5u, 0u, 0x4544b105u, &g_termux_pkg_names[g_termux_pkg_name_offs[229u]]), /* crawl */
#else
  RAF_PKG_INIT(0x1e565680u, 5u, 0u, 0x4544b105u, 0), /* crawl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa7632adau, 4u, 0u, 0x0b9964fdu, &g_termux_pkg_names[g_termux_pkg_name_offs[230u]]), /* croc */
#else
  RAF_PKG_INIT(0xa7632adau, 4u, 0u, 0x0b9964fdu, 0), /* croc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf7ba971fu, 6u, 0u, 0xb4524288u, &g_termux_pkg_names[g_termux_pkg_name_offs[231u]]), /* cronie */
#else
  RAF_PKG_INIT(0xf7ba971fu, 6u, 0u, 0xb4524288u, 0), /* cronie */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3f8170d3u, 8u, 0u, 0xf66d4814u, &g_termux_pkg_names[g_termux_pkg_name_offs[232u]]), /* crowbook */
#else
  RAF_PKG_INIT(0x3f8170d3u, 8u, 0u, 0xf66d4814u, 0), /* crowbook */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc398c3c8u, 6u, 0u, 0x666b317fu, &g_termux_pkg_names[g_termux_pkg_name_offs[233u]]), /* crunch */
#else
  RAF_PKG_INIT(0xc398c3c8u, 6u, 0u, 0x666b317fu, 0), /* crunch */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9331bf30u, 8u, 0u, 0xff5cea3fu, &g_termux_pkg_names[g_termux_pkg_name_offs[234u]]), /* cryptopp */
#else
  RAF_PKG_INIT(0x9331bf30u, 8u, 0u, 0xff5cea3fu, 0), /* cryptopp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4594fdc9u, 7u, 0u, 0x3c483174u, &g_termux_pkg_names[g_termux_pkg_name_offs[235u]]), /* crystal */
#else
  RAF_PKG_INIT(0x4594fdc9u, 7u, 0u, 0x3c483174u, 0), /* crystal */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x725d9f06u, 6u, 0u, 0xd3943f71u, &g_termux_pkg_names[g_termux_pkg_name_offs[236u]]), /* cscope */
#else
  RAF_PKG_INIT(0x725d9f06u, 6u, 0u, 0xd3943f71u, 0), /* cscope */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0e474901u, 3u, 0u, 0xc8dd4210u, &g_termux_pkg_names[g_termux_pkg_name_offs[237u]]), /* csh */
#else
  RAF_PKG_INIT(0x0e474901u, 3u, 0u, 0xc8dd4210u, 0), /* csh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x053b0468u, 4u, 0u, 0xb260f57bu, &g_termux_pkg_names[g_termux_pkg_name_offs[238u]]), /* csol */
#else
  RAF_PKG_INIT(0x053b0468u, 4u, 0u, 0xb260f57bu, 0), /* csol */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x110e8616u, 6u, 0u, 0xda8f5899u, &g_termux_pkg_names[g_termux_pkg_name_offs[239u]]), /* csview */
#else
  RAF_PKG_INIT(0x110e8616u, 6u, 0u, 0xda8f5899u, 0), /* csview */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcb0129dbu, 5u, 0u, 0xebef7aeeu, &g_termux_pkg_names[g_termux_pkg_name_offs[240u]]), /* ctags */
#else
  RAF_PKG_INIT(0xcb0129dbu, 5u, 0u, 0xebef7aeeu, 0), /* ctags */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xabdda729u, 9u, 0u, 0xf65a417cu, &g_termux_pkg_names[g_termux_pkg_name_offs[241u]]), /* ctypes-sh */
#else
  RAF_PKG_INIT(0xabdda729u, 9u, 0u, 0xf65a417cu, 0), /* ctypes-sh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe985e58bu, 8u, 0u, 0x663c6114u, &g_termux_pkg_names[g_termux_pkg_name_offs[242u]]), /* cuetools */
#else
  RAF_PKG_INIT(0xe985e58bu, 8u, 0u, 0x663c6114u, 0), /* cuetools */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x91b49f34u, 4u, 0u, 0x3cf29207u, &g_termux_pkg_names[g_termux_pkg_name_offs[243u]]), /* cups */
#else
  RAF_PKG_INIT(0x91b49f34u, 4u, 0u, 0x3cf29207u, 0), /* cups */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xaf89148bu, 8u, 0u, 0xdfbd19c4u, &g_termux_pkg_names[g_termux_pkg_name_offs[244u]]), /* cups-pdf */
#else
  RAF_PKG_INIT(0xaf89148bu, 8u, 0u, 0xdfbd19c4u, 0), /* cups-pdf */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x05c26fe9u, 6u, 0u, 0x0734306eu, &g_termux_pkg_names[g_termux_pkg_name_offs[245u]]), /* curlie */
#else
  RAF_PKG_INIT(0x05c26fe9u, 6u, 0u, 0x0734306eu, 0), /* curlie */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2cac0652u, 10u, 0u, 0xbf611f1du, &g_termux_pkg_names[g_termux_pkg_name_offs[246u]]), /* curseofwar */
#else
  RAF_PKG_INIT(0x2cac0652u, 10u, 0u, 0xbf611f1du, 0), /* curseofwar */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0b4f930du, 3u, 0u, 0xbbe9f98cu, &g_termux_pkg_names[g_termux_pkg_name_offs[247u]]), /* cvs */
#else
  RAF_PKG_INIT(0x0b4f930du, 3u, 0u, 0xbbe9f98cu, 0), /* cvs */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x911d2211u, 2u, 0u, 0xae4f9c06u, &g_termux_pkg_names[g_termux_pkg_name_offs[248u]]), /* d8 */
#else
  RAF_PKG_INIT(0x911d2211u, 2u, 0u, 0xae4f9c06u, 0), /* d8 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x568aaa9du, 9u, 0u, 0xfea85378u, &g_termux_pkg_names[g_termux_pkg_name_offs[249u]]), /* daemonize */
#else
  RAF_PKG_INIT(0x568aaa9du, 9u, 0u, 0xfea85378u, 0), /* daemonize */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd94f10acu, 3u, 0u, 0xd62f7aa9u, &g_termux_pkg_names[g_termux_pkg_name_offs[250u]]), /* dar */
#else
  RAF_PKG_INIT(0xd94f10acu, 3u, 0u, 0xd62f7aa9u, 0), /* dar */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd4f80a53u, 9u, 0u, 0xd427ce3eu, &g_termux_pkg_names[g_termux_pkg_name_offs[251u]]), /* darkhttpd */
#else
  RAF_PKG_INIT(0xd4f80a53u, 9u, 0u, 0xd427ce3eu, 0), /* darkhttpd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xef778408u, 4u, 0u, 0x09be69e7u, &g_termux_pkg_names[g_termux_pkg_name_offs[252u]]), /* dart */
#else
  RAF_PKG_INIT(0xef778408u, 4u, 0u, 0x09be69e7u, 0), /* dart */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcde18a66u, 5u, 0u, 0x71402effu, &g_termux_pkg_names[g_termux_pkg_name_offs[253u]]), /* dasel */
#else
  RAF_PKG_INIT(0xcde18a66u, 5u, 0u, 0x71402effu, 0), /* dasel */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0179def5u, 4u, 0u, 0x17bc415au, &g_termux_pkg_names[g_termux_pkg_name_offs[254u]]), /* dash */
#else
  RAF_PKG_INIT(0x0179def5u, 4u, 0u, 0x17bc415au, 0), /* dash */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfc79d716u, 4u, 0u, 0x14bc3ca1u, &g_termux_pkg_names[g_termux_pkg_name_offs[255u]]), /* dasm */
#else
  RAF_PKG_INIT(0xfc79d716u, 4u, 0u, 0x14bc3ca1u, 0), /* dasm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x48008990u, 8u, 0u, 0x284b123fu, &g_termux_pkg_names[g_termux_pkg_name_offs[256u]]), /* datamash */
#else
  RAF_PKG_INIT(0x48008990u, 8u, 0u, 0x284b123fu, 0), /* datamash */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1874cfb2u, 9u, 0u, 0xbca1721bu, &g_termux_pkg_names[g_termux_pkg_name_offs[257u]]), /* dateutils */
#else
  RAF_PKG_INIT(0x1874cfb2u, 9u, 0u, 0xbca1721bu, 0), /* dateutils */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x71eceb63u, 4u, 0u, 0xb6d47fbcu, &g_termux_pkg_names[g_termux_pkg_name_offs[258u]]), /* dbus */
#else
  RAF_PKG_INIT(0x71eceb63u, 4u, 0u, 0xb6d47fbcu, 0), /* dbus */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1b58d1ccu, 11u, 0u, 0xcc0781d5u, &g_termux_pkg_names[g_termux_pkg_name_offs[259u]]), /* dbus-python */
#else
  RAF_PKG_INIT(0x1b58d1ccu, 11u, 0u, 0xcc0781d5u, 0), /* dbus-python */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x502b0ca6u, 5u, 0u, 0x2a53eb2bu, &g_termux_pkg_names[g_termux_pkg_name_offs[260u]]), /* dcmtk */
#else
  RAF_PKG_INIT(0x502b0ca6u, 5u, 0u, 0x2a53eb2bu, 0), /* dcmtk */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdfbc2ef6u, 5u, 0u, 0xbe6899abu, &g_termux_pkg_names[g_termux_pkg_name_offs[261u]]), /* dcraw */
#else
  RAF_PKG_INIT(0xdfbc2ef6u, 5u, 0u, 0xbe6899abu, 0), /* dcraw */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0f96091cu, 8u, 0u, 0xb2bd38f7u, &g_termux_pkg_names[g_termux_pkg_name_offs[262u]]), /* ddrescue */
#else
  RAF_PKG_INIT(0x0f96091cu, 8u, 0u, 0xb2bd38f7u, 0), /* ddrescue */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x39207cedu, 11u, 0u, 0x7d390074u, &g_termux_pkg_names[g_termux_pkg_name_offs[263u]]), /* debianutils */
#else
  RAF_PKG_INIT(0x39207cedu, 11u, 0u, 0x7d390074u, 0), /* debianutils */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3eff6218u, 11u, 0u, 0x7ff3e131u, &g_termux_pkg_names[g_termux_pkg_name_offs[264u]]), /* debootstrap */
#else
  RAF_PKG_INIT(0x3eff6218u, 11u, 0u, 0x7ff3e131u, 0), /* debootstrap */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5afb52c3u, 5u, 0u, 0xbb58c3eeu, &g_termux_pkg_names[g_termux_pkg_name_offs[265u]]), /* delve */
#else
  RAF_PKG_INIT(0x5afb52c3u, 5u, 0u, 0xbb58c3eeu, 0), /* delve */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8ef64711u, 4u, 0u, 0xc4d67ae2u, &g_termux_pkg_names[g_termux_pkg_name_offs[266u]]), /* deno */
#else
  RAF_PKG_INIT(0x8ef64711u, 4u, 0u, 0xc4d67ae2u, 0), /* deno */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa5c8ae42u, 5u, 0u, 0xee0cbecbu, &g_termux_pkg_names[g_termux_pkg_name_offs[267u]]), /* desed */
#else
  RAF_PKG_INIT(0xa5c8ae42u, 5u, 0u, 0xee0cbecbu, 0), /* desed */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1c30b14eu, 6u, 0u, 0x3a052ce1u, &g_termux_pkg_names[g_termux_pkg_name_offs[268u]]), /* deutex */
#else
  RAF_PKG_INIT(0x1c30b14eu, 6u, 0u, 0x3a052ce1u, 0), /* deutex */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x33a28669u, 7u, 0u, 0x29580290u, &g_termux_pkg_names[g_termux_pkg_name_offs[269u]]), /* dex2jar */
#else
  RAF_PKG_INIT(0x33a28669u, 7u, 0u, 0x29580290u, 0), /* dex2jar */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0aa7f0b9u, 6u, 0u, 0x6784c84au, &g_termux_pkg_names[g_termux_pkg_name_offs[270u]]), /* dialog */
#else
  RAF_PKG_INIT(0x0aa7f0b9u, 6u, 0u, 0x6784c84au, 0), /* dialog */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x589f9d67u, 5u, 0u, 0x33b87f0eu, &g_termux_pkg_names[g_termux_pkg_name_offs[271u]]), /* dictd */
#else
  RAF_PKG_INIT(0x589f9d67u, 5u, 0u, 0x33b87f0eu, 0), /* dictd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x21c23cb7u, 13u, 0u, 0xa9b6947au, &g_termux_pkg_names[g_termux_pkg_name_offs[272u]]), /* diff-so-fancy */
#else
  RAF_PKG_INIT(0x21c23cb7u, 13u, 0u, 0xa9b6947au, 0), /* diff-so-fancy */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5208cdb0u, 8u, 0u, 0x03221fe3u, &g_termux_pkg_names[g_termux_pkg_name_offs[273u]]), /* diffstat */
#else
  RAF_PKG_INIT(0x5208cdb0u, 8u, 0u, 0x03221fe3u, 0), /* diffstat */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x10a2ee6au, 10u, 0u, 0x1c8b49edu, &g_termux_pkg_names[g_termux_pkg_name_offs[274u]]), /* difftastic */
#else
  RAF_PKG_INIT(0x10a2ee6au, 10u, 0u, 0x1c8b49edu, 0), /* difftastic */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2ebea2b7u, 9u, 0u, 0xec83800au, &g_termux_pkg_names[g_termux_pkg_name_offs[275u]]), /* diffutils */
#else
  RAF_PKG_INIT(0x2ebea2b7u, 9u, 0u, 0xec83800au, 0), /* diffutils */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5c5e2642u, 4u, 0u, 0x81274d79u, &g_termux_pkg_names[g_termux_pkg_name_offs[276u]]), /* dirb */
#else
  RAF_PKG_INIT(0x5c5e2642u, 4u, 0u, 0x81274d79u, 0), /* dirb */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6405cb93u, 6u, 0u, 0x32b82090u, &g_termux_pkg_names[g_termux_pkg_name_offs[277u]]), /* direnv */
#else
  RAF_PKG_INIT(0x6405cb93u, 6u, 0u, 0x32b82090u, 0), /* direnv */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8dd36b6cu, 8u, 0u, 0xb3271a3bu, &g_termux_pkg_names[g_termux_pkg_name_offs[278u]]), /* direvent */
#else
  RAF_PKG_INIT(0x8dd36b6cu, 8u, 0u, 0xb3271a3bu, 0), /* direvent */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8d308ce0u, 8u, 0u, 0xaa809f03u, &g_termux_pkg_names[g_termux_pkg_name_offs[279u]]), /* discordo */
#else
  RAF_PKG_INIT(0x8d308ce0u, 8u, 0u, 0xaa809f03u, 0), /* discordo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x127e5c5eu, 8u, 0u, 0xed80364du, &g_termux_pkg_names[g_termux_pkg_name_offs[280u]]), /* discount */
#else
  RAF_PKG_INIT(0x127e5c5eu, 8u, 0u, 0xed80364du, 0), /* discount */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4800db50u, 6u, 0u, 0xaa7175b7u, &g_termux_pkg_names[g_termux_pkg_name_offs[281u]]), /* diskus */
#else
  RAF_PKG_INIT(0x4800db50u, 6u, 0u, 0xaa7175b7u, 0), /* diskus */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa28f8042u, 7u, 0u, 0x6e2906e7u, &g_termux_pkg_names[g_termux_pkg_name_offs[282u]]), /* distant */
#else
  RAF_PKG_INIT(0xa28f8042u, 7u, 0u, 0x6e2906e7u, 0), /* distant */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6a30c127u, 6u, 0u, 0x9b6c049cu, &g_termux_pkg_names[g_termux_pkg_name_offs[283u]]), /* distcc */
#else
  RAF_PKG_INIT(0x6a30c127u, 6u, 0u, 0x9b6c049cu, 0), /* distcc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdec45400u, 9u, 0u, 0x11c060edu, &g_termux_pkg_names[g_termux_pkg_name_offs[284u]]), /* djvulibre */
#else
  RAF_PKG_INIT(0xdec45400u, 9u, 0u, 0x11c060edu, 0), /* djvulibre */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa2f82075u, 9u, 0u, 0xeb08f6acu, &g_termux_pkg_names[g_termux_pkg_name_offs[285u]]), /* dmagnetic */
#else
  RAF_PKG_INIT(0xa2f82075u, 9u, 0u, 0xeb08f6acu, 0), /* dmagnetic */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4f718f4au, 10u, 0u, 0x1f5ef371u, &g_termux_pkg_names[g_termux_pkg_name_offs[286u]]), /* dmtx-utils */
#else
  RAF_PKG_INIT(0x4f718f4au, 10u, 0u, 0x1f5ef371u, 0), /* dmtx-utils */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb52e1067u, 6u, 0u, 0x45aa4380u, &g_termux_pkg_names[g_termux_pkg_name_offs[287u]]), /* dnglab */
#else
  RAF_PKG_INIT(0xb52e1067u, 6u, 0u, 0x45aa4380u, 0), /* dnglab */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa3fd6473u, 5u, 0u, 0x7f814706u, &g_termux_pkg_names[g_termux_pkg_name_offs[288u]]), /* dnote */
#else
  RAF_PKG_INIT(0xa3fd6473u, 5u, 0u, 0x7f814706u, 0), /* dnote */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9c51542du, 12u, 0u, 0xfe7f6fb6u, &g_termux_pkg_names[g_termux_pkg_name_offs[289u]]), /* dnote-server */
#else
  RAF_PKG_INIT(0x9c51542du, 12u, 0u, 0xfe7f6fb6u, 0), /* dnote-server */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd2f3f311u, 7u, 0u, 0xa4cbad18u, &g_termux_pkg_names[g_termux_pkg_name_offs[290u]]), /* dns2tcp */
#else
  RAF_PKG_INIT(0xd2f3f311u, 7u, 0u, 0xa4cbad18u, 0), /* dns2tcp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3af3efc1u, 10u, 0u, 0x37cc0ec6u, &g_termux_pkg_names[g_termux_pkg_name_offs[291u]]), /* dnscontrol */
#else
  RAF_PKG_INIT(0x3af3efc1u, 10u, 0u, 0x37cc0ec6u, 0), /* dnscontrol */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x34dcbc82u, 9u, 0u, 0x1ae8ffe3u, &g_termux_pkg_names[g_termux_pkg_name_offs[292u]]), /* dnslookup */
#else
  RAF_PKG_INIT(0x34dcbc82u, 9u, 0u, 0x1ae8ffe3u, 0), /* dnslookup */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x92cdac02u, 6u, 0u, 0xfbd80dc9u, &g_termux_pkg_names[g_termux_pkg_name_offs[293u]]), /* dnsmap */
#else
  RAF_PKG_INIT(0x92cdac02u, 6u, 0u, 0xfbd80dc9u, 0), /* dnsmap */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbb74c0ffu, 6u, 0u, 0x13755374u, &g_termux_pkg_names[g_termux_pkg_name_offs[294u]]), /* dnstop */
#else
  RAF_PKG_INIT(0xbb74c0ffu, 6u, 0u, 0x13755374u, 0), /* dnstop */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe23a1bc9u, 8u, 0u, 0xc7c2fcd6u, &g_termux_pkg_names[g_termux_pkg_name_offs[295u]]), /* dnsutils */
#else
  RAF_PKG_INIT(0xe23a1bc9u, 8u, 0u, 0xc7c2fcd6u, 0), /* dnsutils */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x10744afcu, 11u, 0u, 0xc946583du, &g_termux_pkg_names[g_termux_pkg_name_offs[296u]]), /* docbook-xml */
#else
  RAF_PKG_INIT(0x10744afcu, 11u, 0u, 0xc946583du, 0), /* docbook-xml */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf498442au, 11u, 0u, 0xe5407423u, &g_termux_pkg_names[g_termux_pkg_name_offs[297u]]), /* docbook-xsl */
#else
  RAF_PKG_INIT(0xf498442au, 11u, 0u, 0xe5407423u, 0), /* docbook-xsl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x53279daau, 6u, 0u, 0x62e1f045u, &g_termux_pkg_names[g_termux_pkg_name_offs[298u]]), /* docopt */
#else
  RAF_PKG_INIT(0x53279daau, 6u, 0u, 0x62e1f045u, 0), /* docopt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc74c21d5u, 7u, 0u, 0xbe4d5640u, &g_termux_pkg_names[g_termux_pkg_name_offs[299u]]), /* doctest */
#else
  RAF_PKG_INIT(0xc74c21d5u, 7u, 0u, 0xbe4d5640u, 0), /* doctest */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x22e23104u, 4u, 0u, 0x8b17c587u, &g_termux_pkg_names[g_termux_pkg_name_offs[300u]]), /* doge */
#else
  RAF_PKG_INIT(0x22e23104u, 4u, 0u, 0x8b17c587u, 0), /* doge */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf417a23cu, 8u, 0u, 0xc863f513u, &g_termux_pkg_names[g_termux_pkg_name_offs[301u]]), /* dopewars */
#else
  RAF_PKG_INIT(0xf417a23cu, 8u, 0u, 0xc863f513u, 0), /* dopewars */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6695d753u, 8u, 0u, 0x43719730u, &g_termux_pkg_names[g_termux_pkg_name_offs[302u]]), /* dos2unix */
#else
  RAF_PKG_INIT(0x6695d753u, 8u, 0u, 0x43719730u, 0), /* dos2unix */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6dc7d6d1u, 10u, 0u, 0xc010065eu, &g_termux_pkg_names[g_termux_pkg_name_offs[303u]]), /* dosfstools */
#else
  RAF_PKG_INIT(0x6dc7d6d1u, 10u, 0u, 0xc010065eu, 0), /* dosfstools */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1fd8fee6u, 7u, 0u, 0x4ef0ee1bu, &g_termux_pkg_names[g_termux_pkg_name_offs[304u]]), /* dotconf */
#else
  RAF_PKG_INIT(0x1fd8fee6u, 7u, 0u, 0x4ef0ee1bu, 0), /* dotconf */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xff550f3cu, 11u, 0u, 0xf85faf45u, &g_termux_pkg_names[g_termux_pkg_name_offs[305u]]), /* dotnet-host */
#else
  RAF_PKG_INIT(0xff550f3cu, 11u, 0u, 0xf85faf45u, 0), /* dotnet-host */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe722b1e4u, 10u, 0u, 0x84e2f55bu, &g_termux_pkg_names[g_termux_pkg_name_offs[306u]]), /* dotnet10.0 */
#else
  RAF_PKG_INIT(0xe722b1e4u, 10u, 0u, 0x84e2f55bu, 0), /* dotnet10.0 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb5b74a2fu, 9u, 0u, 0x8ef1828au, &g_termux_pkg_names[g_termux_pkg_name_offs[307u]]), /* dotnet8.0 */
#else
  RAF_PKG_INIT(0xb5b74a2fu, 9u, 0u, 0x8ef1828au, 0), /* dotnet8.0 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4f78b608u, 9u, 0u, 0x75ceb0f1u, &g_termux_pkg_names[g_termux_pkg_name_offs[308u]]), /* dotnet9.0 */
#else
  RAF_PKG_INIT(0x4f78b608u, 9u, 0u, 0x75ceb0f1u, 0), /* dotnet9.0 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf8f8bacfu, 17u, 0u, 0x1fa3b7eeu, &g_termux_pkg_names[g_termux_pkg_name_offs[309u]]), /* double-conversion */
#else
  RAF_PKG_INIT(0xf8f8bacfu, 17u, 0u, 0x1fa3b7eeu, 0), /* double-conversion */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x11558123u, 7u, 0u, 0x819ce4ceu, &g_termux_pkg_names[g_termux_pkg_name_offs[310u]]), /* doxygen */
#else
  RAF_PKG_INIT(0x11558123u, 7u, 0u, 0x819ce4ceu, 0), /* doxygen */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x91ad2963u, 4u, 0u, 0xbe8a0a98u, &g_termux_pkg_names[g_termux_pkg_name_offs[311u]]), /* dpkg */
#else
  RAF_PKG_INIT(0x91ad2963u, 4u, 0u, 0xbe8a0a98u, 0), /* dpkg */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb08349a0u, 5u, 0u, 0xd28b2285u, &g_termux_pkg_names[g_termux_pkg_name_offs[312u]]), /* draco */
#else
  RAF_PKG_INIT(0xb08349a0u, 5u, 0u, 0xd28b2285u, 0), /* draco */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x89d973f2u, 8u, 0u, 0xd35ba835u, &g_termux_pkg_names[g_termux_pkg_name_offs[313u]]), /* dropbear */
#else
  RAF_PKG_INIT(0x89d973f2u, 8u, 0u, 0xd35ba835u, 0), /* dropbear */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3096b8afu, 5u, 0u, 0x549e94bau, &g_termux_pkg_names[g_termux_pkg_name_offs[314u]]), /* dtach */
#else
  RAF_PKG_INIT(0x3096b8afu, 5u, 0u, 0x549e94bau, 0), /* dtach */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xca34b592u, 3u, 0u, 0xd50f256bu, &g_termux_pkg_names[g_termux_pkg_name_offs[315u]]), /* dtc */
#else
  RAF_PKG_INIT(0xca34b592u, 3u, 0u, 0xd50f256bu, 0), /* dtc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc434ac20u, 3u, 0u, 0xdb0f2eddu, &g_termux_pkg_names[g_termux_pkg_name_offs[316u]]), /* dte */
#else
  RAF_PKG_INIT(0xc434ac20u, 3u, 0u, 0xdb0f2eddu, 0), /* dte */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe4310ce9u, 3u, 0u, 0xfb119fd4u, &g_termux_pkg_names[g_termux_pkg_name_offs[317u]]), /* dua */
#else
  RAF_PKG_INIT(0xe4310ce9u, 3u, 0u, 0xfb119fd4u, 0), /* dua */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe23109c3u, 3u, 0u, 0xfd11a2fau, &g_termux_pkg_names[g_termux_pkg_name_offs[318u]]), /* duc */
#else
  RAF_PKG_INIT(0xe23109c3u, 3u, 0u, 0xfd11a2fau, 0), /* duc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe5310e7cu, 3u, 0u, 0xfa119e41u, &g_termux_pkg_names[g_termux_pkg_name_offs[319u]]), /* duf */
#else
  RAF_PKG_INIT(0xe5310e7cu, 3u, 0u, 0xfa119e41u, 0), /* duf */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdb39219du, 4u, 0u, 0xdbbc08b6u, &g_termux_pkg_names[g_termux_pkg_name_offs[320u]]), /* dufs */
#else
  RAF_PKG_INIT(0xdb39219du, 4u, 0u, 0xdbbc08b6u, 0), /* dufs */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xca0b3ba5u, 4u, 0u, 0xf09bd61au, &g_termux_pkg_names[g_termux_pkg_name_offs[321u]]), /* dust */
#else
  RAF_PKG_INIT(0xca0b3ba5u, 4u, 0u, 0xf09bd61au, 0), /* dust */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x17895ebau, 9u, 0u, 0xa4f28793u, &g_termux_pkg_names[g_termux_pkg_name_offs[322u]]), /* dvdauthor */
#else
  RAF_PKG_INIT(0x17895ebau, 9u, 0u, 0xa4f28793u, 0), /* dvdauthor */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x70bb72d4u, 4u, 0u, 0xafc93487u, &g_termux_pkg_names[g_termux_pkg_name_offs[323u]]), /* dvtm */
#else
  RAF_PKG_INIT(0x70bb72d4u, 4u, 0u, 0xafc93487u, 0), /* dvtm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5f1a197bu, 7u, 0u, 0xba749752u, &g_termux_pkg_names[g_termux_pkg_name_offs[324u]]), /* dwarves */
#else
  RAF_PKG_INIT(0x5f1a197bu, 7u, 0u, 0xba749752u, 0), /* dwarves */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x511cbd51u, 2u, 0u, 0xee5000c6u, &g_termux_pkg_names[g_termux_pkg_name_offs[325u]]), /* dx */
#else
  RAF_PKG_INIT(0x511cbd51u, 2u, 0u, 0xee5000c6u, 0), /* dx */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x09f2bfb6u, 9u, 0u, 0xfcbfc197u, &g_termux_pkg_names[g_termux_pkg_name_offs[326u]]), /* e2fsprogs */
#else
  RAF_PKG_INIT(0x09f2bfb6u, 9u, 0u, 0xfcbfc197u, 0), /* e2fsprogs */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x15f00b09u, 7u, 0u, 0x37061604u, &g_termux_pkg_names[g_termux_pkg_name_offs[327u]]), /* e2tools */
#else
  RAF_PKG_INIT(0x15f00b09u, 7u, 0u, 0x37061604u, 0), /* e2tools */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0ade0603u, 11u, 0u, 0x653826a6u, &g_termux_pkg_names[g_termux_pkg_name_offs[328u]]), /* ebook-tools */
#else
  RAF_PKG_INIT(0x0ade0603u, 11u, 0u, 0x653826a6u, 0), /* ebook-tools */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7e72bea9u, 3u, 0u, 0x387702e0u, &g_termux_pkg_names[g_termux_pkg_name_offs[329u]]), /* ecj */
#else
  RAF_PKG_INIT(0x7e72bea9u, 3u, 0u, 0x387702e0u, 0), /* ecj */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8072c1cfu, 3u, 0u, 0x3e770c52u, &g_termux_pkg_names[g_termux_pkg_name_offs[330u]]), /* ecl */
#else
  RAF_PKG_INIT(0x8072c1cfu, 3u, 0u, 0x3e770c52u, 0), /* ecl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x371a55ccu, 2u, 0u, 0xe85235ebu, &g_termux_pkg_names[g_termux_pkg_name_offs[331u]]), /* ed */
#else
  RAF_PKG_INIT(0x371a55ccu, 2u, 0u, 0xe85235ebu, 0), /* ed */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x347fb5aeu, 8u, 0u, 0x88a98179u, &g_termux_pkg_names[g_termux_pkg_name_offs[332u]]), /* edbrowse */
#else
  RAF_PKG_INIT(0x347fb5aeu, 8u, 0u, 0x88a98179u, 0), /* edbrowse */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x57037622u, 19u, 0u, 0xe7796773u, &g_termux_pkg_names[g_termux_pkg_name_offs[333u]]), /* editorconfig-core-c */
#else
  RAF_PKG_INIT(0x57037622u, 19u, 0u, 0xe7796773u, 0), /* editorconfig-core-c */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf0deda07u, 5u, 0u, 0x74c34b56u, &g_termux_pkg_names[g_termux_pkg_name_offs[334u]]), /* eigen */
#else
  RAF_PKG_INIT(0xf0deda07u, 5u, 0u, 0x74c34b56u, 0), /* eigen */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8f84228du, 3u, 0u, 0x3765b82cu, &g_termux_pkg_names[g_termux_pkg_name_offs[335u]]), /* eja */
#else
  RAF_PKG_INIT(0x8f84228du, 3u, 0u, 0x3765b82cu, 0), /* eja */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd2007d52u, 14u, 0u, 0xf3957721u, &g_termux_pkg_names[g_termux_pkg_name_offs[336u]]), /* electric-fence */
#else
  RAF_PKG_INIT(0xd2007d52u, 14u, 0u, 0xf3957721u, 0), /* electric-fence */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf7bde250u, 8u, 0u, 0xa74013b7u, &g_termux_pkg_names[g_termux_pkg_name_offs[337u]]), /* electrum */
#else
  RAF_PKG_INIT(0xf7bde250u, 8u, 0u, 0xa74013b7u, 0), /* electrum */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x70fdd359u, 6u, 0u, 0x384adc86u, &g_termux_pkg_names[g_termux_pkg_name_offs[338u]]), /* elinks */
#else
  RAF_PKG_INIT(0x70fdd359u, 6u, 0u, 0x384adc86u, 0), /* elinks */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x483cfa2au, 6u, 0u, 0x96f4bbb9u, &g_termux_pkg_names[g_termux_pkg_name_offs[339u]]), /* elixir */
#else
  RAF_PKG_INIT(0x483cfa2au, 6u, 0u, 0x96f4bbb9u, 0), /* elixir */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x68c2d304u, 7u, 0u, 0x98767639u, &g_termux_pkg_names[g_termux_pkg_name_offs[340u]]), /* eltclsh */
#else
  RAF_PKG_INIT(0x68c2d304u, 7u, 0u, 0x98767639u, 0), /* eltclsh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x61b99fd6u, 6u, 0u, 0x47e21131u, &g_termux_pkg_names[g_termux_pkg_name_offs[341u]]), /* elvish */
#else
  RAF_PKG_INIT(0x61b99fd6u, 6u, 0u, 0x47e21131u, 0), /* elvish */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6f6d9160u, 5u, 0u, 0xd777f679u, &g_termux_pkg_names[g_termux_pkg_name_offs[342u]]), /* emacs */
#else
  RAF_PKG_INIT(0x6f6d9160u, 5u, 0u, 0xd777f679u, 0), /* emacs */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8997b361u, 10u, 0u, 0x152b96fau, &g_termux_pkg_names[g_termux_pkg_name_offs[343u]]), /* emmylua-ls */
#else
  RAF_PKG_INIT(0x8997b361u, 10u, 0u, 0x152b96fau, 0), /* emmylua-ls */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8679e093u, 10u, 0u, 0xd90dc934u, &g_termux_pkg_names[g_termux_pkg_name_offs[344u]]), /* emscripten */
#else
  RAF_PKG_INIT(0x8679e093u, 10u, 0u, 0xd90dc934u, 0), /* emscripten */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x318f6211u, 7u, 0u, 0x74334dc4u, &g_termux_pkg_names[g_termux_pkg_name_offs[345u]]), /* enblend */
#else
  RAF_PKG_INIT(0x318f6211u, 7u, 0u, 0x74334dc4u, 0), /* enblend */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf21d6772u, 7u, 0u, 0x054073e3u, &g_termux_pkg_names[g_termux_pkg_name_offs[346u]]), /* enchant */
#else
  RAF_PKG_INIT(0xf21d6772u, 7u, 0u, 0x054073e3u, 0), /* enchant */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x03b653a1u, 8u, 0u, 0xeeff08b6u, &g_termux_pkg_names[g_termux_pkg_name_offs[347u]]), /* enscript */
#else
  RAF_PKG_INIT(0x03b653a1u, 8u, 0u, 0xeeff08b6u, 0), /* enscript */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x966a9278u, 4u, 0u, 0xd0cb8fdfu, &g_termux_pkg_names[g_termux_pkg_name_offs[348u]]), /* entr */
#else
  RAF_PKG_INIT(0x966a9278u, 4u, 0u, 0xd0cb8fdfu, 0), /* entr */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0544f88au, 6u, 0u, 0x8fe54c1du, &g_termux_pkg_names[g_termux_pkg_name_offs[349u]]), /* erlang */
#else
  RAF_PKG_INIT(0x0544f88au, 6u, 0u, 0x8fe54c1du, 0), /* erlang */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc81d5097u, 7u, 0u, 0x02152762u, &g_termux_pkg_names[g_termux_pkg_name_offs[350u]]), /* esbuild */
#else
  RAF_PKG_INIT(0xc81d5097u, 7u, 0u, 0x02152762u, 0), /* esbuild */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x28b4b87eu, 6u, 0u, 0xfa4bb751u, &g_termux_pkg_names[g_termux_pkg_name_offs[351u]]), /* espeak */
#else
  RAF_PKG_INIT(0x28b4b87eu, 6u, 0u, 0xfa4bb751u, 0), /* espeak */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x471a6efcu, 2u, 0u, 0xf8524f1bu, &g_termux_pkg_names[g_termux_pkg_name_offs[352u]]), /* et */
#else
  RAF_PKG_INIT(0x471a6efcu, 2u, 0u, 0xf8524f1bu, 0), /* et */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x31a6092fu, 4u, 0u, 0x3a6a4770u, &g_termux_pkg_names[g_termux_pkg_name_offs[353u]]), /* etsh */
#else
  RAF_PKG_INIT(0x31a6092fu, 4u, 0u, 0x3a6a4770u, 0), /* etsh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xed670d63u, 8u, 0u, 0xd34e1548u, &g_termux_pkg_names[g_termux_pkg_name_offs[354u]]), /* exercism */
#else
  RAF_PKG_INIT(0xed670d63u, 8u, 0u, 0xd34e1548u, 0), /* exercism */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3897d970u, 10u, 0u, 0xefefe08fu, &g_termux_pkg_names[g_termux_pkg_name_offs[355u]]), /* exfatprogs */
#else
  RAF_PKG_INIT(0x3897d970u, 10u, 0u, 0xefefe08fu, 0), /* exfatprogs */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xed832398u, 6u, 0u, 0x6d34635fu, &g_termux_pkg_names[g_termux_pkg_name_offs[356u]]), /* exhale */
#else
  RAF_PKG_INIT(0xed832398u, 6u, 0u, 0x6d34635fu, 0), /* exhale */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7923f829u, 8u, 0u, 0xbb997c66u, &g_termux_pkg_names[g_termux_pkg_name_offs[357u]]), /* exiftool */
#else
  RAF_PKG_INIT(0x7923f829u, 8u, 0u, 0xbb997c66u, 0), /* exiftool */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x733be097u, 5u, 0u, 0xb39945bau, &g_termux_pkg_names[g_termux_pkg_name_offs[358u]]), /* exiv2 */
#else
  RAF_PKG_INIT(0x733be097u, 5u, 0u, 0xb39945bau, 0), /* exiv2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x96da6b58u, 6u, 0u, 0xb23e690fu, &g_termux_pkg_names[g_termux_pkg_name_offs[359u]]), /* expect */
#else
  RAF_PKG_INIT(0x96da6b58u, 6u, 0u, 0xb23e690fu, 0), /* expect */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6faaff9du, 3u, 0u, 0x578cf9fcu, &g_termux_pkg_names[g_termux_pkg_name_offs[360u]]), /* eza */
#else
  RAF_PKG_INIT(0x6faaff9du, 3u, 0u, 0x578cf9fcu, 0), /* eza */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbcfbb5f5u, 6u, 0u, 0x6a8dff3eu, &g_termux_pkg_names[g_termux_pkg_name_offs[361u]]), /* fact++ */
#else
  RAF_PKG_INIT(0xbcfbb5f5u, 6u, 0u, 0x6a8dff3eu, 0), /* fact++ */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa5a4c1a4u, 8u, 0u, 0x62b5f447u, &g_termux_pkg_names[g_termux_pkg_name_offs[362u]]), /* fakeroot */
#else
  RAF_PKG_INIT(0xa5a4c1a4u, 8u, 0u, 0x62b5f447u, 0), /* fakeroot */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf293e97fu, 4u, 0u, 0xe6f183f0u, &g_termux_pkg_names[g_termux_pkg_name_offs[363u]]), /* fasd */
#else
  RAF_PKG_INIT(0xf293e97fu, 4u, 0u, 0xe6f183f0u, 0), /* fasd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5cc79129u, 9u, 0u, 0xd2dc2d48u, &g_termux_pkg_names[g_termux_pkg_name_offs[364u]]), /* fastfetch */
#else
  RAF_PKG_INIT(0x5cc79129u, 9u, 0u, 0xd2dc2d48u, 0), /* fastfetch */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0ab0355du, 7u, 0u, 0x0d729da4u, &g_termux_pkg_names[g_termux_pkg_name_offs[365u]]), /* fastmod */
#else
  RAF_PKG_INIT(0x0ab0355du, 7u, 0u, 0x0d729da4u, 0), /* fastmod */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd1a72fb0u, 7u, 0u, 0x18b9810du, &g_termux_pkg_names[g_termux_pkg_name_offs[366u]]), /* fatsort */
#else
  RAF_PKG_INIT(0xd1a72fb0u, 7u, 0u, 0x18b9810du, 0), /* fatsort */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbd1dbfd8u, 5u, 0u, 0x3f32dcc9u, &g_termux_pkg_names[g_termux_pkg_name_offs[367u]]), /* faust */
#else
  RAF_PKG_INIT(0xbd1dbfd8u, 5u, 0u, 0x3f32dcc9u, 0), /* faust */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd667bca7u, 7u, 0u, 0x3eb05feeu, &g_termux_pkg_names[g_termux_pkg_name_offs[368u]]), /* fclones */
#else
  RAF_PKG_INIT(0xd667bca7u, 7u, 0u, 0x3eb05feeu, 0), /* fclones */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc6fe39dau, 3u, 0u, 0x008b049fu, &g_termux_pkg_names[g_termux_pkg_name_offs[369u]]), /* fcp */
#else
  RAF_PKG_INIT(0xc6fe39dau, 3u, 0u, 0x008b049fu, 0), /* fcp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6922f347u, 2u, 0u, 0xf649fd30u, &g_termux_pkg_names[g_termux_pkg_name_offs[370u]]), /* fd */
#else
  RAF_PKG_INIT(0x6922f347u, 2u, 0u, 0xf649fd30u, 0), /* fd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbc167ddbu, 6u, 0u, 0xb23f40d0u, &g_termux_pkg_names[g_termux_pkg_name_offs[371u]]), /* fdkaac */
#else
  RAF_PKG_INIT(0xbc167ddbu, 6u, 0u, 0xb23f40d0u, 0), /* fdkaac */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xac04cb1eu, 3u, 0u, 0x1379d967u, &g_termux_pkg_names[g_termux_pkg_name_offs[372u]]), /* fdm */
#else
  RAF_PKG_INIT(0xac04cb1eu, 3u, 0u, 0x1379d967u, 0), /* fdm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x47b694e2u, 8u, 0u, 0xe59fe989u, &g_termux_pkg_names[g_termux_pkg_name_offs[373u]]), /* fdroidcl */
#else
  RAF_PKG_INIT(0x47b694e2u, 8u, 0u, 0xe59fe989u, 0), /* fdroidcl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xff89ab72u, 6u, 0u, 0xc5757221u, &g_termux_pkg_names[g_termux_pkg_name_offs[374u]]), /* fdupes */
#else
  RAF_PKG_INIT(0xff89ab72u, 6u, 0u, 0xc5757221u, 0), /* fdupes */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb3448729u, 6u, 0u, 0xe69f98a2u, &g_termux_pkg_names[g_termux_pkg_name_offs[375u]]), /* fennel */
#else
  RAF_PKG_INIT(0xb3448729u, 6u, 0u, 0xe69f98a2u, 0), /* fennel */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x93aaf8f4u, 11u, 0u, 0x94a60525u, &g_termux_pkg_names[g_termux_pkg_name_offs[376u]]), /* feroxbuster */
#else
  RAF_PKG_INIT(0x93aaf8f4u, 11u, 0u, 0x94a60525u, 0), /* feroxbuster */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7d83d2acu, 9u, 0u, 0xe149d43du, &g_termux_pkg_names[g_termux_pkg_name_offs[377u]]), /* fetchmail */
#else
  RAF_PKG_INIT(0x7d83d2acu, 9u, 0u, 0xe149d43du, 0), /* fetchmail */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb3095351u, 3u, 0u, 0x0c7e4b90u, &g_termux_pkg_names[g_termux_pkg_name_offs[378u]]), /* fff */
#else
  RAF_PKG_INIT(0xb3095351u, 3u, 0u, 0x0c7e4b90u, 0), /* fff */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1b873b98u, 6u, 0u, 0x19bc75efu, &g_termux_pkg_names[g_termux_pkg_name_offs[379u]]), /* ffmpeg */
#else
  RAF_PKG_INIT(0x1b873b98u, 6u, 0u, 0x19bc75efu, 0), /* ffmpeg */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xad4d8ac3u, 17u, 0u, 0x3cafd3b6u, &g_termux_pkg_names[g_termux_pkg_name_offs[380u]]), /* ffmpegthumbnailer */
#else
  RAF_PKG_INIT(0xad4d8ac3u, 17u, 0u, 0x3cafd3b6u, 0), /* ffmpegthumbnailer */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x25389707u, 6u, 0u, 0x7bd075acu, &g_termux_pkg_names[g_termux_pkg_name_offs[381u]]), /* ffsend */
#else
  RAF_PKG_INIT(0x25389707u, 6u, 0u, 0x7bd075acu, 0), /* ffsend */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0dd09044u, 4u, 0u, 0x91aeea63u, &g_termux_pkg_names[g_termux_pkg_name_offs[382u]]), /* fftw */
#else
  RAF_PKG_INIT(0x0dd09044u, 4u, 0u, 0x91aeea63u, 0), /* fftw */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x01cb83cau, 6u, 0u, 0xf6ec0585u, &g_termux_pkg_names[g_termux_pkg_name_offs[383u]]), /* figlet */
#else
  RAF_PKG_INIT(0x01cb83cau, 6u, 0u, 0xf6ec0585u, 0), /* figlet */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xaaea5743u, 4u, 0u, 0x4e72a61cu, &g_termux_pkg_names[g_termux_pkg_name_offs[384u]]), /* file */
#else
  RAF_PKG_INIT(0xaaea5743u, 4u, 0u, 0x4e72a61cu, 0), /* file */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3594e4e9u, 5u, 0u, 0x0ec3f4d0u, &g_termux_pkg_names[g_termux_pkg_name_offs[385u]]), /* finch */
#else
  RAF_PKG_INIT(0x3594e4e9u, 5u, 0u, 0x0ec3f4d0u, 0), /* finch */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xef624f9eu, 9u, 0u, 0xe2ad7a5fu, &g_termux_pkg_names[g_termux_pkg_name_offs[386u]]), /* findomain */
#else
  RAF_PKG_INIT(0xef624f9eu, 9u, 0u, 0xe2ad7a5fu, 0), /* findomain */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd7981db7u, 9u, 0u, 0x379e5836u, &g_termux_pkg_names[g_termux_pkg_name_offs[387u]]), /* findutils */
#else
  RAF_PKG_INIT(0xd7981db7u, 9u, 0u, 0x379e5836u, 0), /* findutils */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xafad8963u, 4u, 0u, 0x59887dbcu, &g_termux_pkg_names[g_termux_pkg_name_offs[388u]]), /* fish */
#else
  RAF_PKG_INIT(0xafad8963u, 4u, 0u, 0x59887dbcu, 0), /* fish */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9851ad91u, 5u, 0u, 0xd6266648u, &g_termux_pkg_names[g_termux_pkg_name_offs[389u]]), /* flang */
#else
  RAF_PKG_INIT(0x9851ad91u, 5u, 0u, 0xd6266648u, 0), /* flang */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x00afc975u, 11u, 0u, 0x149dd590u, &g_termux_pkg_names[g_termux_pkg_name_offs[390u]]), /* flatbuffers */
#else
  RAF_PKG_INIT(0x00afc975u, 11u, 0u, 0x149dd590u, 0), /* flatbuffers */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcae02ff2u, 4u, 0u, 0x2e542afdu, &g_termux_pkg_names[g_termux_pkg_name_offs[391u]]), /* flex */
#else
  RAF_PKG_INIT(0xcae02ff2u, 4u, 0u, 0x2e542afdu, 0), /* flex */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0ce8e36bu, 10u, 0u, 0x6d699a84u, &g_termux_pkg_names[g_termux_pkg_name_offs[392u]]), /* fluidsynth */
#else
  RAF_PKG_INIT(0x0ce8e36bu, 10u, 0u, 0x6d699a84u, 0), /* fluidsynth */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5e4e71ebu, 6u, 0u, 0x41bd8110u, &g_termux_pkg_names[g_termux_pkg_name_offs[393u]]), /* flyctl */
#else
  RAF_PKG_INIT(0x5e4e71ebu, 6u, 0u, 0x41bd8110u, 0), /* flyctl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6022e51cu, 2u, 0u, 0xff4a0b5bu, &g_termux_pkg_names[g_termux_pkg_name_offs[394u]]), /* fm */
#else
  RAF_PKG_INIT(0x6022e51cu, 2u, 0u, 0xff4a0b5bu, 0), /* fm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbeef22b8u, 3u, 0u, 0x108f9afdu, &g_termux_pkg_names[g_termux_pkg_name_offs[395u]]), /* fmt */
#else
  RAF_PKG_INIT(0xbeef22b8u, 3u, 0u, 0x108f9afdu, 0), /* fmt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7e0bae3eu, 10u, 0u, 0xa0e11b59u, &g_termux_pkg_names[g_termux_pkg_name_offs[396u]]), /* fontconfig */
#else
  RAF_PKG_INIT(0x7e0bae3eu, 10u, 0u, 0xa0e11b59u, 0), /* fontconfig */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x40c8d4b3u, 7u, 0u, 0x3183070eu, &g_termux_pkg_names[g_termux_pkg_name_offs[397u]]), /* forgejo */
#else
  RAF_PKG_INIT(0x40c8d4b3u, 7u, 0u, 0x3183070eu, 0), /* forgejo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe6a5f23eu, 7u, 0u, 0x54888797u, &g_termux_pkg_names[g_termux_pkg_name_offs[398u]]), /* fortune */
#else
  RAF_PKG_INIT(0xe6a5f23eu, 7u, 0u, 0x54888797u, 0), /* fortune */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x53972c15u, 6u, 0u, 0x12f6772au, &g_termux_pkg_names[g_termux_pkg_name_offs[399u]]), /* fossil */
#else
  RAF_PKG_INIT(0x53972c15u, 6u, 0u, 0x12f6772au, 0), /* fossil */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc247f8bau, 9u, 0u, 0xe0126387u, &g_termux_pkg_names[g_termux_pkg_name_offs[400u]]), /* freecolor */
#else
  RAF_PKG_INIT(0xc247f8bau, 9u, 0u, 0xe0126387u, 0), /* freecolor */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfc2c3120u, 9u, 0u, 0xde4d056du, &g_termux_pkg_names[g_termux_pkg_name_offs[401u]]), /* freeimage */
#else
  RAF_PKG_INIT(0xfc2c3120u, 9u, 0u, 0xde4d056du, 0), /* freeimage */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb490e9c3u, 8u, 0u, 0x78c52bf8u, &g_termux_pkg_names[g_termux_pkg_name_offs[402u]]), /* freetype */
#else
  RAF_PKG_INIT(0xb490e9c3u, 8u, 0u, 0x78c52bf8u, 0), /* freetype */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x92821340u, 14u, 0u, 0x22036d5bu, &g_termux_pkg_names[g_termux_pkg_name_offs[403u]]), /* frei0r-plugins */
#else
  RAF_PKG_INIT(0x92821340u, 14u, 0u, 0x22036d5bu, 0), /* frei0r-plugins */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x65de2de7u, 12u, 0u, 0x593bfdccu, &g_termux_pkg_names[g_termux_pkg_name_offs[404u]]), /* fresh-editor */
#else
  RAF_PKG_INIT(0x65de2de7u, 12u, 0u, 0x593bfdccu, 0), /* fresh-editor */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdde1957eu, 7u, 0u, 0x5ba4e32fu, &g_termux_pkg_names[g_termux_pkg_name_offs[405u]]), /* fribidi */
#else
  RAF_PKG_INIT(0xdde1957eu, 7u, 0u, 0x5ba4e32fu, 0), /* fribidi */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x98762ee6u, 8u, 0u, 0x18fc235du, &g_termux_pkg_names[g_termux_pkg_name_offs[406u]]), /* frobtads */
#else
  RAF_PKG_INIT(0x98762ee6u, 8u, 0u, 0x18fc235du, 0), /* frobtads */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd76ac190u, 5u, 0u, 0xaaef0aa9u, &g_termux_pkg_names[g_termux_pkg_name_offs[407u]]), /* frotz */
#else
  RAF_PKG_INIT(0xd76ac190u, 5u, 0u, 0xaaef0aa9u, 0), /* frotz */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xacd7ad13u, 3u, 0u, 0xfa601a26u, &g_termux_pkg_names[g_termux_pkg_name_offs[408u]]), /* frp */
#else
  RAF_PKG_INIT(0xacd7ad13u, 3u, 0u, 0xfa601a26u, 0), /* frp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x274d0f01u, 7u, 0u, 0xb1bbe46cu, &g_termux_pkg_names[g_termux_pkg_name_offs[409u]]), /* fselect */
#else
  RAF_PKG_INIT(0x274d0f01u, 7u, 0u, 0xb1bbe46cu, 0), /* fselect */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x34c23ff4u, 5u, 0u, 0xbecb2081u, &g_termux_pkg_names[g_termux_pkg_name_offs[410u]]), /* fsmon */
#else
  RAF_PKG_INIT(0x34c23ff4u, 5u, 0u, 0xbecb2081u, 0), /* fsmon */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb4ae2958u, 6u, 0u, 0x6fad152fu, &g_termux_pkg_names[g_termux_pkg_name_offs[411u]]), /* fwknop */
#else
  RAF_PKG_INIT(0xb4ae2958u, 6u, 0u, 0x6fad152fu, 0), /* fwknop */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4d22c733u, 2u, 0u, 0xf249f6e4u, &g_termux_pkg_names[g_termux_pkg_name_offs[412u]]), /* fx */
#else
  RAF_PKG_INIT(0x4d22c733u, 2u, 0u, 0xf249f6e4u, 0), /* fx */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd2c4612du, 3u, 0u, 0xfc753804u, &g_termux_pkg_names[g_termux_pkg_name_offs[413u]]), /* fzf */
#else
  RAF_PKG_INIT(0xd2c4612du, 3u, 0u, 0xfc753804u, 0), /* fzf */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb3c43060u, 3u, 0u, 0x03754309u, &g_termux_pkg_names[g_termux_pkg_name_offs[414u]]), /* fzy */
#else
  RAF_PKG_INIT(0xb3c43060u, 3u, 0u, 0x03754309u, 0), /* fzy */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x33dba4b1u, 14u, 0u, 0x05f9812eu, &g_termux_pkg_names[g_termux_pkg_name_offs[415u]]), /* game-music-emu */
#else
  RAF_PKG_INIT(0x33dba4b1u, 14u, 0u, 0x05f9812eu, 0), /* game-music-emu */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x481721cfu, 3u, 0u, 0x694401c6u, &g_termux_pkg_names[g_termux_pkg_name_offs[416u]]), /* gap */
#else
  RAF_PKG_INIT(0x481721cfu, 3u, 0u, 0x694401c6u, 0), /* gap */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf86ddbe3u, 7u, 0u, 0xd0c96426u, &g_termux_pkg_names[g_termux_pkg_name_offs[417u]]), /* gatling */
#else
  RAF_PKG_INIT(0xf86ddbe3u, 7u, 0u, 0xd0c96426u, 0), /* gatling */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x54b72842u, 6u, 0u, 0xaa0b9d11u, &g_termux_pkg_names[g_termux_pkg_name_offs[418u]]), /* gauche */
#else
  RAF_PKG_INIT(0x54b72842u, 6u, 0u, 0xaa0b9d11u, 0), /* gauche */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x40636bc7u, 4u, 0u, 0x8315917cu, &g_termux_pkg_names[g_termux_pkg_name_offs[419u]]), /* gawk */
#else
  RAF_PKG_INIT(0x40636bc7u, 4u, 0u, 0x8315917cu, 0), /* gawk */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x520ee2c8u, 3u, 0u, 0x7f4052d1u, &g_termux_pkg_names[g_termux_pkg_name_offs[420u]]), /* gbt */
#else
  RAF_PKG_INIT(0x520ee2c8u, 3u, 0u, 0x7f4052d1u, 0), /* gbt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6435ac08u, 4u, 0u, 0xa08f1c0fu, &g_termux_pkg_names[g_termux_pkg_name_offs[421u]]), /* gcab */
#else
  RAF_PKG_INIT(0x6435ac08u, 4u, 0u, 0xa08f1c0fu, 0), /* gcab */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6235a8e2u, 4u, 0u, 0xa68f2581u, &g_termux_pkg_names[g_termux_pkg_name_offs[422u]]), /* gcal */
#else
  RAF_PKG_INIT(0x6235a8e2u, 4u, 0u, 0xa68f2581u, 0), /* gcal */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfa24612bu, 4u, 0u, 0x1442d48cu, &g_termux_pkg_names[g_termux_pkg_name_offs[423u]]), /* gdal */
#else
  RAF_PKG_INIT(0xfa24612bu, 4u, 0u, 0x1442d48cu, 0), /* gdal */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x380a3cacu, 3u, 0u, 0x893be561u, &g_termux_pkg_names[g_termux_pkg_name_offs[424u]]), /* gdb */
#else
  RAF_PKG_INIT(0x380a3cacu, 3u, 0u, 0x893be561u, 0), /* gdb */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf91da3d3u, 4u, 0u, 0x154991e4u, &g_termux_pkg_names[g_termux_pkg_name_offs[425u]]), /* gdbm */
#else
  RAF_PKG_INIT(0xf91da3d3u, 4u, 0u, 0x154991e4u, 0), /* gdbm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd59f4edcu, 10u, 0u, 0xd0c6bb3bu, &g_termux_pkg_names[g_termux_pkg_name_offs[426u]]), /* gdk-pixbuf */
#else
  RAF_PKG_INIT(0xd59f4edcu, 10u, 0u, 0xd0c6bb3bu, 0), /* gdk-pixbuf */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0cf1a1e2u, 17u, 0u, 0x1bfa67a7u, &g_termux_pkg_names[g_termux_pkg_name_offs[427u]]), /* gdrive-downloader */
#else
  RAF_PKG_INIT(0x0cf1a1e2u, 17u, 0u, 0x1bfa67a7u, 0), /* gdrive-downloader */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x470a5449u, 3u, 0u, 0x7a3bcdc4u, &g_termux_pkg_names[g_termux_pkg_name_offs[428u]]), /* gdu */
#else
  RAF_PKG_INIT(0x470a5449u, 3u, 0u, 0x7a3bcdc4u, 0), /* gdu */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x363ec5ceu, 11u, 0u, 0xb5307d6bu, &g_termux_pkg_names[g_termux_pkg_name_offs[429u]]), /* geckodriver */
#else
  RAF_PKG_INIT(0x363ec5ceu, 11u, 0u, 0xb5307d6bu, 0), /* geckodriver */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x58aeb7f0u, 6u, 0u, 0x93564fdbu, &g_termux_pkg_names[g_termux_pkg_name_offs[430u]]), /* gecode */
#else
  RAF_PKG_INIT(0x58aeb7f0u, 6u, 0u, 0x93564fdbu, 0), /* gecode */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x89161fc2u, 4u, 0u, 0xcd51874du, &g_termux_pkg_names[g_termux_pkg_name_offs[431u]]), /* gegl */
#else
  RAF_PKG_INIT(0x89161fc2u, 4u, 0u, 0xcd51874du, 0), /* gegl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4fa97164u, 9u, 0u, 0x5fff3085u, &g_termux_pkg_names[g_termux_pkg_name_offs[432u]]), /* gengetopt */
#else
  RAF_PKG_INIT(0x4fa97164u, 9u, 0u, 0x5fff3085u, 0), /* gengetopt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1f36fbfdu, 13u, 0u, 0x607d9600u, &g_termux_pkg_names[g_termux_pkg_name_offs[433u]]), /* geographiclib */
#else
  RAF_PKG_INIT(0x1f36fbfdu, 13u, 0u, 0x607d9600u, 0), /* geographiclib */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x71e8cb67u, 15u, 0u, 0xd1a4a692u, &g_termux_pkg_names[g_termux_pkg_name_offs[434u]]), /* geoip2-database */
#else
  RAF_PKG_INIT(0x71e8cb67u, 15u, 0u, 0xd1a4a692u, 0), /* geoip2-database */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcb085d24u, 9u, 0u, 0x596e5addu, &g_termux_pkg_names[g_termux_pkg_name_offs[435u]]), /* germanium */
#else
  RAF_PKG_INIT(0xcb085d24u, 9u, 0u, 0x596e5addu, 0), /* germanium */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2da55339u, 7u, 0u, 0xbb820d04u, &g_termux_pkg_names[g_termux_pkg_name_offs[436u]]), /* getconf */
#else
  RAF_PKG_INIT(0x2da55339u, 7u, 0u, 0xbb820d04u, 0), /* getconf */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8eeb482du, 4u, 0u, 0xcf7c6b7au, &g_termux_pkg_names[g_termux_pkg_name_offs[437u]]), /* geth */
#else
  RAF_PKG_INIT(0x8eeb482du, 4u, 0u, 0xcf7c6b7au, 0), /* geth */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6b6fcb70u, 7u, 0u, 0xd03b1ce5u, &g_termux_pkg_names[g_termux_pkg_name_offs[438u]]), /* gettext */
#else
  RAF_PKG_INIT(0x6b6fcb70u, 7u, 0u, 0xd03b1ce5u, 0), /* gettext */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xafc4c10eu, 6u, 0u, 0x9b93d58du, &g_termux_pkg_names[g_termux_pkg_name_offs[439u]]), /* gexiv2 */
#else
  RAF_PKG_INIT(0xafc4c10eu, 6u, 0u, 0x9b93d58du, 0), /* gexiv2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa3b9e401u, 6u, 0u, 0x8c185d9eu, &g_termux_pkg_names[g_termux_pkg_name_offs[440u]]), /* gflags */
#else
  RAF_PKG_INIT(0xa3b9e401u, 6u, 0u, 0x8c185d9eu, 0), /* gflags */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2011e5f9u, 6u, 0u, 0x6a2a8d4eu, &g_termux_pkg_names[g_termux_pkg_name_offs[441u]]), /* gforth */
#else
  RAF_PKG_INIT(0x2011e5f9u, 6u, 0u, 0x6a2a8d4eu, 0), /* gforth */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x47207f2au, 2u, 0u, 0xe84db8bdu, &g_termux_pkg_names[g_termux_pkg_name_offs[442u]]), /* gh */
#else
  RAF_PKG_INIT(0x47207f2au, 2u, 0u, 0xe84db8bdu, 0), /* gh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x41285febu, 3u, 0u, 0x905a057au, &g_termux_pkg_names[g_termux_pkg_name_offs[443u]]), /* ghc */
#else
  RAF_PKG_INIT(0x41285febu, 3u, 0u, 0x905a057au, 0), /* ghc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd976a1d3u, 11u, 0u, 0x325bc8beu, &g_termux_pkg_names[g_termux_pkg_name_offs[444u]]), /* ghostscript */
#else
  RAF_PKG_INIT(0xd976a1d3u, 11u, 0u, 0x325bc8beu, 0), /* ghostscript */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1d3f1168u, 6u, 0u, 0xe9659fd3u, &g_termux_pkg_names[g_termux_pkg_name_offs[445u]]), /* giflib */
#else
  RAF_PKG_INIT(0x1d3f1168u, 6u, 0u, 0xe9659fd3u, 0), /* giflib */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb6a01475u, 8u, 0u, 0x2491257au, &g_termux_pkg_names[g_termux_pkg_name_offs[446u]]), /* gifsicle */
#else
  RAF_PKG_INIT(0xb6a01475u, 8u, 0u, 0x2491257au, 0), /* gifsicle */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x215e0c0au, 6u, 0u, 0x737325a9u, &g_termux_pkg_names[g_termux_pkg_name_offs[447u]]), /* gifski */
#else
  RAF_PKG_INIT(0x215e0c0au, 6u, 0u, 0x737325a9u, 0), /* gifski */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x542abc6bu, 3u, 0u, 0x7d57a8fau, &g_termux_pkg_names[g_termux_pkg_name_offs[448u]]), /* git */
#else
  RAF_PKG_INIT(0x542abc6bu, 3u, 0u, 0x7d57a8fau, 0), /* git */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x965b7d05u, 22u, 0u, 0x78eb0f56u, &g_termux_pkg_names[g_termux_pkg_name_offs[449u]]), /* git-credential-manager */
#else
  RAF_PKG_INIT(0x965b7d05u, 22u, 0u, 0x78eb0f56u, 0), /* git-credential-manager */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc92c324au, 9u, 0u, 0x27121b6fu, &g_termux_pkg_names[g_termux_pkg_name_offs[450u]]), /* git-crypt */
#else
  RAF_PKG_INIT(0xc92c324au, 9u, 0u, 0x27121b6fu, 0), /* git-crypt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdd42d3a4u, 9u, 0u, 0x32fcd991u, &g_termux_pkg_names[g_termux_pkg_name_offs[451u]]), /* git-delta */
#else
  RAF_PKG_INIT(0xdd42d3a4u, 9u, 0u, 0x32fcd991u, 0), /* git-delta */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x675c9e19u, 10u, 0u, 0x327e269eu, &g_termux_pkg_names[g_termux_pkg_name_offs[452u]]), /* git-extras */
#else
  RAF_PKG_INIT(0x675c9e19u, 10u, 0u, 0x327e269eu, 0), /* git-extras */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x84f21ba5u, 7u, 0u, 0x7821039cu, &g_termux_pkg_names[g_termux_pkg_name_offs[453u]]), /* git-lfs */
#else
  RAF_PKG_INIT(0x84f21ba5u, 7u, 0u, 0x7821039cu, 0), /* git-lfs */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4c2cd9ebu, 9u, 0u, 0xee44ff5au, &g_termux_pkg_names[g_termux_pkg_name_offs[454u]]), /* git-sizer */
#else
  RAF_PKG_INIT(0x4c2cd9ebu, 9u, 0u, 0xee44ff5au, 0), /* git-sizer */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x03cc8cfau, 8u, 0u, 0x0891c4b5u, &g_termux_pkg_names[g_termux_pkg_name_offs[455u]]), /* git-town */
#else
  RAF_PKG_INIT(0x03cc8cfau, 8u, 0u, 0x0891c4b5u, 0), /* git-town */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd0426671u, 5u, 0u, 0xf98dbb44u, &g_termux_pkg_names[g_termux_pkg_name_offs[456u]]), /* gitea */
#else
  RAF_PKG_INIT(0xd0426671u, 5u, 0u, 0xf98dbb44u, 0), /* gitea */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf3abb3abu, 11u, 0u, 0xc3daa3feu, &g_termux_pkg_names[g_termux_pkg_name_offs[457u]]), /* gitflow-avh */
#else
  RAF_PKG_INIT(0xf3abb3abu, 11u, 0u, 0xc3daa3feu, 0), /* gitflow-avh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa60b1a5cu, 8u, 0u, 0x3a34424fu, &g_termux_pkg_names[g_termux_pkg_name_offs[458u]]), /* gitoxide */
#else
  RAF_PKG_INIT(0xa60b1a5cu, 8u, 0u, 0x3a34424fu, 0), /* gitoxide */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe8699ba9u, 5u, 0u, 0x1166d19cu, &g_termux_pkg_names[g_termux_pkg_name_offs[459u]]), /* gitui */
#else
  RAF_PKG_INIT(0xe8699ba9u, 5u, 0u, 0x1166d19cu, 0), /* gitui */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf33ac76eu, 7u, 0u, 0x4cda4fc7u, &g_termux_pkg_names[g_termux_pkg_name_offs[460u]]), /* gkermit */
#else
  RAF_PKG_INIT(0xf33ac76eu, 7u, 0u, 0x4cda4fc7u, 0), /* gkermit */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xae858ee2u, 8u, 0u, 0x780852b5u, &g_termux_pkg_names[g_termux_pkg_name_offs[461u]]), /* glab-cli */
#else
  RAF_PKG_INIT(0xae858ee2u, 8u, 0u, 0x780852b5u, 0), /* glab-cli */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x27006997u, 5u, 0u, 0x1453f1feu, &g_termux_pkg_names[g_termux_pkg_name_offs[462u]]), /* gleam */
#else
  RAF_PKG_INIT(0x27006997u, 5u, 0u, 0x1453f1feu, 0), /* gleam */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7f475355u, 4u, 0u, 0x80ed4c9eu, &g_termux_pkg_names[g_termux_pkg_name_offs[463u]]), /* glib */
#else
  RAF_PKG_INIT(0x7f475355u, 4u, 0u, 0x80ed4c9eu, 0), /* glib */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x77a3d902u, 15u, 0u, 0x3da63597u, &g_termux_pkg_names[g_termux_pkg_name_offs[464u]]), /* glib-networking */
#else
  RAF_PKG_INIT(0x77a3d902u, 15u, 0u, 0x3da63597u, 0), /* glib-networking */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb936d465u, 10u, 0u, 0xdab397e2u, &g_termux_pkg_names[g_termux_pkg_name_offs[465u]]), /* glibc-repo */
#else
  RAF_PKG_INIT(0xb936d465u, 10u, 0u, 0xdab397e2u, 0), /* glibc-repo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5f1e01c9u, 3u, 0u, 0x824f6214u, &g_termux_pkg_names[g_termux_pkg_name_offs[466u]]), /* glm */
#else
  RAF_PKG_INIT(0x5f1e01c9u, 3u, 0u, 0x824f6214u, 0), /* glm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1dff06aeu, 6u, 0u, 0xe71f61e5u, &g_termux_pkg_names[g_termux_pkg_name_offs[467u]]), /* global */
#else
  RAF_PKG_INIT(0x1dff06aeu, 6u, 0u, 0xe71f61e5u, 0), /* global */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6a3827bcu, 4u, 0u, 0x95fc7837u, &g_termux_pkg_names[g_termux_pkg_name_offs[468u]]), /* glow */
#else
  RAF_PKG_INIT(0x6a3827bcu, 4u, 0u, 0x95fc7837u, 0), /* glow */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5e2fc613u, 4u, 0u, 0x99b51b68u, &g_termux_pkg_names[g_termux_pkg_name_offs[469u]]), /* glpk */
#else
  RAF_PKG_INIT(0x5e2fc613u, 4u, 0u, 0x99b51b68u, 0), /* glpk */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x07dee1b7u, 7u, 0u, 0x361004dau, &g_termux_pkg_names[g_termux_pkg_name_offs[470u]]), /* glslang */
#else
  RAF_PKG_INIT(0x07dee1b7u, 7u, 0u, 0x361004dau, 0), /* glslang */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2d49cd10u, 8u, 0u, 0x76747773u, &g_termux_pkg_names[g_termux_pkg_name_offs[471u]]), /* gluelang */
#else
  RAF_PKG_INIT(0x2d49cd10u, 8u, 0u, 0x76747773u, 0), /* gluelang */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9a324178u, 6u, 0u, 0x854e6557u, &g_termux_pkg_names[g_termux_pkg_name_offs[472u]]), /* glulxe */
#else
  RAF_PKG_INIT(0x9a324178u, 6u, 0u, 0x854e6557u, 0), /* glulxe */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd2b15631u, 4u, 0u, 0x2d8349c2u, &g_termux_pkg_names[g_termux_pkg_name_offs[473u]]), /* gmic */
#else
  RAF_PKG_INIT(0xd2b15631u, 4u, 0u, 0x2d8349c2u, 0), /* gmic */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x412075b8u, 2u, 0u, 0xe24daf4bu, &g_termux_pkg_names[g_termux_pkg_name_offs[474u]]), /* gn */
#else
  RAF_PKG_INIT(0x412075b8u, 2u, 0u, 0xe24daf4bu, 0), /* gn */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x55d4deb5u, 6u, 0u, 0x449c8e3au, &g_termux_pkg_names[g_termux_pkg_name_offs[475u]]), /* gnucap */
#else
  RAF_PKG_INIT(0x55d4deb5u, 6u, 0u, 0x449c8e3au, 0), /* gnucap */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xba46a911u, 8u, 0u, 0xb7c66eb2u, &g_termux_pkg_names[g_termux_pkg_name_offs[476u]]), /* gnuchess */
#else
  RAF_PKG_INIT(0xba46a911u, 8u, 0u, 0xb7c66eb2u, 0), /* gnuchess */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2deae102u, 8u, 0u, 0xfd0d5519u, &g_termux_pkg_names[g_termux_pkg_name_offs[477u]]), /* gnucobol */
#else
  RAF_PKG_INIT(0x2deae102u, 8u, 0u, 0xfd0d5519u, 0), /* gnucobol */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa84c4ecdu, 5u, 0u, 0xa7f3d6f8u, &g_termux_pkg_names[g_termux_pkg_name_offs[478u]]), /* gnugo */
#else
  RAF_PKG_INIT(0xa84c4ecdu, 5u, 0u, 0xa7f3d6f8u, 0), /* gnugo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa16ed60au, 5u, 0u, 0xbedbf647u, &g_termux_pkg_names[g_termux_pkg_name_offs[479u]]), /* gnuit */
#else
  RAF_PKG_INIT(0xa16ed60au, 5u, 0u, 0xbedbf647u, 0), /* gnuit */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x80fa26eau, 6u, 0u, 0x23f1bb9du, &g_termux_pkg_names[g_termux_pkg_name_offs[480u]]), /* gnunet */
#else
  RAF_PKG_INIT(0x80fa26eau, 6u, 0u, 0x23f1bb9du, 0), /* gnunet */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x80364986u, 5u, 0u, 0xcfc4b7bbu, &g_termux_pkg_names[g_termux_pkg_name_offs[481u]]), /* gnupg */
#else
  RAF_PKG_INIT(0x80364986u, 5u, 0u, 0xcfc4b7bbu, 0), /* gnupg */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8784f548u, 7u, 0u, 0xf6bcd33du, &g_termux_pkg_names[g_termux_pkg_name_offs[482u]]), /* gnuplot */
#else
  RAF_PKG_INIT(0x8784f548u, 7u, 0u, 0xf6bcd33du, 0), /* gnuplot */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xab321009u, 5u, 0u, 0xc4c0293cu, &g_termux_pkg_names[g_termux_pkg_name_offs[483u]]), /* gnurl */
#else
  RAF_PKG_INIT(0xab321009u, 5u, 0u, 0xc4c0293cu, 0), /* gnurl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x03bc3769u, 8u, 0u, 0x3276f862u, &g_termux_pkg_names[g_termux_pkg_name_offs[484u]]), /* gnushogi */
#else
  RAF_PKG_INIT(0x03bc3769u, 8u, 0u, 0x3276f862u, 0), /* gnushogi */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7afa2124u, 6u, 0u, 0x53b720abu, &g_termux_pkg_names[g_termux_pkg_name_offs[485u]]), /* gnuski */
#else
  RAF_PKG_INIT(0x7afa2124u, 6u, 0u, 0x53b720abu, 0), /* gnuski */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xeb515b82u, 12u, 0u, 0xa743ab7du, &g_termux_pkg_names[g_termux_pkg_name_offs[486u]]), /* gnustep-make */
#else
  RAF_PKG_INIT(0xeb515b82u, 12u, 0u, 0xa743ab7du, 0), /* gnustep-make */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x387aed0fu, 17u, 0u, 0x361e320au, &g_termux_pkg_names[g_termux_pkg_name_offs[487u]]), /* go-findimagedupes */
#else
  RAF_PKG_INIT(0x387aed0fu, 17u, 0u, 0x361e320au, 0), /* go-findimagedupes */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x77be7612u, 11u, 0u, 0x356402c3u, &g_termux_pkg_names[g_termux_pkg_name_offs[488u]]), /* go-musicfox */
#else
  RAF_PKG_INIT(0x77be7612u, 11u, 0u, 0x356402c3u, 0), /* go-musicfox */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8fdafae1u, 8u, 0u, 0xb9771d0au, &g_termux_pkg_names[g_termux_pkg_name_offs[489u]]), /* goaccess */
#else
  RAF_PKG_INIT(0x8fdafae1u, 8u, 0u, 0xb9771d0au, 0), /* goaccess */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x96b22cd5u, 6u, 0u, 0xd9be0e6au, &g_termux_pkg_names[g_termux_pkg_name_offs[490u]]), /* gobang */
#else
  RAF_PKG_INIT(0x96b22cd5u, 6u, 0u, 0xd9be0e6au, 0), /* gobang */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa16cd85fu, 21u, 0u, 0x0097c3eau, &g_termux_pkg_names[g_termux_pkg_name_offs[491u]]), /* gobject-introspection */
#else
  RAF_PKG_INIT(0xa16cd85fu, 21u, 0u, 0x0097c3eau, 0), /* gobject-introspection */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0173c495u, 4u, 0u, 0x5477485au, &g_termux_pkg_names[g_termux_pkg_name_offs[492u]]), /* gogs */
#else
  RAF_PKG_INIT(0x0173c495u, 4u, 0u, 0x5477485au, 0), /* gogs */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfb57e4a6u, 4u, 0u, 0x4656dea5u, &g_termux_pkg_names[g_termux_pkg_name_offs[493u]]), /* gojq */
#else
  RAF_PKG_INIT(0xfb57e4a6u, 4u, 0u, 0x4656dea5u, 0), /* gojq */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x555d0d33u, 6u, 0u, 0x7c341524u, &g_termux_pkg_names[g_termux_pkg_name_offs[494u]]), /* golang */
#else
  RAF_PKG_INIT(0x555d0d33u, 6u, 0u, 0x7c341524u, 0), /* golang */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfa64af06u, 4u, 0u, 0x575db52du, &g_termux_pkg_names[g_termux_pkg_name_offs[495u]]), /* gomp */
#else
  RAF_PKG_INIT(0xfa64af06u, 4u, 0u, 0x575db52du, 0), /* gomp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xaf6b3afbu, 6u, 0u, 0x5239baa4u, &g_termux_pkg_names[g_termux_pkg_name_offs[496u]]), /* gomuks */
#else
  RAF_PKG_INIT(0xaf6b3afbu, 6u, 0u, 0x5239baa4u, 0), /* gomuks */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x736d8848u, 11u, 0u, 0xa05e83f5u, &g_termux_pkg_names[g_termux_pkg_name_offs[497u]]), /* google-glog */
#else
  RAF_PKG_INIT(0x736d8848u, 11u, 0u, 0xa05e83f5u, 0), /* google-glog */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd026326eu, 10u, 0u, 0x5f3deac9u, &g_termux_pkg_names[g_termux_pkg_name_offs[498u]]), /* googletest */
#else
  RAF_PKG_INIT(0xd026326eu, 10u, 0u, 0x5f3deac9u, 0), /* googletest */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc2a805b8u, 5u, 0u, 0xbd65a035u, &g_termux_pkg_names[g_termux_pkg_name_offs[499u]]), /* goose */
#else
  RAF_PKG_INIT(0xc2a805b8u, 5u, 0u, 0xbd65a035u, 0), /* goose */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfe572f8eu, 6u, 0u, 0x957cfcb1u, &g_termux_pkg_names[g_termux_pkg_name_offs[500u]]), /* gopass */
#else
  RAF_PKG_INIT(0xfe572f8eu, 6u, 0u, 0x957cfcb1u, 0), /* gopass */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd0ac6e28u, 6u, 0u, 0xcb3b5267u, &g_termux_pkg_names[g_termux_pkg_name_offs[501u]]), /* gopher */
#else
  RAF_PKG_INIT(0xd0ac6e28u, 6u, 0u, 0xcb3b5267u, 0), /* gopher */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x90124fccu, 5u, 0u, 0x5e9b43fdu, &g_termux_pkg_names[g_termux_pkg_name_offs[502u]]), /* gopls */
#else
  RAF_PKG_INIT(0x90124fccu, 5u, 0u, 0x5e9b43fdu, 0), /* gopls */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1d935fa1u, 7u, 0u, 0x8ede69d0u, &g_termux_pkg_names[g_termux_pkg_name_offs[503u]]), /* goresym */
#else
  RAF_PKG_INIT(0x1d935fa1u, 7u, 0u, 0x8ede69d0u, 0), /* goresym */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0a91e7d4u, 4u, 0u, 0x3f458a7fu, &g_termux_pkg_names[g_termux_pkg_name_offs[504u]]), /* gost */
#else
  RAF_PKG_INIT(0x0a91e7d4u, 4u, 0u, 0x3f458a7fu, 0), /* gost */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf4f723e5u, 6u, 0u, 0x19319f8eu, &g_termux_pkg_names[g_termux_pkg_name_offs[505u]]), /* gotify */
#else
  RAF_PKG_INIT(0xf4f723e5u, 6u, 0u, 0x19319f8eu, 0), /* gotify */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x45b18922u, 5u, 0u, 0xf9f0b2b3u, &g_termux_pkg_names[g_termux_pkg_name_offs[506u]]), /* gotop */
#else
  RAF_PKG_INIT(0x45b18922u, 5u, 0u, 0xf9f0b2b3u, 0), /* gotop */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcc4b63e7u, 9u, 0u, 0xcad6a546u, &g_termux_pkg_names[g_termux_pkg_name_offs[507u]]), /* gotorrent */
#else
  RAF_PKG_INIT(0xcc4b63e7u, 9u, 0u, 0xcad6a546u, 0), /* gotorrent */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x46eb7646u, 5u, 0u, 0x00fbf6abu, &g_termux_pkg_names[g_termux_pkg_name_offs[508u]]), /* gotty */
#else
  RAF_PKG_INIT(0x46eb7646u, 5u, 0u, 0x00fbf6abu, 0), /* gotty */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa12b8c8eu, 4u, 0u, 0xc5487cadu, &g_termux_pkg_names[g_termux_pkg_name_offs[509u]]), /* gpac */
#else
  RAF_PKG_INIT(0xa12b8c8eu, 4u, 0u, 0xc5487cadu, 0), /* gpac */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x63779229u, 5u, 0u, 0x97944ee0u, &g_termux_pkg_names[g_termux_pkg_name_offs[510u]]), /* gperf */
#else
  RAF_PKG_INIT(0x63779229u, 5u, 0u, 0x97944ee0u, 0), /* gperf */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8b9af089u, 5u, 0u, 0x6ff23f2cu, &g_termux_pkg_names[g_termux_pkg_name_offs[511u]]), /* gpgme */
#else
  RAF_PKG_INIT(0x8b9af089u, 5u, 0u, 0x6ff23f2cu, 0), /* gpgme */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8154cfd1u, 7u, 0u, 0x5345892cu, &g_termux_pkg_names[g_termux_pkg_name_offs[512u]]), /* gpgmepp */
#else
  RAF_PKG_INIT(0x8154cfd1u, 7u, 0u, 0x5345892cu, 0), /* gpgmepp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x07460d5eu, 5u, 0u, 0xc1ba14abu, &g_termux_pkg_names[g_termux_pkg_name_offs[513u]]), /* gping */
#else
  RAF_PKG_INIT(0x07460d5eu, 5u, 0u, 0xc1ba14abu, 0), /* gping */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf66c5f55u, 8u, 0u, 0x2bab5deau, &g_termux_pkg_names[g_termux_pkg_name_offs[514u]]), /* gpsbabel */
#else
  RAF_PKG_INIT(0xf66c5f55u, 8u, 0u, 0x2bab5deau, 0), /* gpsbabel */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa7ce4d7eu, 6u, 0u, 0xa62f1cb5u, &g_termux_pkg_names[g_termux_pkg_name_offs[515u]]), /* gradle */
#else
  RAF_PKG_INIT(0xa7ce4d7eu, 6u, 0u, 0xa62f1cb5u, 0), /* gradle */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x418c136bu, 7u, 0u, 0x330eba46u, &g_termux_pkg_names[g_termux_pkg_name_offs[516u]]), /* grafana */
#else
  RAF_PKG_INIT(0x418c136bu, 7u, 0u, 0x330eba46u, 0), /* grafana */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb39aa895u, 4u, 0u, 0xd519c4ceu, &g_termux_pkg_names[g_termux_pkg_name_offs[517u]]), /* grap */
#else
  RAF_PKG_INIT(0xb39aa895u, 4u, 0u, 0xd519c4ceu, 0), /* grap */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb2f2a867u, 8u, 0u, 0xd04afd0cu, &g_termux_pkg_names[g_termux_pkg_name_offs[518u]]), /* graphene */
#else
  RAF_PKG_INIT(0xb2f2a867u, 8u, 0u, 0xd04afd0cu, 0), /* graphene */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7b390260u, 14u, 0u, 0x4219d1a3u, &g_termux_pkg_names[g_termux_pkg_name_offs[519u]]), /* graphicsmagick */
#else
  RAF_PKG_INIT(0x7b390260u, 14u, 0u, 0x4219d1a3u, 0), /* graphicsmagick */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x00e3f94cu, 8u, 0u, 0xd96d13ffu, &g_termux_pkg_names[g_termux_pkg_name_offs[520u]]), /* graphviz */
#else
  RAF_PKG_INIT(0x00e3f94cu, 8u, 0u, 0xd96d13ffu, 0), /* graphviz */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0b1dfc7au, 5u, 0u, 0x5b28f07fu, &g_termux_pkg_names[g_termux_pkg_name_offs[521u]]), /* greed */
#else
  RAF_PKG_INIT(0x0b1dfc7au, 5u, 0u, 0x5b28f07fu, 0), /* greed */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbb9027d1u, 4u, 0u, 0xdd0f440au, &g_termux_pkg_names[g_termux_pkg_name_offs[522u]]), /* grep */
#else
  RAF_PKG_INIT(0xbb9027d1u, 4u, 0u, 0xdd0f440au, 0), /* grep */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb3901b39u, 4u, 0u, 0xd50f3772u, &g_termux_pkg_names[g_termux_pkg_name_offs[523u]]), /* grex */
#else
  RAF_PKG_INIT(0xb3901b39u, 4u, 0u, 0xd50f3772u, 0), /* grex */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7f98fd41u, 5u, 0u, 0x3ada0adcu, &g_termux_pkg_names[g_termux_pkg_name_offs[524u]]), /* groff */
#else
  RAF_PKG_INIT(0x7f98fd41u, 5u, 0u, 0x3ada0adcu, 0), /* groff */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa5828da5u, 4u, 0u, 0xbef70feau, &g_termux_pkg_names[g_termux_pkg_name_offs[525u]]), /* gron */
#else
  RAF_PKG_INIT(0xa5828da5u, 4u, 0u, 0xbef70feau, 0), /* gron */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x732edfd8u, 7u, 0u, 0xcd835ef1u, &g_termux_pkg_names[g_termux_pkg_name_offs[526u]]), /* groonga */
#else
  RAF_PKG_INIT(0x732edfd8u, 7u, 0u, 0xcd835ef1u, 0), /* groonga */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4a3ab40fu, 6u, 0u, 0x158afaf8u, &g_termux_pkg_names[g_termux_pkg_name_offs[527u]]), /* groovy */
#else
  RAF_PKG_INIT(0x4a3ab40fu, 6u, 0u, 0x158afaf8u, 0), /* groovy */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0081e07eu, 7u, 0u, 0xc3bd4413u, &g_termux_pkg_names[g_termux_pkg_name_offs[528u]]), /* grpcurl */
#else
  RAF_PKG_INIT(0x0081e07eu, 7u, 0u, 0xc3bd4413u, 0), /* grpcurl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4039a779u, 3u, 0u, 0x8166b9d0u, &g_termux_pkg_names[g_termux_pkg_name_offs[529u]]), /* gsl */
#else
  RAF_PKG_INIT(0x4039a779u, 3u, 0u, 0x8166b9d0u, 0), /* gsl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x84f54fa0u, 9u, 0u, 0xa9095a79u, &g_termux_pkg_names[g_termux_pkg_name_offs[530u]]), /* gst-libav */
#else
  RAF_PKG_INIT(0x84f54fa0u, 9u, 0u, 0xa9095a79u, 0), /* gst-libav */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x505e11f6u, 15u, 0u, 0xd644d6dbu, &g_termux_pkg_names[g_termux_pkg_name_offs[531u]]), /* gst-plugins-bad */
#else
  RAF_PKG_INIT(0x505e11f6u, 15u, 0u, 0xd644d6dbu, 0), /* gst-plugins-bad */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x26f56feeu, 16u, 0u, 0xec43973du, &g_termux_pkg_names[g_termux_pkg_name_offs[532u]]), /* gst-plugins-base */
#else
  RAF_PKG_INIT(0x26f56feeu, 16u, 0u, 0xec43973du, 0), /* gst-plugins-base */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x496f12f2u, 16u, 0u, 0xaf2972ddu, &g_termux_pkg_names[g_termux_pkg_name_offs[533u]]), /* gst-plugins-good */
#else
  RAF_PKG_INIT(0x496f12f2u, 16u, 0u, 0xaf2972ddu, 0), /* gst-plugins-good */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc5f33cf0u, 16u, 0u, 0x1aed0937u, &g_termux_pkg_names[g_termux_pkg_name_offs[534u]]), /* gst-plugins-ugly */
#else
  RAF_PKG_INIT(0xc5f33cf0u, 16u, 0u, 0x1aed0937u, 0), /* gst-plugins-ugly */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x893be096u, 10u, 0u, 0x5a63d979u, &g_termux_pkg_names[g_termux_pkg_name_offs[535u]]), /* gst-python */
#else
  RAF_PKG_INIT(0x893be096u, 10u, 0u, 0x5a63d979u, 0), /* gst-python */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x20db81a1u, 9u, 0u, 0x542e81ecu, &g_termux_pkg_names[g_termux_pkg_name_offs[536u]]), /* gstreamer */
#else
  RAF_PKG_INIT(0x20db81a1u, 9u, 0u, 0x542e81ecu, 0), /* gstreamer */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xafa2a46du, 7u, 0u, 0xcb1e5bb4u, &g_termux_pkg_names[g_termux_pkg_name_offs[537u]]), /* gtypist */
#else
  RAF_PKG_INIT(0xafa2a46du, 7u, 0u, 0xcb1e5bb4u, 0), /* gtypist */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x91dd00d3u, 5u, 0u, 0xd16f78a2u, &g_termux_pkg_names[g_termux_pkg_name_offs[538u]]), /* guile */
#else
  RAF_PKG_INIT(0x91dd00d3u, 5u, 0u, 0xd16f78a2u, 0), /* guile */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3b35226cu, 3u, 0u, 0x8660b181u, &g_termux_pkg_names[g_termux_pkg_name_offs[539u]]), /* gum */
#else
  RAF_PKG_INIT(0x3b35226cu, 3u, 0u, 0x8660b181u, 0), /* gum */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0c888d21u, 12u, 0u, 0x45cd3552u, &g_termux_pkg_names[g_termux_pkg_name_offs[540u]]), /* gumbo-parser */
#else
  RAF_PKG_INIT(0x0c888d21u, 12u, 0u, 0x45cd3552u, 0), /* gumbo-parser */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x10767a23u, 18u, 0u, 0xcd76e980u, &g_termux_pkg_names[g_termux_pkg_name_offs[541u]]), /* gweather-locations */
#else
  RAF_PKG_INIT(0x10767a23u, 18u, 0u, 0xcd76e980u, 0), /* gweather-locations */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1a451735u, 4u, 0u, 0x3bc4336eu, &g_termux_pkg_names[g_termux_pkg_name_offs[542u]]), /* gzip */
#else
  RAF_PKG_INIT(0x1a451735u, 4u, 0u, 0x3bc4336eu, 0), /* gzip */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc14ff7feu, 7u, 0u, 0xd0d76fabu, &g_termux_pkg_names[g_termux_pkg_name_offs[543u]]), /* haproxy */
#else
  RAF_PKG_INIT(0xc14ff7feu, 7u, 0u, 0xd0d76fabu, 0), /* haproxy */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9b74178fu, 8u, 0u, 0x117f9298u, &g_termux_pkg_names[g_termux_pkg_name_offs[544u]]), /* harfbuzz */
#else
  RAF_PKG_INIT(0x9b74178fu, 8u, 0u, 0x117f9298u, 0), /* harfbuzz */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0d7f0ebeu, 12u, 0u, 0x237f102du, &g_termux_pkg_names[g_termux_pkg_name_offs[545u]]), /* hash-slinger */
#else
  RAF_PKG_INIT(0x0d7f0ebeu, 12u, 0u, 0x237f102du, 0), /* hash-slinger */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe3f18623u, 8u, 0u, 0xca871554u, &g_termux_pkg_names[g_termux_pkg_name_offs[546u]]), /* hashdeep */
#else
  RAF_PKG_INIT(0xe3f18623u, 8u, 0u, 0xca871554u, 0), /* hashdeep */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x06b92710u, 3u, 0u, 0xb8baf019u, &g_termux_pkg_names[g_termux_pkg_name_offs[547u]]), /* hcl */
#else
  RAF_PKG_INIT(0x06b92710u, 3u, 0u, 0xb8baf019u, 0), /* hcl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf2238e44u, 6u, 0u, 0x2cd042e3u, &g_termux_pkg_names[g_termux_pkg_name_offs[548u]]), /* hcloud */
#else
  RAF_PKG_INIT(0xf2238e44u, 6u, 0u, 0x2cd042e3u, 0), /* hcloud */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x62ac1687u, 5u, 0u, 0x64abe04eu, &g_termux_pkg_names[g_termux_pkg_name_offs[549u]]), /* helix */
#else
  RAF_PKG_INIT(0x62ac1687u, 5u, 0u, 0x64abe04eu, 0), /* helix */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4f9f2cabu, 5u, 0u, 0x57a51012u, &g_termux_pkg_names[g_termux_pkg_name_offs[550u]]), /* hello */
#else
  RAF_PKG_INIT(0x4f9f2cabu, 5u, 0u, 0x57a51012u, 0), /* hello */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1d717979u, 4u, 0u, 0x6d2d80f6u, &g_termux_pkg_names[g_termux_pkg_name_offs[551u]]), /* helm */
#else
  RAF_PKG_INIT(0x1d717979u, 4u, 0u, 0x6d2d80f6u, 0), /* helm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdcbd2c39u, 7u, 0u, 0x70fe00acu, &g_termux_pkg_names[g_termux_pkg_name_offs[552u]]), /* helm-ls */
#else
  RAF_PKG_INIT(0xdcbd2c39u, 7u, 0u, 0x70fe00acu, 0), /* helm-ls */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb6bfc0ecu, 8u, 0u, 0x35a07eb7u, &g_termux_pkg_names[g_termux_pkg_name_offs[553u]]), /* help2man */
#else
  RAF_PKG_INIT(0xb6bfc0ecu, 8u, 0u, 0x35a07eb7u, 0), /* help2man */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x45ac18dcu, 8u, 0u, 0xcc99abfbu, &g_termux_pkg_names[g_termux_pkg_name_offs[554u]]), /* hexcurse */
#else
  RAF_PKG_INIT(0x45ac18dcu, 8u, 0u, 0xcc99abfbu, 0), /* hexcurse */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x743d6fe6u, 7u, 0u, 0xcd05419fu, &g_termux_pkg_names[g_termux_pkg_name_offs[555u]]), /* hexedit */
#else
  RAF_PKG_INIT(0x743d6fe6u, 7u, 0u, 0xcd05419fu, 0), /* hexedit */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x515a311du, 5u, 0u, 0x759a8c20u, &g_termux_pkg_names[g_termux_pkg_name_offs[556u]]), /* hexer */
#else
  RAF_PKG_INIT(0x515a311du, 5u, 0u, 0x759a8c20u, 0), /* hexer */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x33648f3fu, 5u, 0u, 0x73cc25c6u, &g_termux_pkg_names[g_termux_pkg_name_offs[557u]]), /* hexyl */
#else
  RAF_PKG_INIT(0x33648f3fu, 5u, 0u, 0x73cc25c6u, 0), /* hexyl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3155c278u, 4u, 0u, 0x5147985fu, &g_termux_pkg_names[g_termux_pkg_name_offs[558u]]), /* heyu */
#else
  RAF_PKG_INIT(0x3155c278u, 4u, 0u, 0x5147985fu, 0), /* heyu */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x915256cdu, 8u, 0u, 0x8c118f92u, &g_termux_pkg_names[g_termux_pkg_name_offs[559u]]), /* hfsutils */
#else
  RAF_PKG_INIT(0x915256cdu, 8u, 0u, 0x8c118f92u, 0), /* hfsutils */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xaaa4ca9eu, 6u, 0u, 0xd12f6c79u, &g_termux_pkg_names[g_termux_pkg_name_offs[560u]]), /* hidapi */
#else
  RAF_PKG_INIT(0xaaa4ca9eu, 6u, 0u, 0xd12f6c79u, 0), /* hidapi */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1e0b17a0u, 7u, 0u, 0xde539d2du, &g_termux_pkg_names[g_termux_pkg_name_offs[561u]]), /* hilbish */
#else
  RAF_PKG_INIT(0x1e0b17a0u, 7u, 0u, 0xde539d2du, 0), /* hilbish */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x093401beu, 7u, 0u, 0x4ebb502fu, &g_termux_pkg_names[g_termux_pkg_name_offs[562u]]), /* hledger */
#else
  RAF_PKG_INIT(0x093401beu, 7u, 0u, 0x4ebb502fu, 0), /* hledger */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0daa12c7u, 10u, 0u, 0x2d0d7f40u, &g_termux_pkg_names[g_termux_pkg_name_offs[563u]]), /* hledger-ui */
#else
  RAF_PKG_INIT(0x0daa12c7u, 10u, 0u, 0x2d0d7f40u, 0), /* hledger-ui */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0f16e8e3u, 7u, 0u, 0xce261312u, &g_termux_pkg_names[g_termux_pkg_name_offs[564u]]), /* hoedown */
#else
  RAF_PKG_INIT(0x0f16e8e3u, 7u, 0u, 0xce261312u, 0), /* hoedown */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1a1809fau, 9u, 0u, 0x202a984fu, &g_termux_pkg_names[g_termux_pkg_name_offs[565u]]), /* hollywood */
#else
  RAF_PKG_INIT(0x1a1809fau, 9u, 0u, 0x202a984fu, 0), /* hollywood */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc4fc87e7u, 4u, 0u, 0xed10fca8u, &g_termux_pkg_names[g_termux_pkg_name_offs[566u]]), /* hors */
#else
  RAF_PKG_INIT(0xc4fc87e7u, 4u, 0u, 0xed10fca8u, 0), /* hors */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x39e8110eu, 4u, 0u, 0x5c0576b9u, &g_termux_pkg_names[g_termux_pkg_name_offs[567u]]), /* hstr */
#else
  RAF_PKG_INIT(0x39e8110eu, 4u, 0u, 0x5c0576b9u, 0), /* hstr */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe55bb134u, 14u, 0u, 0xcf31c877u, &g_termux_pkg_names[g_termux_pkg_name_offs[568u]]), /* html-xml-utils */
#else
  RAF_PKG_INIT(0xe55bb134u, 14u, 0u, 0xcf31c877u, 0), /* html-xml-utils */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x51adc855u, 9u, 0u, 0x5111e518u, &g_termux_pkg_names[g_termux_pkg_name_offs[569u]]), /* html2text */
#else
  RAF_PKG_INIT(0x51adc855u, 9u, 0u, 0x5111e518u, 0), /* html2text */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbf79ff36u, 4u, 0u, 0x25af8641u, &g_termux_pkg_names[g_termux_pkg_name_offs[570u]]), /* htop */
#else
  RAF_PKG_INIT(0xbf79ff36u, 4u, 0u, 0x25af8641u, 0), /* htop */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x842d0d3du, 6u, 0u, 0xb39a3576u, &g_termux_pkg_names[g_termux_pkg_name_offs[571u]]), /* htslib */
#else
  RAF_PKG_INIT(0x842d0d3du, 6u, 0u, 0xb39a3576u, 0), /* htslib */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2ded845bu, 7u, 0u, 0x1676e88eu, &g_termux_pkg_names[g_termux_pkg_name_offs[572u]]), /* httping */
#else
  RAF_PKG_INIT(0x2ded845bu, 7u, 0u, 0x1676e88eu, 0), /* httping */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd2f59250u, 7u, 0u, 0x71a84e75u, &g_termux_pkg_names[g_termux_pkg_name_offs[573u]]), /* httrack */
#else
  RAF_PKG_INIT(0xd2f59250u, 7u, 0u, 0x71a84e75u, 0), /* httrack */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe48d64ecu, 3u, 0u, 0xda8e0601u, &g_termux_pkg_names[g_termux_pkg_name_offs[574u]]), /* hub */
#else
  RAF_PKG_INIT(0xe48d64ecu, 3u, 0u, 0xda8e0601u, 0), /* hub */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6d8eb0d4u, 4u, 0u, 0x9b9b0d4fu, &g_termux_pkg_names[g_termux_pkg_name_offs[575u]]), /* hugo */
#else
  RAF_PKG_INIT(0x6d8eb0d4u, 4u, 0u, 0x9b9b0d4fu, 0), /* hugo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6ea5cc8bu, 6u, 0u, 0x18d45850u, &g_termux_pkg_names[g_termux_pkg_name_offs[576u]]), /* hummin */
#else
  RAF_PKG_INIT(0x6ea5cc8bu, 6u, 0u, 0x18d45850u, 0), /* hummin */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x66f62612u, 8u, 0u, 0x7a157719u, &g_termux_pkg_names[g_termux_pkg_name_offs[577u]]), /* hunspell */
#else
  RAF_PKG_INIT(0x66f62612u, 8u, 0u, 0x7a157719u, 0), /* hunspell */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2b6d4271u, 14u, 0u, 0x7eb7d6ceu, &g_termux_pkg_names[g_termux_pkg_name_offs[578u]]), /* hunspell-en-us */
#else
  RAF_PKG_INIT(0x2b6d4271u, 14u, 0u, 0x7eb7d6ceu, 0), /* hunspell-en-us */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xabc01ad9u, 11u, 0u, 0x5906e9f4u, &g_termux_pkg_names[g_termux_pkg_name_offs[579u]]), /* hunspell-fr */
#else
  RAF_PKG_INIT(0xabc01ad9u, 11u, 0u, 0x5906e9f4u, 0), /* hunspell-fr */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc0b1315eu, 11u, 0u, 0x53f7d78bu, &g_termux_pkg_names[g_termux_pkg_name_offs[580u]]), /* hunspell-hu */
#else
  RAF_PKG_INIT(0xc0b1315eu, 11u, 0u, 0x53f7d78bu, 0), /* hunspell-hu */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc5ab290fu, 11u, 0u, 0x5ef36baeu, &g_termux_pkg_names[g_termux_pkg_name_offs[581u]]), /* hunspell-nl */
#else
  RAF_PKG_INIT(0xc5ab290fu, 11u, 0u, 0x5ef36baeu, 0), /* hunspell-nl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbcf1d268u, 11u, 0u, 0x57e8d34du, &g_termux_pkg_names[g_termux_pkg_name_offs[582u]]), /* hunspell-ru */
#else
  RAF_PKG_INIT(0xbcf1d268u, 11u, 0u, 0x57e8d34du, 0), /* hunspell-ru */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf28d7af6u, 3u, 0u, 0xcc8deff7u, &g_termux_pkg_names[g_termux_pkg_name_offs[583u]]), /* hut */
#else
  RAF_PKG_INIT(0xf28d7af6u, 3u, 0u, 0xcc8deff7u, 0), /* hut */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe2213568u, 6u, 0u, 0xd8273c1bu, &g_termux_pkg_names[g_termux_pkg_name_offs[584u]]), /* hwdata */
#else
  RAF_PKG_INIT(0xe2213568u, 6u, 0u, 0xd8273c1bu, 0), /* hwdata */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbaaecfbdu, 9u, 0u, 0x224dcbdcu, &g_termux_pkg_names[g_termux_pkg_name_offs[585u]]), /* hydroxide */
#else
  RAF_PKG_INIT(0xbaaecfbdu, 9u, 0u, 0x224dcbdcu, 0), /* hydroxide */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x591a6a59u, 9u, 0u, 0xe5fae30cu, &g_termux_pkg_names[g_termux_pkg_name_offs[586u]]), /* hyperfine */
#else
  RAF_PKG_INIT(0x591a6a59u, 9u, 0u, 0xe5fae30cu, 0), /* hyperfine */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x573adbd7u, 2u, 0u, 0xf431f524u, &g_termux_pkg_names[g_termux_pkg_name_offs[587u]]), /* hz */
#else
  RAF_PKG_INIT(0x573adbd7u, 2u, 0u, 0xf431f524u, 0), /* hz */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7c2b5696u, 4u, 0u, 0xef782025u, &g_termux_pkg_names[g_termux_pkg_name_offs[588u]]), /* i2pd */
#else
  RAF_PKG_INIT(0x7c2b5696u, 4u, 0u, 0xef782025u, 0), /* i2pd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x97dcb591u, 3u, 0u, 0x3702a464u, &g_termux_pkg_names[g_termux_pkg_name_offs[589u]]), /* iat */
#else
  RAF_PKG_INIT(0x97dcb591u, 3u, 0u, 0x3702a464u, 0), /* iat */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1ff5976fu, 7u, 0u, 0xfa045c82u, &g_termux_pkg_names[g_termux_pkg_name_offs[590u]]), /* icecast */
#else
  RAF_PKG_INIT(0x1ff5976fu, 7u, 0u, 0xfa045c82u, 0), /* icecast */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcb27e689u, 4u, 0u, 0x83e89996u, &g_termux_pkg_names[g_termux_pkg_name_offs[591u]]), /* ices */
#else
  RAF_PKG_INIT(0xcb27e689u, 4u, 0u, 0x83e89996u, 0), /* ices */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6e7413abu, 17u, 0u, 0xae59b1bau, &g_termux_pkg_names[g_termux_pkg_name_offs[592u]]), /* icon-naming-utils */
#else
  RAF_PKG_INIT(0x6e7413abu, 17u, 0u, 0xae59b1bau, 0), /* icon-naming-utils */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6cf5353bu, 8u, 0u, 0x01ba179cu, &g_termux_pkg_names[g_termux_pkg_name_offs[593u]]), /* icoutils */
#else
  RAF_PKG_INIT(0x6cf5353bu, 8u, 0u, 0x01ba179cu, 0), /* icoutils */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x83600560u, 6u, 0u, 0x126ea70bu, &g_termux_pkg_names[g_termux_pkg_name_offs[594u]]), /* id3lib */
#else
  RAF_PKG_INIT(0x83600560u, 6u, 0u, 0x126ea70bu, 0), /* id3lib */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xea50f5adu, 5u, 0u, 0x0051bcd4u, &g_termux_pkg_names[g_termux_pkg_name_offs[595u]]), /* id3v2 */
#else
  RAF_PKG_INIT(0xea50f5adu, 5u, 0u, 0x0051bcd4u, 0), /* id3v2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xed04cf5eu, 11u, 0u, 0x37819463u, &g_termux_pkg_names[g_termux_pkg_name_offs[596u]]), /* imagemagick */
#else
  RAF_PKG_INIT(0xed04cf5eu, 11u, 0u, 0x37819463u, 0), /* imagemagick */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xae2c5d42u, 5u, 0u, 0xb7b1f243u, &g_termux_pkg_names[g_termux_pkg_name_offs[597u]]), /* imath */
#else
  RAF_PKG_INIT(0xae2c5d42u, 5u, 0u, 0xb7b1f243u, 0), /* imath */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa6cdac80u, 6u, 0u, 0x58419dfbu, &g_termux_pkg_names[g_termux_pkg_name_offs[598u]]), /* imlib2 */
#else
  RAF_PKG_INIT(0xa6cdac80u, 6u, 0u, 0x58419dfbu, 0), /* imlib2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x16ff7dbbu, 6u, 0u, 0x164b7790u, &g_termux_pkg_names[g_termux_pkg_name_offs[599u]]), /* indent */
#else
  RAF_PKG_INIT(0x16ff7dbbu, 6u, 0u, 0x164b7790u, 0), /* indent */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x31294f08u, 9u, 0u, 0x4c132129u, &g_termux_pkg_names[g_termux_pkg_name_offs[600u]]), /* inetutils */
#else
  RAF_PKG_INIT(0x31294f08u, 9u, 0u, 0x4c132129u, 0), /* inetutils */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc29df89fu, 8u, 0u, 0x56df89d0u, &g_termux_pkg_names[g_termux_pkg_name_offs[601u]]), /* influxdb */
#else
  RAF_PKG_INIT(0xc29df89fu, 8u, 0u, 0x56df89d0u, 0), /* influxdb */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x00ddba06u, 11u, 0u, 0x2396798fu, &g_termux_pkg_names[g_termux_pkg_name_offs[602u]]), /* innoextract */
#else
  RAF_PKG_INIT(0x00ddba06u, 11u, 0u, 0x2396798fu, 0), /* innoextract */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x35279c3bu, 13u, 0u, 0x7e3c41c6u, &g_termux_pkg_names[g_termux_pkg_name_offs[603u]]), /* inotify-tools */
#else
  RAF_PKG_INIT(0x35279c3bu, 13u, 0u, 0x7e3c41c6u, 0), /* inotify-tools */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe3fb4920u, 8u, 0u, 0xbdd18aefu, &g_termux_pkg_names[g_termux_pkg_name_offs[604u]]), /* intltool */
#else
  RAF_PKG_INIT(0xe3fb4920u, 8u, 0u, 0xbdd18aefu, 0), /* intltool */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2d88a9a1u, 4u, 0u, 0x3d9b8a4au, &g_termux_pkg_names[g_termux_pkg_name_offs[605u]]), /* inxi */
#else
  RAF_PKG_INIT(0x2d88a9a1u, 4u, 0u, 0x3d9b8a4au, 0), /* inxi */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x34e36e61u, 6u, 0u, 0x9769bc72u, &g_termux_pkg_names[g_termux_pkg_name_offs[606u]]), /* ipcalc */
#else
  RAF_PKG_INIT(0x34e36e61u, 6u, 0u, 0x9769bc72u, 0), /* ipcalc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc345c00cu, 6u, 0u, 0x8ba419cbu, &g_termux_pkg_names[g_termux_pkg_name_offs[607u]]), /* iperf3 */
#else
  RAF_PKG_INIT(0xc345c00cu, 6u, 0u, 0x8ba419cbu, 0), /* iperf3 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xeb2c2cb8u, 8u, 0u, 0xf2ec9273u, &g_termux_pkg_names[g_termux_pkg_name_offs[608u]]), /* ipmitool */
#else
  RAF_PKG_INIT(0xeb2c2cb8u, 8u, 0u, 0xf2ec9273u, 0), /* ipmitool */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd394d229u, 8u, 0u, 0xef8dfa6eu, &g_termux_pkg_names[g_termux_pkg_name_offs[609u]]), /* iproute2 */
#else
  RAF_PKG_INIT(0xd394d229u, 8u, 0u, 0xef8dfa6eu, 0), /* iproute2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x94be9745u, 8u, 0u, 0xe819169au, &g_termux_pkg_names[g_termux_pkg_name_offs[610u]]), /* ipv6calc */
#else
  RAF_PKG_INIT(0x94be9745u, 8u, 0u, 0xe819169au, 0), /* ipv6calc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2fce3c36u, 11u, 0u, 0xa7d9b47fu, &g_termux_pkg_names[g_termux_pkg_name_offs[611u]]), /* ipv6toolkit */
#else
  RAF_PKG_INIT(0x2fce3c36u, 11u, 0u, 0xa7d9b47fu, 0), /* ipv6toolkit */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x83f1d086u, 9u, 0u, 0x4e46c59fu, &g_termux_pkg_names[g_termux_pkg_name_offs[612u]]), /* ircd-irc2 */
#else
  RAF_PKG_INIT(0x83f1d086u, 9u, 0u, 0x4e46c59fu, 0), /* ircd-irc2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x21a075d3u, 4u, 0u, 0xbe6d0b78u, &g_termux_pkg_names[g_termux_pkg_name_offs[613u]]), /* ired */
#else
  RAF_PKG_INIT(0x21a075d3u, 4u, 0u, 0xbe6d0b78u, 0), /* ired */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe589a91bu, 5u, 0u, 0xd726c8e2u, &g_termux_pkg_names[g_termux_pkg_name_offs[614u]]), /* irssi */
#else
  RAF_PKG_INIT(0xe589a91bu, 5u, 0u, 0xd726c8e2u, 0), /* irssi */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7ddf1a87u, 5u, 0u, 0xbee805e6u, &g_termux_pkg_names[g_termux_pkg_name_offs[615u]]), /* isync */
#else
  RAF_PKG_INIT(0x7ddf1a87u, 5u, 0u, 0xbee805e6u, 0), /* isync */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd952c28au, 8u, 0u, 0x1e2da3c1u, &g_termux_pkg_names[g_termux_pkg_name_offs[616u]]), /* iverilog */
#else
  RAF_PKG_INIT(0xd952c28au, 8u, 0u, 0x1e2da3c1u, 0), /* iverilog */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe8b475ffu, 4u, 0u, 0x17bc7744u, &g_termux_pkg_names[g_termux_pkg_name_offs[617u]]), /* iwyu */
#else
  RAF_PKG_INIT(0xe8b475ffu, 4u, 0u, 0x17bc7744u, 0), /* iwyu */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2e53cc9au, 4u, 0u, 0xbee20e71u, &g_termux_pkg_names[g_termux_pkg_name_offs[618u]]), /* jack */
#else
  RAF_PKG_INIT(0x2e53cc9au, 4u, 0u, 0xbee20e71u, 0), /* jack */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6821f607u, 18u, 0u, 0x60bff4dcu, &g_termux_pkg_names[g_termux_pkg_name_offs[619u]]), /* jack-example-tools */
#else
  RAF_PKG_INIT(0x6821f607u, 18u, 0u, 0x60bff4dcu, 0), /* jack-example-tools */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x95eb2c78u, 5u, 0u, 0xc0dc7379u, &g_termux_pkg_names[g_termux_pkg_name_offs[620u]]), /* jack2 */
#else
  RAF_PKG_INIT(0x95eb2c78u, 5u, 0u, 0xc0dc7379u, 0), /* jack2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x752cebfdu, 7u, 0u, 0x94eb2884u, &g_termux_pkg_names[g_termux_pkg_name_offs[621u]]), /* jackett */
#else
  RAF_PKG_INIT(0x752cebfdu, 7u, 0u, 0x94eb2884u, 0), /* jackett */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x134258f8u, 4u, 0u, 0xd5f37bc7u, &g_termux_pkg_names[g_termux_pkg_name_offs[622u]]), /* jadx */
#else
  RAF_PKG_INIT(0x134258f8u, 4u, 0u, 0xd5f37bc7u, 0), /* jadx */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x988776ffu, 8u, 0u, 0xd5a874f4u, &g_termux_pkg_names[g_termux_pkg_name_offs[623u]]), /* jbig2dec */
#else
  RAF_PKG_INIT(0x988776ffu, 8u, 0u, 0xd5a874f4u, 0), /* jbig2dec */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3c5a3bb7u, 8u, 0u, 0x129bf10cu, &g_termux_pkg_names[g_termux_pkg_name_offs[624u]]), /* jbig2enc */
#else
  RAF_PKG_INIT(0x3c5a3bb7u, 8u, 0u, 0x129bf10cu, 0), /* jbig2enc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe27da8d7u, 4u, 0u, 0xbb8fbc3cu, &g_termux_pkg_names[g_termux_pkg_name_offs[625u]]), /* jcal */
#else
  RAF_PKG_INIT(0xe27da8d7u, 4u, 0u, 0xbb8fbc3cu, 0), /* jcal */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf0605cf0u, 15u, 0u, 0xa700507du, &g_termux_pkg_names[g_termux_pkg_name_offs[626u]]), /* jellyfin-server */
#else
  RAF_PKG_INIT(0xf0605cf0u, 15u, 0u, 0xa700507du, 0), /* jellyfin-server */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcf4713a0u, 9u, 0u, 0xfca0d26du, &g_termux_pkg_names[g_termux_pkg_name_offs[627u]]), /* jfrog-cli */
#else
  RAF_PKG_INIT(0xcf4713a0u, 9u, 0u, 0xfca0d26du, 0), /* jfrog-cli */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4ab475c5u, 5u, 0u, 0x43398674u, &g_termux_pkg_names[g_termux_pkg_name_offs[628u]]), /* jftui */
#else
  RAF_PKG_INIT(0x4ab475c5u, 5u, 0u, 0x43398674u, 0), /* jftui */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4b6c1b6bu, 5u, 0u, 0xf14ebcb2u, &g_termux_pkg_names[g_termux_pkg_name_offs[629u]]), /* jhead */
#else
  RAF_PKG_INIT(0x4b6c1b6bu, 5u, 0u, 0xf14ebcb2u, 0), /* jhead */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb217fa30u, 5u, 0u, 0x20b43aadu, &g_termux_pkg_names[g_termux_pkg_name_offs[630u]]), /* jigdo */
#else
  RAF_PKG_INIT(0xb217fa30u, 5u, 0u, 0x20b43aadu, 0), /* jigdo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1a362552u, 7u, 0u, 0x0e3469bfu, &g_termux_pkg_names[g_termux_pkg_name_offs[631u]]), /* jira-go */
#else
  RAF_PKG_INIT(0x1a362552u, 7u, 0u, 0x0e3469bfu, 0), /* jira-go */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x53699780u, 5u, 0u, 0xf321c519u, &g_termux_pkg_names[g_termux_pkg_name_offs[632u]]), /* jless */
#else
  RAF_PKG_INIT(0x53699780u, 5u, 0u, 0xf321c519u, 0), /* jless */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x623f6a56u, 2u, 0u, 0x012d8c6du, &g_termux_pkg_names[g_termux_pkg_name_offs[633u]]), /* jo */
#else
  RAF_PKG_INIT(0x623f6a56u, 2u, 0u, 0x012d8c6du, 0), /* jo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdcd42e49u, 3u, 0u, 0xe2b37098u, &g_termux_pkg_names[g_termux_pkg_name_offs[634u]]), /* joe */
#else
  RAF_PKG_INIT(0xdcd42e49u, 3u, 0u, 0xe2b37098u, 0), /* joe */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbdd537dfu, 4u, 0u, 0xada9f0ecu, &g_termux_pkg_names[g_termux_pkg_name_offs[635u]]), /* jove */
#else
  RAF_PKG_INIT(0xbdd537dfu, 4u, 0u, 0xada9f0ecu, 0), /* jove */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd55ec5dau, 4u, 0u, 0xa661f215u, &g_termux_pkg_names[g_termux_pkg_name_offs[636u]]), /* jp2a */
#else
  RAF_PKG_INIT(0xd55ec5dau, 4u, 0u, 0xa661f215u, 0), /* jp2a */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa0771f4au, 9u, 0u, 0x4a21a30fu, &g_termux_pkg_names[g_termux_pkg_name_offs[637u]]), /* jpegoptim */
#else
  RAF_PKG_INIT(0xa0771f4au, 9u, 0u, 0x4a21a30fu, 0), /* jpegoptim */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5c3f60e4u, 2u, 0u, 0xe32d5d33u, &g_termux_pkg_names[g_termux_pkg_name_offs[638u]]), /* jq */
#else
  RAF_PKG_INIT(0x5c3f60e4u, 2u, 0u, 0xe32d5d33u, 0), /* jq */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x508cca36u, 6u, 0u, 0x6b8858c9u, &g_termux_pkg_names[g_termux_pkg_name_offs[639u]]), /* jq-lsp */
#else
  RAF_PKG_INIT(0x508cca36u, 6u, 0u, 0x6b8858c9u, 0), /* jq-lsp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbfc4f618u, 3u, 0u, 0xff69fc8du, &g_termux_pkg_names[g_termux_pkg_name_offs[640u]]), /* jql */
#else
  RAF_PKG_INIT(0xbfc4f618u, 3u, 0u, 0xff69fc8du, 0), /* jql */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x27903bebu, 6u, 0u, 0xb2db2e38u, &g_termux_pkg_names[g_termux_pkg_name_offs[641u]]), /* json-c */
#else
  RAF_PKG_INIT(0x27903bebu, 6u, 0u, 0xb2db2e38u, 0), /* json-c */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x352c896eu, 9u, 0u, 0xa4e54033u, &g_termux_pkg_names[g_termux_pkg_name_offs[642u]]), /* json-glib */
#else
  RAF_PKG_INIT(0x352c896eu, 9u, 0u, 0xa4e54033u, 0), /* json-glib */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9db0b7c0u, 7u, 0u, 0x447990adu, &g_termux_pkg_names[g_termux_pkg_name_offs[643u]]), /* jsoncpp */
#else
  RAF_PKG_INIT(0x9db0b7c0u, 7u, 0u, 0x447990adu, 0), /* jsoncpp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa73f5c0du, 4u, 0u, 0xb4f7ead2u, &g_termux_pkg_names[g_termux_pkg_name_offs[644u]]), /* jump */
#else
  RAF_PKG_INIT(0xa73f5c0du, 4u, 0u, 0xb4f7ead2u, 0), /* jump */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x991ef258u, 4u, 0u, 0xc2f14517u, &g_termux_pkg_names[g_termux_pkg_name_offs[645u]]), /* jupp */
#else
  RAF_PKG_INIT(0x991ef258u, 4u, 0u, 0xc2f14517u, 0), /* jupp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8f259e5fu, 4u, 0u, 0xace8d3b0u, &g_termux_pkg_names[g_termux_pkg_name_offs[646u]]), /* just */
#else
  RAF_PKG_INIT(0x8f259e5fu, 4u, 0u, 0xace8d3b0u, 0), /* just */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1d0466e9u, 6u, 0u, 0x8247749au, &g_termux_pkg_names[g_termux_pkg_name_offs[647u]]), /* jython */
#else
  RAF_PKG_INIT(0x1d0466e9u, 6u, 0u, 0x8247749au, 0), /* jython */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0774e32fu, 8u, 0u, 0xdb864dd8u, &g_termux_pkg_names[g_termux_pkg_name_offs[648u]]), /* k2pdfopt */
#else
  RAF_PKG_INIT(0x0774e32fu, 8u, 0u, 0xdb864dd8u, 0), /* k2pdfopt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6abe29aeu, 3u, 0u, 0x6470e227u, &g_termux_pkg_names[g_termux_pkg_name_offs[649u]]), /* k9s */
#else
  RAF_PKG_INIT(0x6abe29aeu, 3u, 0u, 0x6470e227u, 0), /* k9s */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x57c54a5bu, 16u, 0u, 0x63d37238u, &g_termux_pkg_names[g_termux_pkg_name_offs[650u]]), /* kainjow-mustache */
#else
  RAF_PKG_INIT(0x57c54a5bu, 16u, 0u, 0x63d37238u, 0), /* kainjow-mustache */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4dbaafe3u, 7u, 0u, 0xb5acb16au, &g_termux_pkg_names[g_termux_pkg_name_offs[651u]]), /* kakoune */
#else
  RAF_PKG_INIT(0x4dbaafe3u, 7u, 0u, 0xb5acb16au, 0), /* kakoune */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x232609b9u, 11u, 0u, 0x361e4348u, &g_termux_pkg_names[g_termux_pkg_name_offs[652u]]), /* kakoune-lsp */
#else
  RAF_PKG_INIT(0x232609b9u, 11u, 0u, 0x361e4348u, 0), /* kakoune-lsp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7b049d34u, 3u, 0u, 0x63d1db95u, &g_termux_pkg_names[g_termux_pkg_name_offs[653u]]), /* kbd */
#else
  RAF_PKG_INIT(0x7b049d34u, 3u, 0u, 0x63d1db95u, 0), /* kbd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7f6cc479u, 7u, 0u, 0x5fa1521cu, &g_termux_pkg_names[g_termux_pkg_name_offs[654u]]), /* keybase */
#else
  RAF_PKG_INIT(0x7f6cc479u, 7u, 0u, 0x5fa1521cu, 0), /* keybase */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xafa1de55u, 8u, 0u, 0xb615ce22u, &g_termux_pkg_names[g_termux_pkg_name_offs[655u]]), /* keychain */
#else
  RAF_PKG_INIT(0xafa1de55u, 8u, 0u, 0xb615ce22u, 0), /* keychain */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbc1e41f8u, 4u, 0u, 0xf2cc25c7u, &g_termux_pkg_names[g_termux_pkg_name_offs[656u]]), /* kibi */
#else
  RAF_PKG_INIT(0xbc1e41f8u, 4u, 0u, 0xf2cc25c7u, 0), /* kibi */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc7d65b25u, 11u, 0u, 0x5d2b30ecu, &g_termux_pkg_names[g_termux_pkg_name_offs[657u]]), /* kiwix-tools */
#else
  RAF_PKG_INIT(0xc7d65b25u, 11u, 0u, 0x5d2b30ecu, 0), /* kiwix-tools */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x32427a81u, 6u, 0u, 0xc7a406beu, &g_termux_pkg_names[g_termux_pkg_name_offs[658u]]), /* knockd */
#else
  RAF_PKG_INIT(0x32427a81u, 6u, 0u, 0xc7a406beu, 0), /* knockd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9125bfe6u, 4u, 0u, 0xd9e9594du, &g_termux_pkg_names[g_termux_pkg_name_offs[659u]]), /* kona */
#else
  RAF_PKG_INIT(0x9125bfe6u, 4u, 0u, 0xd9e9594du, 0), /* kona */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9d8cf0ecu, 6u, 0u, 0xc3d5870bu, &g_termux_pkg_names[g_termux_pkg_name_offs[660u]]), /* kotlin */
#else
  RAF_PKG_INIT(0x9d8cf0ecu, 6u, 0u, 0xc3d5870bu, 0), /* kotlin */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8a6c98b1u, 4u, 0u, 0x96f5ef72u, &g_termux_pkg_names[g_termux_pkg_name_offs[661u]]), /* krb5 */
#else
  RAF_PKG_INIT(0x8a6c98b1u, 4u, 0u, 0x96f5ef72u, 0), /* krb5 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb50a241fu, 9u, 0u, 0x251a788eu, &g_termux_pkg_names[g_termux_pkg_name_offs[662u]]), /* kubecolor */
#else
  RAF_PKG_INIT(0xb50a241fu, 9u, 0u, 0x251a788eu, 0), /* kubecolor */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe84ff609u, 7u, 0u, 0xb7df2024u, &g_termux_pkg_names[g_termux_pkg_name_offs[663u]]), /* kubectl */
#else
  RAF_PKG_INIT(0xe84ff609u, 7u, 0u, 0xb7df2024u, 0), /* kubectl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7c998dc5u, 9u, 0u, 0xb95f01b4u, &g_termux_pkg_names[g_termux_pkg_name_offs[664u]]), /* kubelogin */
#else
  RAF_PKG_INIT(0x7c998dc5u, 9u, 0u, 0xb95f01b4u, 0), /* kubelogin */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcabac2d6u, 4u, 0u, 0xeb9c96bdu, &g_termux_pkg_names[g_termux_pkg_name_offs[665u]]), /* kubo */
#else
  RAF_PKG_INIT(0xcabac2d6u, 4u, 0u, 0xeb9c96bdu, 0), /* kubo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3c508375u, 10u, 0u, 0xb0e1675eu, &g_termux_pkg_names[g_termux_pkg_name_offs[666u]]), /* ladspa-sdk */
#else
  RAF_PKG_INIT(0x3c508375u, 10u, 0u, 0xb0e1675eu, 0), /* ladspa-sdk */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x551ec567u, 12u, 0u, 0xa4285620u, &g_termux_pkg_names[g_termux_pkg_name_offs[667u]]), /* lastpass-cli */
#else
  RAF_PKG_INIT(0x551ec567u, 12u, 0u, 0xa4285620u, 0), /* lastpass-cli */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x19c68a15u, 7u, 0u, 0x7def6790u, &g_termux_pkg_names[g_termux_pkg_name_offs[668u]]), /* lazygit */
#else
  RAF_PKG_INIT(0x19c68a15u, 7u, 0u, 0x7def6790u, 0), /* lazygit */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa2e089d5u, 4u, 0u, 0x6860408eu, &g_termux_pkg_names[g_termux_pkg_name_offs[669u]]), /* lcal */
#else
  RAF_PKG_INIT(0xa2e089d5u, 4u, 0u, 0x6860408eu, 0), /* lcal */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x636d607au, 3u, 0u, 0x7e019663u, &g_termux_pkg_names[g_termux_pkg_name_offs[670u]]), /* ldc */
#else
  RAF_PKG_INIT(0x636d607au, 3u, 0u, 0x7e019663u, 0), /* ldc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5e6d589bu, 3u, 0u, 0x83019e42u, &g_termux_pkg_names[g_termux_pkg_name_offs[671u]]), /* ldd */
#else
  RAF_PKG_INIT(0x5e6d589bu, 3u, 0u, 0x83019e42u, 0), /* ldd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8e13eaaeu, 4u, 0u, 0x749b1e45u, &g_termux_pkg_names[g_termux_pkg_name_offs[672u]]), /* ldns */
#else
  RAF_PKG_INIT(0x8e13eaaeu, 4u, 0u, 0x749b1e45u, 0), /* ldns */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xee7c1c8cu, 6u, 0u, 0xa65cb1ebu, &g_termux_pkg_names[g_termux_pkg_name_offs[673u]]), /* ledger */
#else
  RAF_PKG_INIT(0xee7c1c8cu, 6u, 0u, 0xa65cb1ebu, 0), /* ledger */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2d4d5588u, 4u, 0u, 0xd4c24fabu, &g_termux_pkg_names[g_termux_pkg_name_offs[674u]]), /* lego */
#else
  RAF_PKG_INIT(0x2d4d5588u, 4u, 0u, 0xd4c24fabu, 0), /* lego */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x531b843eu, 9u, 0u, 0xecaa2b8fu, &g_termux_pkg_names[g_termux_pkg_name_offs[675u]]), /* leptonica */
#else
  RAF_PKG_INIT(0x531b843eu, 9u, 0u, 0xecaa2b8fu, 0), /* leptonica */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x216b57b8u, 4u, 0u, 0xd8f3f2c3u, &g_termux_pkg_names[g_termux_pkg_name_offs[676u]]), /* less */
#else
  RAF_PKG_INIT(0x216b57b8u, 4u, 0u, 0xd8f3f2c3u, 0), /* less */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe76ce6a4u, 8u, 0u, 0x48f86d4fu, &g_termux_pkg_names[g_termux_pkg_name_offs[677u]]), /* lesspipe */
#else
  RAF_PKG_INIT(0xe76ce6a4u, 8u, 0u, 0x48f86d4fu, 0), /* lesspipe */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8e00641bu, 7u, 0u, 0x49aa73a2u, &g_termux_pkg_names[g_termux_pkg_name_offs[678u]]), /* leveldb */
#else
  RAF_PKG_INIT(0x8e00641bu, 7u, 0u, 0x49aa73a2u, 0), /* leveldb */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x35392621u, 6u, 0u, 0x70b55946u, &g_termux_pkg_names[g_termux_pkg_name_offs[679u]]), /* lexbor */
#else
  RAF_PKG_INIT(0x35392621u, 6u, 0u, 0x70b55946u, 0), /* lexbor */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8bd20271u, 6u, 0u, 0x6ce02ca2u, &g_termux_pkg_names[g_termux_pkg_name_offs[680u]]), /* lexter */
#else
  RAF_PKG_INIT(0x8bd20271u, 6u, 0u, 0x6ce02ca2u, 0), /* lexter */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4b31ce97u, 2u, 0u, 0xd83c566cu, &g_termux_pkg_names[g_termux_pkg_name_offs[681u]]), /* lf */
#else
  RAF_PKG_INIT(0x4b31ce97u, 2u, 0u, 0xd83c566cu, 0), /* lf */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x880a1853u, 8u, 0u, 0x13475424u, &g_termux_pkg_names[g_termux_pkg_name_offs[682u]]), /* lfortran */
#else
  RAF_PKG_INIT(0x880a1853u, 8u, 0u, 0x13475424u, 0), /* lfortran */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb3cbbd8bu, 4u, 0u, 0x9df6a6a8u, &g_termux_pkg_names[g_termux_pkg_name_offs[683u]]), /* lftp */
#else
  RAF_PKG_INIT(0xb3cbbd8bu, 4u, 0u, 0x9df6a6a8u, 0), /* lftp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2fa9cc45u, 14u, 0u, 0x514668c2u, &g_termux_pkg_names[g_termux_pkg_name_offs[684u]]), /* lgogdownloader */
#else
  RAF_PKG_INIT(0x2fa9cc45u, 14u, 0u, 0x514668c2u, 0), /* lgogdownloader */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3cbbb6e0u, 5u, 0u, 0x81b57281u, &g_termux_pkg_names[g_termux_pkg_name_offs[685u]]), /* lhasa */
#else
  RAF_PKG_INIT(0x3cbbb6e0u, 5u, 0u, 0x81b57281u, 0), /* lhasa */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6e4313fcu, 6u, 0u, 0xa4f4507fu, &g_termux_pkg_names[g_termux_pkg_name_offs[686u]]), /* liba52 */
#else
  RAF_PKG_INIT(0x6e4313fcu, 6u, 0u, 0xa4f4507fu, 0), /* liba52 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc10e8570u, 6u, 0u, 0x57b5cbb7u, &g_termux_pkg_names[g_termux_pkg_name_offs[687u]]), /* libacl */
#else
  RAF_PKG_INIT(0xc10e8570u, 6u, 0u, 0x57b5cbb7u, 0), /* libacl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa51d63e6u, 6u, 0u, 0x5ba6c779u, &g_termux_pkg_names[g_termux_pkg_name_offs[688u]]), /* libaml */
#else
  RAF_PKG_INIT(0xa51d63e6u, 6u, 0u, 0x5ba6c779u, 0), /* libaml */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa1f24c3fu, 23u, 0u, 0xe2b9e186u, &g_termux_pkg_names[g_termux_pkg_name_offs[689u]]), /* libandroid-complex-math */
#else
  RAF_PKG_INIT(0xa1f24c3fu, 23u, 0u, 0xe2b9e186u, 0), /* libandroid-complex-math */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x963aae4bu, 19u, 0u, 0x669ba3eau, &g_termux_pkg_names[g_termux_pkg_name_offs[690u]]), /* libandroid-execinfo */
#else
  RAF_PKG_INIT(0x963aae4bu, 19u, 0u, 0x669ba3eau, 0), /* libandroid-execinfo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5b98cab0u, 15u, 0u, 0x71125121u, &g_termux_pkg_names[g_termux_pkg_name_offs[691u]]), /* libandroid-glob */
#else
  RAF_PKG_INIT(0x5b98cab0u, 15u, 0u, 0x71125121u, 0), /* libandroid-glob */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe3191296u, 26u, 0u, 0x1025a2a9u, &g_termux_pkg_names[g_termux_pkg_name_offs[692u]]), /* libandroid-posix-semaphore */
#else
  RAF_PKG_INIT(0xe3191296u, 26u, 0u, 0x1025a2a9u, 0), /* libandroid-posix-semaphore */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe48b5938u, 18u, 0u, 0x681b1303u, &g_termux_pkg_names[g_termux_pkg_name_offs[693u]]), /* libandroid-selinux */
#else
  RAF_PKG_INIT(0xe48b5938u, 18u, 0u, 0x681b1303u, 0), /* libandroid-selinux */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x641b62eau, 16u, 0u, 0x59fcb905u, &g_termux_pkg_names[g_termux_pkg_name_offs[694u]]), /* libandroid-shmem */
#else
  RAF_PKG_INIT(0x641b62eau, 16u, 0u, 0x59fcb905u, 0), /* libandroid-shmem */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x01cd5529u, 16u, 0u, 0x94d40bdau, &g_termux_pkg_names[g_termux_pkg_name_offs[695u]]), /* libandroid-spawn */
#else
  RAF_PKG_INIT(0x01cd5529u, 16u, 0u, 0x94d40bdau, 0), /* libandroid-spawn */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x93932d06u, 15u, 0u, 0x3a6ba967u, &g_termux_pkg_names[g_termux_pkg_name_offs[696u]]), /* libandroid-stub */
#else
  RAF_PKG_INIT(0x93932d06u, 15u, 0u, 0x3a6ba967u, 0), /* libandroid-stub */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0317b401u, 18u, 0u, 0x27155ebau, &g_termux_pkg_names[g_termux_pkg_name_offs[697u]]), /* libandroid-support */
#else
  RAF_PKG_INIT(0x0317b401u, 18u, 0u, 0x27155ebau, 0), /* libandroid-support */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x29b03014u, 25u, 0u, 0x94223179u, &g_termux_pkg_names[g_termux_pkg_name_offs[698u]]), /* libandroid-sysv-semaphore */
#else
  RAF_PKG_INIT(0x29b03014u, 25u, 0u, 0x94223179u, 0), /* libandroid-sysv-semaphore */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3b3ac2e5u, 17u, 0u, 0x2379bf8cu, &g_termux_pkg_names[g_termux_pkg_name_offs[699u]]), /* libandroid-utimes */
#else
  RAF_PKG_INIT(0x3b3ac2e5u, 17u, 0u, 0x2379bf8cu, 0), /* libandroid-utimes */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc70e92e9u, 18u, 0u, 0x581db23au, &g_termux_pkg_names[g_termux_pkg_name_offs[700u]]), /* libandroid-wordexp */
#else
  RAF_PKG_INIT(0xc70e92e9u, 18u, 0u, 0x581db23au, 0), /* libandroid-wordexp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x437c9108u, 5u, 0u, 0x67b2ed55u, &g_termux_pkg_names[g_termux_pkg_name_offs[701u]]), /* libao */
#else
  RAF_PKG_INIT(0x437c9108u, 5u, 0u, 0x67b2ed55u, 0), /* libao */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa218e1ffu, 6u, 0u, 0x76ab6f28u, &g_termux_pkg_names[g_termux_pkg_name_offs[702u]]), /* libaom */
#else
  RAF_PKG_INIT(0xa218e1ffu, 6u, 0u, 0x76ab6f28u, 0), /* libaom */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3b0f8c26u, 15u, 0u, 0xc9c04bf7u, &g_termux_pkg_names[g_termux_pkg_name_offs[703u]]), /* libapt-pkg-perl */
#else
  RAF_PKG_INIT(0x3b0f8c26u, 15u, 0u, 0xc9c04bf7u, 0), /* libapt-pkg-perl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf0ed3772u, 10u, 0u, 0xab785381u, &g_termux_pkg_names[g_termux_pkg_name_offs[704u]]), /* libarchive */
#else
  RAF_PKG_INIT(0xf0ed3772u, 10u, 0u, 0xab785381u, 0), /* libarchive */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4d4ec5c1u, 12u, 0u, 0x79a8c93au, &g_termux_pkg_names[g_termux_pkg_name_offs[705u]]), /* libarrow-cpp */
#else
  RAF_PKG_INIT(0x4d4ec5c1u, 12u, 0u, 0x79a8c93au, 0), /* libarrow-cpp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3b1b2a30u, 7u, 0u, 0xfb7aafe5u, &g_termux_pkg_names[g_termux_pkg_name_offs[706u]]), /* libasio */
#else
  RAF_PKG_INIT(0x3b1b2a30u, 7u, 0u, 0xfb7aafe5u, 0), /* libasio */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbfe7746du, 6u, 0u, 0x5c8d3126u, &g_termux_pkg_names[g_termux_pkg_name_offs[707u]]), /* libass */
#else
  RAF_PKG_INIT(0xbfe7746du, 6u, 0u, 0x5c8d3126u, 0), /* libass */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xec3f85ffu, 9u, 0u, 0xb9b91982u, &g_termux_pkg_names[g_termux_pkg_name_offs[708u]]), /* libassuan */
#else
  RAF_PKG_INIT(0xec3f85ffu, 9u, 0u, 0xb9b91982u, 0), /* libassuan */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x54faef0cu, 13u, 0u, 0x54ca726du, &g_termux_pkg_names[g_termux_pkg_name_offs[709u]]), /* libatomic-ops */
#else
  RAF_PKG_INIT(0x54faef0cu, 13u, 0u, 0x54ca726du, 0), /* libatomic-ops */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xda4d0078u, 7u, 0u, 0x6c48f2cdu, &g_termux_pkg_names[g_termux_pkg_name_offs[710u]]), /* libavif */
#else
  RAF_PKG_INIT(0xda4d0078u, 7u, 0u, 0x6c48f2cdu, 0), /* libavif */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x37bcbcebu, 14u, 0u, 0xe0d0d4dcu, &g_termux_pkg_names[g_termux_pkg_name_offs[711u]]), /* libbcprov-java */
#else
  RAF_PKG_INIT(0x37bcbcebu, 14u, 0u, 0xe0d0d4dcu, 0), /* libbcprov-java */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2ff362edu, 8u, 0u, 0x266b1776u, &g_termux_pkg_names[g_termux_pkg_name_offs[712u]]), /* libblosc */
#else
  RAF_PKG_INIT(0x2ff362edu, 8u, 0u, 0x266b1776u, 0), /* libblosc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5b24a50du, 9u, 0u, 0xbe95a00cu, &g_termux_pkg_names[g_termux_pkg_name_offs[713u]]), /* libblosc2 */
#else
  RAF_PKG_INIT(0x5b24a50du, 9u, 0u, 0xbe95a00cu, 0), /* libblosc2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8329e21fu, 9u, 0u, 0x3a37ca6au, &g_termux_pkg_names[g_termux_pkg_name_offs[714u]]), /* libbluray */
#else
  RAF_PKG_INIT(0x8329e21fu, 9u, 0u, 0x3a37ca6au, 0), /* libbluray */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x15e6cd6bu, 7u, 0u, 0x0926f31au, &g_termux_pkg_names[g_termux_pkg_name_offs[715u]]), /* libbs2b */
#else
  RAF_PKG_INIT(0x15e6cd6bu, 7u, 0u, 0x0926f31au, 0), /* libbs2b */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3b83530du, 6u, 0u, 0x97006146u, &g_termux_pkg_names[g_termux_pkg_name_offs[716u]]), /* libbsd */
#else
  RAF_PKG_INIT(0x3b83530du, 6u, 0u, 0x97006146u, 0), /* libbsd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x979dcb44u, 9u, 0u, 0x5283dc05u, &g_termux_pkg_names[g_termux_pkg_name_offs[717u]]), /* libbullet */
#else
  RAF_PKG_INIT(0x979dcb44u, 9u, 0u, 0x5283dc05u, 0), /* libbullet */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa0472a59u, 7u, 0u, 0xd6fdd1fcu, &g_termux_pkg_names[g_termux_pkg_name_offs[718u]]), /* libburn */
#else
  RAF_PKG_INIT(0xa0472a59u, 7u, 0u, 0xd6fdd1fcu, 0), /* libburn */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd36ce906u, 6u, 0u, 0x6315d5b9u, &g_termux_pkg_names[g_termux_pkg_name_offs[719u]]), /* libbz2 */
#else
  RAF_PKG_INIT(0xd36ce906u, 6u, 0u, 0x6315d5b9u, 0), /* libbz2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb9d2204bu, 6u, 0u, 0xf5281cacu, &g_termux_pkg_names[g_termux_pkg_name_offs[720u]]), /* libc++ */
#else
  RAF_PKG_INIT(0xb9d2204bu, 6u, 0u, 0xf5281cacu, 0), /* libc++ */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfc1c98edu, 15u, 0u, 0x720aa7f8u, &g_termux_pkg_names[g_termux_pkg_name_offs[721u]]), /* libc++utilities */
#else
  RAF_PKG_INIT(0xfc1c98edu, 15u, 0u, 0x720aa7f8u, 0), /* libc++utilities */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc5884d5fu, 11u, 0u, 0x59321082u, &g_termux_pkg_names[g_termux_pkg_name_offs[722u]]), /* libc-client */
#else
  RAF_PKG_INIT(0xc5884d5fu, 11u, 0u, 0x59321082u, 0), /* libc-client */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x163d49bcu, 7u, 0u, 0x32918191u, &g_termux_pkg_names[g_termux_pkg_name_offs[723u]]), /* libcaca */
#else
  RAF_PKG_INIT(0x163d49bcu, 7u, 0u, 0x32918191u, 0), /* libcaca */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x430828e0u, 8u, 0u, 0x56f90d4fu, &g_termux_pkg_names[g_termux_pkg_name_offs[724u]]), /* libcairo */
#else
  RAF_PKG_INIT(0x430828e0u, 8u, 0u, 0x56f90d4fu, 0), /* libcairo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcccf24f6u, 14u, 0u, 0x8d71ec49u, &g_termux_pkg_names[g_termux_pkg_name_offs[725u]]), /* libcairomm-1.0 */
#else
  RAF_PKG_INIT(0xcccf24f6u, 14u, 0u, 0x8d71ec49u, 0), /* libcairomm-1.0 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbc19feadu, 15u, 0u, 0x97542780u, &g_termux_pkg_names[g_termux_pkg_name_offs[726u]]), /* libcairomm-1.16 */
#else
  RAF_PKG_INIT(0xbc19feadu, 15u, 0u, 0x97542780u, 0), /* libcairomm-1.16 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x864176ccu, 6u, 0u, 0x4ce00e47u, &g_termux_pkg_names[g_termux_pkg_name_offs[727u]]), /* libcap */
#else
  RAF_PKG_INIT(0x864176ccu, 6u, 0u, 0x4ce00e47u, 0), /* libcap */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3cda9a00u, 9u, 0u, 0x6182fa55u, &g_termux_pkg_names[g_termux_pkg_name_offs[728u]]), /* libcap-ng */
#else
  RAF_PKG_INIT(0x3cda9a00u, 9u, 0u, 0x6182fa55u, 0), /* libcap-ng */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa647b95au, 6u, 0u, 0x2cd9cbb9u, &g_termux_pkg_names[g_termux_pkg_name_offs[729u]]), /* libccd */
#else
  RAF_PKG_INIT(0xa647b95au, 6u, 0u, 0x2cd9cbb9u, 0), /* libccd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc3c9483du, 7u, 0u, 0x36643494u, &g_termux_pkg_names[g_termux_pkg_name_offs[730u]]), /* libcddb */
#else
  RAF_PKG_INIT(0xc3c9483du, 7u, 0u, 0x36643494u, 0), /* libcddb */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x993ad8f0u, 6u, 0u, 0x35d31e1fu, &g_termux_pkg_names[g_termux_pkg_name_offs[731u]]), /* libcdk */
#else
  RAF_PKG_INIT(0x993ad8f0u, 6u, 0u, 0x35d31e1fu, 0), /* libcdk */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x81387491u, 6u, 0u, 0x25d54386u, &g_termux_pkg_names[g_termux_pkg_name_offs[732u]]), /* libcec */
#else
  RAF_PKG_INIT(0x81387491u, 6u, 0u, 0x25d54386u, 0), /* libcec */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa589b142u, 15u, 0u, 0x8f399c7bu, &g_termux_pkg_names[g_termux_pkg_name_offs[733u]]), /* libceres-solver */
#else
  RAF_PKG_INIT(0xa589b142u, 15u, 0u, 0x8f399c7bu, 0), /* libceres-solver */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa6e3b5b7u, 11u, 0u, 0x56938706u, &g_termux_pkg_names[g_termux_pkg_name_offs[734u]]), /* libchipmunk */
#else
  RAF_PKG_INIT(0xa6e3b5b7u, 11u, 0u, 0x56938706u, 0), /* libchipmunk */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x272d978du, 14u, 0u, 0xe815bb52u, &g_termux_pkg_names[g_termux_pkg_name_offs[735u]]), /* libchromaprint */
#else
  RAF_PKG_INIT(0x272d978du, 14u, 0u, 0xe815bb52u, 0), /* libchromaprint */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x71271240u, 6u, 0u, 0x4dbfbc2fu, &g_termux_pkg_names[g_termux_pkg_name_offs[736u]]), /* libclc */
#else
  RAF_PKG_INIT(0x71271240u, 6u, 0u, 0x4dbfbc2fu, 0), /* libclc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7e2726b7u, 6u, 0u, 0x50bfc0e8u, &g_termux_pkg_names[g_termux_pkg_name_offs[737u]]), /* libcln */
#else
  RAF_PKG_INIT(0x7e2726b7u, 6u, 0u, 0x50bfc0e8u, 0), /* libcln */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc771a75fu, 7u, 0u, 0x44ee7182u, &g_termux_pkg_names[g_termux_pkg_name_offs[738u]]), /* libcoap */
#else
  RAF_PKG_INIT(0xc771a75fu, 7u, 0u, 0x44ee7182u, 0), /* libcoap */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x824e55c7u, 13u, 0u, 0x94e56ae2u, &g_termux_pkg_names[g_termux_pkg_name_offs[739u]]), /* libcoinor-cgl */
#else
  RAF_PKG_INIT(0x824e55c7u, 13u, 0u, 0x94e56ae2u, 0), /* libcoinor-cgl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2f8d6028u, 13u, 0u, 0x8d220e39u, &g_termux_pkg_names[g_termux_pkg_name_offs[740u]]), /* libcoinor-osi */
#else
  RAF_PKG_INIT(0x2f8d6028u, 13u, 0u, 0x8d220e39u, 0), /* libcoinor-osi */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x228258b0u, 15u, 0u, 0x3949a33du, &g_termux_pkg_names[g_termux_pkg_name_offs[741u]]), /* libcoinor-utils */
#else
  RAF_PKG_INIT(0x228258b0u, 15u, 0u, 0x3949a33du, 0), /* libcoinor-utils */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9ace9f2du, 21u, 0u, 0x4ca8e134u, &g_termux_pkg_names[g_termux_pkg_name_offs[742u]]), /* libcommons-lang3-java */
#else
  RAF_PKG_INIT(0x9ace9f2du, 21u, 0u, 0x4ca8e134u, 0), /* libcommons-lang3-java */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa06270bau, 9u, 0u, 0x7879111bu, &g_termux_pkg_names[g_termux_pkg_name_offs[743u]]), /* libconfig */
#else
  RAF_PKG_INIT(0xa06270bau, 9u, 0u, 0x7879111bu, 0), /* libconfig */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x452c722du, 10u, 0u, 0x0f988112u, &g_termux_pkg_names[g_termux_pkg_name_offs[744u]]), /* libconfuse */
#else
  RAF_PKG_INIT(0x452c722du, 10u, 0u, 0x0f988112u, 0), /* libconfuse */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x00093e31u, 14u, 0u, 0x1dc8a2b2u, &g_termux_pkg_names[g_termux_pkg_name_offs[745u]]), /* libcpufeatures */
#else
  RAF_PKG_INIT(0x00093e31u, 14u, 0u, 0x1dc8a2b2u, 0), /* libcpufeatures */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4bfec800u, 8u, 0u, 0x1c1fb1dbu, &g_termux_pkg_names[g_termux_pkg_name_offs[746u]]), /* libcroco */
#else
  RAF_PKG_INIT(0x4bfec800u, 8u, 0u, 0x1c1fb1dbu, 0), /* libcroco */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5c8b1300u, 8u, 0u, 0xa9a24fd3u, &g_termux_pkg_names[g_termux_pkg_name_offs[747u]]), /* libcrypt */
#else
  RAF_PKG_INIT(0x5c8b1300u, 8u, 0u, 0xa9a24fd3u, 0), /* libcrypt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa31007a7u, 6u, 0u, 0x47ae699cu, &g_termux_pkg_names[g_termux_pkg_name_offs[748u]]), /* libcue */
#else
  RAF_PKG_INIT(0xa31007a7u, 6u, 0u, 0x47ae699cu, 0), /* libcue */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x109df17fu, 8u, 0u, 0x88fb08a8u, &g_termux_pkg_names[g_termux_pkg_name_offs[749u]]), /* libcunit */
#else
  RAF_PKG_INIT(0x109df17fu, 8u, 0u, 0x88fb08a8u, 0), /* libcunit */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9b0d1596u, 7u, 0u, 0xc965e6efu, &g_termux_pkg_names[g_termux_pkg_name_offs[750u]]), /* libcurl */
#else
  RAF_PKG_INIT(0x9b0d1596u, 7u, 0u, 0xc965e6efu, 0), /* libcurl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1f50e34bu, 7u, 0u, 0xb61ebf66u, &g_termux_pkg_names[g_termux_pkg_name_offs[751u]]), /* libczmq */
#else
  RAF_PKG_INIT(0x1f50e34bu, 7u, 0u, 0xb61ebf66u, 0), /* libczmq */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2c07e7c0u, 9u, 0u, 0x6b705b41u, &g_termux_pkg_names[g_termux_pkg_name_offs[752u]]), /* libdaemon */
#else
  RAF_PKG_INIT(0x2c07e7c0u, 9u, 0u, 0x6b705b41u, 0), /* libdaemon */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdadd784du, 7u, 0u, 0x126ff1ccu, &g_termux_pkg_names[g_termux_pkg_name_offs[753u]]), /* libdart */
#else
  RAF_PKG_INIT(0xdadd784du, 7u, 0u, 0x126ff1ccu, 0), /* libdart */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x798186a2u, 8u, 0u, 0x786afee9u, &g_termux_pkg_names[g_termux_pkg_name_offs[754u]]), /* libdav1d */
#else
  RAF_PKG_INIT(0x798186a2u, 8u, 0u, 0x786afee9u, 0), /* libdav1d */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x466fc9ceu, 5u, 0u, 0x64be218fu, &g_termux_pkg_names[g_termux_pkg_name_offs[755u]]), /* libdb */
#else
  RAF_PKG_INIT(0x466fc9ceu, 5u, 0u, 0x64be218fu, 0), /* libdb */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0cb1b6eau, 8u, 0u, 0xfe912981u, &g_termux_pkg_names[g_termux_pkg_name_offs[756u]]), /* libde265 */
#else
  RAF_PKG_INIT(0x0cb1b6eau, 8u, 0u, 0xfe912981u, 0), /* libde265 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7a94d5efu, 10u, 0u, 0x9dca3f4cu, &g_termux_pkg_names[g_termux_pkg_name_offs[757u]]), /* libdeflate */
#else
  RAF_PKG_INIT(0x7a94d5efu, 10u, 0u, 0x9dca3f4cu, 0), /* libdeflate */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd91db496u, 8u, 0u, 0x399ed545u, &g_termux_pkg_names[g_termux_pkg_name_offs[758u]]), /* libdevil */
#else
  RAF_PKG_INIT(0xd91db496u, 8u, 0u, 0x399ed545u, 0), /* libdevil */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5b40e6ceu, 11u, 0u, 0xf52d15ffu, &g_termux_pkg_names[g_termux_pkg_name_offs[759u]]), /* libdispatch */
#else
  RAF_PKG_INIT(0x5b40e6ceu, 11u, 0u, 0xf52d15ffu, 0), /* libdispatch */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7e2ed27du, 15u, 0u, 0x84dd01f8u, &g_termux_pkg_names[g_termux_pkg_name_offs[760u]]), /* libdisplay-info */
#else
  RAF_PKG_INIT(0x7e2ed27du, 15u, 0u, 0x84dd01f8u, 0), /* libdisplay-info */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc158c70bu, 12u, 0u, 0x3fab7d40u, &g_termux_pkg_names[g_termux_pkg_name_offs[761u]]), /* libdjinterop */
#else
  RAF_PKG_INIT(0xc158c70bu, 12u, 0u, 0x3fab7d40u, 0), /* libdjinterop */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1651037bu, 7u, 0u, 0xd4c8b522u, &g_termux_pkg_names[g_termux_pkg_name_offs[762u]]), /* libdmtx */
#else
  RAF_PKG_INIT(0x1651037bu, 7u, 0u, 0xd4c8b522u, 0), /* libdmtx */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa4d38e89u, 6u, 0u, 0x9926e6b6u, &g_termux_pkg_names[g_termux_pkg_name_offs[763u]]), /* libdrm */
#else
  RAF_PKG_INIT(0xa4d38e89u, 6u, 0u, 0x9926e6b6u, 0), /* libdrm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe27e4e13u, 9u, 0u, 0x93e4acbeu, &g_termux_pkg_names[g_termux_pkg_name_offs[764u]]), /* libduckdb */
#else
  RAF_PKG_INIT(0xe27e4e13u, 9u, 0u, 0x93e4acbeu, 0), /* libduckdb */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe2032094u, 10u, 0u, 0x31075937u, &g_termux_pkg_names[g_termux_pkg_name_offs[765u]]), /* libduktape */
#else
  RAF_PKG_INIT(0xe2032094u, 10u, 0u, 0x31075937u, 0), /* libduktape */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3967f3d5u, 9u, 0u, 0xf98a3538u, &g_termux_pkg_names[g_termux_pkg_name_offs[766u]]), /* libdvbcsa */
#else
  RAF_PKG_INIT(0x3967f3d5u, 9u, 0u, 0xf98a3538u, 0), /* libdvbcsa */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1ffe5668u, 9u, 0u, 0x10c78885u, &g_termux_pkg_names[g_termux_pkg_name_offs[767u]]), /* libdvbpsi */
#else
  RAF_PKG_INIT(0x1ffe5668u, 9u, 0u, 0x10c78885u, 0), /* libdvbpsi */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xabeef313u, 9u, 0u, 0x674f9542u, &g_termux_pkg_names[g_termux_pkg_name_offs[768u]]), /* libdvdnav */
#else
  RAF_PKG_INIT(0xabeef313u, 9u, 0u, 0x674f9542u, 0), /* libdvdnav */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3d6ca4b2u, 10u, 0u, 0xab046a75u, &g_termux_pkg_names[g_termux_pkg_name_offs[769u]]), /* libdvdread */
#else
  RAF_PKG_INIT(0x3d6ca4b2u, 10u, 0u, 0xab046a75u, 0), /* libdvdread */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1ac9befau, 7u, 0u, 0x97b88273u, &g_termux_pkg_names[g_termux_pkg_name_offs[770u]]), /* libebml */
#else
  RAF_PKG_INIT(0x1ac9befau, 7u, 0u, 0x97b88273u, 0), /* libebml */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf8631db9u, 10u, 0u, 0xc2984a66u, &g_termux_pkg_names[g_termux_pkg_name_offs[771u]]), /* libebur128 */
#else
  RAF_PKG_INIT(0xf8631db9u, 10u, 0u, 0xc2984a66u, 0), /* libebur128 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9cc6d5b8u, 7u, 0u, 0x2822662du, &g_termux_pkg_names[g_termux_pkg_name_offs[772u]]), /* libedit */
#else
  RAF_PKG_INIT(0x9cc6d5b8u, 7u, 0u, 0x2822662du, 0), /* libedit */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe8347dd9u, 6u, 0u, 0x31779fdau, &g_termux_pkg_names[g_termux_pkg_name_offs[773u]]), /* libelf */
#else
  RAF_PKG_INIT(0xe8347dd9u, 6u, 0u, 0x31779fdau, 0), /* libelf */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5e8ff2ceu, 7u, 0u, 0x54690fefu, &g_termux_pkg_names[g_termux_pkg_name_offs[774u]]), /* libenet */
#else
  RAF_PKG_INIT(0x5e8ff2ceu, 7u, 0u, 0x54690fefu, 0), /* libenet */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xaf90233du, 8u, 0u, 0xb3a04d4eu, &g_termux_pkg_names[g_termux_pkg_name_offs[775u]]), /* libepoxy */
#else
  RAF_PKG_INIT(0xaf90233du, 8u, 0u, 0xb3a04d4eu, 0), /* libepoxy */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf9458f44u, 11u, 0u, 0xbc93d991u, &g_termux_pkg_names[g_termux_pkg_name_offs[776u]]), /* libesqlite3 */
#else
  RAF_PKG_INIT(0xf9458f44u, 11u, 0u, 0xbc93d991u, 0), /* libesqlite3 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa00fd0cbu, 10u, 0u, 0x471d155cu, &g_termux_pkg_names[g_termux_pkg_name_offs[777u]]), /* libetonyek */
#else
  RAF_PKG_INIT(0xa00fd0cbu, 10u, 0u, 0x471d155cu, 0), /* libetonyek */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3c71f8a7u, 5u, 0u, 0x4ebbc056u, &g_termux_pkg_names[g_termux_pkg_name_offs[778u]]), /* libev */
#else
  RAF_PKG_INIT(0x3c71f8a7u, 5u, 0u, 0x4ebbc056u, 0), /* libev */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3fb71884u, 8u, 0u, 0xffe231c3u, &g_termux_pkg_names[g_termux_pkg_name_offs[779u]]), /* libevent */
#else
  RAF_PKG_INIT(0x3fb71884u, 8u, 0u, 0xffe231c3u, 0), /* libevent */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3085fd12u, 7u, 0u, 0xef5dd973u, &g_termux_pkg_names[g_termux_pkg_name_offs[780u]]), /* libexif */
#else
  RAF_PKG_INIT(0x3085fd12u, 7u, 0u, 0xef5dd973u, 0), /* libexif */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7a2638ceu, 8u, 0u, 0x34a7d5b9u, &g_termux_pkg_names[g_termux_pkg_name_offs[781u]]), /* libexpat */
#else
  RAF_PKG_INIT(0x7a2638ceu, 8u, 0u, 0x34a7d5b9u, 0), /* libexpat */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1aff6855u, 7u, 0u, 0x2dbbdb40u, &g_termux_pkg_names[g_termux_pkg_name_offs[782u]]), /* libfann */
#else
  RAF_PKG_INIT(0x1aff6855u, 7u, 0u, 0x2dbbdb40u, 0), /* libfann */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5f224511u, 6u, 0u, 0x73ff4002u, &g_termux_pkg_names[g_termux_pkg_name_offs[783u]]), /* libfcl */
#else
  RAF_PKG_INIT(0x5f224511u, 6u, 0u, 0x73ff4002u, 0), /* libfcl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6906860du, 10u, 0u, 0x50f2027eu, &g_termux_pkg_names[g_termux_pkg_name_offs[784u]]), /* libfdk-aac */
#else
  RAF_PKG_INIT(0x6906860du, 10u, 0u, 0x50f2027eu, 0), /* libfdk-aac */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x56156af3u, 6u, 0u, 0x4cf846d8u, &g_termux_pkg_names[g_termux_pkg_name_offs[785u]]), /* libffi */
#else
  RAF_PKG_INIT(0x56156af3u, 6u, 0u, 0x4cf846d8u, 0), /* libffi */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x104b9706u, 11u, 0u, 0x531e398fu, &g_termux_pkg_names[g_termux_pkg_name_offs[786u]]), /* libfixposix */
#else
  RAF_PKG_INIT(0x104b9706u, 11u, 0u, 0x531e398fu, 0), /* libfixposix */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8e6394c2u, 7u, 0u, 0x7b83ae1fu, &g_termux_pkg_names[g_termux_pkg_name_offs[787u]]), /* libflac */
#else
  RAF_PKG_INIT(0x8e6394c2u, 7u, 0u, 0x7b83ae1fu, 0), /* libflac */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd4cfd9ddu, 8u, 0u, 0xdf525482u, &g_termux_pkg_names[g_termux_pkg_name_offs[788u]]), /* libflann */
#else
  RAF_PKG_INIT(0xd4cfd9ddu, 8u, 0u, 0xdf525482u, 0), /* libflann */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0f0f1c63u, 11u, 0u, 0x75a904b6u, &g_termux_pkg_names[g_termux_pkg_name_offs[789u]]), /* libforestdb */
#else
  RAF_PKG_INIT(0x0f0f1c63u, 11u, 0u, 0x75a904b6u, 0), /* libforestdb */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xff4d5686u, 9u, 0u, 0x004a6783u, &g_termux_pkg_names[g_termux_pkg_name_offs[790u]]), /* libfreexl */
#else
  RAF_PKG_INIT(0xff4d5686u, 9u, 0u, 0x004a6783u, 0), /* libfreexl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9aca06c4u, 8u, 0u, 0x1e44afa7u, &g_termux_pkg_names[g_termux_pkg_name_offs[791u]]), /* libftxui */
#else
  RAF_PKG_INIT(0x9aca06c4u, 8u, 0u, 0x1e44afa7u, 0), /* libftxui */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8e6fd4edu, 8u, 0u, 0x25a558a6u, &g_termux_pkg_names[g_termux_pkg_name_offs[792u]]), /* libfyaml */
#else
  RAF_PKG_INIT(0x8e6fd4edu, 8u, 0u, 0x25a558a6u, 0), /* libfyaml */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x377800f6u, 5u, 0u, 0x4bc1cbcbu, &g_termux_pkg_names[g_termux_pkg_name_offs[793u]]), /* libgc */
#else
  RAF_PKG_INIT(0x377800f6u, 5u, 0u, 0x4bc1cbcbu, 0), /* libgc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf24808bbu, 9u, 0u, 0x98560662u, &g_termux_pkg_names[g_termux_pkg_name_offs[794u]]), /* libgcrypt */
#else
  RAF_PKG_INIT(0xf24808bbu, 9u, 0u, 0x98560662u, 0), /* libgcrypt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3a7805afu, 5u, 0u, 0x50c1d3aau, &g_termux_pkg_names[g_termux_pkg_name_offs[795u]]), /* libgd */
#else
  RAF_PKG_INIT(0x3a7805afu, 5u, 0u, 0x50c1d3aau, 0), /* libgd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9acec79cu, 13u, 0u, 0xabe63f09u, &g_termux_pkg_names[g_termux_pkg_name_offs[796u]]), /* libgedit-gfls */
#else
  RAF_PKG_INIT(0x9acec79cu, 13u, 0u, 0xabe63f09u, 0), /* libgedit-gfls */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf0ef0a7bu, 6u, 0u, 0x0c22d988u, &g_termux_pkg_names[g_termux_pkg_name_offs[797u]]), /* libgee */
#else
  RAF_PKG_INIT(0xf0ef0a7bu, 6u, 0u, 0x0c22d988u, 0), /* libgee */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x503f530eu, 7u, 0u, 0x0dce0effu, &g_termux_pkg_names[g_termux_pkg_name_offs[798u]]), /* libgeos */
#else
  RAF_PKG_INIT(0x503f530eu, 7u, 0u, 0x0dce0effu, 0), /* libgeos */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4147cd26u, 10u, 0u, 0x9cc39d25u, &g_termux_pkg_names[g_termux_pkg_name_offs[799u]]), /* libgeotiff */
#else
  RAF_PKG_INIT(0x4147cd26u, 10u, 0u, 0x9cc39d25u, 0), /* libgeotiff */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x954814e7u, 7u, 0u, 0xc862138eu, &g_termux_pkg_names[g_termux_pkg_name_offs[800u]]), /* libgf2x */
#else
  RAF_PKG_INIT(0x954814e7u, 7u, 0u, 0xc862138eu, 0), /* libgf2x */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x45f8f6e8u, 10u, 0u, 0x26efd29fu, &g_termux_pkg_names[g_termux_pkg_name_offs[801u]]), /* libgfshare */
#else
  RAF_PKG_INIT(0x45f8f6e8u, 10u, 0u, 0x26efd29fu, 0), /* libgfshare */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb94599d2u, 7u, 0u, 0x335c2c7fu, &g_termux_pkg_names[g_termux_pkg_name_offs[802u]]), /* libgit2 */
#else
  RAF_PKG_INIT(0xb94599d2u, 7u, 0u, 0x335c2c7fu, 0), /* libgit2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x12779a73u, 13u, 0u, 0xff9d55d2u, &g_termux_pkg_names[g_termux_pkg_name_offs[803u]]), /* libglibmm-2.4 */
#else
  RAF_PKG_INIT(0x12779a73u, 13u, 0u, 0xff9d55d2u, 0), /* libglibmm-2.4 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd94d2473u, 14u, 0u, 0xd2a8fefcu, &g_termux_pkg_names[g_termux_pkg_name_offs[804u]]), /* libglibmm-2.68 */
#else
  RAF_PKG_INIT(0xd94d2473u, 14u, 0u, 0xd2a8fefcu, 0), /* libglibmm-2.68 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfc53d8a9u, 8u, 0u, 0x8a01d2e6u, &g_termux_pkg_names[g_termux_pkg_name_offs[805u]]), /* libglvnd */
#else
  RAF_PKG_INIT(0xfc53d8a9u, 8u, 0u, 0x8a01d2e6u, 0), /* libglvnd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1c9f2d41u, 8u, 0u, 0x0bcf968au, &g_termux_pkg_names[g_termux_pkg_name_offs[806u]]), /* libgmime */
#else
  RAF_PKG_INIT(0x1c9f2d41u, 8u, 0u, 0x0bcf968au, 0), /* libgmime */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd402648cu, 6u, 0u, 0xf10f274fu, &g_termux_pkg_names[g_termux_pkg_name_offs[807u]]), /* libgmp */
#else
  RAF_PKG_INIT(0xd402648cu, 6u, 0u, 0xf10f274fu, 0), /* libgmp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe209365bu, 6u, 0u, 0xfb06e848u, &g_termux_pkg_names[g_termux_pkg_name_offs[808u]]), /* libgnt */
#else
  RAF_PKG_INIT(0xe209365bu, 6u, 0u, 0xfb06e848u, 0), /* libgnt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4d9a6e58u, 15u, 0u, 0xaab533c9u, &g_termux_pkg_names[g_termux_pkg_name_offs[809u]]), /* libgnustep-base */
#else
  RAF_PKG_INIT(0x4d9a6e58u, 15u, 0u, 0xaab533c9u, 0), /* libgnustep-base */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9095d4e1u, 9u, 0u, 0xe49a1110u, &g_termux_pkg_names[g_termux_pkg_name_offs[810u]]), /* libgnutls */
#else
  RAF_PKG_INIT(0x9095d4e1u, 9u, 0u, 0xe49a1110u, 0), /* libgnutls */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe19e826bu, 12u, 0u, 0x37a49d54u, &g_termux_pkg_names[g_termux_pkg_name_offs[811u]]), /* libgpg-error */
#else
  RAF_PKG_INIT(0xe19e826bu, 12u, 0u, 0x37a49d54u, 0), /* libgpg-error */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x12082778u, 11u, 0u, 0xd70d99a9u, &g_termux_pkg_names[g_termux_pkg_name_offs[812u]]), /* libgraphite */
#else
  RAF_PKG_INIT(0x12082778u, 11u, 0u, 0xd70d99a9u, 0), /* libgraphite */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x039ebe38u, 7u, 0u, 0xd8ef6731u, &g_termux_pkg_names[g_termux_pkg_name_offs[813u]]), /* libgrpc */
#else
  RAF_PKG_INIT(0x039ebe38u, 7u, 0u, 0xd8ef6731u, 0), /* libgrpc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6a6121cau, 8u, 0u, 0x40392491u, &g_termux_pkg_names[g_termux_pkg_name_offs[814u]]), /* libgsasl */
#else
  RAF_PKG_INIT(0x6a6121cau, 8u, 0u, 0x40392491u, 0), /* libgsasl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc1c1a0e0u, 6u, 0u, 0x0f3ae327u, &g_termux_pkg_names[g_termux_pkg_name_offs[815u]]), /* libgsf */
#else
  RAF_PKG_INIT(0xc1c1a0e0u, 6u, 0u, 0x0f3ae327u, 0), /* libgsf */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd9cf8bc0u, 7u, 0u, 0x81c1da4du, &g_termux_pkg_names[g_termux_pkg_name_offs[816u]]), /* libgtop */
#else
  RAF_PKG_INIT(0xd9cf8bc0u, 7u, 0u, 0x81c1da4du, 0), /* libgtop */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe6c896e4u, 6u, 0u, 0xfa478e0bu, &g_termux_pkg_names[g_termux_pkg_name_offs[817u]]), /* libgts */
#else
  RAF_PKG_INIT(0xe6c896e4u, 6u, 0u, 0xfa478e0bu, 0), /* libgts */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x91553056u, 7u, 0u, 0x4b376213u, &g_termux_pkg_names[g_termux_pkg_name_offs[818u]]), /* libgxps */
#else
  RAF_PKG_INIT(0x91553056u, 7u, 0u, 0x4b376213u, 0), /* libgxps */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4f35850du, 9u, 0u, 0xc7a3da1cu, &g_termux_pkg_names[g_termux_pkg_name_offs[819u]]), /* libhangul */
#else
  RAF_PKG_INIT(0x4f35850du, 9u, 0u, 0xc7a3da1cu, 0), /* libhangul */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x65247b3eu, 7u, 0u, 0x14d77fbbu, &g_termux_pkg_names[g_termux_pkg_name_offs[820u]]), /* libharu */
#else
  RAF_PKG_INIT(0x65247b3eu, 7u, 0u, 0x14d77fbbu, 0), /* libharu */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x84404eddu, 7u, 0u, 0x761faf34u, &g_termux_pkg_names[g_termux_pkg_name_offs[821u]]), /* libhdf5 */
#else
  RAF_PKG_INIT(0x84404eddu, 7u, 0u, 0x761faf34u, 0), /* libhdf5 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8d640d20u, 7u, 0u, 0xcc5429f5u, &g_termux_pkg_names[g_termux_pkg_name_offs[822u]]), /* libheif */
#else
  RAF_PKG_INIT(0x8d640d20u, 7u, 0u, 0xcc5429f5u, 0), /* libheif */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb323ea5au, 10u, 0u, 0x224d89f5u, &g_termux_pkg_names[g_termux_pkg_name_offs[823u]]), /* libhiredis */
#else
  RAF_PKG_INIT(0xb323ea5au, 10u, 0u, 0x224d89f5u, 0), /* libhiredis */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x26fabcdeu, 10u, 0u, 0x826fc495u, &g_termux_pkg_names[g_termux_pkg_name_offs[824u]]), /* libhtmlcxx */
#else
  RAF_PKG_INIT(0x26fabcdeu, 10u, 0u, 0x826fc495u, 0), /* libhtmlcxx */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcafb8d00u, 9u, 0u, 0x809441b5u, &g_termux_pkg_names[g_termux_pkg_name_offs[825u]]), /* libhyphen */
#else
  RAF_PKG_INIT(0xcafb8d00u, 9u, 0u, 0x809441b5u, 0), /* libhyphen */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5446db99u, 7u, 0u, 0xf60f130cu, &g_termux_pkg_names[g_termux_pkg_name_offs[826u]]), /* libical */
#else
  RAF_PKG_INIT(0x5446db99u, 7u, 0u, 0xf60f130cu, 0), /* libical */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x53779383u, 6u, 0u, 0x177fbe74u, &g_termux_pkg_names[g_termux_pkg_name_offs[827u]]), /* libice */
#else
  RAF_PKG_INIT(0x53779383u, 6u, 0u, 0x177fbe74u, 0), /* libice */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2833a0d1u, 8u, 0u, 0xeaaf8e76u, &g_termux_pkg_names[g_termux_pkg_name_offs[828u]]), /* libiconv */
#else
  RAF_PKG_INIT(0x2833a0d1u, 8u, 0u, 0xeaaf8e76u, 0), /* libiconv */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x43777a53u, 6u, 0u, 0x077fa544u, &g_termux_pkg_names[g_termux_pkg_name_offs[829u]]), /* libicu */
#else
  RAF_PKG_INIT(0x43777a53u, 6u, 0u, 0x077fa544u, 0), /* libicu */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x00b0d5e6u, 9u, 0u, 0x6f9dc3abu, &g_termux_pkg_names[g_termux_pkg_name_offs[830u]]), /* libid3tag */
#else
  RAF_PKG_INIT(0x00b0d5e6u, 9u, 0u, 0x6f9dc3abu, 0), /* libid3tag */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3e7533ddu, 6u, 0u, 0xf081bfa6u, &g_termux_pkg_names[g_termux_pkg_name_offs[831u]]), /* libidn */
#else
  RAF_PKG_INIT(0x3e7533ddu, 6u, 0u, 0xf081bfa6u, 0), /* libidn */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4180c13du, 7u, 0u, 0x304095fcu, &g_termux_pkg_names[g_termux_pkg_name_offs[832u]]), /* libidn2 */
#else
  RAF_PKG_INIT(0x4180c13du, 7u, 0u, 0x304095fcu, 0), /* libidn2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x428dd2e0u, 13u, 0u, 0xcfc41df1u, &g_termux_pkg_names[g_termux_pkg_name_offs[833u]]), /* libimagequant */
#else
  RAF_PKG_INIT(0x428dd2e0u, 13u, 0u, 0xcfc41df1u, 0), /* libimagequant */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6a5f3ddfu, 16u, 0u, 0xb785c36cu, &g_termux_pkg_names[g_termux_pkg_name_offs[834u]]), /* libimobiledevice */
#else
  RAF_PKG_INIT(0x6a5f3ddfu, 16u, 0u, 0xb785c36cu, 0), /* libimobiledevice */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7ffc16c7u, 21u, 0u, 0xbe41536eu, &g_termux_pkg_names[g_termux_pkg_name_offs[835u]]), /* libimobiledevice-glue */
#else
  RAF_PKG_INIT(0x7ffc16c7u, 21u, 0u, 0xbe41536eu, 0), /* libimobiledevice-glue */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd4679340u, 8u, 0u, 0x61fabd57u, &g_termux_pkg_names[g_termux_pkg_name_offs[836u]]), /* libimtui */
#else
  RAF_PKG_INIT(0xd4679340u, 8u, 0u, 0x61fabd57u, 0), /* libimtui */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc72f3c62u, 7u, 0u, 0xc287b343u, &g_termux_pkg_names[g_termux_pkg_name_offs[837u]]), /* libinih */
#else
  RAF_PKG_INIT(0xc72f3c62u, 7u, 0u, 0xc287b343u, 0), /* libinih */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2f1335c9u, 12u, 0u, 0xb3864aa6u, &g_termux_pkg_names[g_termux_pkg_name_offs[838u]]), /* libiniparser */
#else
  RAF_PKG_INIT(0x2f1335c9u, 12u, 0u, 0xb3864aa6u, 0), /* libiniparser */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf8a34b7bu, 8u, 0u, 0x8e699cc8u, &g_termux_pkg_names[g_termux_pkg_name_offs[839u]]), /* libiodbc */
#else
  RAF_PKG_INIT(0xf8a34b7bu, 8u, 0u, 0x8e699cc8u, 0), /* libiodbc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x24e60e34u, 10u, 0u, 0x8203d61bu, &g_termux_pkg_names[g_termux_pkg_name_offs[840u]]), /* libisoburn */
#else
  RAF_PKG_INIT(0x24e60e34u, 10u, 0u, 0x8203d61bu, 0), /* libisoburn */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb16ae332u, 8u, 0u, 0x15b9273du, &g_termux_pkg_names[g_termux_pkg_name_offs[841u]]), /* libisofs */
#else
  RAF_PKG_INIT(0xb16ae332u, 8u, 0u, 0x15b9273du, 0), /* libisofs */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc230f8fcu, 8u, 0u, 0xc5179af3u, &g_termux_pkg_names[g_termux_pkg_name_offs[842u]]), /* libjanet */
#else
  RAF_PKG_INIT(0xc230f8fcu, 8u, 0u, 0xc5179af3u, 0), /* libjanet */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbb689af1u, 8u, 0u, 0xdbe1a52eu, &g_termux_pkg_names[g_termux_pkg_name_offs[843u]]), /* libjansi */
#else
  RAF_PKG_INIT(0xbb689af1u, 8u, 0u, 0xdbe1a52eu, 0), /* libjansi */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe830733eu, 10u, 0u, 0x8307ae69u, &g_termux_pkg_names[g_termux_pkg_name_offs[844u]]), /* libjansson */
#else
  RAF_PKG_INIT(0xe830733eu, 10u, 0u, 0x8307ae69u, 0), /* libjansson */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3cd4e8adu, 9u, 0u, 0x7e7da920u, &g_termux_pkg_names[g_termux_pkg_name_offs[845u]]), /* libjasper */
#else
  RAF_PKG_INIT(0x3cd4e8adu, 9u, 0u, 0x7e7da920u, 0), /* libjasper */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xef75a22bu, 13u, 0u, 0xb814319au, &g_termux_pkg_names[g_termux_pkg_name_offs[846u]]), /* libjpeg-turbo */
#else
  RAF_PKG_INIT(0xef75a22bu, 13u, 0u, 0xb814319au, 0), /* libjpeg-turbo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcab270d6u, 6u, 0u, 0x5a52632du, &g_termux_pkg_names[g_termux_pkg_name_offs[847u]]), /* libjxl */
#else
  RAF_PKG_INIT(0xcab270d6u, 6u, 0u, 0x5a52632du, 0), /* libjxl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa9e4978fu, 12u, 0u, 0x487fa318u, &g_termux_pkg_names[g_termux_pkg_name_offs[848u]]), /* libkeyfinder */
#else
  RAF_PKG_INIT(0xa9e4978fu, 12u, 0u, 0x487fa318u, 0), /* libkeyfinder */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbe6d28c8u, 8u, 0u, 0x43619257u, &g_termux_pkg_names[g_termux_pkg_name_offs[849u]]), /* libkiwix */
#else
  RAF_PKG_INIT(0xbe6d28c8u, 8u, 0u, 0x43619257u, 0), /* libkiwix */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3f7f5a0au, 7u, 0u, 0xcdd456b3u, &g_termux_pkg_names[g_termux_pkg_name_offs[850u]]), /* libknot */
#else
  RAF_PKG_INIT(0x3f7f5a0au, 7u, 0u, 0xcdd456b3u, 0), /* libknot */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3aeb6b9eu, 9u, 0u, 0x50ce07ebu, &g_termux_pkg_names[g_termux_pkg_name_offs[851u]]), /* libkokkos */
#else
  RAF_PKG_INIT(0x3aeb6b9eu, 9u, 0u, 0x50ce07ebu, 0), /* libkokkos */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc6e35a53u, 7u, 0u, 0x6c884b82u, &g_termux_pkg_names[g_termux_pkg_name_offs[852u]]), /* libksba */
#else
  RAF_PKG_INIT(0xc6e35a53u, 7u, 0u, 0x6c884b82u, 0), /* libksba */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe6835920u, 10u, 0u, 0x0058fa77u, &g_termux_pkg_names[g_termux_pkg_name_offs[853u]]), /* liblangtag */
#else
  RAF_PKG_INIT(0xe6835920u, 10u, 0u, 0x0058fa77u, 0), /* liblangtag */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0bc2bbe6u, 12u, 0u, 0xbb90c2f1u, &g_termux_pkg_names[g_termux_pkg_name_offs[854u]]), /* liblightning */
#else
  RAF_PKG_INIT(0x0bc2bbe6u, 12u, 0u, 0xbb90c2f1u, 0), /* liblightning */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf12740feu, 13u, 0u, 0xfe36fb43u, &g_termux_pkg_names[g_termux_pkg_name_offs[855u]]), /* libliquid-dsp */
#else
  RAF_PKG_INIT(0xf12740feu, 13u, 0u, 0xfe36fb43u, 0), /* libliquid-dsp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbe1698c1u, 7u, 0u, 0xc54718c0u, &g_termux_pkg_names[g_termux_pkg_name_offs[856u]]), /* libllvm */
#else
  RAF_PKG_INIT(0xbe1698c1u, 7u, 0u, 0xc54718c0u, 0), /* libllvm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0dd04731u, 7u, 0u, 0x75bf071cu, &g_termux_pkg_names[g_termux_pkg_name_offs[857u]]), /* liblmdb */
#else
  RAF_PKG_INIT(0x0dd04731u, 7u, 0u, 0x75bf071cu, 0), /* liblmdb */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x235c0afdu, 5u, 0u, 0x67aa9e90u, &g_termux_pkg_names[g_termux_pkg_name_offs[858u]]), /* liblo */
#else
  RAF_PKG_INIT(0x235c0afdu, 5u, 0u, 0x67aa9e90u, 0), /* liblo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb08b69b7u, 8u, 0u, 0x352b31f0u, &g_termux_pkg_names[g_termux_pkg_name_offs[859u]]), /* liblog4c */
#else
  RAF_PKG_INIT(0xb08b69b7u, 8u, 0u, 0x352b31f0u, 0), /* liblog4c */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2f38b3bfu, 10u, 0u, 0x3f629220u, &g_termux_pkg_names[g_termux_pkg_name_offs[860u]]), /* liblog4cxx */
#else
  RAF_PKG_INIT(0x2f38b3bfu, 10u, 0u, 0x3f629220u, 0), /* liblog4cxx */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x20ea8983u, 6u, 0u, 0x239226c8u, &g_termux_pkg_names[g_termux_pkg_name_offs[861u]]), /* liblqr */
#else
  RAF_PKG_INIT(0x20ea8983u, 6u, 0u, 0x239226c8u, 0), /* liblqr */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x40f11ed0u, 7u, 0u, 0x429e2f7du, &g_termux_pkg_names[g_termux_pkg_name_offs[862u]]), /* liblrdf */
#else
  RAF_PKG_INIT(0x40f11ed0u, 7u, 0u, 0x429e2f7du, 0), /* liblrdf */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7500d40eu, 6u, 0u, 0xeb7c0851u, &g_termux_pkg_names[g_termux_pkg_name_offs[863u]]), /* liblz4 */
#else
  RAF_PKG_INIT(0x7500d40eu, 6u, 0u, 0xeb7c0851u, 0), /* liblz4 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb276cde8u, 7u, 0u, 0xf0f1a355u, &g_termux_pkg_names[g_termux_pkg_name_offs[864u]]), /* liblzma */
#else
  RAF_PKG_INIT(0xb276cde8u, 7u, 0u, 0xf0f1a355u, 0), /* liblzma */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1c0047f3u, 6u, 0u, 0x307c74f0u, &g_termux_pkg_names[g_termux_pkg_name_offs[865u]]), /* liblzo */
#else
  RAF_PKG_INIT(0x1c0047f3u, 6u, 0u, 0x307c74f0u, 0), /* liblzo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa6a48cf5u, 6u, 0u, 0xc1d85c02u, &g_termux_pkg_names[g_termux_pkg_name_offs[866u]]), /* libmaa */
#else
  RAF_PKG_INIT(0xa6a48cf5u, 6u, 0u, 0xc1d85c02u, 0), /* libmaa */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa1a48516u, 6u, 0u, 0xbed85749u, &g_termux_pkg_names[g_termux_pkg_name_offs[867u]]), /* libmad */
#else
  RAF_PKG_INIT(0xa1a48516u, 6u, 0u, 0xbed85749u, 0), /* libmad */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0cd28d19u, 13u, 0u, 0x951fba74u, &g_termux_pkg_names[g_termux_pkg_name_offs[868u]]), /* libmariadbcpp */
#else
  RAF_PKG_INIT(0x0cd28d19u, 13u, 0u, 0x951fba74u, 0), /* libmariadbcpp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7dd0c976u, 8u, 0u, 0xd052e12du, &g_termux_pkg_names[g_termux_pkg_name_offs[869u]]), /* libmatio */
#else
  RAF_PKG_INIT(0x7dd0c976u, 8u, 0u, 0xd052e12du, 0), /* libmatio */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2c44629au, 11u, 0u, 0x50f7b633u, &g_termux_pkg_names[g_termux_pkg_name_offs[870u]]), /* libmatroska */
#else
  RAF_PKG_INIT(0x2c44629au, 11u, 0u, 0x50f7b633u, 0), /* libmatroska */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x646f9814u, 12u, 0u, 0x4a7d92b7u, &g_termux_pkg_names[g_termux_pkg_name_offs[871u]]), /* libmaxminddb */
#else
  RAF_PKG_INIT(0x646f9814u, 12u, 0u, 0x4a7d92b7u, 0), /* libmaxminddb */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xba33a5e9u, 9u, 0u, 0x85b9e2a0u, &g_termux_pkg_names[g_termux_pkg_name_offs[872u]]), /* libmcrypt */
#else
  RAF_PKG_INIT(0xba33a5e9u, 9u, 0u, 0x85b9e2a0u, 0), /* libmcrypt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3e5e7415u, 5u, 0u, 0x4ca83578u, &g_termux_pkg_names[g_termux_pkg_name_offs[873u]]), /* libmd */
#else
  RAF_PKG_INIT(0x3e5e7415u, 5u, 0u, 0x4ca83578u, 0), /* libmd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x032c3bd7u, 7u, 0u, 0x887fa122u, &g_termux_pkg_names[g_termux_pkg_name_offs[874u]]), /* libmdbx */
#else
  RAF_PKG_INIT(0x032c3bd7u, 7u, 0u, 0x887fa122u, 0), /* libmdbx */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa5ec0fdcu, 12u, 0u, 0x16c52283u, &g_termux_pkg_names[g_termux_pkg_name_offs[875u]]), /* libmediainfo */
#else
  RAF_PKG_INIT(0xa5ec0fdcu, 12u, 0u, 0x16c52283u, 0), /* libmediainfo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8e9cd07fu, 9u, 0u, 0x8cec7c62u, &g_termux_pkg_names[g_termux_pkg_name_offs[876u]]), /* libmesode */
#else
  RAF_PKG_INIT(0x8e9cd07fu, 9u, 0u, 0x8cec7c62u, 0), /* libmesode */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x881945b3u, 8u, 0u, 0x4da7746cu, &g_termux_pkg_names[g_termux_pkg_name_offs[877u]]), /* libmhash */
#else
  RAF_PKG_INIT(0x881945b3u, 8u, 0u, 0x4da7746cu, 0), /* libmhash */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x908493dcu, 13u, 0u, 0x032bafd9u, &g_termux_pkg_names[g_termux_pkg_name_offs[878u]]), /* libmicrohttpd */
#else
  RAF_PKG_INIT(0x908493dcu, 13u, 0u, 0x032bafd9u, 0), /* libmicrohttpd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa0fe64eau, 10u, 0u, 0xc6c5593du, &g_termux_pkg_names[g_termux_pkg_name_offs[879u]]), /* libminizip */
#else
  RAF_PKG_INIT(0xa0fe64eau, 10u, 0u, 0xc6c5593du, 0), /* libminizip */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x108876e2u, 13u, 0u, 0x94e8b427u, &g_termux_pkg_names[g_termux_pkg_name_offs[880u]]), /* libminizip-ng */
#else
  RAF_PKG_INIT(0x108876e2u, 13u, 0u, 0x94e8b427u, 0), /* libminizip-ng */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8bc038f1u, 6u, 0u, 0xa4bdeadeu, &g_termux_pkg_names[g_termux_pkg_name_offs[881u]]), /* libmnl */
#else
  RAF_PKG_INIT(0x8bc038f1u, 6u, 0u, 0xa4bdeadeu, 0), /* libmnl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe7bc1c0cu, 10u, 0u, 0x2b33c817u, &g_termux_pkg_names[g_termux_pkg_name_offs[882u]]), /* libmodplug */
#else
  RAF_PKG_INIT(0xe7bc1c0cu, 10u, 0u, 0x2b33c817u, 0), /* libmodplug */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb790056bu, 12u, 0u, 0xbedd14f4u, &g_termux_pkg_names[g_termux_pkg_name_offs[883u]]), /* libmosquitto */
#else
  RAF_PKG_INIT(0xb790056bu, 12u, 0u, 0xbedd14f4u, 0), /* libmosquitto */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb47b2797u, 10u, 0u, 0x1ae7aa44u, &g_termux_pkg_names[g_termux_pkg_name_offs[884u]]), /* libmp3lame */
#else
  RAF_PKG_INIT(0xb47b2797u, 10u, 0u, 0x1ae7aa44u, 0), /* libmp3lame */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9853e04du, 10u, 0u, 0xdcff016eu, &g_termux_pkg_names[g_termux_pkg_name_offs[885u]]), /* libmp3splt */
#else
  RAF_PKG_INIT(0x9853e04du, 10u, 0u, 0xdcff016eu, 0), /* libmp3splt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xac7fc58eu, 6u, 0u, 0xbffd29b5u, &g_termux_pkg_names[g_termux_pkg_name_offs[886u]]), /* libmpc */
#else
  RAF_PKG_INIT(0xac7fc58eu, 6u, 0u, 0xbffd29b5u, 0), /* libmpc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x79d8b868u, 12u, 0u, 0xe520a13fu, &g_termux_pkg_names[g_termux_pkg_name_offs[887u]]), /* libmpdclient */
#else
  RAF_PKG_INIT(0x79d8b868u, 12u, 0u, 0xe520a13fu, 0), /* libmpdclient */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4dc3d681u, 8u, 0u, 0x746b40bau, &g_termux_pkg_names[g_termux_pkg_name_offs[888u]]), /* libmpeg2 */
#else
  RAF_PKG_INIT(0x4dc3d681u, 8u, 0u, 0x746b40bau, 0), /* libmpeg2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8b2fe7cdu, 7u, 0u, 0x007bf52cu, &g_termux_pkg_names[g_termux_pkg_name_offs[889u]]), /* libmpfr */
#else
  RAF_PKG_INIT(0x8b2fe7cdu, 7u, 0u, 0x007bf52cu, 0), /* libmpfr */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2cb5c5feu, 9u, 0u, 0xbf6c1547u, &g_termux_pkg_names[g_termux_pkg_name_offs[890u]]), /* libmpg123 */
#else
  RAF_PKG_INIT(0x2cb5c5feu, 9u, 0u, 0xbf6c1547u, 0), /* libmpg123 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0ff010a0u, 10u, 0u, 0xf70c2e87u, &g_termux_pkg_names[g_termux_pkg_name_offs[891u]]), /* libmsgpack */
#else
  RAF_PKG_INIT(0x0ff010a0u, 10u, 0u, 0xf70c2e87u, 0), /* libmsgpack */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcedeef5cu, 14u, 0u, 0xdc0be3cfu, &g_termux_pkg_names[g_termux_pkg_name_offs[892u]]), /* libmsgpack-cxx */
#else
  RAF_PKG_INIT(0xcedeef5cu, 14u, 0u, 0xdc0be3cfu, 0), /* libmsgpack-cxx */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf02bddc5u, 11u, 0u, 0xa17fb564u, &g_termux_pkg_names[g_termux_pkg_name_offs[893u]]), /* libmuparser */
#else
  RAF_PKG_INIT(0xf02bddc5u, 11u, 0u, 0xa17fb564u, 0), /* libmuparser */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1b52d272u, 10u, 0u, 0x1b9bb75du, &g_termux_pkg_names[g_termux_pkg_name_offs[894u]]), /* libmypaint */
#else
  RAF_PKG_INIT(0x1b52d272u, 10u, 0u, 0x1b9bb75du, 0), /* libmypaint */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1db0a20cu, 9u, 0u, 0xce2015c5u, &g_termux_pkg_names[g_termux_pkg_name_offs[895u]]), /* libnats-c */
#else
  RAF_PKG_INIT(0x1db0a20cu, 9u, 0u, 0xce2015c5u, 0), /* libnats-c */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x74b17a64u, 7u, 0u, 0xcad504c9u, &g_termux_pkg_names[g_termux_pkg_name_offs[896u]]), /* libneon */
#else
  RAF_PKG_INIT(0x74b17a64u, 7u, 0u, 0xcad504c9u, 0), /* libneon */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0be79cb7u, 6u, 0u, 0xf0bb51bcu, &g_termux_pkg_names[g_termux_pkg_name_offs[897u]]), /* libnet */
#else
  RAF_PKG_INIT(0x0be79cb7u, 6u, 0u, 0xf0bb51bcu, 0), /* libnet */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x02b2045eu, 9u, 0u, 0xef665fbbu, &g_termux_pkg_names[g_termux_pkg_name_offs[898u]]), /* libnettle */
#else
  RAF_PKG_INIT(0x02b2045eu, 9u, 0u, 0xef665fbbu, 0), /* libnettle */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8e9e1b9au, 7u, 0u, 0xb0e86393u, &g_termux_pkg_names[g_termux_pkg_name_offs[899u]]), /* libnewt */
#else
  RAF_PKG_INIT(0x8e9e1b9au, 7u, 0u, 0xb0e86393u, 0), /* libnewt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe8e0a9d9u, 6u, 0u, 0x0fc23e4eu, &g_termux_pkg_names[g_termux_pkg_name_offs[900u]]), /* libnfc */
#else
  RAF_PKG_INIT(0xe8e0a9d9u, 6u, 0u, 0x0fc23e4eu, 0), /* libnfc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf8e0c309u, 6u, 0u, 0xffc2251eu, &g_termux_pkg_names[g_termux_pkg_name_offs[901u]]), /* libnfs */
#else
  RAF_PKG_INIT(0xf8e0c309u, 6u, 0u, 0xffc2251eu, 0), /* libnfs */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb4ef8a6eu, 8u, 0u, 0x8ef772f5u, &g_termux_pkg_names[g_termux_pkg_name_offs[902u]]), /* libnftnl */
#else
  RAF_PKG_INIT(0xb4ef8a6eu, 8u, 0u, 0x8ef772f5u, 0), /* libnftnl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcbcee263u, 10u, 0u, 0xcb9c3e34u, &g_termux_pkg_names[g_termux_pkg_name_offs[903u]]), /* libnghttp2 */
#else
  RAF_PKG_INIT(0xcbcee263u, 10u, 0u, 0xcb9c3e34u, 0), /* libnghttp2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcacee0d0u, 10u, 0u, 0xcc9c3fc7u, &g_termux_pkg_names[g_termux_pkg_name_offs[904u]]), /* libnghttp3 */
#else
  RAF_PKG_INIT(0xcacee0d0u, 10u, 0u, 0xcc9c3fc7u, 0), /* libnghttp3 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x757eba3cu, 9u, 0u, 0xa894324du, &g_termux_pkg_names[g_termux_pkg_name_offs[905u]]), /* libngtcp2 */
#else
  RAF_PKG_INIT(0x757eba3cu, 9u, 0u, 0xa894324du, 0), /* libngtcp2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x246089beu, 5u, 0u, 0x46b07acbu, &g_termux_pkg_names[g_termux_pkg_name_offs[906u]]), /* libnl */
#else
  RAF_PKG_INIT(0x246089beu, 5u, 0u, 0x46b07acbu, 0), /* libnl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x014da772u, 7u, 0u, 0x0bdd66dbu, &g_termux_pkg_names[g_termux_pkg_name_offs[907u]]), /* libnova */
#else
  RAF_PKG_INIT(0x014da772u, 7u, 0u, 0x0bdd66dbu, 0), /* libnova */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8809c53eu, 7u, 0u, 0x93ba670bu, &g_termux_pkg_names[g_termux_pkg_name_offs[908u]]), /* libnpth */
#else
  RAF_PKG_INIT(0x8809c53eu, 7u, 0u, 0x93ba670bu, 0), /* libnpth */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3bb7d24du, 7u, 0u, 0x100ca58cu, &g_termux_pkg_names[g_termux_pkg_name_offs[909u]]), /* libnspr */
#else
  RAF_PKG_INIT(0x3bb7d24du, 7u, 0u, 0x100ca58cu, 0), /* libnspr */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1114c434u, 6u, 0u, 0xeff16a23u, &g_termux_pkg_names[g_termux_pkg_name_offs[910u]]), /* libnss */
#else
  RAF_PKG_INIT(0x1114c434u, 6u, 0u, 0xeff16a23u, 0), /* libnss */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x160c7d4eu, 6u, 0u, 0xeee49c9du, &g_termux_pkg_names[g_termux_pkg_name_offs[911u]]), /* libntl */
#else
  RAF_PKG_INIT(0x160c7d4eu, 6u, 0u, 0xeee49c9du, 0), /* libntl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9235e46cu, 8u, 0u, 0x0937c9dfu, &g_termux_pkg_names[g_termux_pkg_name_offs[912u]]), /* libobjc2 */
#else
  RAF_PKG_INIT(0x9235e46cu, 8u, 0u, 0x0937c9dfu, 0), /* libobjc2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5bdfb3e6u, 6u, 0u, 0x770f05c5u, &g_termux_pkg_names[g_termux_pkg_name_offs[913u]]), /* libode */
#else
  RAF_PKG_INIT(0x5bdfb3e6u, 6u, 0u, 0x770f05c5u, 0), /* libode */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa384fdcfu, 9u, 0u, 0x759e1c56u, &g_termux_pkg_names[g_termux_pkg_name_offs[914u]]), /* libodfgen */
#else
  RAF_PKG_INIT(0xa384fdcfu, 9u, 0u, 0x759e1c56u, 0), /* libodfgen */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x89e23ae7u, 6u, 0u, 0x850cdd38u, &g_termux_pkg_names[g_termux_pkg_name_offs[915u]]), /* libogg */
#else
  RAF_PKG_INIT(0x89e23ae7u, 6u, 0u, 0x850cdd38u, 0), /* libogg */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xac224527u, 7u, 0u, 0xb5404ee6u, &g_termux_pkg_names[g_termux_pkg_name_offs[916u]]), /* liboggz */
#else
  RAF_PKG_INIT(0xac224527u, 7u, 0u, 0xb5404ee6u, 0), /* liboggz */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x63cc38c6u, 6u, 0u, 0x9f22cc75u, &g_termux_pkg_names[g_termux_pkg_name_offs[917u]]), /* libolm */
#else
  RAF_PKG_INIT(0x63cc38c6u, 6u, 0u, 0x9f22cc75u, 0), /* libolm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb8a6e6ceu, 11u, 0u, 0x8acf9b07u, &g_termux_pkg_names[g_termux_pkg_name_offs[918u]]), /* libopenblas */
#else
  RAF_PKG_INIT(0xb8a6e6ceu, 11u, 0u, 0x8acf9b07u, 0), /* libopenblas */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x635fd21au, 9u, 0u, 0xb1fa6813u, &g_termux_pkg_names[g_termux_pkg_name_offs[919u]]), /* libopencc */
#else
  RAF_PKG_INIT(0x635fd21au, 9u, 0u, 0xb1fa6813u, 0), /* libopencc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf8fa55bau, 15u, 0u, 0xecff8797u, &g_termux_pkg_names[g_termux_pkg_name_offs[920u]]), /* libopencore-amr */
#else
  RAF_PKG_INIT(0xf8fa55bau, 15u, 0u, 0xecff8797u, 0), /* libopencore-amr */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x97ae5346u, 10u, 0u, 0x3fc51145u, &g_termux_pkg_names[g_termux_pkg_name_offs[921u]]), /* libopenfec */
#else
  RAF_PKG_INIT(0x97ae5346u, 10u, 0u, 0x3fc51145u, 0), /* libopenfec */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe7105417u, 10u, 0u, 0x7a04b494u, &g_termux_pkg_names[g_termux_pkg_name_offs[922u]]), /* libopenmpt */
#else
  RAF_PKG_INIT(0xe7105417u, 10u, 0u, 0x7a04b494u, 0), /* libopenmpt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbc5cf92bu, 7u, 0u, 0xa8b433aeu, &g_termux_pkg_names[g_termux_pkg_name_offs[923u]]), /* libopus */
#else
  RAF_PKG_INIT(0xbc5cf92bu, 7u, 0u, 0xa8b433aeu, 0), /* libopus */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x90449f5du, 10u, 0u, 0x1574210au, &g_termux_pkg_names[g_termux_pkg_name_offs[924u]]), /* libopusenc */
#else
  RAF_PKG_INIT(0x90449f5du, 10u, 0u, 0x1574210au, 0), /* libopusenc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x75b2bd36u, 6u, 0u, 0x70d8e259u, &g_termux_pkg_names[g_termux_pkg_name_offs[925u]]), /* liborc */
#else
  RAF_PKG_INIT(0x75b2bd36u, 6u, 0u, 0x70d8e259u, 0), /* liborc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2221e626u, 9u, 0u, 0x8987b45bu, &g_termux_pkg_names[g_termux_pkg_name_offs[926u]]), /* libosmium */
#else
  RAF_PKG_INIT(0x2221e626u, 9u, 0u, 0x8987b45bu, 0), /* libosmium */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xecadb527u, 9u, 0u, 0xaf754f16u, &g_termux_pkg_names[g_termux_pkg_name_offs[927u]]), /* libosmpbf */
#else
  RAF_PKG_INIT(0xecadb527u, 9u, 0u, 0xaf754f16u, 0), /* libosmpbf */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6eb72f5fu, 6u, 0u, 0x7fe67180u, &g_termux_pkg_names[g_termux_pkg_name_offs[928u]]), /* libotr */
#else
  RAF_PKG_INIT(0x6eb72f5fu, 6u, 0u, 0x7fe67180u, 0), /* libotr */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x889c1851u, 8u, 0u, 0x4d39a0aeu, &g_termux_pkg_names[g_termux_pkg_name_offs[929u]]), /* libowfat */
#else
  RAF_PKG_INIT(0x889c1851u, 8u, 0u, 0x4d39a0aeu, 0), /* libowfat */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6374dd4au, 6u, 0u, 0xf1375ebdu, &g_termux_pkg_names[g_termux_pkg_name_offs[930u]]), /* libp11 */
#else
  RAF_PKG_INIT(0x6374dd4au, 6u, 0u, 0xf1375ebdu, 0), /* libp11 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x503aea54u, 14u, 0u, 0xd40ce53fu, &g_termux_pkg_names[g_termux_pkg_name_offs[931u]]), /* libp8-platform */
#else
  RAF_PKG_INIT(0x503aea54u, 14u, 0u, 0xd40ce53fu, 0), /* libp8-platform */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc5e8f540u, 8u, 0u, 0xbf427447u, &g_termux_pkg_names[g_termux_pkg_name_offs[932u]]), /* libpagmo */
#else
  RAF_PKG_INIT(0xc5e8f540u, 8u, 0u, 0xbf427447u, 0), /* libpagmo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdd8f3e7bu, 14u, 0u, 0x172ca0a4u, &g_termux_pkg_names[g_termux_pkg_name_offs[933u]]), /* libpangomm-1.4 */
#else
  RAF_PKG_INIT(0xdd8f3e7bu, 14u, 0u, 0x172ca0a4u, 0), /* libpangomm-1.4 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0c04962eu, 15u, 0u, 0x84d8bec3u, &g_termux_pkg_names[g_termux_pkg_name_offs[934u]]), /* libpangomm-2.48 */
#else
  RAF_PKG_INIT(0x0c04962eu, 15u, 0u, 0x84d8bec3u, 0), /* libpangomm-2.48 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1bb63c04u, 9u, 0u, 0xd22ab055u, &g_termux_pkg_names[g_termux_pkg_name_offs[935u]]), /* libpano13 */
#else
  RAF_PKG_INIT(0x1bb63c04u, 9u, 0u, 0xd22ab055u, 0), /* libpano13 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa0601fbeu, 8u, 0u, 0xab46ce4du, &g_termux_pkg_names[g_termux_pkg_name_offs[936u]]), /* libpaper */
#else
  RAF_PKG_INIT(0xa0601fbeu, 8u, 0u, 0xab46ce4du, 0), /* libpaper */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3ee97d04u, 7u, 0u, 0x3e424781u, &g_termux_pkg_names[g_termux_pkg_name_offs[937u]]), /* libpcap */
#else
  RAF_PKG_INIT(0x3ee97d04u, 7u, 0u, 0x3e424781u, 0), /* libpcap */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x36adbc67u, 11u, 0u, 0x781b8ae2u, &g_termux_pkg_names[g_termux_pkg_name_offs[938u]]), /* libpcsclite */
#else
  RAF_PKG_INIT(0x36adbc67u, 11u, 0u, 0x781b8ae2u, 0), /* libpcsclite */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5d5d7697u, 9u, 0u, 0xaa9e247au, &g_termux_pkg_names[g_termux_pkg_name_offs[939u]]), /* libphysfs */
#else
  RAF_PKG_INIT(0x5d5d7697u, 9u, 0u, 0xaa9e247au, 0), /* libphysfs */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdd9732d9u, 9u, 0u, 0xcc607d70u, &g_termux_pkg_names[g_termux_pkg_name_offs[940u]]), /* libpinyin */
#else
  RAF_PKG_INIT(0xdd9732d9u, 9u, 0u, 0xcc607d70u, 0), /* libpinyin */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x24ebb94au, 11u, 0u, 0xe9652517u, &g_termux_pkg_names[g_termux_pkg_name_offs[941u]]), /* libpipeline */
#else
  RAF_PKG_INIT(0x24ebb94au, 11u, 0u, 0xe9652517u, 0), /* libpipeline */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x423c4b67u, 9u, 0u, 0xd867c806u, &g_termux_pkg_names[g_termux_pkg_name_offs[942u]]), /* libpixman */
#else
  RAF_PKG_INIT(0x423c4b67u, 9u, 0u, 0xd867c806u, 0), /* libpixman */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa0fc7f70u, 10u, 0u, 0x4f5c4a33u, &g_termux_pkg_names[g_termux_pkg_name_offs[943u]]), /* libplacebo */
#else
  RAF_PKG_INIT(0xa0fc7f70u, 10u, 0u, 0x4f5c4a33u, 0), /* libplacebo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6b61ea7cu, 8u, 0u, 0x05348ea3u, &g_termux_pkg_names[g_termux_pkg_name_offs[944u]]), /* libplist */
#else
  RAF_PKG_INIT(0x6b61ea7cu, 8u, 0u, 0x05348ea3u, 0), /* libplist */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4f4b9af2u, 8u, 0u, 0x354afda9u, &g_termux_pkg_names[g_termux_pkg_name_offs[945u]]), /* libpluto */
#else
  RAF_PKG_INIT(0x4f4b9af2u, 8u, 0u, 0x354afda9u, 0), /* libpluto */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0d0a608bu, 6u, 0u, 0x9ab34a18u, &g_termux_pkg_names[g_termux_pkg_name_offs[946u]]), /* libpng */
#else
  RAF_PKG_INIT(0x0d0a608bu, 6u, 0u, 0x9ab34a18u, 0), /* libpng */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe16601a4u, 12u, 0u, 0x74fecacfu, &g_termux_pkg_names[g_termux_pkg_name_offs[947u]]), /* libpngwriter */
#else
  RAF_PKG_INIT(0xe16601a4u, 12u, 0u, 0x74fecacfu, 0), /* libpngwriter */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd7ad296bu, 7u, 0u, 0x730e73e6u, &g_termux_pkg_names[g_termux_pkg_name_offs[948u]]), /* libpoco */
#else
  RAF_PKG_INIT(0xd7ad296bu, 7u, 0u, 0x730e73e6u, 0), /* libpoco */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe2d20b95u, 7u, 0u, 0x77df1d90u, &g_termux_pkg_names[g_termux_pkg_name_offs[949u]]), /* libpopt */
#else
  RAF_PKG_INIT(0xe2d20b95u, 7u, 0u, 0x77df1d90u, 0), /* libpopt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x39fff11bu, 11u, 0u, 0x6dfb3582u, &g_termux_pkg_names[g_termux_pkg_name_offs[950u]]), /* libprotobuf */
#else
  RAF_PKG_INIT(0x39fff11bu, 11u, 0u, 0x6dfb3582u, 0), /* libprotobuf */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x085a40b3u, 13u, 0u, 0xd9fbd53au, &g_termux_pkg_names[g_termux_pkg_name_offs[951u]]), /* libprotobuf-c */
#else
  RAF_PKG_INIT(0x085a40b3u, 13u, 0u, 0xd9fbd53au, 0), /* libprotobuf-c */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd79377a0u, 12u, 0u, 0x61063e83u, &g_termux_pkg_names[g_termux_pkg_name_offs[952u]]), /* libprotozero */
#else
  RAF_PKG_INIT(0xd79377a0u, 12u, 0u, 0x61063e83u, 0), /* libprotozero */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x03daf42bu, 6u, 0u, 0xaf93177cu, &g_termux_pkg_names[g_termux_pkg_name_offs[953u]]), /* libpsl */
#else
  RAF_PKG_INIT(0x03daf42bu, 6u, 0u, 0xaf93177cu, 0), /* libpsl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe6aee98cu, 10u, 0u, 0xfe64e407u, &g_termux_pkg_names[g_termux_pkg_name_offs[954u]]), /* libpugixml */
#else
  RAF_PKG_INIT(0xe6aee98cu, 10u, 0u, 0xfe64e407u, 0), /* libpugixml */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc8e062e5u, 11u, 0u, 0x8847370cu, &g_termux_pkg_names[g_termux_pkg_name_offs[955u]]), /* libqrencode */
#else
  RAF_PKG_INIT(0xc8e062e5u, 11u, 0u, 0x8847370cu, 0), /* libqrencode */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x28d99292u, 10u, 0u, 0xe87150f9u, &g_termux_pkg_names[g_termux_pkg_name_offs[956u]]), /* libraptor2 */
#else
  RAF_PKG_INIT(0x28d99292u, 10u, 0u, 0xe87150f9u, 0), /* libraptor2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa4eecc87u, 7u, 0u, 0xeaea9eaau, &g_termux_pkg_names[g_termux_pkg_name_offs[957u]]), /* libraqm */
#else
  RAF_PKG_INIT(0xa4eecc87u, 7u, 0u, 0xeaea9eaau, 0), /* libraqm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcad30b80u, 9u, 0u, 0xc862b965u, &g_termux_pkg_names[g_termux_pkg_name_offs[958u]]), /* librasqal */
#else
  RAF_PKG_INIT(0xcad30b80u, 9u, 0u, 0xc862b965u, 0), /* librasqal */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8c8e85abu, 8u, 0u, 0xb9ab2724u, &g_termux_pkg_names[g_termux_pkg_name_offs[959u]]), /* librav1e */
#else
  RAF_PKG_INIT(0x8c8e85abu, 8u, 0u, 0xb9ab2724u, 0), /* librav1e */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe62dbb42u, 6u, 0u, 0x75cb41f5u, &g_termux_pkg_names[g_termux_pkg_name_offs[960u]]), /* libraw */
#else
  RAF_PKG_INIT(0xe62dbb42u, 6u, 0u, 0x75cb41f5u, 0), /* libraw */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3b373b6du, 6u, 0u, 0xc8d4befau, &g_termux_pkg_names[g_termux_pkg_name_offs[961u]]), /* libre2 */
#else
  RAF_PKG_INIT(0x3b373b6du, 6u, 0u, 0xc8d4befau, 0), /* libre2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc0f49772u, 23u, 0u, 0x74213adfu, &g_termux_pkg_names[g_termux_pkg_name_offs[962u]]), /* libregexp-assemble-perl */
#else
  RAF_PKG_INIT(0xc0f49772u, 23u, 0u, 0x74213adfu, 0), /* libregexp-assemble-perl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5cba5a8bu, 17u, 0u, 0xa202baf6u, &g_termux_pkg_names[g_termux_pkg_name_offs[963u]]), /* libresolv-wrapper */
#else
  RAF_PKG_INIT(0x5cba5a8bu, 17u, 0u, 0xa202baf6u, 0), /* libresolv-wrapper */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc702fff2u, 8u, 0u, 0x03cb8b8du, &g_termux_pkg_names[g_termux_pkg_name_offs[964u]]), /* libretls */
#else
  RAF_PKG_INIT(0xc702fff2u, 8u, 0u, 0x03cb8b8du, 0), /* libretls */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3c8d1c62u, 10u, 0u, 0x5d9b6801u, &g_termux_pkg_names[g_termux_pkg_name_offs[965u]]), /* librevenge */
#else
  RAF_PKG_INIT(0x3c8d1c62u, 10u, 0u, 0x5d9b6801u, 0), /* librevenge */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x23abba0bu, 7u, 0u, 0x59edc61eu, &g_termux_pkg_names[g_termux_pkg_name_offs[966u]]), /* librime */
#else
  RAF_PKG_INIT(0x23abba0bu, 7u, 0u, 0x59edc61eu, 0), /* librime */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x779d4d8eu, 11u, 0u, 0xed53f22fu, &g_termux_pkg_names[g_termux_pkg_name_offs[967u]]), /* librinutils */
#else
  RAF_PKG_INIT(0x779d4d8eu, 11u, 0u, 0xed53f22fu, 0), /* librinutils */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcedf80eeu, 10u, 0u, 0x7620d129u, &g_termux_pkg_names[g_termux_pkg_name_offs[968u]]), /* librnnoise */
#else
  RAF_PKG_INIT(0xcedf80eeu, 10u, 0u, 0x7620d129u, 0), /* librnnoise */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf54e6998u, 10u, 0u, 0xe0f8152fu, &g_termux_pkg_names[g_termux_pkg_name_offs[969u]]), /* librocksdb */
#else
  RAF_PKG_INIT(0xf54e6998u, 10u, 0u, 0xe0f8152fu, 0), /* librocksdb */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd61e8200u, 7u, 0u, 0x87855925u, &g_termux_pkg_names[g_termux_pkg_name_offs[970u]]), /* librsvg */
#else
  RAF_PKG_INIT(0xd61e8200u, 7u, 0u, 0x87855925u, 0), /* librsvg */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd90e7bd1u, 8u, 0u, 0x06464e5eu, &g_termux_pkg_names[g_termux_pkg_name_offs[971u]]), /* librsync */
#else
  RAF_PKG_INIT(0xd90e7bd1u, 8u, 0u, 0x06464e5eu, 0), /* librsync */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2e67038bu, 9u, 0u, 0x9ec51056u, &g_termux_pkg_names[g_termux_pkg_name_offs[972u]]), /* librtmidi */
#else
  RAF_PKG_INIT(0x2e67038bu, 9u, 0u, 0x9ec51056u, 0), /* librtmidi */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x98d7b006u, 9u, 0u, 0x9ab49413u, &g_termux_pkg_names[g_termux_pkg_name_offs[973u]]), /* librttopo */
#else
  RAF_PKG_INIT(0x98d7b006u, 9u, 0u, 0x9ab49413u, 0), /* librttopo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd628cb14u, 13u, 0u, 0xa0b5ac19u, &g_termux_pkg_names[g_termux_pkg_name_offs[974u]]), /* libsamplerate */
#else
  RAF_PKG_INIT(0xd628cb14u, 13u, 0u, 0xa0b5ac19u, 0), /* libsamplerate */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x335df8bbu, 7u, 0u, 0x5cd41eb2u, &g_termux_pkg_names[g_termux_pkg_name_offs[975u]]), /* libsasl */
#else
  RAF_PKG_INIT(0x335df8bbu, 7u, 0u, 0x5cd41eb2u, 0), /* libsasl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x205ddad2u, 7u, 0u, 0x6fd43c9bu, &g_termux_pkg_names[g_termux_pkg_name_offs[976u]]), /* libsass */
#else
  RAF_PKG_INIT(0x205ddad2u, 7u, 0u, 0x6fd43c9bu, 0), /* libsass */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x111ed126u, 9u, 0u, 0x4836f733u, &g_termux_pkg_names[g_termux_pkg_name_offs[977u]]), /* libsearpc */
#else
  RAF_PKG_INIT(0x111ed126u, 9u, 0u, 0x4836f733u, 0), /* libsearpc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7af8a63du, 7u, 0u, 0xac1f26ecu, &g_termux_pkg_names[g_termux_pkg_name_offs[978u]]), /* libseat */
#else
  RAF_PKG_INIT(0x7af8a63du, 7u, 0u, 0xac1f26ecu, 0), /* libseat */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x322cef06u, 10u, 0u, 0xfa5ba105u, &g_termux_pkg_names[g_termux_pkg_name_offs[979u]]), /* libseccomp */
#else
  RAF_PKG_INIT(0x322cef06u, 10u, 0u, 0xfa5ba105u, 0), /* libseccomp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x74608c6cu, 12u, 0u, 0x21cb5733u, &g_termux_pkg_names[g_termux_pkg_name_offs[980u]]), /* libsecp256k1 */
#else
  RAF_PKG_INIT(0x74608c6cu, 12u, 0u, 0x21cb5733u, 0), /* libsecp256k1 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x736f1f10u, 9u, 0u, 0xf7554badu, &g_termux_pkg_names[g_termux_pkg_name_offs[981u]]), /* libsecret */
#else
  RAF_PKG_INIT(0x736f1f10u, 9u, 0u, 0xf7554badu, 0), /* libsecret */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa576f620u, 7u, 0u, 0x81b45ec1u, &g_termux_pkg_names[g_termux_pkg_name_offs[982u]]), /* libsfdo */
#else
  RAF_PKG_INIT(0xa576f620u, 7u, 0u, 0x81b45ec1u, 0), /* libsfdo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x71887271u, 8u, 0u, 0xbeeb7bc6u, &g_termux_pkg_names[g_termux_pkg_name_offs[983u]]), /* libshout */
#else
  RAF_PKG_INIT(0x71887271u, 8u, 0u, 0xbeeb7bc6u, 0), /* libshout */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x22e4bf8du, 13u, 0u, 0x72973b30u, &g_termux_pkg_names[g_termux_pkg_name_offs[984u]]), /* libsigc++-2.0 */
#else
  RAF_PKG_INIT(0x22e4bf8du, 13u, 0u, 0x72973b30u, 0), /* libsigc++-2.0 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9c082846u, 13u, 0u, 0x7924ea17u, &g_termux_pkg_names[g_termux_pkg_name_offs[985u]]), /* libsigc++-3.0 */
#else
  RAF_PKG_INIT(0x9c082846u, 13u, 0u, 0x7924ea17u, 0), /* libsigc++-3.0 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbd3803c3u, 20u, 0u, 0x3f1a0e20u, &g_termux_pkg_names[g_termux_pkg_name_offs[986u]]), /* libsignal-protocol-c */
#else
  RAF_PKG_INIT(0xbd3803c3u, 20u, 0u, 0x3f1a0e20u, 0), /* libsignal-protocol-c */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x54817e84u, 10u, 0u, 0x0c26a917u, &g_termux_pkg_names[g_termux_pkg_name_offs[987u]]), /* libsigsegv */
#else
  RAF_PKG_INIT(0x54817e84u, 10u, 0u, 0x0c26a917u, 0), /* libsigsegv */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x86ec3d95u, 8u, 0u, 0xa50f32deu, &g_termux_pkg_names[g_termux_pkg_name_offs[988u]]), /* libsixel */
#else
  RAF_PKG_INIT(0x86ec3d95u, 8u, 0u, 0xa50f32deu, 0), /* libsixel */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x51719154u, 12u, 0u, 0x5e3edf13u, &g_termux_pkg_names[g_termux_pkg_name_offs[989u]]), /* libskiasharp */
#else
  RAF_PKG_INIT(0x51719154u, 12u, 0u, 0x5e3edf13u, 0), /* libskiasharp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4641b52cu, 8u, 0u, 0x80e907f7u, &g_termux_pkg_names[g_termux_pkg_name_offs[990u]]), /* libslirp */
#else
  RAF_PKG_INIT(0x4641b52cu, 8u, 0u, 0x80e907f7u, 0), /* libslirp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x21a97b20u, 5u, 0u, 0x49de4ab9u, &g_termux_pkg_names[g_termux_pkg_name_offs[991u]]), /* libsm */
#else
  RAF_PKG_INIT(0x21a97b20u, 5u, 0u, 0x49de4ab9u, 0), /* libsm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xaea66643u, 9u, 0u, 0x45166f96u, &g_termux_pkg_names[g_termux_pkg_name_offs[992u]]), /* libsnappy */
#else
  RAF_PKG_INIT(0xaea66643u, 9u, 0u, 0x45166f96u, 0), /* libsnappy */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4bb928b9u, 10u, 0u, 0x91c48c9au, &g_termux_pkg_names[g_termux_pkg_name_offs[993u]]), /* libsndfile */
#else
  RAF_PKG_INIT(0x4bb928b9u, 10u, 0u, 0x91c48c9au, 0), /* libsndfile */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xadde536fu, 9u, 0u, 0x3b48b95au, &g_termux_pkg_names[g_termux_pkg_name_offs[994u]]), /* libsodium */
#else
  RAF_PKG_INIT(0xadde536fu, 9u, 0u, 0x3b48b95au, 0), /* libsodium */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1060c0b2u, 10u, 0u, 0xabede49du, &g_termux_pkg_names[g_termux_pkg_name_offs[995u]]), /* libsoldout */
#else
  RAF_PKG_INIT(0x1060c0b2u, 10u, 0u, 0xabede49du, 0), /* libsoldout */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc7f1719cu, 9u, 0u, 0x5bcbafcdu, &g_termux_pkg_names[g_termux_pkg_name_offs[996u]]), /* libsophia */
#else
  RAF_PKG_INIT(0xc7f1719cu, 9u, 0u, 0x5bcbafcdu, 0), /* libsophia */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x636f85fau, 13u, 0u, 0x6b5494b7u, &g_termux_pkg_names[g_termux_pkg_name_offs[997u]]), /* libsoundtouch */
#else
  RAF_PKG_INIT(0x636f85fau, 13u, 0u, 0x6b5494b7u, 0), /* libsoundtouch */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe50ef7bbu, 7u, 0u, 0x6c3b9746u, &g_termux_pkg_names[g_termux_pkg_name_offs[998u]]), /* libsoup */
#else
  RAF_PKG_INIT(0xe50ef7bbu, 7u, 0u, 0x6c3b9746u, 0), /* libsoup */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1e8fab18u, 8u, 0u, 0xd6cf6d2fu, &g_termux_pkg_names[g_termux_pkg_name_offs[999u]]), /* libsoup3 */
#else
  RAF_PKG_INIT(0x1e8fab18u, 8u, 0u, 0xd6cf6d2fu, 0), /* libsoup3 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe52ace38u, 7u, 0u, 0x6c46d039u, &g_termux_pkg_names[g_termux_pkg_name_offs[1000u]]), /* libsoxr */
#else
  RAF_PKG_INIT(0xe52ace38u, 7u, 0u, 0x6c46d039u, 0), /* libsoxr */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1173d780u, 15u, 0u, 0xaa5419a5u, &g_termux_pkg_names[g_termux_pkg_name_offs[1001u]]), /* libspatialindex */
#else
  RAF_PKG_INIT(0x1173d780u, 15u, 0u, 0xaa5419a5u, 0), /* libspatialindex */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x99993274u, 13u, 0u, 0xa34226e5u, &g_termux_pkg_names[g_termux_pkg_name_offs[1002u]]), /* libspatialite */
#else
  RAF_PKG_INIT(0x99993274u, 13u, 0u, 0xa34226e5u, 0), /* libspatialite */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdddab865u, 9u, 0u, 0xe71c9af0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1003u]]), /* libspdlog */
#else
  RAF_PKG_INIT(0xdddab865u, 9u, 0u, 0xe71c9af0u, 0), /* libspdlog */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe51f27b4u, 10u, 0u, 0xb2802d47u, &g_termux_pkg_names[g_termux_pkg_name_offs[1004u]]), /* libspectre */
#else
  RAF_PKG_INIT(0xe51f27b4u, 10u, 0u, 0xb2802d47u, 0), /* libspectre */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x510fcd73u, 8u, 0u, 0x19795fc0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1005u]]), /* libspeex */
#else
  RAF_PKG_INIT(0x510fcd73u, 8u, 0u, 0x19795fc0u, 0), /* libspeex */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x67557715u, 17u, 0u, 0x727fd110u, &g_termux_pkg_names[g_termux_pkg_name_offs[1006u]]), /* libspice-protocol */
#else
  RAF_PKG_INIT(0x67557715u, 17u, 0u, 0x727fd110u, 0), /* libspice-protocol */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xabc14f32u, 15u, 0u, 0x115d7fa7u, &g_termux_pkg_names[g_termux_pkg_name_offs[1007u]]), /* libspice-server */
#else
  RAF_PKG_INIT(0xabc14f32u, 15u, 0u, 0x115d7fa7u, 0), /* libspice-server */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xccf86fe0u, 9u, 0u, 0x7c9e6451u, &g_termux_pkg_names[g_termux_pkg_name_offs[1008u]]), /* libsqlite */
#else
  RAF_PKG_INIT(0xccf86fe0u, 9u, 0u, 0x7c9e6451u, 0), /* libsqlite */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x641921dbu, 6u, 0u, 0x042e0d20u, &g_termux_pkg_names[g_termux_pkg_name_offs[1009u]]), /* libsrt */
#else
  RAF_PKG_INIT(0x641921dbu, 6u, 0u, 0x042e0d20u, 0), /* libsrt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6a16ecb6u, 6u, 0u, 0x06304eddu, &g_termux_pkg_names[g_termux_pkg_name_offs[1010u]]), /* libssh */
#else
  RAF_PKG_INIT(0x6a16ecb6u, 6u, 0u, 0x06304eddu, 0), /* libssh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x861653ccu, 7u, 0u, 0xad0c423du, &g_termux_pkg_names[g_termux_pkg_name_offs[1011u]]), /* libssh2 */
#else
  RAF_PKG_INIT(0x861653ccu, 7u, 0u, 0xad0c423du, 0), /* libssh2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb7af99bfu, 10u, 0u, 0xa8d975b8u, &g_termux_pkg_names[g_termux_pkg_name_offs[1012u]]), /* libstemmer */
#else
  RAF_PKG_INIT(0xb7af99bfu, 10u, 0u, 0xa8d975b8u, 0), /* libstemmer */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0ba96ea3u, 10u, 0u, 0x6aefaafcu, &g_termux_pkg_names[g_termux_pkg_name_offs[1013u]]), /* libstrophe */
#else
  RAF_PKG_INIT(0x0ba96ea3u, 10u, 0u, 0x6aefaafcu, 0), /* libstrophe */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0f4103e3u, 11u, 0u, 0x2c130f8au, &g_termux_pkg_names[g_termux_pkg_name_offs[1014u]]), /* libt3config */
#else
  RAF_PKG_INIT(0x0f4103e3u, 11u, 0u, 0x2c130f8au, 0), /* libt3config */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7f77568bu, 14u, 0u, 0xf9145d04u, &g_termux_pkg_names[g_termux_pkg_name_offs[1015u]]), /* libt3highlight */
#else
  RAF_PKG_INIT(0x7f77568bu, 14u, 0u, 0xf9145d04u, 0), /* libt3highlight */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xad447b28u, 8u, 0u, 0x2ffe4eabu, &g_termux_pkg_names[g_termux_pkg_name_offs[1016u]]), /* libt3key */
#else
  RAF_PKG_INIT(0xad447b28u, 8u, 0u, 0x2ffe4eabu, 0), /* libt3key */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd0182709u, 11u, 0u, 0x6d325da0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1017u]]), /* libt3widget */
#else
  RAF_PKG_INIT(0xd0182709u, 11u, 0u, 0x6d325da0u, 0), /* libt3widget */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf6adf421u, 11u, 0u, 0x33bd0400u, &g_termux_pkg_names[g_termux_pkg_name_offs[1018u]]), /* libt3window */
#else
  RAF_PKG_INIT(0xf6adf421u, 11u, 0u, 0x33bd0400u, 0), /* libt3window */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x49f774bdu, 9u, 0u, 0x04089f3cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1019u]]), /* libtalloc */
#else
  RAF_PKG_INIT(0x49f774bdu, 9u, 0u, 0x04089f3cu, 0), /* libtalloc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xca81aeb9u, 8u, 0u, 0xa8b35c02u, &g_termux_pkg_names[g_termux_pkg_name_offs[1020u]]), /* libtasn1 */
#else
  RAF_PKG_INIT(0xca81aeb9u, 8u, 0u, 0xa8b35c02u, 0), /* libtasn1 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x18ff4d1du, 8u, 0u, 0x058ffcd2u, &g_termux_pkg_names[g_termux_pkg_name_offs[1021u]]), /* libtatsu */
#else
  RAF_PKG_INIT(0x18ff4d1du, 8u, 0u, 0x058ffcd2u, 0), /* libtatsu */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7da2e2f4u, 6u, 0u, 0x73f7d147u, &g_termux_pkg_names[g_termux_pkg_name_offs[1022u]]), /* libtbb */
#else
  RAF_PKG_INIT(0x7da2e2f4u, 6u, 0u, 0x73f7d147u, 0), /* libtbb */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x28983d04u, 5u, 0u, 0x42e68e79u, &g_termux_pkg_names[g_termux_pkg_name_offs[1023u]]), /* libtd */
#else
  RAF_PKG_INIT(0x28983d04u, 5u, 0u, 0x42e68e79u, 0), /* libtd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4da8a792u, 6u, 0u, 0x6bf1b481u, &g_termux_pkg_names[g_termux_pkg_name_offs[1024u]]), /* libtdb */
#else
  RAF_PKG_INIT(0x4da8a792u, 6u, 0u, 0x6bf1b481u, 0), /* libtdb */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc24f872du, 10u, 0u, 0xdf71aefau, &g_termux_pkg_names[g_termux_pkg_name_offs[1025u]]), /* libtermkey */
#else
  RAF_PKG_INIT(0xc24f872du, 10u, 0u, 0xdf71aefau, 0), /* libtermkey */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9feb1e25u, 9u, 0u, 0x1d6b169cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1026u]]), /* libtheora */
#else
  RAF_PKG_INIT(0x9feb1e25u, 9u, 0u, 0x1d6b169cu, 0), /* libtheora */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe79c487du, 12u, 0u, 0xef8ff1fau, &g_termux_pkg_names[g_termux_pkg_name_offs[1027u]]), /* libthread-db */
#else
  RAF_PKG_INIT(0xe79c487du, 12u, 0u, 0xef8ff1fau, 0), /* libthread-db */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x77f7408bu, 7u, 0u, 0x81074006u, &g_termux_pkg_names[g_termux_pkg_name_offs[1028u]]), /* libtiff */
#else
  RAF_PKG_INIT(0x77f7408bu, 7u, 0u, 0x81074006u, 0), /* libtiff */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3a958e02u, 9u, 0u, 0xe2b0ee93u, &g_termux_pkg_names[g_termux_pkg_name_offs[1029u]]), /* libtiledb */
#else
  RAF_PKG_INIT(0x3a958e02u, 9u, 0u, 0xe2b0ee93u, 0), /* libtiledb */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7b0accfcu, 7u, 0u, 0xa5f3f28du, &g_termux_pkg_names[g_termux_pkg_name_offs[1030u]]), /* libtins */
#else
  RAF_PKG_INIT(0x7b0accfcu, 7u, 0u, 0xa5f3f28du, 0), /* libtins */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4df4b007u, 10u, 0u, 0x895819ccu, &g_termux_pkg_names[g_termux_pkg_name_offs[1031u]]), /* libtinyxml */
#else
  RAF_PKG_INIT(0x4df4b007u, 10u, 0u, 0x895819ccu, 0), /* libtinyxml */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xed31636fu, 11u, 0u, 0x33b0eadau, &g_termux_pkg_names[g_termux_pkg_name_offs[1032u]]), /* libtinyxml2 */
#else
  RAF_PKG_INIT(0xed31636fu, 11u, 0u, 0x33b0eadau, 0), /* libtinyxml2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x601c698eu, 8u, 0u, 0xa7060271u, &g_termux_pkg_names[g_termux_pkg_name_offs[1033u]]), /* libtirpc */
#else
  RAF_PKG_INIT(0x601c698eu, 8u, 0u, 0xa7060271u, 0), /* libtirpc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0c5bf5d4u, 9u, 0u, 0x2bbf937du, &g_termux_pkg_names[g_termux_pkg_name_offs[1034u]]), /* libtllist */
#else
  RAF_PKG_INIT(0x0c5bf5d4u, 9u, 0u, 0x2bbf937du, 0), /* libtllist */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x12e1315cu, 11u, 0u, 0x8ad8dbf5u, &g_termux_pkg_names[g_termux_pkg_name_offs[1035u]]), /* libtomcrypt */
#else
  RAF_PKG_INIT(0x12e1315cu, 11u, 0u, 0x8ad8dbf5u, 0), /* libtomcrypt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0b5837b6u, 10u, 0u, 0x5b950e91u, &g_termux_pkg_names[g_termux_pkg_name_offs[1036u]]), /* libtommath */
#else
  RAF_PKG_INIT(0x0b5837b6u, 10u, 0u, 0x5b950e91u, 0), /* libtommath */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1d667556u, 7u, 0u, 0x1b986ffbu, &g_termux_pkg_names[g_termux_pkg_name_offs[1037u]]), /* libtool */
#else
  RAF_PKG_INIT(0x1d667556u, 7u, 0u, 0x1b986ffbu, 0), /* libtool */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9aed509au, 10u, 0u, 0x5961f269u, &g_termux_pkg_names[g_termux_pkg_name_offs[1038u]]), /* libtorrent */
#else
  RAF_PKG_INIT(0x9aed509au, 10u, 0u, 0x5961f269u, 0), /* libtorrent */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb12222fdu, 20u, 0u, 0xcea48c9eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1039u]]), /* libtorrent-rasterbar */
#else
  RAF_PKG_INIT(0xb12222fdu, 20u, 0u, 0xcea48c9eu, 0), /* libtorrent-rasterbar */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5267af44u, 7u, 0u, 0x71878ee1u, &g_termux_pkg_names[g_termux_pkg_name_offs[1040u]]), /* libtpms */
#else
  RAF_PKG_INIT(0x5267af44u, 7u, 0u, 0x71878ee1u, 0), /* libtpms */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x495ee4e6u, 13u, 0u, 0x9324d297u, &g_termux_pkg_names[g_termux_pkg_name_offs[1041u]]), /* libtranscript */
#else
  RAF_PKG_INIT(0x495ee4e6u, 13u, 0u, 0x9324d297u, 0), /* libtranscript */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0c925aedu, 11u, 0u, 0x96ab78f0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1042u]]), /* libtree-ldd */
#else
  RAF_PKG_INIT(0x0c925aedu, 11u, 0u, 0x96ab78f0u, 0), /* libtree-ldd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3c1b7a84u, 9u, 0u, 0x99374645u, &g_termux_pkg_names[g_termux_pkg_name_offs[1043u]]), /* libtsduck */
#else
  RAF_PKG_INIT(0x3c1b7a84u, 9u, 0u, 0x99374645u, 0), /* libtsduck */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4c6fad70u, 10u, 0u, 0x3ff48f53u, &g_termux_pkg_names[g_termux_pkg_name_offs[1044u]]), /* libtvision */
#else
  RAF_PKG_INIT(0x4c6fad70u, 10u, 0u, 0x3ff48f53u, 0), /* libtvision */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x222140dfu, 10u, 0u, 0x6738b64cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1045u]]), /* libtwolame */
#else
  RAF_PKG_INIT(0x222140dfu, 10u, 0u, 0x6738b64cu, 0), /* libtwolame */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xedd49ac2u, 10u, 0u, 0xba983929u, &g_termux_pkg_names[g_termux_pkg_name_offs[1046u]]), /* libuber-h3 */
#else
  RAF_PKG_INIT(0xedd49ac2u, 10u, 0u, 0xba983929u, 0), /* libuber-h3 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9ad891acu, 11u, 0u, 0xaf06f22du, &g_termux_pkg_names[g_termux_pkg_name_offs[1047u]]), /* libuchardet */
#else
  RAF_PKG_INIT(0x9ad891acu, 11u, 0u, 0xaf06f22du, 0), /* libuchardet */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x04286342u, 11u, 0u, 0xaa2b5f17u, &g_termux_pkg_names[g_termux_pkg_name_offs[1048u]]), /* libucontext */
#else
  RAF_PKG_INIT(0x04286342u, 11u, 0u, 0xaa2b5f17u, 0), /* libucontext */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe0600a31u, 10u, 0u, 0x6ffad8aau, &g_termux_pkg_names[g_termux_pkg_name_offs[1049u]]), /* libudfread */
#else
  RAF_PKG_INIT(0xe0600a31u, 10u, 0u, 0x6ffad8aau, 0), /* libudfread */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xafed03bdu, 10u, 0u, 0x352d4446u, &g_termux_pkg_names[g_termux_pkg_name_offs[1050u]]), /* libunbound */
#else
  RAF_PKG_INIT(0xafed03bdu, 10u, 0u, 0x352d4446u, 0), /* libunbound */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x359eae1au, 12u, 0u, 0x6c4496bdu, &g_termux_pkg_names[g_termux_pkg_name_offs[1051u]]), /* libunibilium */
#else
  RAF_PKG_INIT(0x359eae1au, 12u, 0u, 0x6c4496bdu, 0), /* libunibilium */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8f5e498bu, 12u, 0u, 0xb2f10018u, &g_termux_pkg_names[g_termux_pkg_name_offs[1052u]]), /* libunistring */
#else
  RAF_PKG_INIT(0x8f5e498bu, 12u, 0u, 0xb2f10018u, 0), /* libunistring */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x31a80feeu, 10u, 0u, 0xbc9fd1f1u, &g_termux_pkg_names[g_termux_pkg_name_offs[1053u]]), /* libunqlite */
#else
  RAF_PKG_INIT(0x31a80feeu, 10u, 0u, 0xbc9fd1f1u, 0), /* libunqlite */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x908e6077u, 7u, 0u, 0x25d0a022u, &g_termux_pkg_names[g_termux_pkg_name_offs[1054u]]), /* liburcu */
#else
  RAF_PKG_INIT(0x908e6077u, 7u, 0u, 0x25d0a022u, 0), /* liburcu */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe255f6aeu, 6u, 0u, 0xd7941745u, &g_termux_pkg_names[g_termux_pkg_name_offs[1055u]]), /* libusb */
#else
  RAF_PKG_INIT(0xe255f6aeu, 6u, 0u, 0xd7941745u, 0), /* libusb */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6c072c50u, 10u, 0u, 0xddfa477bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1056u]]), /* libusbmuxd */
#else
  RAF_PKG_INIT(0x6c072c50u, 10u, 0u, 0xddfa477bu, 0), /* libusbmuxd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8e9c9a82u, 11u, 0u, 0xf93c97a7u, &g_termux_pkg_names[g_termux_pkg_name_offs[1057u]]), /* libusbredir */
#else
  RAF_PKG_INIT(0x8e9c9a82u, 11u, 0u, 0xf93c97a7u, 0), /* libusbredir */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3c9a9b17u, 5u, 0u, 0x4ee462c6u, &g_termux_pkg_names[g_termux_pkg_name_offs[1058u]]), /* libuv */
#else
  RAF_PKG_INIT(0x3c9a9b17u, 5u, 0u, 0x4ee462c6u, 0), /* libuv */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2c4b68a6u, 6u, 0u, 0x43e6b835u, &g_termux_pkg_names[g_termux_pkg_name_offs[1059u]]), /* libv4l */
#else
  RAF_PKG_INIT(0x2c4b68a6u, 6u, 0u, 0x43e6b835u, 0), /* libv4l */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5f7c8c0eu, 9u, 0u, 0x077c5d1bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1060u]]), /* libvbisam */
#else
  RAF_PKG_INIT(0x5f7c8c0eu, 9u, 0u, 0x077c5d1bu, 0), /* libvbisam */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x580ca83fu, 10u, 0u, 0xd905f5a8u, &g_termux_pkg_names[g_termux_pkg_name_offs[1061u]]), /* libvidstab */
#else
  RAF_PKG_INIT(0x580ca83fu, 10u, 0u, 0xd905f5a8u, 0), /* libvidstab */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4dba7047u, 8u, 0u, 0xb8fca028u, &g_termux_pkg_names[g_termux_pkg_name_offs[1062u]]), /* libvigra */
#else
  RAF_PKG_INIT(0x4dba7047u, 8u, 0u, 0xb8fca028u, 0), /* libvigra */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc526bc94u, 7u, 0u, 0x0308f165u, &g_termux_pkg_names[g_termux_pkg_name_offs[1063u]]), /* libvips */
#else
  RAF_PKG_INIT(0xc526bc94u, 7u, 0u, 0x0308f165u, 0), /* libvips */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc5b2f2bau, 8u, 0u, 0x190e94b9u, &g_termux_pkg_names[g_termux_pkg_name_offs[1064u]]), /* libvisio */
#else
  RAF_PKG_INIT(0xc5b2f2bau, 8u, 0u, 0x190e94b9u, 0), /* libvisio */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfbc38deau, 7u, 0u, 0x5b0ca4afu, &g_termux_pkg_names[g_termux_pkg_name_offs[1065u]]), /* libvmaf */
#else
  RAF_PKG_INIT(0xfbc38deau, 7u, 0u, 0x5b0ca4afu, 0), /* libvmaf */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf927daf1u, 14u, 0u, 0x443e3e7au, &g_termux_pkg_names[g_termux_pkg_name_offs[1066u]]), /* libvo-amrwbenc */
#else
  RAF_PKG_INIT(0xf927daf1u, 14u, 0u, 0x443e3e7au, 0), /* libvo-amrwbenc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd17d93a9u, 9u, 0u, 0xc4433f0cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1067u]]), /* libvoikko */
#else
  RAF_PKG_INIT(0xd17d93a9u, 9u, 0u, 0xc4433f0cu, 0), /* libvoikko */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5f5bd897u, 9u, 0u, 0x8965444eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1068u]]), /* libvorbis */
#else
  RAF_PKG_INIT(0x5f5bd897u, 9u, 0u, 0x8965444eu, 0), /* libvorbis */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x38f3d9a6u, 6u, 0u, 0x375361edu, &g_termux_pkg_names[g_termux_pkg_name_offs[1069u]]), /* libvpx */
#else
  RAF_PKG_INIT(0x38f3d9a6u, 6u, 0u, 0x375361edu, 0), /* libvpx */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4c69badcu, 8u, 0u, 0xac53a7afu, &g_termux_pkg_names[g_termux_pkg_name_offs[1070u]]), /* libvterm */
#else
  RAF_PKG_INIT(0x4c69badcu, 8u, 0u, 0xac53a7afu, 0), /* libvterm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2ce03f0au, 6u, 0u, 0x233e27b9u, &g_termux_pkg_names[g_termux_pkg_name_offs[1071u]]), /* libvxl */
#else
  RAF_PKG_INIT(0x2ce03f0au, 6u, 0u, 0x233e27b9u, 0), /* libvxl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcce3ac4bu, 10u, 0u, 0x75429ad0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1072u]]), /* libwavpack */
#else
  RAF_PKG_INIT(0xcce3ac4bu, 10u, 0u, 0x75429ad0u, 0), /* libwavpack */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x68a81dd6u, 10u, 0u, 0x5f65e4cdu, &g_termux_pkg_names[g_termux_pkg_name_offs[1073u]]), /* libwayland */
#else
  RAF_PKG_INIT(0x68a81dd6u, 10u, 0u, 0x5f65e4cdu, 0), /* libwayland */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8d78438eu, 20u, 0u, 0xb33080e5u, &g_termux_pkg_names[g_termux_pkg_name_offs[1074u]]), /* libwayland-protocols */
#else
  RAF_PKG_INIT(0x8d78438eu, 20u, 0u, 0xb33080e5u, 0), /* libwayland-protocols */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x80257bceu, 7u, 0u, 0x86a39bb7u, &g_termux_pkg_names[g_termux_pkg_name_offs[1075u]]), /* libwebp */
#else
  RAF_PKG_INIT(0x80257bceu, 7u, 0u, 0x86a39bb7u, 0), /* libwebp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdb18e8deu, 26u, 0u, 0x01afacf9u, &g_termux_pkg_names[g_termux_pkg_name_offs[1076u]]), /* libwebrtc-audio-processing */
#else
  RAF_PKG_INIT(0xdb18e8deu, 26u, 0u, 0x01afacf9u, 0), /* libwebrtc-audio-processing */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5022ee80u, 13u, 0u, 0xde454b15u, &g_termux_pkg_names[g_termux_pkg_name_offs[1077u]]), /* libwebsockets */
#else
  RAF_PKG_INIT(0x5022ee80u, 13u, 0u, 0xde454b15u, 0), /* libwebsockets */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xac7fc832u, 10u, 0u, 0x5fe48005u, &g_termux_pkg_names[g_termux_pkg_name_offs[1078u]]), /* libwolfssl */
#else
  RAF_PKG_INIT(0xac7fc832u, 10u, 0u, 0x5fe48005u, 0), /* libwolfssl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x933ce845u, 6u, 0u, 0xdcbaa16eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1079u]]), /* libwpd */
#else
  RAF_PKG_INIT(0x933ce845u, 6u, 0u, 0xdcbaa16eu, 0), /* libwpd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x903ce38cu, 6u, 0u, 0xdbba9fdbu, &g_termux_pkg_names[g_termux_pkg_name_offs[1080u]]), /* libwpg */
#else
  RAF_PKG_INIT(0x903ce38cu, 6u, 0u, 0xdbba9fdbu, 0), /* libwpg */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9c3cf670u, 6u, 0u, 0xcfba8cf7u, &g_termux_pkg_names[g_termux_pkg_name_offs[1081u]]), /* libwps */
#else
  RAF_PKG_INIT(0x9c3cf670u, 6u, 0u, 0xcfba8cf7u, 0), /* libwps */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcb0dcd9eu, 7u, 0u, 0xa2b43bcbu, &g_termux_pkg_names[g_termux_pkg_name_offs[1082u]]), /* libwren */
#else
  RAF_PKG_INIT(0xcb0dcd9eu, 7u, 0u, 0xa2b43bcbu, 0), /* libwren */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x76b3d32cu, 8u, 0u, 0x8415470fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1083u]]), /* libwslay */
#else
  RAF_PKG_INIT(0x76b3d32cu, 8u, 0u, 0x8415470fu, 0), /* libwslay */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2c9eff15u, 5u, 0u, 0x5ee8f924u, &g_termux_pkg_names[g_termux_pkg_name_offs[1084u]]), /* libwv */
#else
  RAF_PKG_INIT(0x2c9eff15u, 5u, 0u, 0x5ee8f924u, 0), /* libwv */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xeba0a8b2u, 6u, 0u, 0x7a50acc5u, &g_termux_pkg_names[g_termux_pkg_name_offs[1085u]]), /* libx11 */
#else
  RAF_PKG_INIT(0xeba0a8b2u, 6u, 0u, 0x7a50acc5u, 0), /* libx11 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5dc54840u, 7u, 0u, 0x256b53a1u, &g_termux_pkg_names[g_termux_pkg_name_offs[1086u]]), /* libx264 */
#else
  RAF_PKG_INIT(0x5dc54840u, 7u, 0u, 0x256b53a1u, 0), /* libx264 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5ec549d3u, 7u, 0u, 0x246b520eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1087u]]), /* libx265 */
#else
  RAF_PKG_INIT(0x5ec549d3u, 7u, 0u, 0x246b520eu, 0), /* libx265 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf5b47c93u, 9u, 0u, 0x8635513au, &g_termux_pkg_names[g_termux_pkg_name_offs[1088u]]), /* libxapian */
#else
  RAF_PKG_INIT(0xf5b47c93u, 9u, 0u, 0x8635513au, 0), /* libxapian */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa866b0d6u, 6u, 0u, 0x358b6189u, &g_termux_pkg_names[g_termux_pkg_name_offs[1089u]]), /* libxau */
#else
  RAF_PKG_INIT(0xa866b0d6u, 6u, 0u, 0x358b6189u, 0), /* libxau */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xab6cc5bdu, 6u, 0u, 0x1e852d26u, &g_termux_pkg_names[g_termux_pkg_name_offs[1090u]]), /* libxcb */
#else
  RAF_PKG_INIT(0xab6cc5bdu, 6u, 0u, 0x1e852d26u, 0), /* libxcb */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6aa9fe86u, 8u, 0u, 0x7901e471u, &g_termux_pkg_names[g_termux_pkg_name_offs[1091u]]), /* libxcfun */
#else
  RAF_PKG_INIT(0x6aa9fe86u, 8u, 0u, 0x7901e471u, 0), /* libxcfun */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1317b79eu, 10u, 0u, 0x5164c6e1u, &g_termux_pkg_names[g_termux_pkg_name_offs[1092u]]), /* libxcursor */
#else
  RAF_PKG_INIT(0x1317b79eu, 10u, 0u, 0x5164c6e1u, 0), /* libxcursor */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x712fe824u, 14u, 0u, 0x08d133f3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1093u]]), /* libxdg-basedir */
#else
  RAF_PKG_INIT(0x712fe824u, 14u, 0u, 0x08d133f3u, 0), /* libxdg-basedir */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf0a719ecu, 8u, 0u, 0x4d81af83u, &g_termux_pkg_names[g_termux_pkg_name_offs[1094u]]), /* libxdmcp */
#else
  RAF_PKG_INIT(0xf0a719ecu, 8u, 0u, 0x4d81af83u, 0), /* libxdmcp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2f9ad608u, 10u, 0u, 0xb10255f3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1095u]]), /* libxdrfile */
#else
  RAF_PKG_INIT(0x2f9ad608u, 10u, 0u, 0xb10255f3u, 0), /* libxdrfile */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x179260d7u, 7u, 0u, 0xfb94905eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1096u]]), /* libxext */
#else
  RAF_PKG_INIT(0x179260d7u, 7u, 0u, 0xfb94905eu, 0), /* libxext */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf1b880efu, 9u, 0u, 0x465ef806u, &g_termux_pkg_names[g_termux_pkg_name_offs[1097u]]), /* libxfixes */
#else
  RAF_PKG_INIT(0xf1b880efu, 9u, 0u, 0x465ef806u, 0), /* libxfixes */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb7600caeu, 6u, 0u, 0x46923811u, &g_termux_pkg_names[g_termux_pkg_name_offs[1098u]]), /* libxft */
#else
  RAF_PKG_INIT(0xb7600caeu, 6u, 0u, 0x46923811u, 0), /* libxft */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x458ddd4fu, 5u, 0u, 0x45c87e1eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1099u]]), /* libxi */
#else
  RAF_PKG_INIT(0x458ddd4fu, 5u, 0u, 0x45c87e1eu, 0), /* libxi */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa24653b9u, 6u, 0u, 0x47aa3e8au, &g_termux_pkg_names[g_termux_pkg_name_offs[1100u]]), /* libxls */
#else
  RAF_PKG_INIT(0xa24653b9u, 6u, 0u, 0x47aa3e8au, 0), /* libxls */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9efdc57cu, 13u, 0u, 0x5b3f0359u, &g_termux_pkg_names[g_termux_pkg_name_offs[1101u]]), /* libxlsxwriter */
#else
  RAF_PKG_INIT(0x9efdc57cu, 13u, 0u, 0x5b3f0359u, 0), /* libxlsxwriter */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x76b5fa1du, 7u, 0u, 0x8c34b3c0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1102u]]), /* libxml2 */
#else
  RAF_PKG_INIT(0x76b5fa1du, 7u, 0u, 0x8c34b3c0u, 0), /* libxml2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc6b6780du, 7u, 0u, 0x5c346830u, &g_termux_pkg_names[g_termux_pkg_name_offs[1103u]]), /* libxmlb */
#else
  RAF_PKG_INIT(0xc6b6780du, 7u, 0u, 0x5c346830u, 0), /* libxmlb */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x22450fdcu, 9u, 0u, 0x512fc749u, &g_termux_pkg_names[g_termux_pkg_name_offs[1104u]]), /* libxmlrpc */
#else
  RAF_PKG_INIT(0x22450fdcu, 9u, 0u, 0x512fc749u, 0), /* libxmlrpc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x81dfa2bbu, 9u, 0u, 0x7cb27332u, &g_termux_pkg_names[g_termux_pkg_name_offs[1105u]]), /* libxrandr */
#else
  RAF_PKG_INIT(0x81dfa2bbu, 9u, 0u, 0x7cb27332u, 0), /* libxrandr */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf3c5fcacu, 10u, 0u, 0x4748b067u, &g_termux_pkg_names[g_termux_pkg_name_offs[1106u]]), /* libxrender */
#else
  RAF_PKG_INIT(0xf3c5fcacu, 10u, 0u, 0x4748b067u, 0), /* libxrender */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xff13fa1fu, 12u, 0u, 0xc3f960f8u, &g_termux_pkg_names[g_termux_pkg_name_offs[1107u]]), /* libxshmfence */
#else
  RAF_PKG_INIT(0xff13fa1fu, 12u, 0u, 0xc3f960f8u, 0), /* libxshmfence */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc9707f75u, 7u, 0u, 0x2a05f140u, &g_termux_pkg_names[g_termux_pkg_name_offs[1108u]]), /* libxslt */
#else
  RAF_PKG_INIT(0xc9707f75u, 7u, 0u, 0x2a05f140u, 0), /* libxslt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xba443aeau, 6u, 0u, 0x2fadea59u, &g_termux_pkg_names[g_termux_pkg_name_offs[1109u]]), /* libxss */
#else
  RAF_PKG_INIT(0xba443aeau, 6u, 0u, 0x2fadea59u, 0), /* libxss */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x388dc8d8u, 5u, 0u, 0x52c89295u, &g_termux_pkg_names[g_termux_pkg_name_offs[1110u]]), /* libxt */
#else
  RAF_PKG_INIT(0x388dc8d8u, 5u, 0u, 0x52c89295u, 0), /* libxt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcb1eeb9fu, 7u, 0u, 0x28126092u, &g_termux_pkg_names[g_termux_pkg_name_offs[1111u]]), /* libxtst */
#else
  RAF_PKG_INIT(0xcb1eeb9fu, 7u, 0u, 0x28126092u, 0), /* libxtst */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3a8dcbfeu, 5u, 0u, 0x50c88f6fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1112u]]), /* libxv */
#else
  RAF_PKG_INIT(0x3a8dcbfeu, 5u, 0u, 0x50c88f6fu, 0), /* libxv */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x52bd11f9u, 10u, 0u, 0x422d7786u, &g_termux_pkg_names[g_termux_pkg_name_offs[1113u]]), /* libxxf86vm */
#else
  RAF_PKG_INIT(0x52bd11f9u, 10u, 0u, 0x422d7786u, 0), /* libxxf86vm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5838524bu, 7u, 0u, 0x8ab3bc32u, &g_termux_pkg_names[g_termux_pkg_name_offs[1114u]]), /* libyaml */
#else
  RAF_PKG_INIT(0x5838524bu, 7u, 0u, 0x8ab3bc32u, 0), /* libyaml */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe8625cdbu, 11u, 0u, 0xa7d8aa3au, &g_termux_pkg_names[g_termux_pkg_name_offs[1115u]]), /* libyaml-cpp */
#else
  RAF_PKG_INIT(0xe8625cdbu, 11u, 0u, 0xa7d8aa3au, 0), /* libyaml-cpp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7801f2f1u, 6u, 0u, 0x03c2de3eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1116u]]), /* libzen */
#else
  RAF_PKG_INIT(0x7801f2f1u, 6u, 0u, 0x03c2de3eu, 0), /* libzen */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x950b1af4u, 6u, 0u, 0x02a65a97u, &g_termux_pkg_names[g_termux_pkg_name_offs[1117u]]), /* libzim */
#else
  RAF_PKG_INIT(0x950b1af4u, 6u, 0u, 0x02a65a97u, 0), /* libzim */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x337ad569u, 7u, 0u, 0x1be127d0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1118u]]), /* libzimg */
#else
  RAF_PKG_INIT(0x337ad569u, 7u, 0u, 0x1be127d0u, 0), /* libzimg */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7a0af073u, 6u, 0u, 0x05a65f50u, &g_termux_pkg_names[g_termux_pkg_name_offs[1119u]]), /* libzip */
#else
  RAF_PKG_INIT(0x7a0af073u, 6u, 0u, 0x05a65f50u, 0), /* libzip */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x999051f9u, 17u, 0u, 0x46629908u, &g_termux_pkg_names[g_termux_pkg_name_offs[1120u]]), /* libzita-convolver */
#else
  RAF_PKG_INIT(0x999051f9u, 17u, 0u, 0x46629908u, 0), /* libzita-convolver */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x820afd0bu, 6u, 0u, 0x0da66be8u, &g_termux_pkg_names[g_termux_pkg_name_offs[1121u]]), /* libzix */
#else
  RAF_PKG_INIT(0x820afd0bu, 6u, 0u, 0x0da66be8u, 0), /* libzix */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9115a204u, 6u, 0u, 0x1eaf8107u, &g_termux_pkg_names[g_termux_pkg_name_offs[1122u]]), /* libzmq */
#else
  RAF_PKG_INIT(0x9115a204u, 6u, 0u, 0x1eaf8107u, 0), /* libzmq */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x22419f72u, 9u, 0u, 0xd3b3dd57u, &g_termux_pkg_names[g_termux_pkg_name_offs[1123u]]), /* libzopfli */
#else
  RAF_PKG_INIT(0x22419f72u, 9u, 0u, 0xd3b3dd57u, 0), /* libzopfli */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x05a4842au, 12u, 0u, 0x09b25bf9u, &g_termux_pkg_names[g_termux_pkg_name_offs[1124u]]), /* libzxing-cpp */
#else
  RAF_PKG_INIT(0x05a4842au, 12u, 0u, 0x09b25bf9u, 0), /* libzxing-cpp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x53dc17c5u, 8u, 0u, 0xb386c22au, &g_termux_pkg_names[g_termux_pkg_name_offs[1125u]]), /* lighttpd */
#else
  RAF_PKG_INIT(0x53dc17c5u, 8u, 0u, 0xb386c22au, 0), /* lighttpd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x08e10eb8u, 4u, 0u, 0x9045e903u, &g_termux_pkg_names[g_termux_pkg_name_offs[1126u]]), /* lilv */
#else
  RAF_PKG_INIT(0x08e10eb8u, 4u, 0u, 0x9045e903u, 0), /* lilv */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6db04aaau, 8u, 0u, 0x0cc9d289u, &g_termux_pkg_names[g_termux_pkg_name_offs[1127u]]), /* lilypond */
#else
  RAF_PKG_INIT(0x6db04aaau, 8u, 0u, 0x0cc9d289u, 0), /* lilypond */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe9ca9aeeu, 5u, 0u, 0x67122df3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1128u]]), /* links */
#else
  RAF_PKG_INIT(0xe9ca9aeeu, 5u, 0u, 0x67122df3u, 0), /* links */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf2ff012au, 4u, 0u, 0xaa00ed6du, &g_termux_pkg_names[g_termux_pkg_name_offs[1129u]]), /* lipl */
#else
  RAF_PKG_INIT(0xf2ff012au, 4u, 0u, 0xaa00ed6du, 0), /* lipl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x404cd5b6u, 3u, 0u, 0x710cbadfu, &g_termux_pkg_names[g_termux_pkg_name_offs[1130u]]), /* lit */
#else
  RAF_PKG_INIT(0x404cd5b6u, 3u, 0u, 0x710cbadfu, 0), /* lit */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe39c3cd0u, 13u, 0u, 0x59d88529u, &g_termux_pkg_names[g_termux_pkg_name_offs[1131u]]), /* litespeedtest */
#else
  RAF_PKG_INIT(0xe39c3cd0u, 13u, 0u, 0x59d88529u, 0), /* litespeedtest */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x41535926u, 9u, 0u, 0x8f4bb55fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1132u]]), /* littlecms */
#else
  RAF_PKG_INIT(0x41535926u, 9u, 0u, 0x8f4bb55fu, 0), /* littlecms */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7050ea56u, 9u, 0u, 0x54141157u, &g_termux_pkg_names[g_termux_pkg_name_offs[1133u]]), /* llama-cpp */
#else
  RAF_PKG_INIT(0x7050ea56u, 9u, 0u, 0x54141157u, 0), /* llama-cpp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x19f7ae83u, 7u, 0u, 0x6e459852u, &g_termux_pkg_names[g_termux_pkg_name_offs[1134u]]), /* llbuild */
#else
  RAF_PKG_INIT(0x19f7ae83u, 7u, 0u, 0x6e459852u, 0), /* llbuild */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x95a024b5u, 14u, 0u, 0x81c555beu, &g_termux_pkg_names[g_termux_pkg_name_offs[1135u]]), /* llvm-mingw-w64 */
#else
  RAF_PKG_INIT(0x95a024b5u, 14u, 0u, 0x81c555beu, 0), /* llvm-mingw-w64 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa2d0c7d3u, 20u, 0u, 0x6294e398u, &g_termux_pkg_names[g_termux_pkg_name_offs[1136u]]), /* llvm-mingw-w64-tools */
#else
  RAF_PKG_INIT(0xa2d0c7d3u, 20u, 0u, 0x6294e398u, 0), /* llvm-mingw-w64-tools */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4ee9d224u, 4u, 0u, 0x0eec2cabu, &g_termux_pkg_names[g_termux_pkg_name_offs[1137u]]), /* lnav */
#else
  RAF_PKG_INIT(0x4ee9d224u, 4u, 0u, 0x0eec2cabu, 0), /* lnav */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6253c701u, 3u, 0u, 0x5f107020u, &g_termux_pkg_names[g_termux_pkg_name_offs[1138u]]), /* lnd */
#else
  RAF_PKG_INIT(0x6253c701u, 3u, 0u, 0x5f107020u, 0), /* lnd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbeb399d9u, 8u, 0u, 0x2bb55376u, &g_termux_pkg_names[g_termux_pkg_name_offs[1139u]]), /* locustdb */
#else
  RAF_PKG_INIT(0xbeb399d9u, 8u, 0u, 0x2bb55376u, 0), /* locustdb */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x14261298u, 7u, 0u, 0xe41e17d5u, &g_termux_pkg_names[g_termux_pkg_name_offs[1140u]]), /* logo-ls */
#else
  RAF_PKG_INIT(0x14261298u, 7u, 0u, 0xe41e17d5u, 0), /* logo-ls */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x80ae7836u, 9u, 0u, 0xd2b4a50fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1141u]]), /* logrotate */
#else
  RAF_PKG_INIT(0x80ae7836u, 9u, 0u, 0xd2b4a50fu, 0), /* logrotate */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x153a099eu, 5u, 0u, 0xb3e4b9d7u, &g_termux_pkg_names[g_termux_pkg_name_offs[1142u]]), /* loksh */
#else
  RAF_PKG_INIT(0x153a099eu, 5u, 0u, 0xb3e4b9d7u, 0), /* loksh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x47438d31u, 7u, 0u, 0x3d4f934cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1143u]]), /* lowdown */
#else
  RAF_PKG_INIT(0x47438d31u, 7u, 0u, 0x3d4f934cu, 0), /* lowdown */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5731e17bu, 2u, 0u, 0xe43c6950u, &g_termux_pkg_names[g_termux_pkg_name_offs[1144u]]), /* lr */
#else
  RAF_PKG_INIT(0x5731e17bu, 2u, 0u, 0xe43c6950u, 0), /* lr */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8bd68edau, 5u, 0u, 0xc9d3703fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1145u]]), /* lrzip */
#else
  RAF_PKG_INIT(0x8bd68edau, 5u, 0u, 0xc9d3703fu, 0), /* lrzip */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7995cb2eu, 5u, 0u, 0xd3bb7b17u, &g_termux_pkg_names[g_termux_pkg_name_offs[1146u]]), /* lrzsz */
#else
  RAF_PKG_INIT(0x7995cb2eu, 5u, 0u, 0xd3bb7b17u, 0), /* lrzsz */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3c82e964u, 3u, 0u, 0x651bb285u, &g_termux_pkg_names[g_termux_pkg_name_offs[1147u]]), /* lsd */
#else
  RAF_PKG_INIT(0x3c82e964u, 3u, 0u, 0x651bb285u, 0), /* lsd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5bfab071u, 4u, 0u, 0x29a18332u, &g_termux_pkg_names[g_termux_pkg_name_offs[1148u]]), /* lsix */
#else
  RAF_PKG_INIT(0x5bfab071u, 4u, 0u, 0x29a18332u, 0), /* lsix */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x46099859u, 4u, 0u, 0x0ba5d126u, &g_termux_pkg_names[g_termux_pkg_name_offs[1149u]]), /* lsof */
#else
  RAF_PKG_INIT(0x46099859u, 4u, 0u, 0x0ba5d126u, 0), /* lsof */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xad5c1c00u, 6u, 0u, 0xabf2257fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1150u]]), /* ltrace */
#else
  RAF_PKG_INIT(0xad5c1c00u, 6u, 0u, 0xabf2257fu, 0), /* ltrace */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9da1b7beu, 19u, 0u, 0x9b42d233u, &g_termux_pkg_names[g_termux_pkg_name_offs[1151u]]), /* lua-language-server */
#else
  RAF_PKG_INIT(0x9da1b7beu, 19u, 0u, 0x9b42d233u, 0), /* lua-language-server */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfec33f0cu, 7u, 0u, 0x11084ba5u, &g_termux_pkg_names[g_termux_pkg_name_offs[1152u]]), /* lua-lgi */
#else
  RAF_PKG_INIT(0xfec33f0cu, 7u, 0u, 0x11084ba5u, 0), /* lua-lgi */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9e87c8c0u, 8u, 0u, 0x2a5c4fc3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1153u]]), /* lua-lpeg */
#else
  RAF_PKG_INIT(0x9e87c8c0u, 8u, 0u, 0x2a5c4fc3u, 0), /* lua-lpeg */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa09513f7u, 5u, 0u, 0x4bcee88eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1154u]]), /* lua51 */
#else
  RAF_PKG_INIT(0xa09513f7u, 5u, 0u, 0x4bcee88eu, 0), /* lua51 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa195158au, 5u, 0u, 0x4acee6fbu, &g_termux_pkg_names[g_termux_pkg_name_offs[1155u]]), /* lua52 */
#else
  RAF_PKG_INIT(0xa195158au, 5u, 0u, 0x4acee6fbu, 0), /* lua52 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa295171du, 5u, 0u, 0x49cee568u, &g_termux_pkg_names[g_termux_pkg_name_offs[1156u]]), /* lua53 */
#else
  RAF_PKG_INIT(0xa295171du, 5u, 0u, 0x49cee568u, 0), /* lua53 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9b950c18u, 5u, 0u, 0x50cef06du, &g_termux_pkg_names[g_termux_pkg_name_offs[1157u]]), /* lua54 */
#else
  RAF_PKG_INIT(0x9b950c18u, 5u, 0u, 0x50cef06du, 0), /* lua54 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9c950dabu, 5u, 0u, 0x4fceeedau, &g_termux_pkg_names[g_termux_pkg_name_offs[1158u]]), /* lua55 */
#else
  RAF_PKG_INIT(0x9c950dabu, 5u, 0u, 0x4fceeedau, 0), /* lua55 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4a1c2454u, 6u, 0u, 0x8d51715fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1159u]]), /* luajit */
#else
  RAF_PKG_INIT(0x4a1c2454u, 6u, 0u, 0x8d51715fu, 0), /* luajit */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x12ceacedu, 10u, 0u, 0x0a090066u, &g_termux_pkg_names[g_termux_pkg_name_offs[1160u]]), /* luajit-lgi */
#else
  RAF_PKG_INIT(0x12ceacedu, 10u, 0u, 0x0a090066u, 0), /* luajit-lgi */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8c690251u, 8u, 0u, 0x4c4e2c1au, &g_termux_pkg_names[g_termux_pkg_name_offs[1161u]]), /* luarocks */
#else
  RAF_PKG_INIT(0x8c690251u, 8u, 0u, 0x4c4e2c1au, 0), /* luarocks */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4e921044u, 3u, 0u, 0x732ad319u, &g_termux_pkg_names[g_termux_pkg_name_offs[1162u]]), /* luv */
#else
  RAF_PKG_INIT(0x4e921044u, 3u, 0u, 0x732ad319u, 0), /* luv */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdcef76d7u, 4u, 0u, 0xbc6ad950u, &g_termux_pkg_names[g_termux_pkg_name_offs[1163u]]), /* luvi */
#else
  RAF_PKG_INIT(0xdcef76d7u, 4u, 0u, 0xbc6ad950u, 0), /* luvi */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6ff7c299u, 5u, 0u, 0xc033d3acu, &g_termux_pkg_names[g_termux_pkg_name_offs[1164u]]), /* luvit */
#else
  RAF_PKG_INIT(0x6ff7c299u, 5u, 0u, 0xc033d3acu, 0), /* luvit */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x44920086u, 3u, 0u, 0x7d2ae2d7u, &g_termux_pkg_names[g_termux_pkg_name_offs[1165u]]), /* lux */
#else
  RAF_PKG_INIT(0x44920086u, 3u, 0u, 0x7d2ae2d7u, 0), /* lux */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x56f59a25u, 7u, 0u, 0x58412fd8u, &g_termux_pkg_names[g_termux_pkg_name_offs[1166u]]), /* lux-cli */
#else
  RAF_PKG_INIT(0x56f59a25u, 7u, 0u, 0x58412fd8u, 0), /* lux-cli */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x849026afu, 3u, 0u, 0x4523ceeau, &g_termux_pkg_names[g_termux_pkg_name_offs[1167u]]), /* lv2 */
#else
  RAF_PKG_INIT(0x849026afu, 3u, 0u, 0x4523ceeau, 0), /* lv2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x792ac2bfu, 6u, 0u, 0xf93eb908u, &g_termux_pkg_names[g_termux_pkg_name_offs[1168u]]), /* lychee */
#else
  RAF_PKG_INIT(0x792ac2bfu, 6u, 0u, 0xf93eb908u, 0), /* lychee */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc8a81a10u, 4u, 0u, 0x69f2acbfu, &g_termux_pkg_names[g_termux_pkg_name_offs[1169u]]), /* lynx */
#else
  RAF_PKG_INIT(0xc8a81a10u, 4u, 0u, 0x69f2acbfu, 0), /* lynx */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7ac9d168u, 8u, 0u, 0xb9f31557u, &g_termux_pkg_names[g_termux_pkg_name_offs[1170u]]), /* lyrebird */
#else
  RAF_PKG_INIT(0x7ac9d168u, 8u, 0u, 0xb9f31557u, 0), /* lyrebird */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6fce09cau, 4u, 0u, 0x15ce29d9u, &g_termux_pkg_names[g_termux_pkg_name_offs[1171u]]), /* lzip */
#else
  RAF_PKG_INIT(0x6fce09cau, 4u, 0u, 0x15ce29d9u, 0), /* lzip */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf28b76dau, 5u, 0u, 0x5c1942e7u, &g_termux_pkg_names[g_termux_pkg_name_offs[1172u]]), /* lzlib */
#else
  RAF_PKG_INIT(0xf28b76dau, 5u, 0u, 0x5c1942e7u, 0), /* lzlib */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5bd2677cu, 4u, 0u, 0x19dd3aafu, &g_termux_pkg_names[g_termux_pkg_name_offs[1173u]]), /* lzop */
#else
  RAF_PKG_INIT(0x5bd2677cu, 4u, 0u, 0x19dd3aafu, 0), /* lzop */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x972e74a4u, 2u, 0u, 0xa83e4973u, &g_termux_pkg_names[g_termux_pkg_name_offs[1174u]]), /* m4 */
#else
  RAF_PKG_INIT(0x972e74a4u, 2u, 0u, 0xa83e4973u, 0), /* m4 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x375a02ebu, 8u, 0u, 0x73ef1918u, &g_termux_pkg_names[g_termux_pkg_name_offs[1175u]]), /* macchina */
#else
  RAF_PKG_INIT(0x375a02ebu, 8u, 0u, 0x73ef1918u, 0), /* macchina */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc01dae8eu, 17u, 0u, 0x313fd1a3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1176u]]), /* magic-wormhole-rs */
#else
  RAF_PKG_INIT(0xc01dae8eu, 17u, 0u, 0x313fd1a3u, 0), /* magic-wormhole-rs */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe984a38du, 8u, 0u, 0x42f11696u, &g_termux_pkg_names[g_termux_pkg_name_offs[1177u]]), /* mailsync */
#else
  RAF_PKG_INIT(0xe984a38du, 8u, 0u, 0x42f11696u, 0), /* mailsync */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe9d55febu, 9u, 0u, 0x6eb50d52u, &g_termux_pkg_names[g_termux_pkg_name_offs[1178u]]), /* mailutils */
#else
  RAF_PKG_INIT(0xe9d55febu, 9u, 0u, 0x6eb50d52u, 0), /* mailutils */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe18c56afu, 4u, 0u, 0x18205890u, &g_termux_pkg_names[g_termux_pkg_name_offs[1179u]]), /* make */
#else
  RAF_PKG_INIT(0xe18c56afu, 4u, 0u, 0x18205890u, 0), /* make */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x517428d6u, 10u, 0u, 0xb30303edu, &g_termux_pkg_names[g_termux_pkg_name_offs[1180u]]), /* make-guile */
#else
  RAF_PKG_INIT(0x517428d6u, 10u, 0u, 0xb30303edu, 0), /* make-guile */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc5c8e8fbu, 6u, 0u, 0x23ade808u, &g_termux_pkg_names[g_termux_pkg_name_offs[1181u]]), /* mandoc */
#else
  RAF_PKG_INIT(0xc5c8e8fbu, 6u, 0u, 0x23ade808u, 0), /* mandoc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7f3313b5u, 6u, 0u, 0x93bdbadeu, &g_termux_pkg_names[g_termux_pkg_name_offs[1182u]]), /* mangal */
#else
  RAF_PKG_INIT(0x7f3313b5u, 6u, 0u, 0x93bdbadeu, 0), /* mangal */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x106ef2cdu, 5u, 0u, 0xb6edbae0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1183u]]), /* manim */
#else
  RAF_PKG_INIT(0x106ef2cdu, 5u, 0u, 0xb6edbae0u, 0), /* manim */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x67a72445u, 8u, 0u, 0x1b8eb6cau, &g_termux_pkg_names[g_termux_pkg_name_offs[1184u]]), /* manpages */
#else
  RAF_PKG_INIT(0x67a72445u, 8u, 0u, 0x1b8eb6cau, 0), /* manpages */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb4681eb6u, 9u, 0u, 0x4fa9a267u, &g_termux_pkg_names[g_termux_pkg_name_offs[1185u]]), /* mapserver */
#else
  RAF_PKG_INIT(0xb4681eb6u, 9u, 0u, 0x4fa9a267u, 0), /* mapserver */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0e0e65e3u, 7u, 0u, 0xf3ece052u, &g_termux_pkg_names[g_termux_pkg_name_offs[1186u]]), /* mariadb */
#else
  RAF_PKG_INIT(0x0e0e65e3u, 7u, 0u, 0xf3ece052u, 0), /* mariadb */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x823eb28au, 6u, 0u, 0x70d7480du, &g_termux_pkg_names[g_termux_pkg_name_offs[1187u]]), /* marisa */
#else
  RAF_PKG_INIT(0x823eb28au, 6u, 0u, 0x70d7480du, 0), /* marisa */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8335324au, 19u, 0u, 0xba31f8cbu, &g_termux_pkg_names[g_termux_pkg_name_offs[1188u]]), /* markdown-flashcards */
#else
  RAF_PKG_INIT(0x8335324au, 19u, 0u, 0xba31f8cbu, 0), /* markdown-flashcards */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2d0303fbu, 8u, 0u, 0xde539a24u, &g_termux_pkg_names[g_termux_pkg_name_offs[1189u]]), /* marksman */
#else
  RAF_PKG_INIT(0x2d0303fbu, 8u, 0u, 0xde539a24u, 0), /* marksman */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x52610476u, 10u, 0u, 0x6268e045u, &g_termux_pkg_names[g_termux_pkg_name_offs[1190u]]), /* mathomatic */
#else
  RAF_PKG_INIT(0x52610476u, 10u, 0u, 0x6268e045u, 0), /* mathomatic */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x826fd909u, 10u, 0u, 0xdffdba9eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1191u]]), /* matplotlib */
#else
  RAF_PKG_INIT(0x826fd909u, 10u, 0u, 0xdffdba9eu, 0), /* matplotlib */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3791e6bdu, 12u, 0u, 0xc82cc94au, &g_termux_pkg_names[g_termux_pkg_name_offs[1192u]]), /* matterbridge */
#else
  RAF_PKG_INIT(0x3791e6bdu, 12u, 0u, 0xc82cc94au, 0), /* matterbridge */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9fccdabcu, 10u, 0u, 0x55c50b23u, &g_termux_pkg_names[g_termux_pkg_name_offs[1193u]]), /* matterircd */
#else
  RAF_PKG_INIT(0x9fccdabcu, 10u, 0u, 0x55c50b23u, 0), /* matterircd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x997731c2u, 7u, 0u, 0x1aa637b3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1194u]]), /* matugen */
#else
  RAF_PKG_INIT(0x997731c2u, 7u, 0u, 0x1aa637b3u, 0), /* matugen */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbd57d7dau, 16u, 0u, 0x0b48f105u, &g_termux_pkg_names[g_termux_pkg_name_offs[1195u]]), /* mautrix-whatsapp */
#else
  RAF_PKG_INIT(0xbd57d7dau, 16u, 0u, 0x0b48f105u, 0), /* mautrix-whatsapp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa6e29488u, 5u, 0u, 0x5338c39du, &g_termux_pkg_names[g_termux_pkg_name_offs[1196u]]), /* maven */
#else
  RAF_PKG_INIT(0xa6e29488u, 5u, 0u, 0x5338c39du, 0), /* maven */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5975d578u, 6u, 0u, 0xcca1f21fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1197u]]), /* maxcso */
#else
  RAF_PKG_INIT(0x5975d578u, 6u, 0u, 0xcca1f21fu, 0), /* maxcso */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x15317192u, 6u, 0u, 0xa866baf5u, &g_termux_pkg_names[g_termux_pkg_name_offs[1198u]]), /* maxima */
#else
  RAF_PKG_INIT(0x15317192u, 6u, 0u, 0xa866baf5u, 0), /* maxima */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb32eb396u, 6u, 0u, 0x99ad8465u, &g_termux_pkg_names[g_termux_pkg_name_offs[1199u]]), /* mazter */
#else
  RAF_PKG_INIT(0xb32eb396u, 6u, 0u, 0x99ad8465u, 0), /* mazter */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4bbf88ecu, 7u, 0u, 0x9195245du, &g_termux_pkg_names[g_termux_pkg_name_offs[1200u]]), /* mbedtls */
#else
  RAF_PKG_INIT(0x4bbf88ecu, 7u, 0u, 0x9195245du, 0), /* mbedtls */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x662e2781u, 2u, 0u, 0xfd3ecf42u, &g_termux_pkg_names[g_termux_pkg_name_offs[1201u]]), /* mc */
#else
  RAF_PKG_INIT(0x662e2781u, 2u, 0u, 0xfd3ecf42u, 0), /* mc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x004ee056u, 5u, 0u, 0xdfc660bbu, &g_termux_pkg_names[g_termux_pkg_name_offs[1202u]]), /* mcfly */
#else
  RAF_PKG_INIT(0x004ee056u, 5u, 0u, 0xdfc660bbu, 0), /* mcfly */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8e536d79u, 6u, 0u, 0xf350819eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1203u]]), /* mdbook */
#else
  RAF_PKG_INIT(0x8e536d79u, 6u, 0u, 0xf350819eu, 0), /* mdbook */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xaf274921u, 23u, 0u, 0x375d5378u, &g_termux_pkg_names[g_termux_pkg_name_offs[1204u]]), /* mdbook-auto-gen-summary */
#else
  RAF_PKG_INIT(0xaf274921u, 23u, 0u, 0x375d5378u, 0), /* mdbook-auto-gen-summary */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x63ddd090u, 15u, 0u, 0x3dc682e1u, &g_termux_pkg_names[g_termux_pkg_name_offs[1205u]]), /* mdbook-cat-prep */
#else
  RAF_PKG_INIT(0x63ddd090u, 15u, 0u, 0x3dc682e1u, 0), /* mdbook-cat-prep */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x46b7716au, 11u, 0u, 0x002447cbu, &g_termux_pkg_names[g_termux_pkg_name_offs[1206u]]), /* mdbook-epub */
#else
  RAF_PKG_INIT(0x46b7716au, 11u, 0u, 0x002447cbu, 0), /* mdbook-epub */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcdcdaf81u, 15u, 0u, 0xaf32a110u, &g_termux_pkg_names[g_termux_pkg_name_offs[1207u]]), /* mdbook-graphviz */
#else
  RAF_PKG_INIT(0xcdcdaf81u, 15u, 0u, 0xaf32a110u, 0), /* mdbook-graphviz */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x73d70fadu, 12u, 0u, 0x12c584deu, &g_termux_pkg_names[g_termux_pkg_name_offs[1208u]]), /* mdbook-katex */
#else
  RAF_PKG_INIT(0x73d70fadu, 12u, 0u, 0x12c584deu, 0), /* mdbook-katex */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x85d6f984u, 16u, 0u, 0x17f4e28fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1209u]]), /* mdbook-linkcheck */
#else
  RAF_PKG_INIT(0x85d6f984u, 16u, 0u, 0x17f4e28fu, 0), /* mdbook-linkcheck */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x553dad6fu, 14u, 0u, 0x59c6a41cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1210u]]), /* mdbook-mermaid */
#else
  RAF_PKG_INIT(0x553dad6fu, 14u, 0u, 0x59c6a41cu, 0), /* mdbook-mermaid */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8c3d1546u, 17u, 0u, 0x22499333u, &g_termux_pkg_names[g_termux_pkg_name_offs[1211u]]), /* mdbook-open-on-gh */
#else
  RAF_PKG_INIT(0x8c3d1546u, 17u, 0u, 0x22499333u, 0), /* mdbook-open-on-gh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcf68cb6fu, 13u, 0u, 0x29217b5au, &g_termux_pkg_names[g_termux_pkg_name_offs[1212u]]), /* mdbook-pikchr */
#else
  RAF_PKG_INIT(0xcf68cb6fu, 13u, 0u, 0x29217b5au, 0), /* mdbook-pikchr */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe998ea7du, 15u, 0u, 0x7f914b00u, &g_termux_pkg_names[g_termux_pkg_name_offs[1213u]]), /* mdbook-plantuml */
#else
  RAF_PKG_INIT(0xe998ea7du, 15u, 0u, 0x7f914b00u, 0), /* mdbook-plantuml */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x02e20230u, 32u, 0u, 0x239c2a93u, &g_termux_pkg_names[g_termux_pkg_name_offs[1214u]]), /* mdbook-presentation-preprocessor */
#else
  RAF_PKG_INIT(0x02e20230u, 32u, 0u, 0x239c2a93u, 0), /* mdbook-presentation-preprocessor */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf0d7888du, 13u, 0u, 0xa378d54cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1215u]]), /* mdbook-svgbob */
#else
  RAF_PKG_INIT(0xf0d7888du, 13u, 0u, 0xa378d54cu, 0), /* mdbook-svgbob */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe24c44adu, 14u, 0u, 0xd538155au, &g_termux_pkg_names[g_termux_pkg_name_offs[1216u]]), /* mdbook-svgbob2 */
#else
  RAF_PKG_INIT(0xe24c44adu, 14u, 0u, 0xd538155au, 0), /* mdbook-svgbob2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6a7968cau, 11u, 0u, 0x06d26b07u, &g_termux_pkg_names[g_termux_pkg_name_offs[1217u]]), /* mdbook-tera */
#else
  RAF_PKG_INIT(0x6a7968cau, 11u, 0u, 0x06d26b07u, 0), /* mdbook-tera */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x73612742u, 10u, 0u, 0xca27db41u, &g_termux_pkg_names[g_termux_pkg_name_offs[1218u]]), /* mdbook-toc */
#else
  RAF_PKG_INIT(0x73612742u, 10u, 0u, 0xca27db41u, 0), /* mdbook-toc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf42e36adu, 8u, 0u, 0xac429a8au, &g_termux_pkg_names[g_termux_pkg_name_offs[1219u]]), /* mdbtools */
#else
  RAF_PKG_INIT(0xf42e36adu, 8u, 0u, 0xac429a8au, 0), /* mdbtools */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x178e1819u, 4u, 0u, 0xc5a7a9c2u, &g_termux_pkg_names[g_termux_pkg_name_offs[1220u]]), /* mdds */
#else
  RAF_PKG_INIT(0x178e1819u, 4u, 0u, 0xc5a7a9c2u, 0), /* mdds */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3683094bu, 9u, 0u, 0xcc890af2u, &g_termux_pkg_names[g_termux_pkg_name_offs[1221u]]), /* mdns-scan */
#else
  RAF_PKG_INIT(0x3683094bu, 9u, 0u, 0xcc890af2u, 0), /* mdns-scan */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd1ab286cu, 3u, 0u, 0xddd362e9u, &g_termux_pkg_names[g_termux_pkg_name_offs[1222u]]), /* mdp */
#else
  RAF_PKG_INIT(0xd1ab286cu, 3u, 0u, 0xddd362e9u, 0), /* mdp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf68b903bu, 11u, 0u, 0xdc28debau, &g_termux_pkg_names[g_termux_pkg_name_offs[1223u]]), /* media-types */
#else
  RAF_PKG_INIT(0xf68b903bu, 11u, 0u, 0xdc28debau, 0), /* media-types */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2c045957u, 9u, 0u, 0xce893192u, &g_termux_pkg_names[g_termux_pkg_name_offs[1224u]]), /* mediainfo */
#else
  RAF_PKG_INIT(0x2c045957u, 9u, 0u, 0xce893192u, 0), /* mediainfo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xeced7fa6u, 8u, 0u, 0x97900d21u, &g_termux_pkg_names[g_termux_pkg_name_offs[1225u]]), /* mediamtx */
#else
  RAF_PKG_INIT(0xeced7fa6u, 8u, 0u, 0x97900d21u, 0), /* mediamtx */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xce21be39u, 7u, 0u, 0x0a9c976cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1226u]]), /* megacmd */
#else
  RAF_PKG_INIT(0xce21be39u, 7u, 0u, 0x0a9c976cu, 0), /* megacmd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7db9ba6au, 9u, 0u, 0xe83b7ecfu, &g_termux_pkg_names[g_termux_pkg_name_offs[1227u]]), /* megatools */
#else
  RAF_PKG_INIT(0x7db9ba6au, 9u, 0u, 0xe83b7ecfu, 0), /* megatools */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfb92ab48u, 9u, 0u, 0x1ab983adu, &g_termux_pkg_names[g_termux_pkg_name_offs[1228u]]), /* memcached */
#else
  RAF_PKG_INIT(0xfb92ab48u, 9u, 0u, 0x1ab983adu, 0), /* memcached */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x02457f8eu, 7u, 0u, 0x446cf9e7u, &g_termux_pkg_names[g_termux_pkg_name_offs[1229u]]), /* mercury */
#else
  RAF_PKG_INIT(0x02457f8eu, 7u, 0u, 0x446cf9e7u, 0), /* mercury */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xaa00cce7u, 4u, 0u, 0x6f355368u, &g_termux_pkg_names[g_termux_pkg_name_offs[1230u]]), /* mesa */
#else
  RAF_PKG_INIT(0xaa00cce7u, 4u, 0u, 0x6f355368u, 0), /* mesa */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe94d0d53u, 5u, 0u, 0xc904ee2eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1231u]]), /* mfcuk */
#else
  RAF_PKG_INIT(0xe94d0d53u, 5u, 0u, 0xc904ee2eu, 0), /* mfcuk */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6a2e2dcdu, 2u, 0u, 0xf93ec8f6u, &g_termux_pkg_names[g_termux_pkg_name_offs[1232u]]), /* mg */
#else
  RAF_PKG_INIT(0x6a2e2dcdu, 2u, 0u, 0xf93ec8f6u, 0), /* mg */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8404523bu, 5u, 0u, 0xd821e1deu, &g_termux_pkg_names[g_termux_pkg_name_offs[1233u]]), /* micro */
#else
  RAF_PKG_INIT(0x8404523bu, 5u, 0u, 0xd821e1deu, 0), /* micro */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x558d2a68u, 10u, 0u, 0x7774a5c7u, &g_termux_pkg_names[g_termux_pkg_name_offs[1234u]]), /* microsocks */
#else
  RAF_PKG_INIT(0x558d2a68u, 10u, 0u, 0x7774a5c7u, 0), /* microsocks */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2f5bd360u, 6u, 0u, 0x899cef1bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1235u]]), /* miller */
#else
  RAF_PKG_INIT(0x2f5bd360u, 6u, 0u, 0x899cef1bu, 0), /* miller */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7b8d157fu, 7u, 0u, 0xba08e2aeu, &g_termux_pkg_names[g_termux_pkg_name_offs[1236u]]), /* mimetic */
#else
  RAF_PKG_INIT(0x7b8d157fu, 7u, 0u, 0xba08e2aeu, 0), /* mimetic */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdcb4edd5u, 11u, 0u, 0xe891e074u, &g_termux_pkg_names[g_termux_pkg_name_offs[1237u]]), /* minesweeper */
#else
  RAF_PKG_INIT(0xdcb4edd5u, 11u, 0u, 0xe891e074u, 0), /* minesweeper */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8cd27b43u, 7u, 0u, 0x7468a7deu, &g_termux_pkg_names[g_termux_pkg_name_offs[1238u]]), /* minicom */
#else
  RAF_PKG_INIT(0x8cd27b43u, 7u, 0u, 0x7468a7deu, 0), /* minicom */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfaa6a47fu, 8u, 0u, 0x82c01168u, &g_termux_pkg_names[g_termux_pkg_name_offs[1239u]]), /* minidlna */
#else
  RAF_PKG_INIT(0xfaa6a47fu, 8u, 0u, 0x82c01168u, 0), /* minidlna */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x444b30adu, 8u, 0u, 0xc9862162u, &g_termux_pkg_names[g_termux_pkg_name_offs[1240u]]), /* miniflux */
#else
  RAF_PKG_INIT(0x444b30adu, 8u, 0u, 0xc9862162u, 0), /* miniflux */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa54f1ba4u, 9u, 0u, 0x50cec4edu, &g_termux_pkg_names[g_termux_pkg_name_offs[1241u]]), /* minimodem */
#else
  RAF_PKG_INIT(0xa54f1ba4u, 9u, 0u, 0x50cec4edu, 0), /* minimodem */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0c3f81afu, 5u, 0u, 0x2023bf9eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1242u]]), /* minio */
#else
  RAF_PKG_INIT(0x0c3f81afu, 5u, 0u, 0x2023bf9eu, 0), /* minio */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc95d946du, 9u, 0u, 0xadf09354u, &g_termux_pkg_names[g_termux_pkg_name_offs[1243u]]), /* miniserve */
#else
  RAF_PKG_INIT(0xc95d946du, 9u, 0u, 0xadf09354u, 0), /* miniserve */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbb5e74e7u, 8u, 0u, 0x0b39daa4u, &g_termux_pkg_names[g_termux_pkg_name_offs[1244u]]), /* minisign */
#else
  RAF_PKG_INIT(0xbb5e74e7u, 8u, 0u, 0x0b39daa4u, 0), /* minisign */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa2776b56u, 9u, 0u, 0xbfbb5c57u, &g_termux_pkg_names[g_termux_pkg_name_offs[1245u]]), /* miniupnpc */
#else
  RAF_PKG_INIT(0xa2776b56u, 9u, 0u, 0xbfbb5c57u, 0), /* miniupnpc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1ad6e8f4u, 8u, 0u, 0xb398d0bfu, &g_termux_pkg_names[g_termux_pkg_name_offs[1246u]]), /* minizinc */
#else
  RAF_PKG_INIT(0x1ad6e8f4u, 8u, 0u, 0xb398d0bfu, 0), /* minizinc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa1189f38u, 9u, 0u, 0xbc66361du, &g_termux_pkg_names[g_termux_pkg_name_offs[1247u]]), /* mkbootimg */
#else
  RAF_PKG_INIT(0xa1189f38u, 9u, 0u, 0xbc66361du, 0), /* mkbootimg */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb2c00e36u, 7u, 0u, 0x84aeac57u, &g_termux_pkg_names[g_termux_pkg_name_offs[1248u]]), /* mkp224o */
#else
  RAF_PKG_INIT(0xb2c00e36u, 7u, 0u, 0x84aeac57u, 0), /* mkp224o */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x42c9a972u, 4u, 0u, 0x40c92cd9u, &g_termux_pkg_names[g_termux_pkg_name_offs[1249u]]), /* mksh */
#else
  RAF_PKG_INIT(0x42c9a972u, 4u, 0u, 0x40c92cd9u, 0), /* mksh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa79d8069u, 9u, 0u, 0x43a0325cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1250u]]), /* mktorrent */
#else
  RAF_PKG_INIT(0xa79d8069u, 9u, 0u, 0x43a0325cu, 0), /* mktorrent */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd3aa6ebau, 7u, 0u, 0x4b143eafu, &g_termux_pkg_names[g_termux_pkg_name_offs[1251u]]), /* mlocate */
#else
  RAF_PKG_INIT(0xd3aa6ebau, 7u, 0u, 0x4b143eafu, 0), /* mlocate */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1d82b4edu, 4u, 0u, 0x88773506u, &g_termux_pkg_names[g_termux_pkg_name_offs[1252u]]), /* mold */
#else
  RAF_PKG_INIT(0x1d82b4edu, 4u, 0u, 0x88773506u, 0), /* mold */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf242960fu, 6u, 0u, 0x5b682268u, &g_termux_pkg_names[g_termux_pkg_name_offs[1253u]]), /* monero */
#else
  RAF_PKG_INIT(0xf242960fu, 6u, 0u, 0x5b682268u, 0), /* monero */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2e5cbc92u, 7u, 0u, 0x1d4cf797u, &g_termux_pkg_names[g_termux_pkg_name_offs[1254u]]), /* monetdb */
#else
  RAF_PKG_INIT(0x2e5cbc92u, 7u, 0u, 0x1d4cf797u, 0), /* monetdb */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf286ee6au, 4u, 0u, 0x8f72c2ddu, &g_termux_pkg_names[g_termux_pkg_name_offs[1255u]]), /* mono */
#else
  RAF_PKG_INIT(0xf286ee6au, 4u, 0u, 0x8f72c2ddu, 0), /* mono */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0949f745u, 8u, 0u, 0xfefa7b62u, &g_termux_pkg_names[g_termux_pkg_name_offs[1256u]]), /* monolith */
#else
  RAF_PKG_INIT(0x0949f745u, 8u, 0u, 0xfefa7b62u, 0), /* monolith */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcdcdd0a7u, 10u, 0u, 0x004c9ba8u, &g_termux_pkg_names[g_termux_pkg_name_offs[1257u]]), /* moon-buggy */
#else
  RAF_PKG_INIT(0xcdcdd0a7u, 10u, 0u, 0x004c9ba8u, 0), /* moon-buggy */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0d84da54u, 4u, 0u, 0x94750953u, &g_termux_pkg_names[g_termux_pkg_name_offs[1258u]]), /* moor */
#else
  RAF_PKG_INIT(0x0d84da54u, 4u, 0u, 0x94750953u, 0), /* moor */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd39e5f9fu, 3u, 0u, 0xf3eadedau, &g_termux_pkg_names[g_termux_pkg_name_offs[1259u]]), /* mop */
#else
  RAF_PKG_INIT(0xd39e5f9fu, 3u, 0u, 0xf3eadedau, 0), /* mop */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x06cab57du, 9u, 0u, 0x1bcd633cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1260u]]), /* moreutils */
#else
  RAF_PKG_INIT(0x06cab57du, 9u, 0u, 0x1bcd633cu, 0), /* moreutils */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x47543fbfu, 5u, 0u, 0x4ad4e6f2u, &g_termux_pkg_names[g_termux_pkg_name_offs[1261u]]), /* moria */
#else
  RAF_PKG_INIT(0x47543fbfu, 5u, 0u, 0x4ad4e6f2u, 0), /* moria */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1f742320u, 11u, 0u, 0xe017b1b5u, &g_termux_pkg_names[g_termux_pkg_name_offs[1262u]]), /* morse2ascii */
#else
  RAF_PKG_INIT(0x1f742320u, 11u, 0u, 0xe017b1b5u, 0), /* morse2ascii */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0f5340aeu, 4u, 0u, 0x96ba30fdu, &g_termux_pkg_names[g_termux_pkg_name_offs[1263u]]), /* mosh */
#else
  RAF_PKG_INIT(0x0f5340aeu, 4u, 0u, 0x96ba30fdu, 0), /* mosh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfb532132u, 4u, 0u, 0x9aba3749u, &g_termux_pkg_names[g_termux_pkg_name_offs[1264u]]), /* most */
#else
  RAF_PKG_INIT(0xfb532132u, 4u, 0u, 0x9aba3749u, 0), /* most */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4280e5f3u, 6u, 0u, 0xbad1ae08u, &g_termux_pkg_names[g_termux_pkg_name_offs[1265u]]), /* mp3cat */
#else
  RAF_PKG_INIT(0x4280e5f3u, 6u, 0u, 0xbad1ae08u, 0), /* mp3cat */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x380b4dd8u, 9u, 0u, 0xd8ae6da5u, &g_termux_pkg_names[g_termux_pkg_name_offs[1266u]]), /* mp3cat-go */
#else
  RAF_PKG_INIT(0x380b4dd8u, 9u, 0u, 0xd8ae6da5u, 0), /* mp3cat-go */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x884ddd3au, 7u, 0u, 0x7ce8f027u, &g_termux_pkg_names[g_termux_pkg_name_offs[1267u]]), /* mp3gain */
#else
  RAF_PKG_INIT(0x884ddd3au, 7u, 0u, 0x7ce8f027u, 0), /* mp3gain */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5891ea1au, 7u, 0u, 0x9ccd6c87u, &g_termux_pkg_names[g_termux_pkg_name_offs[1268u]]), /* mp3splt */
#else
  RAF_PKG_INIT(0x5891ea1au, 7u, 0u, 0x9ccd6c87u, 0), /* mp3splt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2b3e41b9u, 7u, 0u, 0x8834bd30u, &g_termux_pkg_names[g_termux_pkg_name_offs[1269u]]), /* mp3wrap */
#else
  RAF_PKG_INIT(0x2b3e41b9u, 7u, 0u, 0x8834bd30u, 0), /* mp3wrap */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xec79b621u, 3u, 0u, 0x02b58814u, &g_termux_pkg_names[g_termux_pkg_name_offs[1270u]]), /* mpc */
#else
  RAF_PKG_INIT(0xec79b621u, 3u, 0u, 0x02b58814u, 0), /* mpc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xed79b7b4u, 3u, 0u, 0x01b58681u, &g_termux_pkg_names[g_termux_pkg_name_offs[1271u]]), /* mpd */
#else
  RAF_PKG_INIT(0xed79b7b4u, 3u, 0u, 0x01b58681u, 0), /* mpd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x67745fe0u, 11u, 0u, 0x0c9ef499u, &g_termux_pkg_names[g_termux_pkg_name_offs[1272u]]), /* mpdscribble */
#else
  RAF_PKG_INIT(0x67745fe0u, 11u, 0u, 0x0c9ef499u, 0), /* mpdscribble */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x32a1a94du, 7u, 0u, 0x7174e5b0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1273u]]), /* mplayer */
#else
  RAF_PKG_INIT(0x32a1a94du, 7u, 0u, 0x7174e5b0u, 0), /* mplayer */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdf79a1aau, 3u, 0u, 0xefb56a2bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1274u]]), /* mpv */
#else
  RAF_PKG_INIT(0xdf79a1aau, 3u, 0u, 0xefb56a2bu, 0), /* mpv */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc3c52ed0u, 5u, 0u, 0x0fdd19fdu, &g_termux_pkg_names[g_termux_pkg_name_offs[1275u]]), /* mruby */
#else
  RAF_PKG_INIT(0xc3c52ed0u, 5u, 0u, 0x0fdd19fdu, 0), /* mruby */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4458bde6u, 6u, 0u, 0x2fe15181u, &g_termux_pkg_names[g_termux_pkg_name_offs[1276u]]), /* ms-gsl */
#else
  RAF_PKG_INIT(0x4458bde6u, 6u, 0u, 0x2fe15181u, 0), /* ms-gsl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x714a35e5u, 6u, 0u, 0x3a741fbeu, &g_termux_pkg_names[g_termux_pkg_name_offs[1277u]]), /* msedit */
#else
  RAF_PKG_INIT(0x714a35e5u, 6u, 0u, 0x3a741fbeu, 0), /* msedit */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x33dca033u, 8u, 0u, 0xcf931730u, &g_termux_pkg_names[g_termux_pkg_name_offs[1278u]]), /* msitools */
#else
  RAF_PKG_INIT(0x33dca033u, 8u, 0u, 0xcf931730u, 0), /* msitools */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfc3b5850u, 5u, 0u, 0x6a43ce31u, &g_termux_pkg_names[g_termux_pkg_name_offs[1279u]]), /* msmtp */
#else
  RAF_PKG_INIT(0xfc3b5850u, 5u, 0u, 0x6a43ce31u, 0), /* msmtp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5e8bdb80u, 9u, 0u, 0x637da035u, &g_termux_pkg_names[g_termux_pkg_name_offs[1280u]]), /* mtd-utils */
#else
  RAF_PKG_INIT(0x5e8bdb80u, 9u, 0u, 0x637da035u, 0), /* mtd-utils */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x288ad1a3u, 6u, 0u, 0x8089d64cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1281u]]), /* mtools */
#else
  RAF_PKG_INIT(0x288ad1a3u, 6u, 0u, 0x8089d64cu, 0), /* mtools */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x582e1177u, 2u, 0u, 0xe73eaca0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1282u]]), /* mu */
#else
  RAF_PKG_INIT(0x582e1177u, 2u, 0u, 0xe73eaca0u, 0), /* mu */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9016221fu, 8u, 0u, 0x64fdb054u, &g_termux_pkg_names[g_termux_pkg_name_offs[1283u]]), /* muchsync */
#else
  RAF_PKG_INIT(0x9016221fu, 8u, 0u, 0x64fdb054u, 0), /* muchsync */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbc471dbcu, 4u, 0u, 0x9ba070f7u, &g_termux_pkg_names[g_termux_pkg_name_offs[1284u]]), /* mujs */
#else
  RAF_PKG_INIT(0xbc471dbcu, 4u, 0u, 0x9ba070f7u, 0), /* mujs */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x92ae32c4u, 9u, 0u, 0x4a353a31u, &g_termux_pkg_names[g_termux_pkg_name_offs[1285u]]), /* multitail */
#else
  RAF_PKG_INIT(0x92ae32c4u, 9u, 0u, 0x4a353a31u, 0), /* multitail */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd495154fu, 5u, 0u, 0x2a2d78eeu, &g_termux_pkg_names[g_termux_pkg_name_offs[1286u]]), /* mupdf */
#else
  RAF_PKG_INIT(0xd495154fu, 5u, 0u, 0x2a2d78eeu, 0), /* mupdf */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xda8ca851u, 20u, 0u, 0x0905807au, &g_termux_pkg_names[g_termux_pkg_name_offs[1287u]]), /* music-file-organizer */
#else
  RAF_PKG_INIT(0xda8ca851u, 20u, 0u, 0x0905807au, 0), /* music-file-organizer */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc70687b7u, 4u, 0u, 0x94b9fdd8u, &g_termux_pkg_names[g_termux_pkg_name_offs[1288u]]), /* mutt */
#else
  RAF_PKG_INIT(0xc70687b7u, 4u, 0u, 0x94b9fdd8u, 0), /* mutt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2aabfa9du, 5u, 0u, 0x6896ddd0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1289u]]), /* myman */
#else
  RAF_PKG_INIT(0x2aabfa9du, 5u, 0u, 0x6896ddd0u, 0), /* myman */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5282eb8eu, 5u, 0u, 0x40bfecdfu, &g_termux_pkg_names[g_termux_pkg_name_offs[1290u]]), /* mympd */
#else
  RAF_PKG_INIT(0x5282eb8eu, 5u, 0u, 0x40bfecdfu, 0), /* mympd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3cb617f8u, 15u, 0u, 0xcb9d0a01u, &g_termux_pkg_names[g_termux_pkg_name_offs[1291u]]), /* mypaint-brushes */
#else
  RAF_PKG_INIT(0x3cb617f8u, 15u, 0u, 0xcb9d0a01u, 0), /* mypaint-brushes */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa02d5ad8u, 7u, 0u, 0x4a89cfa9u, &g_termux_pkg_names[g_termux_pkg_name_offs[1292u]]), /* myrepos */
#else
  RAF_PKG_INIT(0xa02d5ad8u, 7u, 0u, 0x4a89cfa9u, 0), /* myrepos */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x070213f9u, 11u, 0u, 0x5912c9f0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1293u]]), /* n-t-roff-sc */
#else
  RAF_PKG_INIT(0x070213f9u, 11u, 0u, 0x5912c9f0u, 0), /* n-t-roff-sc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x30d0f275u, 3u, 0u, 0x8e688d8cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1294u]]), /* n2n */
#else
  RAF_PKG_INIT(0x30d0f275u, 3u, 0u, 0x8e688d8cu, 0), /* n2n */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xad37b1afu, 4u, 0u, 0x4c254bb0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1295u]]), /* nala */
#else
  RAF_PKG_INIT(0xad37b1afu, 4u, 0u, 0x4c254bb0u, 0), /* nala */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb537be47u, 4u, 0u, 0x54255848u, &g_termux_pkg_names[g_termux_pkg_name_offs[1296u]]), /* nali */
#else
  RAF_PKG_INIT(0xb537be47u, 4u, 0u, 0x54255848u, 0), /* nali */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb33c384fu, 4u, 0u, 0x3a20b22cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1297u]]), /* nano */
#else
  RAF_PKG_INIT(0xb33c384fu, 4u, 0u, 0x3a20b22cu, 0), /* nano */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb0f94f3cu, 4u, 0u, 0x583cb7e3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1298u]]), /* nasm */
#else
  RAF_PKG_INIT(0xb0f94f3cu, 4u, 0u, 0x583cb7e3u, 0), /* nasm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x57195f16u, 7u, 0u, 0x5ac5c42fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1299u]]), /* natpmpc */
#else
  RAF_PKG_INIT(0x57195f16u, 7u, 0u, 0x5ac5c42fu, 0), /* natpmpc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb1000b01u, 4u, 0u, 0x383436beu, &g_termux_pkg_names[g_termux_pkg_name_offs[1300u]]), /* navi */
#else
  RAF_PKG_INIT(0xb1000b01u, 4u, 0u, 0x383436beu, 0), /* navi */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc06d80aeu, 9u, 0u, 0xf0cad013u, &g_termux_pkg_names[g_termux_pkg_name_offs[1301u]]), /* navidrome */
#else
  RAF_PKG_INIT(0xc06d80aeu, 9u, 0u, 0xf0cad013u, 0), /* navidrome */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8ab80f0fu, 4u, 0u, 0x17404198u, &g_termux_pkg_names[g_termux_pkg_name_offs[1302u]]), /* ncdc */
#else
  RAF_PKG_INIT(0x8ab80f0fu, 4u, 0u, 0x17404198u, 0), /* ncdc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x78b7f2b9u, 4u, 0u, 0x2d40643au, &g_termux_pkg_names[g_termux_pkg_name_offs[1303u]]), /* ncdu */
#else
  RAF_PKG_INIT(0x78b7f2b9u, 4u, 0u, 0x2d40643au, 0), /* ncdu */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9492d0d1u, 5u, 0u, 0x445d7898u, &g_termux_pkg_names[g_termux_pkg_name_offs[1304u]]), /* ncdu2 */
#else
  RAF_PKG_INIT(0x9492d0d1u, 5u, 0u, 0x445d7898u, 0), /* ncdu2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xff75f154u, 5u, 0u, 0x6bb9799du, &g_termux_pkg_names[g_termux_pkg_name_offs[1305u]]), /* ncftp */
#else
  RAF_PKG_INIT(0xff75f154u, 5u, 0u, 0x6bb9799du, 0), /* ncftp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xef248a80u, 7u, 0u, 0x83039fd1u, &g_termux_pkg_names[g_termux_pkg_name_offs[1306u]]), /* ncmpcpp */
#else
  RAF_PKG_INIT(0xef248a80u, 7u, 0u, 0x83039fd1u, 0), /* ncmpcpp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9b38dba1u, 9u, 0u, 0x5da14570u, &g_termux_pkg_names[g_termux_pkg_name_offs[1307u]]), /* ncompress */
#else
  RAF_PKG_INIT(0x9b38dba1u, 9u, 0u, 0x5da14570u, 0), /* ncompress */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf4878276u, 9u, 0u, 0xa2a450cbu, &g_termux_pkg_names[g_termux_pkg_name_offs[1308u]]), /* ncpamixer */
#else
  RAF_PKG_INIT(0xf4878276u, 9u, 0u, 0xa2a450cbu, 0), /* ncpamixer */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5dd78c26u, 6u, 0u, 0xe3e73555u, &g_termux_pkg_names[g_termux_pkg_name_offs[1309u]]), /* ncspot */
#else
  RAF_PKG_INIT(0x5dd78c26u, 6u, 0u, 0xe3e73555u, 0), /* ncspot */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe04dee7eu, 7u, 0u, 0x8b8ae82fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1310u]]), /* ncurses */
#else
  RAF_PKG_INIT(0xe04dee7eu, 7u, 0u, 0x8b8ae82fu, 0), /* ncurses */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x49310e83u, 12u, 0u, 0x4bd24b60u, &g_termux_pkg_names[g_termux_pkg_name_offs[1311u]]), /* ndk-multilib */
#else
  RAF_PKG_INIT(0x49310e83u, 12u, 0u, 0x4bd24b60u, 0), /* ndk-multilib */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xec697110u, 11u, 0u, 0xb1c3694du, &g_termux_pkg_names[g_termux_pkg_name_offs[1312u]]), /* ndk-sysroot */
#else
  RAF_PKG_INIT(0xec697110u, 11u, 0u, 0xb1c3694du, 0), /* ndk-sysroot */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5836603cu, 2u, 0u, 0x0736903bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1313u]]), /* ne */
#else
  RAF_PKG_INIT(0x5836603cu, 2u, 0u, 0x0736903bu, 0), /* ne */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc11cc99au, 5u, 0u, 0x05f1c533u, &g_termux_pkg_names[g_termux_pkg_name_offs[1314u]]), /* nelua */
#else
  RAF_PKG_INIT(0xc11cc99au, 5u, 0u, 0x05f1c533u, 0), /* nelua */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xae60a2b3u, 11u, 0u, 0x44c8cd32u, &g_termux_pkg_names[g_termux_pkg_name_offs[1315u]]), /* neocmakelsp */
#else
  RAF_PKG_INIT(0xae60a2b3u, 11u, 0u, 0x44c8cd32u, 0), /* neocmakelsp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xba678047u, 8u, 0u, 0xfa931d34u, &g_termux_pkg_names[g_termux_pkg_name_offs[1316u]]), /* neofetch */
#else
  RAF_PKG_INIT(0xba678047u, 8u, 0u, 0xfa931d34u, 0), /* neofetch */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4e21354bu, 7u, 0u, 0x4089ecc2u, &g_termux_pkg_names[g_termux_pkg_name_offs[1317u]]), /* neomutt */
#else
  RAF_PKG_INIT(0x4e21354bu, 7u, 0u, 0x4089ecc2u, 0), /* neomutt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x80159593u, 6u, 0u, 0x3f330688u, &g_termux_pkg_names[g_termux_pkg_name_offs[1318u]]), /* neovim */
#else
  RAF_PKG_INIT(0x80159593u, 6u, 0u, 0x3f330688u, 0), /* neovim */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdb51cb7bu, 14u, 0u, 0x02181c78u, &g_termux_pkg_names[g_termux_pkg_name_offs[1319u]]), /* neovim-nightly */
#else
  RAF_PKG_INIT(0xdb51cb7bu, 14u, 0u, 0x02181c78u, 0), /* neovim-nightly */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3c9e049du, 7u, 0u, 0x91629fe0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1320u]]), /* nerdfix */
#else
  RAF_PKG_INIT(0x3c9e049du, 7u, 0u, 0x91629fe0u, 0), /* nerdfix */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbe930dcbu, 8u, 0u, 0x789b1688u, &g_termux_pkg_names[g_termux_pkg_name_offs[1321u]]), /* net-snmp */
#else
  RAF_PKG_INIT(0xbe930dcbu, 8u, 0u, 0x789b1688u, 0), /* net-snmp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfe9526ceu, 9u, 0u, 0x9267373bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1322u]]), /* net-tools */
#else
  RAF_PKG_INIT(0xfe9526ceu, 9u, 0u, 0x9267373bu, 0), /* net-tools */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x47d71238u, 14u, 0u, 0x395375cbu, &g_termux_pkg_names[g_termux_pkg_name_offs[1323u]]), /* netcat-openbsd */
#else
  RAF_PKG_INIT(0x47d71238u, 14u, 0u, 0x395375cbu, 0), /* netcat-openbsd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x953d3553u, 8u, 0u, 0x16452e68u, &g_termux_pkg_names[g_termux_pkg_name_offs[1324u]]), /* netcdf-c */
#else
  RAF_PKG_INIT(0x953d3553u, 8u, 0u, 0x16452e68u, 0), /* netcdf-c */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcba2b571u, 7u, 0u, 0xf1b63460u, &g_termux_pkg_names[g_termux_pkg_name_offs[1325u]]), /* nethack */
#else
  RAF_PKG_INIT(0xcba2b571u, 7u, 0u, 0xf1b63460u, 0), /* nethack */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1e82e3b9u, 6u, 0u, 0x21207aa6u, &g_termux_pkg_names[g_termux_pkg_name_offs[1326u]]), /* netpbm */
#else
  RAF_PKG_INIT(0x1e82e3b9u, 6u, 0u, 0x21207aa6u, 0), /* netpbm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x89778108u, 6u, 0u, 0xb27b28fbu, &g_termux_pkg_names[g_termux_pkg_name_offs[1327u]]), /* netsed */
#else
  RAF_PKG_INIT(0x89778108u, 6u, 0u, 0xb27b28fbu, 0), /* netsed */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7abaf86du, 30u, 0u, 0xe16bd052u, &g_termux_pkg_names[g_termux_pkg_name_offs[1328u]]), /* netstandard-targeting-pack-2.1 */
#else
  RAF_PKG_INIT(0x7abaf86du, 30u, 0u, 0xe16bd052u, 0), /* netstandard-targeting-pack-2.1 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf98a0174u, 8u, 0u, 0xcf45310bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1329u]]), /* newsboat */
#else
  RAF_PKG_INIT(0xf98a0174u, 8u, 0u, 0xcf45310bu, 0), /* newsboat */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9b73bdc5u, 8u, 0u, 0xd9819ffeu, &g_termux_pkg_names[g_termux_pkg_name_offs[1330u]]), /* newsraft */
#else
  RAF_PKG_INIT(0x9b73bdc5u, 8u, 0u, 0xd9819ffeu, 0), /* newsraft */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x96e558cfu, 5u, 0u, 0xd1e4914eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1331u]]), /* nginx */
#else
  RAF_PKG_INIT(0x96e558cfu, 5u, 0u, 0xd1e4914eu, 0), /* nginx */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4b5d03deu, 6u, 0u, 0x6bc2f2d9u, &g_termux_pkg_names[g_termux_pkg_name_offs[1332u]]), /* ngircd */
#else
  RAF_PKG_INIT(0x4b5d03deu, 6u, 0u, 0x6bc2f2d9u, 0), /* ngircd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x516143d4u, 7u, 0u, 0x5728d679u, &g_termux_pkg_names[g_termux_pkg_name_offs[1333u]]), /* ngspice */
#else
  RAF_PKG_INIT(0x516143d4u, 7u, 0u, 0x5728d679u, 0), /* ngspice */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0ea3fa7fu, 3u, 0u, 0x90da77a6u, &g_termux_pkg_names[g_termux_pkg_name_offs[1334u]]), /* nim */
#else
  RAF_PKG_INIT(0x0ea3fa7fu, 3u, 0u, 0x90da77a6u, 0), /* nim */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfa8327abu, 5u, 0u, 0x9f01a8eeu, &g_termux_pkg_names[g_termux_pkg_name_offs[1335u]]), /* ninja */
#else
  RAF_PKG_INIT(0xfa8327abu, 5u, 0u, 0x9f01a8eeu, 0), /* ninja */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe34c9103u, 9u, 0u, 0xb0f4287au, &g_termux_pkg_names[g_termux_pkg_name_offs[1336u]]), /* ninvaders */
#else
  RAF_PKG_INIT(0xe34c9103u, 9u, 0u, 0xb0f4287au, 0), /* ninvaders */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xccae6f07u, 13u, 0u, 0xbb6954c2u, &g_termux_pkg_names[g_termux_pkg_name_offs[1337u]]), /* nlohmann-json */
#else
  RAF_PKG_INIT(0xccae6f07u, 13u, 0u, 0xbb6954c2u, 0), /* nlohmann-json */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x49d834a4u, 5u, 0u, 0xe28b0ca9u, &g_termux_pkg_names[g_termux_pkg_name_offs[1338u]]), /* nlopt */
#else
  RAF_PKG_INIT(0x49d834a4u, 5u, 0u, 0xe28b0ca9u, 0), /* nlopt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcd8a5a4du, 4u, 0u, 0x2baa00a2u, &g_termux_pkg_names[g_termux_pkg_name_offs[1339u]]), /* nmap */
#else
  RAF_PKG_INIT(0xcd8a5a4du, 4u, 0u, 0x2baa00a2u, 0), /* nmap */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x31ad2bf4u, 3u, 0u, 0x8dd17891u, &g_termux_pkg_names[g_termux_pkg_name_offs[1340u]]), /* nmh */
#else
  RAF_PKG_INIT(0x31ad2bf4u, 3u, 0u, 0x8dd17891u, 0), /* nmh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xaf99359du, 4u, 0u, 0x1dc3827eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1341u]]), /* nmon */
#else
  RAF_PKG_INIT(0xaf99359du, 4u, 0u, 0x1dc3827eu, 0), /* nmon */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x11b54859u, 3u, 0u, 0xadd3e988u, &g_termux_pkg_names[g_termux_pkg_name_offs[1342u]]), /* nnn */
#else
  RAF_PKG_INIT(0x11b54859u, 3u, 0u, 0xadd3e988u, 0), /* nnn */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5ae1b4e4u, 15u, 0u, 0x34f589e5u, &g_termux_pkg_names[g_termux_pkg_name_offs[1343u]]), /* no-more-secrets */
#else
  RAF_PKG_INIT(0x5ae1b4e4u, 15u, 0u, 0x34f589e5u, 0), /* no-more-secrets */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1f748b62u, 6u, 0u, 0x15857f65u, &g_termux_pkg_names[g_termux_pkg_name_offs[1344u]]), /* nodejs */
#else
  RAF_PKG_INIT(0x1f748b62u, 6u, 0u, 0x15857f65u, 0), /* nodejs */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe0730ef2u, 10u, 0u, 0xaa9d6c51u, &g_termux_pkg_names[g_termux_pkg_name_offs[1345u]]), /* nodejs-lts */
#else
  RAF_PKG_INIT(0xe0730ef2u, 10u, 0u, 0xaa9d6c51u, 0), /* nodejs-lts */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe99527bdu, 9u, 0u, 0xd655a5ccu, &g_termux_pkg_names[g_termux_pkg_name_offs[1346u]]), /* notcurses */
#else
  RAF_PKG_INIT(0xe99527bdu, 9u, 0u, 0xd655a5ccu, 0), /* notcurses */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfbf54613u, 7u, 0u, 0x66ab23dau, &g_termux_pkg_names[g_termux_pkg_name_offs[1347u]]), /* notmuch */
#else
  RAF_PKG_INIT(0xfbf54613u, 7u, 0u, 0x66ab23dau, 0), /* notmuch */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x326a479au, 3u, 0u, 0x8cc4ab0bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1348u]]), /* npm */
#else
  RAF_PKG_INIT(0x326a479au, 3u, 0u, 0x8cc4ab0bu, 0), /* npm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3acffa81u, 5u, 0u, 0xbbe7f9c8u, &g_termux_pkg_names[g_termux_pkg_name_offs[1349u]]), /* npush */
#else
  RAF_PKG_INIT(0x3acffa81u, 5u, 0u, 0xbbe7f9c8u, 0), /* npush */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xba925b2au, 4u, 0u, 0x5f8b649du, &g_termux_pkg_names[g_termux_pkg_name_offs[1350u]]), /* nsis */
#else
  RAF_PKG_INIT(0xba925b2au, 4u, 0u, 0x5f8b649du, 0), /* nsis */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x36f9f3cfu, 6u, 0u, 0x3ddf5e04u, &g_termux_pkg_names[g_termux_pkg_name_offs[1351u]]), /* nsnake */
#else
  RAF_PKG_INIT(0x36f9f3cfu, 6u, 0u, 0x3ddf5e04u, 0), /* nsnake */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb525935du, 6u, 0u, 0x680213b6u, &g_termux_pkg_names[g_termux_pkg_name_offs[1352u]]), /* nudoku */
#else
  RAF_PKG_INIT(0xb525935du, 6u, 0u, 0x680213b6u, 0), /* nudoku */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9f47b95eu, 7u, 0u, 0xfae6245fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1353u]]), /* nushell */
#else
  RAF_PKG_INIT(0x9f47b95eu, 7u, 0u, 0xfae6245fu, 0), /* nushell */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0f9dc611u, 7u, 0u, 0xead56110u, &g_termux_pkg_names[g_termux_pkg_name_offs[1354u]]), /* nyancat */
#else
  RAF_PKG_INIT(0x0f9dc611u, 7u, 0u, 0xead56110u, 0), /* nyancat */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd809e28bu, 6u, 0u, 0x626e5b6cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1355u]]), /* nzbget */
#else
  RAF_PKG_INIT(0xd809e28bu, 6u, 0u, 0x626e5b6cu, 0), /* nzbget */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x123f4c5bu, 8u, 0u, 0x90da8220u, &g_termux_pkg_names[g_termux_pkg_name_offs[1356u]]), /* oathtool */
#else
  RAF_PKG_INIT(0x123f4c5bu, 8u, 0u, 0x90da8220u, 0), /* oathtool */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcd6ca6d8u, 7u, 0u, 0x5939dbe5u, &g_termux_pkg_names[g_termux_pkg_name_offs[1357u]]), /* ocl-icd */
#else
  RAF_PKG_INIT(0xcd6ca6d8u, 7u, 0u, 0x5939dbe5u, 0), /* ocl-icd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xefaf462au, 5u, 0u, 0xbe759ba7u, &g_termux_pkg_names[g_termux_pkg_name_offs[1358u]]), /* ocrad */
#else
  RAF_PKG_INIT(0xefaf462au, 5u, 0u, 0xbe759ba7u, 0), /* ocrad */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6341e73du, 6u, 0u, 0x4a19387eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1359u]]), /* octave */
#else
  RAF_PKG_INIT(0x6341e73du, 6u, 0u, 0x4a19387eu, 0), /* octave */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0920483cu, 7u, 0u, 0x9c3e3e19u, &g_termux_pkg_names[g_termux_pkg_name_offs[1360u]]), /* octomap */
#else
  RAF_PKG_INIT(0x0920483cu, 7u, 0u, 0x9c3e3e19u, 0), /* octomap */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xab341214u, 7u, 0u, 0xb1b449e5u, &g_termux_pkg_names[g_termux_pkg_name_offs[1361u]]), /* odt2txt */
#else
  RAF_PKG_INIT(0xab341214u, 7u, 0u, 0xb1b449e5u, 0), /* odt2txt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf60d5760u, 10u, 0u, 0x75bef26bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1362u]]), /* oh-my-posh */
#else
  RAF_PKG_INIT(0xf60d5760u, 10u, 0u, 0x75bef26bu, 0), /* oh-my-posh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x86c6aeb7u, 4u, 0u, 0x76c6c324u, &g_termux_pkg_names[g_termux_pkg_name_offs[1363u]]), /* oidn */
#else
  RAF_PKG_INIT(0x86c6aeb7u, 4u, 0u, 0x76c6c324u, 0), /* oidn */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5af92691u, 10u, 0u, 0xa3601466u, &g_termux_pkg_names[g_termux_pkg_name_offs[1364u]]), /* okc-agents */
#else
  RAF_PKG_INIT(0x5af92691u, 10u, 0u, 0xa3601466u, 0), /* okc-agents */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x633432f6u, 2u, 0u, 0xe43897b9u, &g_termux_pkg_names[g_termux_pkg_name_offs[1365u]]), /* ol */
#else
  RAF_PKG_INIT(0x633432f6u, 2u, 0u, 0xe43897b9u, 0), /* ol */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x64a83072u, 4u, 0u, 0x524cf9e1u, &g_termux_pkg_names[g_termux_pkg_name_offs[1366u]]), /* oleo */
#else
  RAF_PKG_INIT(0x64a83072u, 4u, 0u, 0x524cf9e1u, 0), /* oleo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1d9438a3u, 6u, 0u, 0x4e09a26cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1367u]]), /* ollama */
#else
  RAF_PKG_INIT(0x1d9438a3u, 6u, 0u, 0x4e09a26cu, 0), /* ollama */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa62f4938u, 3u, 0u, 0xf91491c5u, &g_termux_pkg_names[g_termux_pkg_name_offs[1368u]]), /* oma */
#else
  RAF_PKG_INIT(0xa62f4938u, 3u, 0u, 0xf91491c5u, 0), /* oma */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x78637369u, 8u, 0u, 0x5d0e48a6u, &g_termux_pkg_names[g_termux_pkg_name_offs[1369u]]), /* onefetch */
#else
  RAF_PKG_INIT(0x78637369u, 8u, 0u, 0x5d0e48a6u, 0), /* onefetch */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x827c0d3cu, 6u, 0u, 0x76095407u, &g_termux_pkg_names[g_termux_pkg_name_offs[1370u]]), /* onigmo */
#else
  RAF_PKG_INIT(0x827c0d3cu, 6u, 0u, 0x76095407u, 0), /* onigmo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6ea58364u, 9u, 0u, 0x67d5465du, &g_termux_pkg_names[g_termux_pkg_name_offs[1371u]]), /* oniguruma */
#else
  RAF_PKG_INIT(0x6ea58364u, 9u, 0u, 0x67d5465du, 0), /* oniguruma */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xab8d340eu, 11u, 0u, 0x7619bb33u, &g_termux_pkg_names[g_termux_pkg_name_offs[1372u]]), /* onnxruntime */
#else
  RAF_PKG_INIT(0xab8d340eu, 11u, 0u, 0x7619bb33u, 0), /* onnxruntime */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x53f17292u, 6u, 0u, 0x6c9161e1u, &g_termux_pkg_names[g_termux_pkg_name_offs[1373u]]), /* oorexx */
#else
  RAF_PKG_INIT(0x53f17292u, 6u, 0u, 0x6c9161e1u, 0), /* oorexx */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x917b4c60u, 14u, 0u, 0xb1a32ee3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1374u]]), /* open-adventure */
#else
  RAF_PKG_INIT(0x917b4c60u, 14u, 0u, 0xb1a32ee3u, 0), /* open-adventure */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0681147fu, 11u, 0u, 0x0cb04cd2u, &g_termux_pkg_names[g_termux_pkg_name_offs[1375u]]), /* openal-soft */
#else
  RAF_PKG_INIT(0x0681147fu, 11u, 0u, 0x0cb04cd2u, 0), /* openal-soft */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9d9713bfu, 9u, 0u, 0x377d6e1au, &g_termux_pkg_names[g_termux_pkg_name_offs[1376u]]), /* openbabel */
#else
  RAF_PKG_INIT(0x9d9713bfu, 9u, 0u, 0x377d6e1au, 0), /* openbabel */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5f9d96f2u, 12u, 0u, 0x9c2d178du, &g_termux_pkg_names[g_termux_pkg_name_offs[1377u]]), /* opencl-clhpp */
#else
  RAF_PKG_INIT(0x5f9d96f2u, 12u, 0u, 0x9c2d178du, 0), /* opencl-clhpp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2e3eafb5u, 14u, 0u, 0x37453012u, &g_termux_pkg_names[g_termux_pkg_name_offs[1378u]]), /* opencl-headers */
#else
  RAF_PKG_INIT(0x2e3eafb5u, 14u, 0u, 0x37453012u, 0), /* opencl-headers */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x772efd00u, 20u, 0u, 0x2f753633u, &g_termux_pkg_names[g_termux_pkg_name_offs[1379u]]), /* opencl-vendor-driver */
#else
  RAF_PKG_INIT(0x772efd00u, 20u, 0u, 0x2f753633u, 0), /* opencl-vendor-driver */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa49a5270u, 11u, 0u, 0x307a3b61u, &g_termux_pkg_names[g_termux_pkg_name_offs[1380u]]), /* opencolorio */
#else
  RAF_PKG_INIT(0xa49a5270u, 11u, 0u, 0x307a3b61u, 0), /* opencolorio */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xecbb61f2u, 7u, 0u, 0x206d402fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1381u]]), /* openexr */
#else
  RAF_PKG_INIT(0xecbb61f2u, 7u, 0u, 0x206d402fu, 0), /* openexr */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x580cf968u, 8u, 0u, 0x83b1a29fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1382u]]), /* openfoam */
#else
  RAF_PKG_INIT(0x580cf968u, 8u, 0u, 0x83b1a29fu, 0), /* openfoam */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd4f4f9f2u, 6u, 0u, 0x8ed1f409u, &g_termux_pkg_names[g_termux_pkg_name_offs[1383u]]), /* opengl */
#else
  RAF_PKG_INIT(0xd4f4f9f2u, 6u, 0u, 0x8ed1f409u, 0), /* opengl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa677f291u, 8u, 0u, 0xe46a3b46u, &g_termux_pkg_names[g_termux_pkg_name_offs[1384u]]), /* openh264 */
#else
  RAF_PKG_INIT(0xa677f291u, 8u, 0u, 0xe46a3b46u, 0), /* openh264 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x267f8fbbu, 10u, 0u, 0xf7a76d1cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1385u]]), /* openjdk-17 */
#else
  RAF_PKG_INIT(0x267f8fbbu, 10u, 0u, 0xf7a76d1cu, 0), /* openjdk-17 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa47c847eu, 10u, 0u, 0xfda9b525u, &g_termux_pkg_names[g_termux_pkg_name_offs[1386u]]), /* openjdk-21 */
#else
  RAF_PKG_INIT(0xa47c847eu, 10u, 0u, 0xfda9b525u, 0), /* openjdk-21 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa87c8acau, 10u, 0u, 0xf9a9aed9u, &g_termux_pkg_names[g_termux_pkg_name_offs[1387u]]), /* openjdk-25 */
#else
  RAF_PKG_INIT(0xa87c8acau, 10u, 0u, 0xf9a9aed9u, 0), /* openjdk-25 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1482c2f7u, 8u, 0u, 0xf82a5040u, &g_termux_pkg_names[g_termux_pkg_name_offs[1388u]]), /* openjpeg */
#else
  RAF_PKG_INIT(0x1482c2f7u, 8u, 0u, 0xf82a5040u, 0), /* openjpeg */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x62f500b0u, 8u, 0u, 0xe22f6ff3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1389u]]), /* openldap */
#else
  RAF_PKG_INIT(0x62f500b0u, 8u, 0u, 0xe22f6ff3u, 0), /* openldap */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4bfcf795u, 8u, 0u, 0x4bf9dd9eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1390u]]), /* openlist */
#else
  RAF_PKG_INIT(0x4bfcf795u, 8u, 0u, 0x4bf9dd9eu, 0), /* openlist */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9d111787u, 7u, 0u, 0xa03ee59au, &g_termux_pkg_names[g_termux_pkg_name_offs[1391u]]), /* openmpi */
#else
  RAF_PKG_INIT(0x9d111787u, 7u, 0u, 0xa03ee59au, 0), /* openmpi */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x86d898a8u, 7u, 0u, 0xc54b199du, &g_termux_pkg_names[g_termux_pkg_name_offs[1392u]]), /* openpgl */
#else
  RAF_PKG_INIT(0x86d898a8u, 7u, 0u, 0xc54b199du, 0), /* openpgl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe0132057u, 6u, 0u, 0x5fefbf20u, &g_termux_pkg_names[g_termux_pkg_name_offs[1393u]]), /* opensc */
#else
  RAF_PKG_INIT(0xe0132057u, 6u, 0u, 0x5fefbf20u, 0), /* opensc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xad9e8f92u, 8u, 0u, 0xa2fc3f95u, &g_termux_pkg_names[g_termux_pkg_name_offs[1394u]]), /* openscad */
#else
  RAF_PKG_INIT(0xad9e8f92u, 8u, 0u, 0xa2fc3f95u, 0), /* openscad */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdd44333du, 7u, 0u, 0x6e916028u, &g_termux_pkg_names[g_termux_pkg_name_offs[1395u]]), /* openssh */
#else
  RAF_PKG_INIT(0xdd44333du, 7u, 0u, 0x6e916028u, 0), /* openssh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd9442cf1u, 7u, 0u, 0x72916674u, &g_termux_pkg_names[g_termux_pkg_name_offs[1396u]]), /* openssl */
#else
  RAF_PKG_INIT(0xd9442cf1u, 7u, 0u, 0x72916674u, 0), /* openssl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc7ca6f92u, 14u, 0u, 0xe9dd451du, &g_termux_pkg_names[g_termux_pkg_name_offs[1397u]]), /* opentimelineio */
#else
  RAF_PKG_INIT(0xc7ca6f92u, 14u, 0u, 0xe9dd451du, 0), /* opentimelineio */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd8fd4f03u, 6u, 0u, 0x8705c2d4u, &g_termux_pkg_names[g_termux_pkg_name_offs[1398u]]), /* openxr */
#else
  RAF_PKG_INIT(0xd8fd4f03u, 6u, 0u, 0x8705c2d4u, 0), /* openxr */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x00bd8a18u, 7u, 0u, 0xe54cf729u, &g_termux_pkg_names[g_termux_pkg_name_offs[1399u]]), /* optipng */
#else
  RAF_PKG_INIT(0x00bd8a18u, 7u, 0u, 0xe54cf729u, 0), /* optipng */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa085eb0cu, 10u, 0u, 0xf2c794b7u, &g_termux_pkg_names[g_termux_pkg_name_offs[1400u]]), /* opus-tools */
#else
  RAF_PKG_INIT(0xa085eb0cu, 10u, 0u, 0xf2c794b7u, 0), /* opus-tools */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x80affb1cu, 8u, 0u, 0xe4e21647u, &g_termux_pkg_names[g_termux_pkg_name_offs[1401u]]), /* opusfile */
#else
  RAF_PKG_INIT(0x80affb1cu, 8u, 0u, 0xe4e21647u, 0), /* opusfile */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd872e0e3u, 8u, 0u, 0x93f11d6cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1402u]]), /* opustags */
#else
  RAF_PKG_INIT(0xd872e0e3u, 8u, 0u, 0x93f11d6cu, 0), /* opustags */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0bf2030au, 7u, 0u, 0x9277447bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1403u]]), /* orbiton */
#else
  RAF_PKG_INIT(0x0bf2030au, 7u, 0u, 0x9277447bu, 0), /* orbiton */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0365db1bu, 9u, 0u, 0x5e5a2d3eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1404u]]), /* osm2pgsql */
#else
  RAF_PKG_INIT(0x0365db1bu, 9u, 0u, 0x5e5a2d3eu, 0), /* osm2pgsql */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x50313b16u, 9u, 0u, 0x0da7da53u, &g_termux_pkg_names[g_termux_pkg_name_offs[1405u]]), /* osmctools */
#else
  RAF_PKG_INIT(0x50313b16u, 9u, 0u, 0x0da7da53u, 0), /* osmctools */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x646e60f8u, 11u, 0u, 0x4dc49cedu, &g_termux_pkg_names[g_termux_pkg_name_offs[1406u]]), /* osmium-tool */
#else
  RAF_PKG_INIT(0x646e60f8u, 11u, 0u, 0x4dc49cedu, 0), /* osmium-tool */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x340d1b78u, 12u, 0u, 0x5c769aabu, &g_termux_pkg_names[g_termux_pkg_name_offs[1407u]]), /* osslsigncode */
#else
  RAF_PKG_INIT(0x340d1b78u, 12u, 0u, 0x5c769aabu, 0), /* osslsigncode */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x35dae6b8u, 9u, 0u, 0xbf514979u, &g_termux_pkg_names[g_termux_pkg_name_offs[1408u]]), /* ossp-uuid */
#else
  RAF_PKG_INIT(0x35dae6b8u, 9u, 0u, 0xbf514979u, 0), /* ossp-uuid */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2de2c40bu, 4u, 0u, 0x846eb66cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1409u]]), /* ovmf */
#else
  RAF_PKG_INIT(0x2de2c40bu, 4u, 0u, 0x846eb66cu, 0), /* ovmf */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9ea313c3u, 6u, 0u, 0x23acfcf4u, &g_termux_pkg_names[g_termux_pkg_name_offs[1410u]]), /* oxlint */
#else
  RAF_PKG_INIT(0x9ea313c3u, 6u, 0u, 0x23acfcf4u, 0), /* oxlint */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf0d8c288u, 7u, 0u, 0x4732ffedu, &g_termux_pkg_names[g_termux_pkg_name_offs[1411u]]), /* p11-kit */
#else
  RAF_PKG_INIT(0xf0d8c288u, 7u, 0u, 0x4732ffedu, 0), /* p11-kit */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x84513387u, 5u, 0u, 0xb151044au, &g_termux_pkg_names[g_termux_pkg_name_offs[1412u]]), /* p7zip */
#else
  RAF_PKG_INIT(0x84513387u, 5u, 0u, 0xb151044au, 0), /* p7zip */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe17c4c65u, 6u, 0u, 0xbed87ec6u, &g_termux_pkg_names[g_termux_pkg_name_offs[1413u]]), /* pacman */
#else
  RAF_PKG_INIT(0xe17c4c65u, 6u, 0u, 0xbed87ec6u, 0), /* pacman */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe96cd278u, 14u, 0u, 0x18689e0fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1414u]]), /* pacman4console */
#else
  RAF_PKG_INIT(0xe96cd278u, 14u, 0u, 0x18689e0fu, 0), /* pacman4console */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x10b3af74u, 7u, 0u, 0xb71d1295u, &g_termux_pkg_names[g_termux_pkg_name_offs[1415u]]), /* panda3d */
#else
  RAF_PKG_INIT(0x10b3af74u, 7u, 0u, 0xb71d1295u, 0), /* panda3d */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8e113602u, 6u, 0u, 0xa35bb221u, &g_termux_pkg_names[g_termux_pkg_name_offs[1416u]]), /* pandoc */
#else
  RAF_PKG_INIT(0x8e113602u, 6u, 0u, 0xa35bb221u, 0), /* pandoc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xea02f71au, 5u, 0u, 0xc4f40e8fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1417u]]), /* pango */
#else
  RAF_PKG_INIT(0xea02f71au, 5u, 0u, 0xc4f40e8fu, 0), /* pango */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe9405650u, 8u, 0u, 0xabe0db2bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1418u]]), /* paperkey */
#else
  RAF_PKG_INIT(0xe9405650u, 8u, 0u, 0xabe0db2bu, 0), /* paperkey */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xba7897aeu, 4u, 0u, 0xc30c44edu, &g_termux_pkg_names[g_termux_pkg_name_offs[1419u]]), /* par2 */
#else
  RAF_PKG_INIT(0xba7897aeu, 4u, 0u, 0xc30c44edu, 0), /* par2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd8e0fc32u, 8u, 0u, 0xcb5c2415u, &g_termux_pkg_names[g_termux_pkg_name_offs[1420u]]), /* parallel */
#else
  RAF_PKG_INIT(0xd8e0fc32u, 8u, 0u, 0xcb5c2415u, 0), /* parallel */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x61780b93u, 4u, 0u, 0x680bb5acu, &g_termux_pkg_names[g_termux_pkg_name_offs[1421u]]), /* pari */
#else
  RAF_PKG_INIT(0x61780b93u, 4u, 0u, 0x680bb5acu, 0), /* pari */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2e219d85u, 6u, 0u, 0x33fc5c3au, &g_termux_pkg_names[g_termux_pkg_name_offs[1422u]]), /* parted */
#else
  RAF_PKG_INIT(0x2e219d85u, 6u, 0u, 0x33fc5c3au, 0), /* parted */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x613ff0e7u, 5u, 0u, 0x98a0d016u, &g_termux_pkg_names[g_termux_pkg_name_offs[1423u]]), /* paruz */
#else
  RAF_PKG_INIT(0x613ff0e7u, 5u, 0u, 0x98a0d016u, 0), /* paruz */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7b7a7318u, 4u, 0u, 0x7a09936bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1424u]]), /* pass */
#else
  RAF_PKG_INIT(0x7b7a7318u, 4u, 0u, 0x7a09936bu, 0), /* pass */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf5afe984u, 8u, 0u, 0x6dd876dbu, &g_termux_pkg_names[g_termux_pkg_name_offs[1425u]]), /* pass-otp */
#else
  RAF_PKG_INIT(0xf5afe984u, 8u, 0u, 0x6dd876dbu, 0), /* pass-otp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1a6894e3u, 7u, 0u, 0x5edd96dau, &g_termux_pkg_names[g_termux_pkg_name_offs[1426u]]), /* passage */
#else
  RAF_PKG_INIT(0x1a6894e3u, 7u, 0u, 0x5edd96dau, 0), /* passage */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd9d4c048u, 14u, 0u, 0x8564c66bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1427u]]), /* passphrase2pgp */
#else
  RAF_PKG_INIT(0xd9d4c048u, 14u, 0u, 0x8564c66bu, 0), /* passphrase2pgp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5bccf124u, 10u, 0u, 0xa0271ccbu, &g_termux_pkg_names[g_termux_pkg_name_offs[1428u]]), /* pastebinit */
#else
  RAF_PKG_INIT(0x5bccf124u, 10u, 0u, 0xa0271ccbu, 0), /* pastebinit */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4d7271ccu, 6u, 0u, 0x73426243u, &g_termux_pkg_names[g_termux_pkg_name_offs[1429u]]), /* pastel */
#else
  RAF_PKG_INIT(0x4d7271ccu, 6u, 0u, 0x73426243u, 0), /* pastel */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf9100aa9u, 5u, 0u, 0xf915ce40u, &g_termux_pkg_names[g_termux_pkg_name_offs[1430u]]), /* patch */
#else
  RAF_PKG_INIT(0xf9100aa9u, 5u, 0u, 0xf915ce40u, 0), /* patch */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x88e0db9au, 8u, 0u, 0x81f70fddu, &g_termux_pkg_names[g_termux_pkg_name_offs[1431u]]), /* patchelf */
#else
  RAF_PKG_INIT(0x88e0db9au, 8u, 0u, 0x81f70fddu, 0), /* patchelf */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfe88814cu, 10u, 0u, 0x5fbc35bbu, &g_termux_pkg_names[g_termux_pkg_name_offs[1432u]]), /* pathpicker */
#else
  RAF_PKG_INIT(0xfe88814cu, 10u, 0u, 0x5fbc35bbu, 0), /* pathpicker */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4f4e56f7u, 2u, 0u, 0x0c1e9334u, &g_termux_pkg_names[g_termux_pkg_name_offs[1433u]]), /* pb */
#else
  RAF_PKG_INIT(0x4f4e56f7u, 2u, 0u, 0x0c1e9334u, 0), /* pb */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xaeaefbc9u, 4u, 0u, 0xadadf49au, &g_termux_pkg_names[g_termux_pkg_name_offs[1434u]]), /* pcal */
#else
  RAF_PKG_INIT(0xaeaefbc9u, 4u, 0u, 0xadadf49au, 0), /* pcal */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5fc450ddu, 10u, 0u, 0x1739708au, &g_termux_pkg_names[g_termux_pkg_name_offs[1435u]]), /* pcaudiolib */
#else
  RAF_PKG_INIT(0x5fc450ddu, 10u, 0u, 0x1739708au, 0), /* pcaudiolib */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x85d99c45u, 4u, 0u, 0x96d2a13eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1436u]]), /* pcre */
#else
  RAF_PKG_INIT(0x85d99c45u, 4u, 0u, 0x96d2a13eu, 0), /* pcre */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2c914f55u, 5u, 0u, 0x799385e4u, &g_termux_pkg_names[g_termux_pkg_name_offs[1437u]]), /* pcre2 */
#else
  RAF_PKG_INIT(0x2c914f55u, 5u, 0u, 0x799385e4u, 0), /* pcre2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x07a9b9c1u, 7u, 0u, 0x77d69adcu, &g_termux_pkg_names[g_termux_pkg_name_offs[1438u]]), /* pdf2svg */
#else
  RAF_PKG_INIT(0x07a9b9c1u, 7u, 0u, 0x77d69adcu, 0), /* pdf2svg */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7e83f579u, 6u, 0u, 0xefd45be2u, &g_termux_pkg_names[g_termux_pkg_name_offs[1439u]]), /* pdfcpu */
#else
  RAF_PKG_INIT(0x7e83f579u, 6u, 0u, 0xefd45be2u, 0), /* pdfcpu */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9d438b21u, 7u, 0u, 0x5dac7cb8u, &g_termux_pkg_names[g_termux_pkg_name_offs[1440u]]), /* pdfgrep */
#else
  RAF_PKG_INIT(0x9d438b21u, 7u, 0u, 0x5dac7cb8u, 0), /* pdfgrep */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x60a20d08u, 5u, 0u, 0x668eda5du, &g_termux_pkg_names[g_termux_pkg_name_offs[1441u]]), /* pdftk */
#else
  RAF_PKG_INIT(0x60a20d08u, 5u, 0u, 0x668eda5du, 0), /* pdftk */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xea366ae5u, 8u, 0u, 0xbb1a22f6u, &g_termux_pkg_names[g_termux_pkg_name_offs[1442u]]), /* peaclock */
#else
  RAF_PKG_INIT(0xea366ae5u, 8u, 0u, 0xbb1a22f6u, 0), /* peaclock */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb3198498u, 4u, 0u, 0xb383aa2bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1443u]]), /* peco */
#else
  RAF_PKG_INIT(0xb3198498u, 4u, 0u, 0xb383aa2bu, 0), /* peco */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xaff031d8u, 4u, 0u, 0xb2ae899fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1444u]]), /* perl */
#else
  RAF_PKG_INIT(0xaff031d8u, 4u, 0u, 0xb2ae899fu, 0), /* perl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x53744a05u, 11u, 0u, 0x6198c870u, &g_termux_pkg_names[g_termux_pkg_name_offs[1445u]]), /* perl-rename */
#else
  RAF_PKG_INIT(0x53744a05u, 11u, 0u, 0x6198c870u, 0), /* perl-rename */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x694b8a7eu, 3u, 0u, 0x561f924fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1446u]]), /* pet */
#else
  RAF_PKG_INIT(0x694b8a7eu, 3u, 0u, 0x561f924fu, 0), /* pet */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7a11c2a6u, 6u, 0u, 0x580afd81u, &g_termux_pkg_names[g_termux_pkg_name_offs[1447u]]), /* pforth */
#else
  RAF_PKG_INIT(0x7a11c2a6u, 6u, 0u, 0x580afd81u, 0), /* pforth */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2cef1e4eu, 8u, 0u, 0x99615935u, &g_termux_pkg_names[g_termux_pkg_name_offs[1448u]]), /* pgroonga */
#else
  RAF_PKG_INIT(0x2cef1e4eu, 8u, 0u, 0x99615935u, 0), /* pgroonga */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb7035a22u, 10u, 0u, 0x05646cb1u, &g_termux_pkg_names[g_termux_pkg_name_offs[1449u]]), /* photon-rss */
#else
  RAF_PKG_INIT(0xb7035a22u, 10u, 0u, 0x05646cb1u, 0), /* photon-rss */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5b44b8afu, 3u, 0u, 0x5412c336u, &g_termux_pkg_names[g_termux_pkg_name_offs[1450u]]), /* php */
#else
  RAF_PKG_INIT(0x5b44b8afu, 3u, 0u, 0x5412c336u, 0), /* php */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdea5ac43u, 8u, 0u, 0x56ca2e94u, &g_termux_pkg_names[g_termux_pkg_name_offs[1451u]]), /* php-apcu */
#else
  RAF_PKG_INIT(0xdea5ac43u, 8u, 0u, 0x56ca2e94u, 0), /* php-apcu */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x173e8a2du, 11u, 0u, 0x029885d0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1452u]]), /* php-imagick */
#else
  RAF_PKG_INIT(0x173e8a2du, 11u, 0u, 0x029885d0u, 0), /* php-imagick */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x01c90523u, 7u, 0u, 0x700776e6u, &g_termux_pkg_names[g_termux_pkg_name_offs[1453u]]), /* php-psr */
#else
  RAF_PKG_INIT(0x01c90523u, 7u, 0u, 0x700776e6u, 0), /* php-psr */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0432ae2du, 9u, 0u, 0x125db1c8u, &g_termux_pkg_names[g_termux_pkg_name_offs[1454u]]), /* php-redis */
#else
  RAF_PKG_INIT(0x0432ae2du, 9u, 0u, 0x125db1c8u, 0), /* php-redis */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc46e9bc4u, 17u, 0u, 0x265baf71u, &g_termux_pkg_names[g_termux_pkg_name_offs[1455u]]), /* php-zephir-parser */
#else
  RAF_PKG_INIT(0xc46e9bc4u, 17u, 0u, 0x265baf71u, 0), /* php-zephir-parser */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0fe772bcu, 10u, 0u, 0x0708674fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1456u]]), /* phpmyadmin */
#else
  RAF_PKG_INIT(0x0fe772bcu, 10u, 0u, 0x0708674fu, 0), /* phpmyadmin */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x38be3047u, 8u, 0u, 0x8ba85d94u, &g_termux_pkg_names[g_termux_pkg_name_offs[1457u]]), /* pianobar */
#else
  RAF_PKG_INIT(0x38be3047u, 8u, 0u, 0x8ba85d94u, 0), /* pianobar */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfa41edf8u, 4u, 0u, 0xfb4b774bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1458u]]), /* pick */
#else
  RAF_PKG_INIT(0xfa41edf8u, 4u, 0u, 0xfb4b774bu, 0), /* pick */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfa326a29u, 7u, 0u, 0x1b3fab6cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1459u]]), /* picocom */
#else
  RAF_PKG_INIT(0xfa326a29u, 7u, 0u, 0x1b3fab6cu, 0), /* picocom */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc35653a0u, 8u, 0u, 0x95de07d3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1460u]]), /* picolisp */
#else
  RAF_PKG_INIT(0xc35653a0u, 8u, 0u, 0x95de07d3u, 0), /* picolisp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x134ca2afu, 4u, 0u, 0x12410e24u, &g_termux_pkg_names[g_termux_pkg_name_offs[1461u]]), /* pigz */
#else
  RAF_PKG_INIT(0x134ca2afu, 4u, 0u, 0x12410e24u, 0), /* pigz */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x97213934u, 8u, 0u, 0xfd9a1d6fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1462u]]), /* pikiwidb */
#else
  RAF_PKG_INIT(0x97213934u, 8u, 0u, 0xfd9a1d6fu, 0), /* pikiwidb */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc872d738u, 8u, 0u, 0x66d3eb6fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1463u]]), /* pinentry */
#else
  RAF_PKG_INIT(0xc872d738u, 8u, 0u, 0x66d3eb6fu, 0), /* pinentry */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x481bd9abu, 6u, 0u, 0x879f1df8u, &g_termux_pkg_names[g_termux_pkg_name_offs[1464u]]), /* pingme */
#else
  RAF_PKG_INIT(0x481bd9abu, 6u, 0u, 0x879f1df8u, 0), /* pingme */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf354120fu, 10u, 0u, 0x8dd07738u, &g_termux_pkg_names[g_termux_pkg_name_offs[1465u]]), /* pipebuffer */
#else
  RAF_PKG_INIT(0xf354120fu, 10u, 0u, 0x8dd07738u, 0), /* pipebuffer */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x43a9e2c3u, 8u, 0u, 0x562c3de0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1466u]]), /* pipes.sh */
#else
  RAF_PKG_INIT(0x43a9e2c3u, 8u, 0u, 0x562c3de0u, 0), /* pipes.sh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x946331bcu, 8u, 0u, 0x3f9e680bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1467u]]), /* pipewire */
#else
  RAF_PKG_INIT(0x946331bcu, 8u, 0u, 0x3f9e680bu, 0), /* pipewire */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x908e2e12u, 10u, 0u, 0xdf23975du, &g_termux_pkg_names[g_termux_pkg_name_offs[1468u]]), /* pkg-config */
#else
  RAF_PKG_INIT(0x908e2e12u, 10u, 0u, 0xdf23975du, 0), /* pkg-config */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf3aa1077u, 7u, 0u, 0xf29f12eeu, &g_termux_pkg_names[g_termux_pkg_name_offs[1469u]]), /* pkgfile */
#else
  RAF_PKG_INIT(0xf3aa1077u, 7u, 0u, 0xf29f12eeu, 0), /* pkgfile */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9d4759e0u, 6u, 0u, 0x510c18d3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1470u]]), /* pkgtop */
#else
  RAF_PKG_INIT(0x9d4759e0u, 6u, 0u, 0x510c18d3u, 0), /* pkgtop */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7112635cu, 8u, 0u, 0xbbeadecfu, &g_termux_pkg_names[g_termux_pkg_name_offs[1471u]]), /* plantuml */
#else
  RAF_PKG_INIT(0x7112635cu, 8u, 0u, 0xbbeadecfu, 0), /* plantuml */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdf0cac04u, 10u, 0u, 0x7306a727u, &g_termux_pkg_names[g_termux_pkg_name_offs[1472u]]), /* play-audio */
#else
  RAF_PKG_INIT(0xdf0cac04u, 10u, 0u, 0x7306a727u, 0), /* play-audio */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc2f09dc0u, 5u, 0u, 0x3e817e85u, &g_termux_pkg_names[g_termux_pkg_name_offs[1473u]]), /* plzip */
#else
  RAF_PKG_INIT(0xc2f09dc0u, 5u, 0u, 0x3e817e85u, 0), /* plzip */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1c77920bu, 8u, 0u, 0xdb648864u, &g_termux_pkg_names[g_termux_pkg_name_offs[1474u]]), /* pngcrush */
#else
  RAF_PKG_INIT(0x1c77920bu, 8u, 0u, 0xdb648864u, 0), /* pngcrush */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x96c5ab3fu, 8u, 0u, 0xd4b9e5fcu, &g_termux_pkg_names[g_termux_pkg_name_offs[1475u]]), /* pngquant */
#else
  RAF_PKG_INIT(0x96c5ab3fu, 8u, 0u, 0xd4b9e5fcu, 0), /* pngquant */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2db8b46au, 10u, 0u, 0x2aa77efdu, &g_termux_pkg_names[g_termux_pkg_name_offs[1476u]]), /* pocketbase */
#else
  RAF_PKG_INIT(0x2db8b46au, 10u, 0u, 0x2aa77efdu, 0), /* pocketbase */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x88d2ddfcu, 4u, 0u, 0x974e8fc7u, &g_termux_pkg_names[g_termux_pkg_name_offs[1477u]]), /* poke */
#else
  RAF_PKG_INIT(0x88d2ddfcu, 4u, 0u, 0x974e8fc7u, 0), /* poke */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbca08a7eu, 6u, 0u, 0x31aa9cf1u, &g_termux_pkg_names[g_termux_pkg_name_offs[1478u]]), /* polipo */
#else
  RAF_PKG_INIT(0xbca08a7eu, 6u, 0u, 0x31aa9cf1u, 0), /* polipo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xaafdea76u, 6u, 0u, 0x8470056du, &g_termux_pkg_names[g_termux_pkg_name_offs[1479u]]), /* polyml */
#else
  RAF_PKG_INIT(0xaafdea76u, 6u, 0u, 0x8470056du, 0), /* polyml */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3c63a28au, 15u, 0u, 0xd98d9aabu, &g_termux_pkg_names[g_termux_pkg_name_offs[1480u]]), /* pomodoro-curses */
#else
  RAF_PKG_INIT(0x3c63a28au, 15u, 0u, 0xd98d9aabu, 0), /* pomodoro-curses */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6fca0933u, 7u, 0u, 0x77adc706u, &g_termux_pkg_names[g_termux_pkg_name_offs[1481u]]), /* poppler */
#else
  RAF_PKG_INIT(0x6fca0933u, 7u, 0u, 0x77adc706u, 0), /* poppler */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9cba41cau, 12u, 0u, 0x0d684141u, &g_termux_pkg_names[g_termux_pkg_name_offs[1482u]]), /* poppler-data */
#else
  RAF_PKG_INIT(0x9cba41cau, 12u, 0u, 0x0d684141u, 0), /* poppler-data */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x901a04c0u, 9u, 0u, 0x28b8a869u, &g_termux_pkg_names[g_termux_pkg_name_offs[1483u]]), /* portaudio */
#else
  RAF_PKG_INIT(0x901a04c0u, 9u, 0u, 0x28b8a869u, 0), /* portaudio */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5496d0f7u, 8u, 0u, 0x693e79f4u, &g_termux_pkg_names[g_termux_pkg_name_offs[1484u]]), /* portmidi */
#else
  RAF_PKG_INIT(0x5496d0f7u, 8u, 0u, 0x693e79f4u, 0), /* portmidi */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6bed8922u, 9u, 0u, 0x1a64a12bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1485u]]), /* posixvala */
#else
  RAF_PKG_INIT(0x6bed8922u, 9u, 0u, 0x1a64a12bu, 0), /* posixvala */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x55c35488u, 7u, 0u, 0x8c5073e1u, &g_termux_pkg_names[g_termux_pkg_name_offs[1486u]]), /* postgis */
#else
  RAF_PKG_INIT(0x55c35488u, 7u, 0u, 0x8c5073e1u, 0), /* postgis */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2ee91e53u, 10u, 0u, 0xb1fa4cb0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1487u]]), /* postgresql */
#else
  RAF_PKG_INIT(0x2ee91e53u, 10u, 0u, 0xb1fa4cb0u, 0), /* postgresql */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6933c1e9u, 7u, 0u, 0xb8646ba8u, &g_termux_pkg_names[g_termux_pkg_name_offs[1488u]]), /* potrace */
#else
  RAF_PKG_INIT(0x6933c1e9u, 7u, 0u, 0xb8646ba8u, 0), /* potrace */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5aab3b2fu, 6u, 0u, 0x19e27160u, &g_termux_pkg_names[g_termux_pkg_name_offs[1489u]]), /* pounce */
#else
  RAF_PKG_INIT(0x5aab3b2fu, 6u, 0u, 0x19e27160u, 0), /* pounce */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbdac4feeu, 6u, 0u, 0x64554b31u, &g_termux_pkg_names[g_termux_pkg_name_offs[1490u]]), /* povray */
#else
  RAF_PKG_INIT(0xbdac4feeu, 6u, 0u, 0x64554b31u, 0), /* povray */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1c4d962au, 7u, 0u, 0xc168acf3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1491u]]), /* predict */
#else
  RAF_PKG_INIT(0x1c4d962au, 7u, 0u, 0xc168acf3u, 0), /* predict */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x08500826u, 7u, 0u, 0x72a04287u, &g_termux_pkg_names[g_termux_pkg_name_offs[1492u]]), /* privoxy */
#else
  RAF_PKG_INIT(0x08500826u, 7u, 0u, 0x72a04287u, 0), /* privoxy */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5a4e7e90u, 6u, 0u, 0x0f76ac73u, &g_termux_pkg_names[g_termux_pkg_name_offs[1493u]]), /* procps */
#else
  RAF_PKG_INIT(0x5a4e7e90u, 6u, 0u, 0x0f76ac73u, 0), /* procps */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x77e4e2d6u, 5u, 0u, 0xc6bcf43fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1494u]]), /* procs */
#else
  RAF_PKG_INIT(0x77e4e2d6u, 5u, 0u, 0xc6bcf43fu, 0), /* procs */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x82388602u, 18u, 0u, 0xe4a29601u, &g_termux_pkg_names[g_termux_pkg_name_offs[1495u]]), /* procyon-decompiler */
#else
  RAF_PKG_INIT(0x82388602u, 18u, 0u, 0xe4a29601u, 0), /* procyon-decompiler */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd44ffd93u, 9u, 0u, 0x5e0c6f06u, &g_termux_pkg_names[g_termux_pkg_name_offs[1496u]]), /* profanity */
#else
  RAF_PKG_INIT(0xd44ffd93u, 9u, 0u, 0x5e0c6f06u, 0), /* profanity */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcb084e46u, 8u, 0u, 0xcbd2a2c5u, &g_termux_pkg_names[g_termux_pkg_name_offs[1497u]]), /* progress */
#else
  RAF_PKG_INIT(0xcb084e46u, 8u, 0u, 0xcbd2a2c5u, 0), /* progress */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe33e21b6u, 4u, 0u, 0x6facac81u, &g_termux_pkg_names[g_termux_pkg_name_offs[1498u]]), /* proj */
#else
  RAF_PKG_INIT(0xe33e21b6u, 4u, 0u, 0x6facac81u, 0), /* proj */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7adbed33u, 5u, 0u, 0xd3db1dcau, &g_termux_pkg_names[g_termux_pkg_name_offs[1499u]]), /* proot */
#else
  RAF_PKG_INIT(0x7adbed33u, 5u, 0u, 0xd3db1dcau, 0), /* proot */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x397265a1u, 12u, 0u, 0x53d7afcau, &g_termux_pkg_names[g_termux_pkg_name_offs[1500u]]), /* proot-distro */
#else
  RAF_PKG_INIT(0x397265a1u, 12u, 0u, 0x53d7afcau, 0), /* proot-distro */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbeb81b05u, 13u, 0u, 0x0949ac80u, &g_termux_pkg_names[g_termux_pkg_name_offs[1501u]]), /* proton-bridge */
#else
  RAF_PKG_INIT(0xbeb81b05u, 13u, 0u, 0x0949ac80u, 0), /* proton-bridge */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb962464cu, 7u, 0u, 0x4c239afdu, &g_termux_pkg_names[g_termux_pkg_name_offs[1502u]]), /* prover9 */
#else
  RAF_PKG_INIT(0xb962464cu, 7u, 0u, 0x4c239afdu, 0), /* prover9 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xedfd6e36u, 9u, 0u, 0xbba98d57u, &g_termux_pkg_names[g_termux_pkg_name_offs[1503u]]), /* proxmark3 */
#else
  RAF_PKG_INIT(0xedfd6e36u, 9u, 0u, 0xbba98d57u, 0), /* proxmark3 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x97a7a813u, 14u, 0u, 0x25a9bfe4u, &g_termux_pkg_names[g_termux_pkg_name_offs[1504u]]), /* proxychains-ng */
#else
  RAF_PKG_INIT(0x97a7a813u, 14u, 0u, 0x25a9bfe4u, 0), /* proxychains-ng */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7d37db54u, 6u, 0u, 0x822dec13u, &g_termux_pkg_names[g_termux_pkg_name_offs[1505u]]), /* psmisc */
#else
  RAF_PKG_INIT(0x7d37db54u, 6u, 0u, 0x822dec13u, 0), /* psmisc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0013fb7cu, 4u, 0u, 0x82895f5bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1506u]]), /* ptex */
#else
  RAF_PKG_INIT(0x0013fb7cu, 4u, 0u, 0x82895f5bu, 0), /* ptex */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x89bfb6dbu, 10u, 0u, 0xa9317e2cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1507u]]), /* ptunnel-ng */
#else
  RAF_PKG_INIT(0x89bfb6dbu, 10u, 0u, 0xa9317e2cu, 0), /* ptunnel-ng */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2444b66bu, 5u, 0u, 0xa9be63cau, &g_termux_pkg_names[g_termux_pkg_name_offs[1508u]]), /* pueue */
#else
  RAF_PKG_INIT(0x2444b66bu, 5u, 0u, 0xa9be63cau, 0), /* pueue */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x250f3828u, 10u, 0u, 0x8b6ed8d7u, &g_termux_pkg_names[g_termux_pkg_name_offs[1509u]]), /* pulseaudio */
#else
  RAF_PKG_INIT(0x250f3828u, 10u, 0u, 0x8b6ed8d7u, 0), /* pulseaudio */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6d72a03au, 3u, 0u, 0x51f6e993u, &g_termux_pkg_names[g_termux_pkg_name_offs[1510u]]), /* pup */
#else
  RAF_PKG_INIT(0x6d72a03au, 3u, 0u, 0x51f6e993u, 0), /* pup */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x84c05a8cu, 9u, 0u, 0x38cd3eedu, &g_termux_pkg_names[g_termux_pkg_name_offs[1511u]]), /* pure-ftpd */
#else
  RAF_PKG_INIT(0x84c05a8cu, 9u, 0u, 0x38cd3eedu, 0), /* pure-ftpd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5b4e69dbu, 2u, 0u, 0xf81e73b8u, &g_termux_pkg_names[g_termux_pkg_name_offs[1512u]]), /* pv */
#else
  RAF_PKG_INIT(0x5b4e69dbu, 2u, 0u, 0xf81e73b8u, 0), /* pv */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2310e1d2u, 5u, 0u, 0xad0ad427u, &g_termux_pkg_names[g_termux_pkg_name_offs[1513u]]), /* pwgen */
#else
  RAF_PKG_INIT(0x2310e1d2u, 5u, 0u, 0xad0ad427u, 0), /* pwgen */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x760e7f73u, 8u, 0u, 0x58000094u, &g_termux_pkg_names[g_termux_pkg_name_offs[1514u]]), /* pybind11 */
#else
  RAF_PKG_INIT(0x760e7f73u, 8u, 0u, 0x58000094u, 0), /* pybind11 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x148b97a6u, 7u, 0u, 0x68d8379bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1515u]]), /* pycairo */
#else
  RAF_PKG_INIT(0x148b97a6u, 7u, 0u, 0x68d8379bu, 0), /* pycairo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8412c7dcu, 9u, 0u, 0xfec5d985u, &g_termux_pkg_names[g_termux_pkg_name_offs[1516u]]), /* pygobject */
#else
  RAF_PKG_INIT(0x8412c7dcu, 9u, 0u, 0xfec5d985u, 0), /* pygobject */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe4152ebdu, 4u, 0u, 0x47a33f82u, &g_termux_pkg_names[g_termux_pkg_name_offs[1517u]]), /* pypy */
#else
  RAF_PKG_INIT(0xe4152ebdu, 4u, 0u, 0x47a33f82u, 0), /* pypy */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9b58498au, 5u, 0u, 0x76fd43a3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1518u]]), /* pypy3 */
#else
  RAF_PKG_INIT(0x9b58498au, 5u, 0u, 0x76fd43a3u, 0), /* pypy3 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf5074f94u, 7u, 0u, 0xb3a26f89u, &g_termux_pkg_names[g_termux_pkg_name_offs[1519u]]), /* pyrefly */
#else
  RAF_PKG_INIT(0xf5074f94u, 7u, 0u, 0xb3a26f89u, 0), /* pyrefly */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x63acae9bu, 8u, 0u, 0x5e007a98u, &g_termux_pkg_names[g_termux_pkg_name_offs[1520u]]), /* pystring */
#else
  RAF_PKG_INIT(0x63acae9bu, 8u, 0u, 0x5e007a98u, 0), /* pystring */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0fceff97u, 6u, 0u, 0x31fed5bcu, &g_termux_pkg_names[g_termux_pkg_name_offs[1521u]]), /* python */
#else
  RAF_PKG_INIT(0x0fceff97u, 6u, 0u, 0x31fed5bcu, 0), /* python */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc38834e1u, 11u, 0u, 0x93ff603cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1522u]]), /* python-apsw */
#else
  RAF_PKG_INIT(0xc38834e1u, 11u, 0u, 0x93ff603cu, 0), /* python-apsw */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5e9fc6b9u, 10u, 0u, 0x86bf3c02u, &g_termux_pkg_names[g_termux_pkg_name_offs[1523u]]), /* python-apt */
#else
  RAF_PKG_INIT(0x5e9fc6b9u, 10u, 0u, 0x86bf3c02u, 0), /* python-apt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x75f56e58u, 13u, 0u, 0x5d9e8a89u, &g_termux_pkg_names[g_termux_pkg_name_offs[1524u]]), /* python-bcrypt */
#else
  RAF_PKG_INIT(0x75f56e58u, 13u, 0u, 0x5d9e8a89u, 0), /* python-bcrypt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa1ae71f2u, 13u, 0u, 0xc29c2e57u, &g_termux_pkg_names[g_termux_pkg_name_offs[1525u]]), /* python-brotli */
#else
  RAF_PKG_INIT(0xa1ae71f2u, 13u, 0u, 0xc29c2e57u, 0), /* python-brotli */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x255310c5u, 12u, 0u, 0x16d0830au, &g_termux_pkg_names[g_termux_pkg_name_offs[1526u]]), /* python-cmake */
#else
  RAF_PKG_INIT(0x255310c5u, 12u, 0u, 0x16d0830au, 0), /* python-cmake */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x120595d7u, 16u, 0u, 0x814570ccu, &g_termux_pkg_names[g_termux_pkg_name_offs[1527u]]), /* python-contourpy */
#else
  RAF_PKG_INIT(0x120595d7u, 16u, 0u, 0x814570ccu, 0), /* python-contourpy */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x901ed5f0u, 19u, 0u, 0xff8b5379u, &g_termux_pkg_names[g_termux_pkg_name_offs[1528u]]), /* python-cryptography */
#else
  RAF_PKG_INIT(0x901ed5f0u, 19u, 0u, 0xff8b5379u, 0), /* python-cryptography */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd3977bfeu, 15u, 0u, 0x0071a4abu, &g_termux_pkg_names[g_termux_pkg_name_offs[1529u]]), /* python-greenlet */
#else
  RAF_PKG_INIT(0xd3977bfeu, 15u, 0u, 0x0071a4abu, 0), /* python-greenlet */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x322c6546u, 13u, 0u, 0xe3bb9d7fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1530u]]), /* python-grpcio */
#else
  RAF_PKG_INIT(0x322c6546u, 13u, 0u, 0xe3bb9d7fu, 0), /* python-grpcio */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xaee0f101u, 14u, 0u, 0x65e65cceu, &g_termux_pkg_names[g_termux_pkg_name_offs[1531u]]), /* python-lameenc */
#else
  RAF_PKG_INIT(0xaee0f101u, 14u, 0u, 0x65e65cceu, 0), /* python-lameenc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0eb14bbfu, 14u, 0u, 0x3904078cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1532u]]), /* python-libsass */
#else
  RAF_PKG_INIT(0x0eb14bbfu, 14u, 0u, 0x3904078cu, 0), /* python-libsass */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x50c2b02bu, 15u, 0u, 0xb7d1fd02u, &g_termux_pkg_names[g_termux_pkg_name_offs[1533u]]), /* python-llvmlite */
#else
  RAF_PKG_INIT(0x50c2b02bu, 15u, 0u, 0xb7d1fd02u, 0), /* python-llvmlite */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x082275fbu, 11u, 0u, 0x6fe6a02eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1534u]]), /* python-lxml */
#else
  RAF_PKG_INIT(0x082275fbu, 11u, 0u, 0x6fe6a02eu, 0), /* python-lxml */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0dd6d406u, 14u, 0u, 0xe2f34b95u, &g_termux_pkg_names[g_termux_pkg_name_offs[1535u]]), /* python-msgpack */
#else
  RAF_PKG_INIT(0x0dd6d406u, 14u, 0u, 0xe2f34b95u, 0), /* python-msgpack */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x68750c21u, 12u, 0u, 0x01781f5eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1536u]]), /* python-numpy */
#else
  RAF_PKG_INIT(0x68750c21u, 12u, 0u, 0x01781f5eu, 0), /* python-numpy */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x86030adfu, 13u, 0u, 0xdf147f86u, &g_termux_pkg_names[g_termux_pkg_name_offs[1537u]]), /* python-pillow */
#else
  RAF_PKG_INIT(0x86030adfu, 13u, 0u, 0xdf147f86u, 0), /* python-pillow */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xca17cb7bu, 10u, 0u, 0xb8959030u, &g_termux_pkg_names[g_termux_pkg_name_offs[1538u]]), /* python-pip */
#else
  RAF_PKG_INIT(0xca17cb7bu, 10u, 0u, 0xb8959030u, 0), /* python-pip */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x808e308fu, 13u, 0u, 0xc4a6285au, &g_termux_pkg_names[g_termux_pkg_name_offs[1539u]]), /* python-psutil */
#else
  RAF_PKG_INIT(0x808e308fu, 13u, 0u, 0xc4a6285au, 0), /* python-psutil */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe4773ad5u, 20u, 0u, 0x6113119au, &g_termux_pkg_names[g_termux_pkg_name_offs[1540u]]), /* python-pycryptodomex */
#else
  RAF_PKG_INIT(0xe4773ad5u, 20u, 0u, 0x6113119au, 0), /* python-pycryptodomex */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcff6dbc7u, 13u, 0u, 0xe960b44eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1541u]]), /* python-pynvim */
#else
  RAF_PKG_INIT(0xcff6dbc7u, 13u, 0u, 0xe960b44eu, 0), /* python-pynvim */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2c63320au, 15u, 0u, 0x00e6864bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1542u]]), /* python-sabyenc3 */
#else
  RAF_PKG_INIT(0x2c63320au, 15u, 0u, 0x00e6864bu, 0), /* python-sabyenc3 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa08281ccu, 12u, 0u, 0x02a0f12bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1543u]]), /* python-scipy */
#else
  RAF_PKG_INIT(0xa08281ccu, 12u, 0u, 0x02a0f12bu, 0), /* python-scipy */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x418db54eu, 19u, 0u, 0x3e8f6fe7u, &g_termux_pkg_names[g_termux_pkg_name_offs[1544u]]), /* python-skia-pathops */
#else
  RAF_PKG_INIT(0x418db54eu, 19u, 0u, 0x3e8f6fe7u, 0), /* python-skia-pathops */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6a0c65d5u, 21u, 0u, 0xe593cb2cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1545u]]), /* python-tflite-runtime */
#else
  RAF_PKG_INIT(0x6a0c65d5u, 21u, 0u, 0xe593cb2cu, 0), /* python-tflite-runtime */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa7b78702u, 11u, 0u, 0xd115e207u, &g_termux_pkg_names[g_termux_pkg_name_offs[1546u]]), /* python-tldp */
#else
  RAF_PKG_INIT(0xa7b78702u, 11u, 0u, 0xd115e207u, 0), /* python-tldp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3126fba8u, 12u, 0u, 0x592661a7u, &g_termux_pkg_names[g_termux_pkg_name_offs[1547u]]), /* python-torch */
#else
  RAF_PKG_INIT(0x3126fba8u, 12u, 0u, 0x592661a7u, 0), /* python-torch */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x83c7eb72u, 17u, 0u, 0x90d71f93u, &g_termux_pkg_names[g_termux_pkg_name_offs[1548u]]), /* python-torchaudio */
#else
  RAF_PKG_INIT(0x83c7eb72u, 17u, 0u, 0x90d71f93u, 0), /* python-torchaudio */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe5890c8au, 17u, 0u, 0xabe4f63fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1549u]]), /* python-torchcodec */
#else
  RAF_PKG_INIT(0xe5890c8au, 17u, 0u, 0xabe4f63fu, 0), /* python-torchcodec */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xebd6b710u, 18u, 0u, 0x7a4ab5d3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1550u]]), /* python-torchvision */
#else
  RAF_PKG_INIT(0xebd6b710u, 18u, 0u, 0x7a4ab5d3u, 0), /* python-torchvision */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7f5a7b01u, 11u, 0u, 0x7bfdb808u, &g_termux_pkg_names[g_termux_pkg_name_offs[1551u]]), /* python-xlib */
#else
  RAF_PKG_INIT(0x7f5a7b01u, 11u, 0u, 0x7bfdb808u, 0), /* python-xlib */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7e661e96u, 13u, 0u, 0xae05df13u, &g_termux_pkg_names[g_termux_pkg_name_offs[1552u]]), /* python-yt-dlp */
#else
  RAF_PKG_INIT(0x7e661e96u, 13u, 0u, 0xae05df13u, 0), /* python-yt-dlp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x87dc70bfu, 7u, 0u, 0x422a2e8au, &g_termux_pkg_names[g_termux_pkg_name_offs[1553u]]), /* python2 */
#else
  RAF_PKG_INIT(0x87dc70bfu, 7u, 0u, 0x422a2e8au, 0), /* python2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x97b4ec5au, 12u, 0u, 0x84b13fa1u, &g_termux_pkg_names[g_termux_pkg_name_offs[1554u]]), /* q-dns-client */
#else
  RAF_PKG_INIT(0x97b4ec5au, 12u, 0u, 0x84b13fa1u, 0), /* q-dns-client */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd4ad4a56u, 4u, 0u, 0x28afb955u, &g_termux_pkg_names[g_termux_pkg_name_offs[1555u]]), /* qalc */
#else
  RAF_PKG_INIT(0xd4ad4a56u, 4u, 0u, 0x28afb955u, 0), /* qalc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x48d7eaa5u, 27u, 0u, 0xadaef52cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1556u]]), /* qemu-system-x86-64-headless */
#else
  RAF_PKG_INIT(0x48d7eaa5u, 27u, 0u, 0xadaef52cu, 0), /* qemu-system-x86-64-headless */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1ef9afebu, 5u, 0u, 0xdcfe407au, &g_termux_pkg_names[g_termux_pkg_name_offs[1557u]]), /* qhull */
#else
  RAF_PKG_INIT(0x1ef9afebu, 5u, 0u, 0xdcfe407au, 0), /* qhull */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7b0a6272u, 4u, 0u, 0xc4b5f709u, &g_termux_pkg_names[g_termux_pkg_name_offs[1558u]]), /* qpdf */
#else
  RAF_PKG_INIT(0x7b0a6272u, 4u, 0u, 0xc4b5f709u, 0), /* qpdf */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x743c03ccu, 7u, 0u, 0x6715ec99u, &g_termux_pkg_names[g_termux_pkg_name_offs[1559u]]), /* qrsspig */
#else
  RAF_PKG_INIT(0x743c03ccu, 7u, 0u, 0x6715ec99u, 0), /* qrsspig */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x520137d1u, 11u, 0u, 0x5cb1d21cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1560u]]), /* qrupdate-ng */
#else
  RAF_PKG_INIT(0x520137d1u, 11u, 0u, 0x5cb1d21cu, 0), /* qrupdate-ng */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x39876d36u, 13u, 0u, 0x0f5ef107u, &g_termux_pkg_names[g_termux_pkg_name_offs[1561u]]), /* quick-lint-js */
#else
  RAF_PKG_INIT(0x39876d36u, 13u, 0u, 0x0f5ef107u, 0), /* quick-lint-js */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x08ebb371u, 10u, 0u, 0x91e7c1cau, &g_termux_pkg_names[g_termux_pkg_name_offs[1562u]]), /* quickjs-ng */
#else
  RAF_PKG_INIT(0x08ebb371u, 10u, 0u, 0x91e7c1cau, 0), /* quickjs-ng */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xec467e5eu, 5u, 0u, 0x19738327u, &g_termux_pkg_names[g_termux_pkg_name_offs[1563u]]), /* quilt */
#else
  RAF_PKG_INIT(0xec467e5eu, 5u, 0u, 0x19738327u, 0), /* quilt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x33860b85u, 15u, 0u, 0x521af32cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1564u]]), /* rabbitmq-server */
#else
  RAF_PKG_INIT(0x33860b85u, 15u, 0u, 0x521af32cu, 0), /* rabbitmq-server */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x26406953u, 6u, 0u, 0xe867f0a0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1565u]]), /* racket */
#else
  RAF_PKG_INIT(0x26406953u, 6u, 0u, 0xe867f0a0u, 0), /* racket */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbf8272b8u, 7u, 0u, 0x34245995u, &g_termux_pkg_names[g_termux_pkg_name_offs[1566u]]), /* radare2 */
#else
  RAF_PKG_INIT(0xbf8272b8u, 7u, 0u, 0x34245995u, 0), /* radare2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7eb2af0cu, 4u, 0u, 0x5b20dd43u, &g_termux_pkg_names[g_termux_pkg_name_offs[1567u]]), /* rage */
#else
  RAF_PKG_INIT(0x7eb2af0cu, 4u, 0u, 0x5b20dd43u, 0), /* rage */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd34a1420u, 5u, 0u, 0xa3bc30fdu, &g_termux_pkg_names[g_termux_pkg_name_offs[1568u]]), /* ragel */
#else
  RAF_PKG_INIT(0xd34a1420u, 5u, 0u, 0xa3bc30fdu, 0), /* ragel */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf2dddee3u, 11u, 0u, 0x2164472au, &g_termux_pkg_names[g_termux_pkg_name_offs[1569u]]), /* railway-cli */
#else
  RAF_PKG_INIT(0xf2dddee3u, 11u, 0u, 0x2164472au, 0), /* railway-cli */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcedd3336u, 8u, 0u, 0x23a89391u, &g_termux_pkg_names[g_termux_pkg_name_offs[1570u]]), /* range-v3 */
#else
  RAF_PKG_INIT(0xcedd3336u, 8u, 0u, 0x23a89391u, 0), /* range-v3 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8867dfe0u, 6u, 0u, 0x769c56efu, &g_termux_pkg_names[g_termux_pkg_name_offs[1571u]]), /* ranger */
#else
  RAF_PKG_INIT(0x8867dfe0u, 6u, 0u, 0x769c56efu, 0), /* ranger */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7c1b3977u, 9u, 0u, 0xa1a9c476u, &g_termux_pkg_names[g_termux_pkg_name_offs[1572u]]), /* rapidjson */
#else
  RAF_PKG_INIT(0x7c1b3977u, 9u, 0u, 0xa1a9c476u, 0), /* rapidjson */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9d8381a4u, 4u, 0u, 0x5c008b2bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1573u]]), /* ratt */
#else
  RAF_PKG_INIT(0x9d8381a4u, 4u, 0u, 0x5c008b2bu, 0), /* ratt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcb20f214u, 9u, 0u, 0x0eb2a845u, &g_termux_pkg_names[g_termux_pkg_name_offs[1574u]]), /* ravencoin */
#else
  RAF_PKG_INIT(0xcb20f214u, 9u, 0u, 0x0eb2a845u, 0), /* ravencoin */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3405b586u, 3u, 0u, 0x8b81e95bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1575u]]), /* rbw */
#else
  RAF_PKG_INIT(0x3405b586u, 3u, 0u, 0x8b81e95bu, 0), /* rbw */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5e547ec2u, 2u, 0u, 0x05187801u, &g_termux_pkg_names[g_termux_pkg_name_offs[1576u]]), /* rc */
#else
  RAF_PKG_INIT(0x5e547ec2u, 2u, 0u, 0x05187801u, 0), /* rc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb23ab732u, 6u, 0u, 0x0c755635u, &g_termux_pkg_names[g_termux_pkg_name_offs[1577u]]), /* rclone */
#else
  RAF_PKG_INIT(0xb23ab732u, 6u, 0u, 0x0c755635u, 0), /* rclone */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2e036d7du, 3u, 0u, 0x71859204u, &g_termux_pkg_names[g_termux_pkg_name_offs[1578u]]), /* rcm */
#else
  RAF_PKG_INIT(0x2e036d7du, 3u, 0u, 0x71859204u, 0), /* rcm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x300370a3u, 3u, 0u, 0x77859b76u, &g_termux_pkg_names[g_termux_pkg_name_offs[1579u]]), /* rcs */
#else
  RAF_PKG_INIT(0x300370a3u, 3u, 0u, 0x77859b76u, 0), /* rcs */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xacb72320u, 6u, 0u, 0xca6c40c7u, &g_termux_pkg_names[g_termux_pkg_name_offs[1580u]]), /* rdfind */
#else
  RAF_PKG_INIT(0xacb72320u, 6u, 0u, 0xca6c40c7u, 0), /* rdfind */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x198c659fu, 12u, 0u, 0x914dd810u, &g_termux_pkg_names[g_termux_pkg_name_offs[1581u]]), /* rdiff-backup */
#else
  RAF_PKG_INIT(0x198c659fu, 12u, 0u, 0x914dd810u, 0), /* rdiff-backup */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb67426f3u, 6u, 0u, 0xf1f2cd80u, &g_termux_pkg_names[g_termux_pkg_name_offs[1582u]]), /* rdircd */
#else
  RAF_PKG_INIT(0xb67426f3u, 6u, 0u, 0xf1f2cd80u, 0), /* rdircd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd1e31be6u, 7u, 0u, 0xa37be23bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1583u]]), /* rdrview */
#else
  RAF_PKG_INIT(0xd1e31be6u, 7u, 0u, 0xa37be23bu, 0), /* rdrview */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd058a53fu, 4u, 0u, 0x04dd1004u, &g_termux_pkg_names[g_termux_pkg_name_offs[1584u]]), /* re2c */
#else
  RAF_PKG_INIT(0xd058a53fu, 4u, 0u, 0x04dd1004u, 0), /* re2c */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x48487c27u, 8u, 0u, 0x29e07950u, &g_termux_pkg_names[g_termux_pkg_name_offs[1585u]]), /* readline */
#else
  RAF_PKG_INIT(0x48487c27u, 8u, 0u, 0x29e07950u, 0), /* readline */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5e680da5u, 6u, 0u, 0x81c805c6u, &g_termux_pkg_names[g_termux_pkg_name_offs[1586u]]), /* recode */
#else
  RAF_PKG_INIT(0x5e680da5u, 6u, 0u, 0x81c805c6u, 0), /* recode */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x857bd2c2u, 6u, 0u, 0x8ab2f939u, &g_termux_pkg_names[g_termux_pkg_name_offs[1587u]]), /* recoll */
#else
  RAF_PKG_INIT(0x857bd2c2u, 6u, 0u, 0x8ab2f939u, 0), /* recoll */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbfe3d1a2u, 8u, 0u, 0x52184619u, &g_termux_pkg_names[g_termux_pkg_name_offs[1588u]]), /* recutils */
#else
  RAF_PKG_INIT(0xbfe3d1a2u, 8u, 0u, 0x52184619u, 0), /* recutils */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb7088b27u, 5u, 0u, 0xa589dce6u, &g_termux_pkg_names[g_termux_pkg_name_offs[1589u]]), /* redir */
#else
  RAF_PKG_INIT(0xb7088b27u, 5u, 0u, 0xa589dce6u, 0), /* redir */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb6088994u, 5u, 0u, 0xa689de79u, &g_termux_pkg_names[g_termux_pkg_name_offs[1590u]]), /* redis */
#else
  RAF_PKG_INIT(0xb6088994u, 5u, 0u, 0xa689de79u, 0), /* redis */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6404eeb8u, 6u, 0u, 0x093b423fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1591u]]), /* remind */
#else
  RAF_PKG_INIT(0x6404eeb8u, 6u, 0u, 0x093b423fu, 0), /* remind */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x23f51b4cu, 11u, 0u, 0x7c20dee1u, &g_termux_pkg_names[g_termux_pkg_name_offs[1592u]]), /* renameutils */
#else
  RAF_PKG_INIT(0x23f51b4cu, 11u, 0u, 0x7c20dee1u, 0), /* renameutils */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3e4a3757u, 6u, 0u, 0x1a3ca6c4u, &g_termux_pkg_names[g_termux_pkg_name_offs[1593u]]), /* reptyr */
#else
  RAF_PKG_INIT(0x3e4a3757u, 6u, 0u, 0x1a3ca6c4u, 0), /* reptyr */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x458c06d5u, 11u, 0u, 0x3b15a088u, &g_termux_pkg_names[g_termux_pkg_name_offs[1594u]]), /* resolv-conf */
#else
  RAF_PKG_INIT(0x458c06d5u, 11u, 0u, 0x3b15a088u, 0), /* resolv-conf */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8625453bu, 6u, 0u, 0x36d9cbc0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1595u]]), /* restic */
#else
  RAF_PKG_INIT(0x8625453bu, 6u, 0u, 0x36d9cbc0u, 0), /* restic */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9b6a24d5u, 13u, 0u, 0x186985ccu, &g_termux_pkg_names[g_termux_pkg_name_offs[1596u]]), /* restic-server */
#else
  RAF_PKG_INIT(0x9b6a24d5u, 13u, 0u, 0x186985ccu, 0), /* restic-server */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5f84dfd9u, 7u, 0u, 0x2102db48u, &g_termux_pkg_names[g_termux_pkg_name_offs[1597u]]), /* restish */
#else
  RAF_PKG_INIT(0x5f84dfd9u, 7u, 0u, 0x2102db48u, 0), /* restish */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5ab54461u, 5u, 0u, 0x7ea9b378u, &g_termux_pkg_names[g_termux_pkg_name_offs[1598u]]), /* rgbds */
#else
  RAF_PKG_INIT(0x5ab54461u, 5u, 0u, 0x7ea9b378u, 0), /* rgbds */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0cad6d01u, 5u, 0u, 0x69de3b28u, &g_termux_pkg_names[g_termux_pkg_name_offs[1599u]]), /* rhash */
#else
  RAF_PKG_INIT(0x0cad6d01u, 5u, 0u, 0x69de3b28u, 0), /* rhash */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x44129aa9u, 3u, 0u, 0x6b6bf0acu, &g_termux_pkg_names[g_termux_pkg_name_offs[1600u]]), /* rig */
#else
  RAF_PKG_INIT(0x44129aa9u, 3u, 0u, 0x6b6bf0acu, 0), /* rig */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3b951081u, 6u, 0u, 0xf2c333a6u, &g_termux_pkg_names[g_termux_pkg_name_offs[1601u]]), /* rinetd */
#else
  RAF_PKG_INIT(0x3b951081u, 6u, 0u, 0xf2c333a6u, 0), /* rinetd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xca249a9au, 4u, 0u, 0x331159a1u, &g_termux_pkg_names[g_termux_pkg_name_offs[1602u]]), /* rip2 */
#else
  RAF_PKG_INIT(0xca249a9au, 4u, 0u, 0x331159a1u, 0), /* rip2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x162b75acu, 7u, 0u, 0x26ef3a65u, &g_termux_pkg_names[g_termux_pkg_name_offs[1603u]]), /* ripgrep */
#else
  RAF_PKG_INIT(0x162b75acu, 7u, 0u, 0x26ef3a65u, 0), /* ripgrep */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xefb16da6u, 11u, 0u, 0x27efb35bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1604u]]), /* ripgrep-all */
#else
  RAF_PKG_INIT(0xefb16da6u, 11u, 0u, 0x27efb35bu, 0), /* ripgrep-all */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x47f4afb9u, 10u, 0u, 0x3db7b25au, &g_termux_pkg_names[g_termux_pkg_name_offs[1605u]]), /* ripsecrets */
#else
  RAF_PKG_INIT(0x47f4afb9u, 10u, 0u, 0x3db7b25au, 0), /* ripsecrets */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x03297183u, 4u, 0u, 0xd20c43c0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1606u]]), /* rirc */
#else
  RAF_PKG_INIT(0x03297183u, 4u, 0u, 0xd20c43c0u, 0), /* rirc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6dc666d5u, 5u, 0u, 0xde75fd68u, &g_termux_pkg_names[g_termux_pkg_name_offs[1607u]]), /* rizin */
#else
  RAF_PKG_INIT(0x6dc666d5u, 5u, 0u, 0xde75fd68u, 0), /* rizin */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd4f31e2bu, 6u, 0u, 0x77b021c8u, &g_termux_pkg_names[g_termux_pkg_name_offs[1608u]]), /* rlwrap */
#else
  RAF_PKG_INIT(0xd4f31e2bu, 6u, 0u, 0x77b021c8u, 0), /* rlwrap */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3e9b69b1u, 4u, 0u, 0x9ee8770au, &g_termux_pkg_names[g_termux_pkg_name_offs[1609u]]), /* rmpc */
#else
  RAF_PKG_INIT(0x3e9b69b1u, 4u, 0u, 0x9ee8770au, 0), /* rmpc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x31103e29u, 3u, 0u, 0x7678cdf0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1610u]]), /* rnr */
#else
  RAF_PKG_INIT(0x31103e29u, 3u, 0u, 0x7678cdf0u, 0), /* rnr */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc0b4160cu, 9u, 0u, 0x079a7495u, &g_termux_pkg_names[g_termux_pkg_name_offs[1611u]]), /* robin-map */
#else
  RAF_PKG_INIT(0xc0b4160cu, 9u, 0u, 0x079a7495u, 0), /* robin-map */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1b3d6ffeu, 16u, 0u, 0x66652c11u, &g_termux_pkg_names[g_termux_pkg_name_offs[1612u]]), /* robotfindskitten */
#else
  RAF_PKG_INIT(0x1b3d6ffeu, 16u, 0u, 0x66652c11u, 0), /* robotfindskitten */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbf92ef64u, 9u, 0u, 0xb00c31f1u, &g_termux_pkg_names[g_termux_pkg_name_offs[1613u]]), /* root-repo */
#else
  RAF_PKG_INIT(0xbf92ef64u, 9u, 0u, 0xb00c31f1u, 0), /* root-repo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf1d75bf6u, 8u, 0u, 0x60f2d331u, &g_termux_pkg_names[g_termux_pkg_name_offs[1614u]]), /* rp-pppoe */
#else
  RAF_PKG_INIT(0xf1d75bf6u, 8u, 0u, 0x60f2d331u, 0), /* rp-pppoe */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4dd8bed6u, 3u, 0u, 0x9156662fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1615u]]), /* rpm */
#else
  RAF_PKG_INIT(0x4dd8bed6u, 3u, 0u, 0x9156662fu, 0), /* rpm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4c54626cu, 2u, 0u, 0xf3185babu, &g_termux_pkg_names[g_termux_pkg_name_offs[1616u]]), /* rq */
#else
  RAF_PKG_INIT(0x4c54626cu, 2u, 0u, 0xf3185babu, 0), /* rq */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x405db455u, 6u, 0u, 0x9a3a15dau, &g_termux_pkg_names[g_termux_pkg_name_offs[1617u]]), /* rsgain */
#else
  RAF_PKG_INIT(0x405db455u, 6u, 0u, 0x9a3a15dau, 0), /* rsgain */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdb2a865du, 9u, 0u, 0x384d529cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1618u]]), /* rsnapshot */
#else
  RAF_PKG_INIT(0xdb2a865du, 9u, 0u, 0x384d529cu, 0), /* rsnapshot */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2553c66au, 5u, 0u, 0x255087d3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1619u]]), /* rsync */
#else
  RAF_PKG_INIT(0x2553c66au, 5u, 0u, 0x255087d3u, 0), /* rsync */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x28575fdcu, 8u, 0u, 0x9cc1b2dbu, &g_termux_pkg_names[g_termux_pkg_name_offs[1620u]]), /* rtmpdump */
#else
  RAF_PKG_INIT(0x28575fdcu, 8u, 0u, 0x9cc1b2dbu, 0), /* rtmpdump */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1c83eff5u, 8u, 0u, 0xcb4e3286u, &g_termux_pkg_names[g_termux_pkg_name_offs[1621u]]), /* rtorrent */
#else
  RAF_PKG_INIT(0x1c83eff5u, 8u, 0u, 0xcb4e3286u, 0), /* rtorrent */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6670e84cu, 10u, 0u, 0x2740d7ebu, &g_termux_pkg_names[g_termux_pkg_name_offs[1622u]]), /* rubberband */
#else
  RAF_PKG_INIT(0x6670e84cu, 10u, 0u, 0x2740d7ebu, 0), /* rubberband */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x729966f7u, 11u, 0u, 0x1dc380a2u, &g_termux_pkg_names[g_termux_pkg_name_offs[1623u]]), /* rubiks-cube */
#else
  RAF_PKG_INIT(0x729966f7u, 11u, 0u, 0x1dc380a2u, 0), /* rubiks-cube */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1c14db4du, 4u, 0u, 0x3fabaa42u, &g_termux_pkg_names[g_termux_pkg_name_offs[1624u]]), /* ruby */
#else
  RAF_PKG_INIT(0x1c14db4du, 4u, 0u, 0x3fabaa42u, 0), /* ruby */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1d1f6a3cu, 4u, 0u, 0x22a0ef3fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1625u]]), /* ruff */
#else
  RAF_PKG_INIT(0x1d1f6a3cu, 4u, 0u, 0x22a0ef3fu, 0), /* ruff */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x88f57317u, 5u, 0u, 0x23730ae6u, &g_termux_pkg_names[g_termux_pkg_name_offs[1626u]]), /* runit */
#else
  RAF_PKG_INIT(0x88f57317u, 5u, 0u, 0x23730ae6u, 0), /* runit */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x013f91d3u, 4u, 0u, 0x2a80a82cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1627u]]), /* rush */
#else
  RAF_PKG_INIT(0x013f91d3u, 4u, 0u, 0x2a80a82cu, 0), /* rush */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1d3fbde7u, 4u, 0u, 0x3e80c7a8u, &g_termux_pkg_names[g_termux_pkg_name_offs[1628u]]), /* rust */
#else
  RAF_PKG_INIT(0x1d3fbde7u, 4u, 0u, 0x3e80c7a8u, 0), /* rust */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc9e09744u, 13u, 0u, 0xfb3bb4b1u, &g_termux_pkg_names[g_termux_pkg_name_offs[1629u]]), /* rust-analyzer */
#else
  RAF_PKG_INIT(0xc9e09744u, 13u, 0u, 0xfb3bb4b1u, 0), /* rust-analyzer */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x14dd9e6du, 12u, 0u, 0x893475e2u, &g_termux_pkg_names[g_termux_pkg_name_offs[1630u]]), /* rust-bindgen */
#else
  RAF_PKG_INIT(0x14dd9e6du, 12u, 0u, 0x893475e2u, 0), /* rust-bindgen */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9c31f01eu, 8u, 0u, 0x90611211u, &g_termux_pkg_names[g_termux_pkg_name_offs[1631u]]), /* rustscan */
#else
  RAF_PKG_INIT(0x9c31f01eu, 8u, 0u, 0x90611211u, 0), /* rustscan */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd584ca31u, 7u, 0u, 0x12cb7f08u, &g_termux_pkg_names[g_termux_pkg_name_offs[1632u]]), /* rxfetch */
#else
  RAF_PKG_INIT(0xd584ca31u, 7u, 0u, 0x12cb7f08u, 0), /* rxfetch */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf2fa3f73u, 7u, 0u, 0x3d40b17au, &g_termux_pkg_names[g_termux_pkg_name_offs[1633u]]), /* sabnzbd */
#else
  RAF_PKG_INIT(0xf2fa3f73u, 7u, 0u, 0x3d40b17au, 0), /* sabnzbd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2465d7a1u, 5u, 0u, 0xea152e70u, &g_termux_pkg_names[g_termux_pkg_name_offs[1634u]]), /* samba */
#else
  RAF_PKG_INIT(0x2465d7a1u, 5u, 0u, 0xea152e70u, 0), /* samba */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xabca1ad5u, 8u, 0u, 0x4f89e512u, &g_termux_pkg_names[g_termux_pkg_name_offs[1635u]]), /* samefile */
#else
  RAF_PKG_INIT(0xabca1ad5u, 8u, 0u, 0x4f89e512u, 0), /* samefile */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdbef1585u, 7u, 0u, 0x41a4c980u, &g_termux_pkg_names[g_termux_pkg_name_offs[1636u]]), /* samurai */
#else
  RAF_PKG_INIT(0xdbef1585u, 7u, 0u, 0x41a4c980u, 0), /* samurai */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xda70ef1cu, 5u, 0u, 0x5678f65du, &g_termux_pkg_names[g_termux_pkg_name_offs[1637u]]), /* sassc */
#else
  RAF_PKG_INIT(0xda70ef1cu, 5u, 0u, 0x5678f65du, 0), /* sassc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x800a378fu, 4u, 0u, 0x82958f7cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1638u]]), /* sbcl */
#else
  RAF_PKG_INIT(0x800a378fu, 4u, 0u, 0x82958f7cu, 0), /* sbcl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x57006c8cu, 5u, 0u, 0xee14b76du, &g_termux_pkg_names[g_termux_pkg_name_offs[1639u]]), /* sc-im */
#else
  RAF_PKG_INIT(0x57006c8cu, 5u, 0u, 0xee14b76du, 0), /* sc-im */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x869722bdu, 5u, 0u, 0xd367dbdcu, &g_termux_pkg_names[g_termux_pkg_name_offs[1640u]]), /* scala */
#else
  RAF_PKG_INIT(0x869722bdu, 5u, 0u, 0xd367dbdcu, 0), /* scala */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd31810f0u, 3u, 0u, 0x0638c441u, &g_termux_pkg_names[g_termux_pkg_name_offs[1641u]]), /* scc */
#else
  RAF_PKG_INIT(0xd31810f0u, 3u, 0u, 0x0638c441u, 0), /* scc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd434d047u, 7u, 0u, 0x30f5d992u, &g_termux_pkg_names[g_termux_pkg_name_offs[1642u]]), /* sccache */
#else
  RAF_PKG_INIT(0xd434d047u, 7u, 0u, 0x30f5d992u, 0), /* sccache */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa33e1d77u, 5u, 0u, 0xf2f9a226u, &g_termux_pkg_names[g_termux_pkg_name_offs[1643u]]), /* scdoc */
#else
  RAF_PKG_INIT(0xa33e1d77u, 5u, 0u, 0xf2f9a226u, 0), /* scdoc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x55c54c11u, 6u, 0u, 0x370e1ba6u, &g_termux_pkg_names[g_termux_pkg_name_offs[1644u]]), /* screen */
#else
  RAF_PKG_INIT(0x55c54c11u, 6u, 0u, 0x370e1ba6u, 0), /* screen */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0f87092fu, 11u, 0u, 0x00c6fb3au, &g_termux_pkg_names[g_termux_pkg_name_offs[1645u]]), /* screenfetch */
#else
  RAF_PKG_INIT(0x0f87092fu, 11u, 0u, 0x00c6fb3au, 0), /* screenfetch */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4edd1710u, 5u, 0u, 0x6ae26449u, &g_termux_pkg_names[g_termux_pkg_name_offs[1646u]]), /* scrub */
#else
  RAF_PKG_INIT(0x4edd1710u, 5u, 0u, 0x6ae26449u, 0), /* scrub */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x52c0effau, 6u, 0u, 0xd1293d41u, &g_termux_pkg_names[g_termux_pkg_name_offs[1647u]]), /* scrypt */
#else
  RAF_PKG_INIT(0x52c0effau, 6u, 0u, 0xd1293d41u, 0), /* scrypt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3b520912u, 2u, 0u, 0xec1c223du, &g_termux_pkg_names[g_termux_pkg_name_offs[1648u]]), /* sd */
#else
  RAF_PKG_INIT(0x3b520912u, 2u, 0u, 0xec1c223du, 0), /* sd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf8073e8fu, 4u, 0u, 0x0aa63764u, &g_termux_pkg_names[g_termux_pkg_name_offs[1649u]]), /* sdcv */
#else
  RAF_PKG_INIT(0xf8073e8fu, 4u, 0u, 0x0aa63764u, 0), /* sdcv */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6ad61a6eu, 14u, 0u, 0x7ed9a5adu, &g_termux_pkg_names[g_termux_pkg_name_offs[1650u]]), /* seafile-client */
#else
  RAF_PKG_INIT(0x6ad61a6eu, 14u, 0u, 0x7ed9a5adu, 0), /* seafile-client */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8f6bbecfu, 7u, 0u, 0xb0eab522u, &g_termux_pkg_names[g_termux_pkg_name_offs[1651u]]), /* seanime */
#else
  RAF_PKG_INIT(0x8f6bbecfu, 7u, 0u, 0xb0eab522u, 0), /* seanime */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8e77502fu, 7u, 0u, 0x4de1896eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1652u]]), /* seccure */
#else
  RAF_PKG_INIT(0x8e77502fu, 7u, 0u, 0x4de1896eu, 0), /* seccure */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc26b7af4u, 13u, 0u, 0x380e1049u, &g_termux_pkg_names[g_termux_pkg_name_offs[1653u]]), /* secure-delete */
#else
  RAF_PKG_INIT(0xc26b7af4u, 13u, 0u, 0x380e1049u, 0), /* secure-delete */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb626edd3u, 3u, 0u, 0xeb47a44au, &g_termux_pkg_names[g_termux_pkg_name_offs[1654u]]), /* sed */
#else
  RAF_PKG_INIT(0xb626edd3u, 3u, 0u, 0xeb47a44au, 0), /* sed */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7e4b2fb9u, 6u, 0u, 0x2ece7b9eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1655u]]), /* sendme */
#else
  RAF_PKG_INIT(0x7e4b2fb9u, 6u, 0u, 0x2ece7b9eu, 0), /* sendme */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x53e8c208u, 8u, 0u, 0x6cf5fd0fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1656u]]), /* sendxmpp */
#else
  RAF_PKG_INIT(0x53e8c208u, 8u, 0u, 0x6cf5fd0fu, 0), /* sendxmpp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x28642bedu, 6u, 0u, 0xacde60d2u, &g_termux_pkg_names[g_termux_pkg_name_offs[1657u]]), /* senpai */
#else
  RAF_PKG_INIT(0x28642bedu, 6u, 0u, 0xacde60d2u, 0), /* senpai */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0226a1b6u, 14u, 0u, 0x6c6153f5u, &g_termux_pkg_names[g_termux_pkg_name_offs[1658u]]), /* sensible-utils */
#else
  RAF_PKG_INIT(0x0226a1b6u, 14u, 0u, 0x6c6153f5u, 0), /* sensible-utils */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x727e4ac3u, 4u, 0u, 0x8be10604u, &g_termux_pkg_names[g_termux_pkg_name_offs[1659u]]), /* serd */
#else
  RAF_PKG_INIT(0x727e4ac3u, 4u, 0u, 0x8be10604u, 0), /* serd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x747e4de9u, 4u, 0u, 0x8de1092au, &g_termux_pkg_names[g_termux_pkg_name_offs[1660u]]), /* serf */
#else
  RAF_PKG_INIT(0x747e4de9u, 4u, 0u, 0x8de1092au, 0), /* serf */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6252fa6au, 5u, 0u, 0x0db004f7u, &g_termux_pkg_names[g_termux_pkg_name_offs[1661u]]), /* sfeed */
#else
  RAF_PKG_INIT(0x6252fa6au, 5u, 0u, 0x0db004f7u, 0), /* sfeed */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x24e7f4b6u, 6u, 0u, 0xcf4ad871u, &g_termux_pkg_names[g_termux_pkg_name_offs[1662u]]), /* sftpgo */
#else
  RAF_PKG_INIT(0x24e7f4b6u, 6u, 0u, 0xcf4ad871u, 0), /* sftpgo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0cece051u, 7u, 0u, 0x51fec930u, &g_termux_pkg_names[g_termux_pkg_name_offs[1663u]]), /* shaderc */
#else
  RAF_PKG_INIT(0x0cece051u, 7u, 0u, 0x51fec930u, 0), /* shaderc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x27c78be6u, 9u, 0u, 0xfa42866bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1664u]]), /* sharutils */
#else
  RAF_PKG_INIT(0x27c78be6u, 9u, 0u, 0xfa42866bu, 0), /* sharutils */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xeb2dfd07u, 3u, 0u, 0x062bf84eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1665u]]), /* shc */
#else
  RAF_PKG_INIT(0xeb2dfd07u, 3u, 0u, 0x062bf84eu, 0), /* shc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x259f5e14u, 7u, 0u, 0x9c5d4c8du, &g_termux_pkg_names[g_termux_pkg_name_offs[1666u]]), /* sheldon */
#else
  RAF_PKG_INIT(0x259f5e14u, 7u, 0u, 0x9c5d4c8du, 0), /* sheldon */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6c27e7e9u, 10u, 0u, 0xff88b1b2u, &g_termux_pkg_names[g_termux_pkg_name_offs[1667u]]), /* shell2http */
#else
  RAF_PKG_INIT(0x6c27e7e9u, 10u, 0u, 0xff88b1b2u, 0), /* shell2http */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x19d8e8a3u, 10u, 0u, 0x24796d64u, &g_termux_pkg_names[g_termux_pkg_name_offs[1668u]]), /* shellcheck */
#else
  RAF_PKG_INIT(0x19d8e8a3u, 10u, 0u, 0x24796d64u, 0), /* shellcheck */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x57646963u, 11u, 0u, 0x71b380a6u, &g_termux_pkg_names[g_termux_pkg_name_offs[1669u]]), /* shellharden */
#else
  RAF_PKG_INIT(0x57646963u, 11u, 0u, 0x71b380a6u, 0), /* shellharden */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x55820a56u, 11u, 0u, 0xd706c573u, &g_termux_pkg_names[g_termux_pkg_name_offs[1670u]]), /* shellinabox */
#else
  RAF_PKG_INIT(0x55820a56u, 11u, 0u, 0xd706c573u, 0), /* shellinabox */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc446f2f1u, 5u, 0u, 0x01aa875cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1671u]]), /* shfmt */
#else
  RAF_PKG_INIT(0xc446f2f1u, 5u, 0u, 0x01aa875cu, 0), /* shfmt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x82bb21e7u, 6u, 0u, 0xee20032cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1672u]]), /* shiori */
#else
  RAF_PKG_INIT(0x82bb21e7u, 6u, 0u, 0xee20032cu, 0), /* shiori */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8234630au, 7u, 0u, 0x4a4fcf77u, &g_termux_pkg_names[g_termux_pkg_name_offs[1673u]]), /* shntool */
#else
  RAF_PKG_INIT(0x8234630au, 7u, 0u, 0x4a4fcf77u, 0), /* shntool */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3f5a4e98u, 6u, 0u, 0x55b2058bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1674u]]), /* shtool */
#else
  RAF_PKG_INIT(0x3f5a4e98u, 6u, 0u, 0x55b2058bu, 0), /* shtool */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x246c760eu, 7u, 0u, 0xcf2ac607u, &g_termux_pkg_names[g_termux_pkg_name_offs[1675u]]), /* signify */
#else
  RAF_PKG_INIT(0x246c760eu, 7u, 0u, 0xcf2ac607u, 0), /* signify */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6d659926u, 7u, 0u, 0xa68a897bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1676u]]), /* silicon */
#else
  RAF_PKG_INIT(0x6d659926u, 7u, 0u, 0xa68a897bu, 0), /* silicon */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1c81b08au, 17u, 0u, 0xd56a8c0bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1677u]]), /* silversearcher-ag */
#else
  RAF_PKG_INIT(0x1c81b08au, 17u, 0u, 0xd56a8c0bu, 0), /* silversearcher-ag */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7bb3c4efu, 5u, 0u, 0xdfc18e9eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1678u]]), /* simde */
#else
  RAF_PKG_INIT(0x7bb3c4efu, 5u, 0u, 0xdfc18e9eu, 0), /* simde */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa993b362u, 8u, 0u, 0x239c74edu, &g_termux_pkg_names[g_termux_pkg_name_offs[1679u]]), /* simdjson */
#else
  RAF_PKG_INIT(0xa993b362u, 8u, 0u, 0x239c74edu, 0), /* simdjson */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2ecbcbb4u, 4u, 0u, 0x865b581bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1680u]]), /* simh */
#else
  RAF_PKG_INIT(0x2ecbcbb4u, 4u, 0u, 0x865b581bu, 0), /* simh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x143c86ccu, 8u, 0u, 0xd37a8137u, &g_termux_pkg_names[g_termux_pkg_name_offs[1681u]]), /* simulavr */
#else
  RAF_PKG_INIT(0x143c86ccu, 8u, 0u, 0xd37a8137u, 0), /* simulavr */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x88ceb526u, 8u, 0u, 0x131cb2a9u, &g_termux_pkg_names[g_termux_pkg_name_offs[1682u]]), /* sing-box */
#else
  RAF_PKG_INIT(0x88ceb526u, 8u, 0u, 0x131cb2a9u, 0), /* sing-box */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3a0ffee1u, 5u, 0u, 0xdcb47080u, &g_termux_pkg_names[g_termux_pkg_name_offs[1683u]]), /* skate */
#else
  RAF_PKG_INIT(0x3a0ffee1u, 5u, 0u, 0xdcb47080u, 0), /* skate */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x435215aau, 2u, 0u, 0xe41c15a5u, &g_termux_pkg_names[g_termux_pkg_name_offs[1684u]]), /* sl */
#else
  RAF_PKG_INIT(0x435215aau, 2u, 0u, 0xe41c15a5u, 0), /* sl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcebb50beu, 5u, 0u, 0x1d5f5173u, &g_termux_pkg_names[g_termux_pkg_name_offs[1685u]]), /* slang */
#else
  RAF_PKG_INIT(0xcebb50beu, 5u, 0u, 0x1d5f5173u, 0), /* slang */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe7e4524bu, 9u, 0u, 0x26275eeeu, &g_termux_pkg_names[g_termux_pkg_name_offs[1686u]]), /* slashtime */
#else
  RAF_PKG_INIT(0xe7e4524bu, 9u, 0u, 0x26275eeeu, 0), /* slashtime */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x83b704b8u, 9u, 0u, 0x3be7590du, &g_termux_pkg_names[g_termux_pkg_name_offs[1687u]]), /* sleuthkit */
#else
  RAF_PKG_INIT(0x83b704b8u, 9u, 0u, 0x3be7590du, 0), /* sleuthkit */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6fac698fu, 6u, 0u, 0x7a436e24u, &g_termux_pkg_names[g_termux_pkg_name_offs[1688u]]), /* slides */
#else
  RAF_PKG_INIT(0x6fac698fu, 6u, 0u, 0x7a436e24u, 0), /* slides */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x30e7af50u, 7u, 0u, 0x6890965du, &g_termux_pkg_names[g_termux_pkg_name_offs[1689u]]), /* slugify */
#else
  RAF_PKG_INIT(0x30e7af50u, 7u, 0u, 0x6890965du, 0), /* slugify */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9ba602eau, 9u, 0u, 0xba9c99c3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1690u]]), /* smalltalk */
#else
  RAF_PKG_INIT(0x9ba602eau, 9u, 0u, 0xba9c99c3u, 0), /* smalltalk */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8edd3736u, 15u, 0u, 0x399d3723u, &g_termux_pkg_names[g_termux_pkg_name_offs[1691u]]), /* snapcast-server */
#else
  RAF_PKG_INIT(0x8edd3736u, 15u, 0u, 0x399d3723u, 0), /* snapcast-server */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcdffb6a1u, 6u, 0u, 0x27b8b3d2u, &g_termux_pkg_names[g_termux_pkg_name_offs[1692u]]), /* snmptt */
#else
  RAF_PKG_INIT(0xcdffb6a1u, 6u, 0u, 0x27b8b3d2u, 0), /* snmptt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x91fe08e7u, 9u, 0u, 0x4b456822u, &g_termux_pkg_names[g_termux_pkg_name_offs[1693u]]), /* snowflake */
#else
  RAF_PKG_INIT(0x91fe08e7u, 9u, 0u, 0x4b456822u, 0), /* snowflake */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9d815c49u, 5u, 0u, 0x3c3256c0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1694u]]), /* socat */
#else
  RAF_PKG_INIT(0x9d815c49u, 5u, 0u, 0x3c3256c0u, 0), /* socat */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8b74ff1eu, 13u, 0u, 0xb01f7da3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1695u]]), /* softether-vpn */
#else
  RAF_PKG_INIT(0x8b74ff1eu, 13u, 0u, 0xb01f7da3u, 0), /* softether-vpn */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf367d836u, 4u, 0u, 0x4e6dfa85u, &g_termux_pkg_names[g_termux_pkg_name_offs[1696u]]), /* soju */
#else
  RAF_PKG_INIT(0xf367d836u, 4u, 0u, 0x4e6dfa85u, 0), /* soju */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe21afa70u, 8u, 0u, 0xfbbe8733u, &g_termux_pkg_names[g_termux_pkg_name_offs[1697u]]), /* solidity */
#else
  RAF_PKG_INIT(0xe21afa70u, 8u, 0u, 0xfbbe8733u, 0), /* solidity */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf531c162u, 4u, 0u, 0x50a5aaa5u, &g_termux_pkg_names[g_termux_pkg_name_offs[1698u]]), /* sops */
#else
  RAF_PKG_INIT(0xf531c162u, 4u, 0u, 0x50a5aaa5u, 0), /* sops */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x142be201u, 4u, 0u, 0x6daa557au, &g_termux_pkg_names[g_termux_pkg_name_offs[1699u]]), /* sord */
#else
  RAF_PKG_INIT(0x142be201u, 4u, 0u, 0x6daa557au, 0), /* sord */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3ac04fb7u, 23u, 0u, 0x34bdf9fau, &g_termux_pkg_names[g_termux_pkg_name_offs[1700u]]), /* sound-theme-freedesktop */
#else
  RAF_PKG_INIT(0x3ac04fb7u, 23u, 0u, 0x34bdf9fau, 0), /* sound-theme-freedesktop */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd6362abdu, 3u, 0u, 0xf32e18fcu, &g_termux_pkg_names[g_termux_pkg_name_offs[1701u]]), /* sox */
#else
  RAF_PKG_INIT(0xd6362abdu, 3u, 0u, 0xf32e18fcu, 0), /* sox */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x099606d7u, 16u, 0u, 0xaebc7378u, &g_termux_pkg_names[g_termux_pkg_name_offs[1702u]]), /* spatialite-tools */
#else
  RAF_PKG_INIT(0x099606d7u, 16u, 0u, 0xaebc7378u, 0), /* spatialite-tools */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1b360609u, 7u, 0u, 0x612552bcu, &g_termux_pkg_names[g_termux_pkg_name_offs[1703u]]), /* speechd */
#else
  RAF_PKG_INIT(0x1b360609u, 7u, 0u, 0x612552bcu, 0), /* speechd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x75073471u, 12u, 0u, 0xc392920eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1704u]]), /* speedtest-go */
#else
  RAF_PKG_INIT(0x75073471u, 12u, 0u, 0xc392920eu, 0), /* speedtest-go */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x788940cbu, 8u, 0u, 0x0d4ddfd4u, &g_termux_pkg_names[g_termux_pkg_name_offs[1705u]]), /* speexdsp */
#else
  RAF_PKG_INIT(0x788940cbu, 8u, 0u, 0x0d4ddfd4u, 0), /* speexdsp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1f1db8bau, 6u, 0u, 0x99aac051u, &g_termux_pkg_names[g_termux_pkg_name_offs[1706u]]), /* spglib */
#else
  RAF_PKG_INIT(0x1f1db8bau, 6u, 0u, 0x99aac051u, 0), /* spglib */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x58cbceb1u, 12u, 0u, 0xf6be373au, &g_termux_pkg_names[g_termux_pkg_name_offs[1707u]]), /* spidermonkey */
#else
  RAF_PKG_INIT(0x58cbceb1u, 12u, 0u, 0xf6be373au, 0), /* spidermonkey */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd10a0c86u, 6u, 0u, 0xe1394c79u, &g_termux_pkg_names[g_termux_pkg_name_offs[1708u]]), /* spiped */
#else
  RAF_PKG_INIT(0xd10a0c86u, 6u, 0u, 0xe1394c79u, 0), /* spiped */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6f43a2f6u, 13u, 0u, 0x455943cfu, &g_termux_pkg_names[g_termux_pkg_name_offs[1709u]]), /* spirv-headers */
#else
  RAF_PKG_INIT(0x6f43a2f6u, 13u, 0u, 0x455943cfu, 0), /* spirv-headers */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2d6aa102u, 21u, 0u, 0x21aa50d7u, &g_termux_pkg_names[g_termux_pkg_name_offs[1710u]]), /* spirv-llvm-translator */
#else
  RAF_PKG_INIT(0x2d6aa102u, 21u, 0u, 0x21aa50d7u, 0), /* spirv-llvm-translator */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x447e8537u, 11u, 0u, 0xc09cc4aeu, &g_termux_pkg_names[g_termux_pkg_name_offs[1711u]]), /* spirv-tools */
#else
  RAF_PKG_INIT(0x447e8537u, 11u, 0u, 0xc09cc4aeu, 0), /* spirv-tools */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbc42069cu, 9u, 0u, 0x1ccdde4du, &g_termux_pkg_names[g_termux_pkg_name_offs[1712u]]), /* sqlcipher */
#else
  RAF_PKG_INIT(0xbc42069cu, 9u, 0u, 0x1ccdde4du, 0), /* sqlcipher */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1f828373u, 17u, 0u, 0x76759b1au, &g_termux_pkg_names[g_termux_pkg_name_offs[1713u]]), /* squashfs-tools-ng */
#else
  RAF_PKG_INIT(0x1f828373u, 17u, 0u, 0x76759b1au, 0), /* squashfs-tools-ng */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x947b58a3u, 11u, 0u, 0xcadc8766u, &g_termux_pkg_names[g_termux_pkg_name_offs[1714u]]), /* squeezelite */
#else
  RAF_PKG_INIT(0x947b58a3u, 11u, 0u, 0xcadc8766u, 0), /* squeezelite */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x45d2fa39u, 5u, 0u, 0x497e3574u, &g_termux_pkg_names[g_termux_pkg_name_offs[1715u]]), /* squid */
#else
  RAF_PKG_INIT(0x45d2fa39u, 5u, 0u, 0x497e3574u, 0), /* squid */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x35ed7239u, 6u, 0u, 0x86cbe65au, &g_termux_pkg_names[g_termux_pkg_name_offs[1716u]]), /* sratom */
#else
  RAF_PKG_INIT(0x35ed7239u, 6u, 0u, 0x86cbe65au, 0), /* sratom */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x179e0363u, 6u, 0u, 0xfc8d67c0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1717u]]), /* srelay */
#else
  RAF_PKG_INIT(0x179e0363u, 6u, 0u, 0xfc8d67c0u, 0), /* srelay */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbb8dee79u, 10u, 0u, 0xf57c0fdau, &g_termux_pkg_names[g_termux_pkg_name_offs[1718u]]), /* srt2vobsub */
#else
  RAF_PKG_INIT(0xbb8dee79u, 10u, 0u, 0xf57c0fdau, 0), /* srt2vobsub */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x98229d25u, 4u, 0u, 0xc18cd8f2u, &g_termux_pkg_names[g_termux_pkg_name_offs[1719u]]), /* ssdb */
#else
  RAF_PKG_INIT(0x98229d25u, 4u, 0u, 0xc18cd8f2u, 0), /* ssdb */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb36d5e3du, 6u, 0u, 0x88800c36u, &g_termux_pkg_names[g_termux_pkg_name_offs[1720u]]), /* ssdeep */
#else
  RAF_PKG_INIT(0xb36d5e3du, 6u, 0u, 0x88800c36u, 0), /* ssdeep */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9dfcfbc8u, 8u, 0u, 0xe5f6e56bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1721u]]), /* sse2neon */
#else
  RAF_PKG_INIT(0x9dfcfbc8u, 8u, 0u, 0xe5f6e56bu, 0), /* sse2neon */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3dc0c724u, 7u, 0u, 0x8ca34a39u, &g_termux_pkg_names[g_termux_pkg_name_offs[1722u]]), /* sshpass */
#else
  RAF_PKG_INIT(0x3dc0c724u, 7u, 0u, 0x8ca34a39u, 0), /* sshpass */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x805fc425u, 7u, 0u, 0xf7aa3cf8u, &g_termux_pkg_names[g_termux_pkg_name_offs[1723u]]), /* sshping */
#else
  RAF_PKG_INIT(0x805fc425u, 7u, 0u, 0xf7aa3cf8u, 0), /* sshping */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x168c6770u, 7u, 0u, 0x8d970d8du, &g_termux_pkg_names[g_termux_pkg_name_offs[1724u]]), /* sslscan */
#else
  RAF_PKG_INIT(0x168c6770u, 7u, 0u, 0x8d970d8du, 0), /* sslscan */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3a8f1461u, 7u, 0u, 0x572c10d8u, &g_termux_pkg_names[g_termux_pkg_name_offs[1725u]]), /* sssnake */
#else
  RAF_PKG_INIT(0x3a8f1461u, 7u, 0u, 0x572c10d8u, 0), /* sssnake */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9f386e79u, 4u, 0u, 0xcab34af6u, &g_termux_pkg_names[g_termux_pkg_name_offs[1726u]]), /* ssss */
#else
  RAF_PKG_INIT(0x9f386e79u, 4u, 0u, 0xcab34af6u, 0), /* ssss */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe43b4d5au, 4u, 0u, 0xb8cf5739u, &g_termux_pkg_names[g_termux_pkg_name_offs[1727u]]), /* stag */
#else
  RAF_PKG_INIT(0xe43b4d5au, 4u, 0u, 0xb8cf5739u, 0), /* stag */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x838378cbu, 8u, 0u, 0x576de828u, &g_termux_pkg_names[g_termux_pkg_name_offs[1728u]]), /* starship */
#else
  RAF_PKG_INIT(0x838378cbu, 8u, 0u, 0x576de828u, 0), /* starship */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0a915e7eu, 6u, 0u, 0x4c9a0245u, &g_termux_pkg_names[g_termux_pkg_name_offs[1729u]]), /* stdman */
#else
  RAF_PKG_INIT(0x0a915e7eu, 6u, 0u, 0x4c9a0245u, 0), /* stdman */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xec7ddf38u, 12u, 0u, 0xdf6e13dfu, &g_termux_pkg_names[g_termux_pkg_name_offs[1730u]]), /* stdoutisatty */
#else
  RAF_PKG_INIT(0xec7ddf38u, 12u, 0u, 0xdf6e13dfu, 0), /* stdoutisatty */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8fd53986u, 8u, 0u, 0xf46c1c55u, &g_termux_pkg_names[g_termux_pkg_name_offs[1731u]]), /* steghide */
#else
  RAF_PKG_INIT(0x8fd53986u, 8u, 0u, 0xf46c1c55u, 0), /* steghide */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x015c5980u, 8u, 0u, 0xd8130b03u, &g_termux_pkg_names[g_termux_pkg_name_offs[1732u]]), /* step-cli */
#else
  RAF_PKG_INIT(0x015c5980u, 8u, 0u, 0xd8130b03u, 0), /* step-cli */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb93d4840u, 4u, 0u, 0xdfcd5607u, &g_termux_pkg_names[g_termux_pkg_name_offs[1733u]]), /* stfl */
#else
  RAF_PKG_INIT(0xb93d4840u, 4u, 0u, 0xdfcd5607u, 0), /* stfl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9ff70753u, 9u, 0u, 0x956ccebeu, &g_termux_pkg_names[g_termux_pkg_name_offs[1734u]]), /* stockfish */
#else
  RAF_PKG_INIT(0x9ff70753u, 9u, 0u, 0x956ccebeu, 0), /* stockfish */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbb4ef5d7u, 6u, 0u, 0x6e263ce8u, &g_termux_pkg_names[g_termux_pkg_name_offs[1735u]]), /* stoken */
#else
  RAF_PKG_INIT(0xbb4ef5d7u, 6u, 0u, 0x6e263ce8u, 0), /* stoken */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc81958fau, 5u, 0u, 0x0aa7c707u, &g_termux_pkg_names[g_termux_pkg_name_offs[1736u]]), /* stone */
#else
  RAF_PKG_INIT(0xc81958fau, 5u, 0u, 0x0aa7c707u, 0), /* stone */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x68550fffu, 12u, 0u, 0x59e132a8u, &g_termux_pkg_names[g_termux_pkg_name_offs[1737u]]), /* storj-uplink */
#else
  RAF_PKG_INIT(0x68550fffu, 12u, 0u, 0x59e132a8u, 0), /* storj-uplink */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc4531fe0u, 4u, 0u, 0xc8b76b83u, &g_termux_pkg_names[g_termux_pkg_name_offs[1738u]]), /* stow */
#else
  RAF_PKG_INIT(0xc4531fe0u, 4u, 0u, 0xc8b76b83u, 0), /* stow */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9e934cffu, 6u, 0u, 0xbabaf480u, &g_termux_pkg_names[g_termux_pkg_name_offs[1739u]]), /* strace */
#else
  RAF_PKG_INIT(0x9e934cffu, 6u, 0u, 0xbabaf480u, 0), /* strace */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb4609203u, 12u, 0u, 0x4c745330u, &g_termux_pkg_names[g_termux_pkg_name_offs[1740u]]), /* streamripper */
#else
  RAF_PKG_INIT(0xb4609203u, 12u, 0u, 0x4c745330u, 0), /* streamripper */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5fa8240cu, 7u, 0u, 0x25e36c7du, &g_termux_pkg_names[g_termux_pkg_name_offs[1741u]]), /* stunnel */
#else
  RAF_PKG_INIT(0x5fa8240cu, 7u, 0u, 0x25e36c7du, 0), /* stunnel */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf02fd911u, 8u, 0u, 0x9ecd037eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1742u]]), /* stuntman */
#else
  RAF_PKG_INIT(0xf02fd911u, 8u, 0u, 0x9ecd037eu, 0), /* stuntman */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa7303845u, 6u, 0u, 0x0bbad4dau, &g_termux_pkg_names[g_termux_pkg_name_offs[1743u]]), /* stylua */
#else
  RAF_PKG_INIT(0xa7303845u, 6u, 0u, 0x0bbad4dau, 0), /* stylua */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x64327b1fu, 14u, 0u, 0xf974b714u, &g_termux_pkg_names[g_termux_pkg_name_offs[1744u]]), /* subtitleripper */
#else
  RAF_PKG_INIT(0x64327b1fu, 14u, 0u, 0xf974b714u, 0), /* subtitleripper */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbdab29e7u, 10u, 0u, 0x09c35494u, &g_termux_pkg_names[g_termux_pkg_name_offs[1745u]]), /* subversion */
#else
  RAF_PKG_INIT(0xbdab29e7u, 10u, 0u, 0x09c35494u, 0), /* subversion */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x29153e24u, 4u, 0u, 0x7494ca2fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1746u]]), /* sudo */
#else
  RAF_PKG_INIT(0x29153e24u, 4u, 0u, 0x7494ca2fu, 0), /* sudo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x462faf48u, 4u, 0u, 0x5378bfbfu, &g_termux_pkg_names[g_termux_pkg_name_offs[1747u]]), /* suil */
#else
  RAF_PKG_INIT(0x462faf48u, 4u, 0u, 0x5378bfbfu, 0), /* suil */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc849422du, 9u, 0u, 0xd8f47700u, &g_termux_pkg_names[g_termux_pkg_name_offs[1748u]]), /* suite3270 */
#else
  RAF_PKG_INIT(0xc849422du, 9u, 0u, 0xd8f47700u, 0), /* suite3270 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9427cc43u, 11u, 0u, 0x8ff549f2u, &g_termux_pkg_names[g_termux_pkg_name_offs[1749u]]), /* suitesparse */
#else
  RAF_PKG_INIT(0x9427cc43u, 11u, 0u, 0x8ff549f2u, 0), /* suitesparse */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe04e3f61u, 3u, 0u, 0x016ed65cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1750u]]), /* sun */
#else
  RAF_PKG_INIT(0xe04e3f61u, 3u, 0u, 0x016ed65cu, 0), /* sun */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5c518014u, 8u, 0u, 0x234d4167u, &g_termux_pkg_names[g_termux_pkg_name_offs[1751u]]), /* sundials */
#else
  RAF_PKG_INIT(0x5c518014u, 8u, 0u, 0x234d4167u, 0), /* sundials */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xca16ddc0u, 13u, 0u, 0xbbf08db9u, &g_termux_pkg_names[g_termux_pkg_name_offs[1752u]]), /* supercollider */
#else
  RAF_PKG_INIT(0xca16ddc0u, 13u, 0u, 0xbbf08db9u, 0), /* supercollider */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x83991c65u, 7u, 0u, 0x5ed86d24u, &g_termux_pkg_names[g_termux_pkg_name_offs[1753u]]), /* surfraw */
#else
  RAF_PKG_INIT(0x83991c65u, 7u, 0u, 0x5ed86d24u, 0), /* surfraw */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6c27b0ffu, 7u, 0u, 0x9943bd06u, &g_termux_pkg_names[g_termux_pkg_name_offs[1754u]]), /* svt-av1 */
#else
  RAF_PKG_INIT(0x6c27b0ffu, 7u, 0u, 0x9943bd06u, 0), /* svt-av1 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x06ad5680u, 5u, 0u, 0x5f8ec00du, &g_termux_pkg_names[g_termux_pkg_name_offs[1755u]]), /* swaks */
#else
  RAF_PKG_INIT(0x06ad5680u, 5u, 0u, 0x5f8ec00du, 0), /* swaks */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf39d9762u, 10u, 0u, 0x364e9491u, &g_termux_pkg_names[g_termux_pkg_name_offs[1756u]]), /* swi-prolog */
#else
  RAF_PKG_INIT(0xf39d9762u, 10u, 0u, 0x364e9491u, 0), /* swi-prolog */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb13260d8u, 5u, 0u, 0xb5325825u, &g_termux_pkg_names[g_termux_pkg_name_offs[1757u]]), /* swift */
#else
  RAF_PKG_INIT(0xb13260d8u, 5u, 0u, 0xb5325825u, 0), /* swift */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x472bd8e9u, 11u, 0u, 0xd4946bc8u, &g_termux_pkg_names[g_termux_pkg_name_offs[1758u]]), /* swiftshader */
#else
  RAF_PKG_INIT(0x472bd8e9u, 11u, 0u, 0xd4946bc8u, 0), /* swiftshader */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x67da044fu, 4u, 0u, 0x73713080u, &g_termux_pkg_names[g_termux_pkg_name_offs[1759u]]), /* swig */
#else
  RAF_PKG_INIT(0x67da044fu, 4u, 0u, 0x73713080u, 0), /* swig */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8ca35e4au, 5u, 0u, 0x72e54f47u, &g_termux_pkg_names[g_termux_pkg_name_offs[1760u]]), /* swtpm */
#else
  RAF_PKG_INIT(0x8ca35e4au, 5u, 0u, 0x72e54f47u, 0), /* swtpm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4e0e1daau, 9u, 0u, 0xd7137eabu, &g_termux_pkg_names[g_termux_pkg_name_offs[1761u]]), /* syncthing */
#else
  RAF_PKG_INIT(0x4e0e1daau, 9u, 0u, 0xd7137eabu, 0), /* syncthing */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x02637e57u, 7u, 0u, 0x8f485172u, &g_termux_pkg_names[g_termux_pkg_name_offs[1762u]]), /* sysprop */
#else
  RAF_PKG_INIT(0x02637e57u, 7u, 0u, 0x8f485172u, 0), /* sysprop */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x536c4718u, 6u, 0u, 0x4dc60383u, &g_termux_pkg_names[g_termux_pkg_name_offs[1763u]]), /* ta-lib */
#else
  RAF_PKG_INIT(0x536c4718u, 6u, 0u, 0x4dc60383u, 0), /* ta-lib */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x89dc366au, 6u, 0u, 0x15efd481u, &g_termux_pkg_names[g_termux_pkg_name_offs[1764u]]), /* taglib */
#else
  RAF_PKG_INIT(0x89dc366au, 6u, 0u, 0x15efd481u, 0), /* taglib */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfdafa03fu, 5u, 0u, 0x417aff86u, &g_termux_pkg_names[g_termux_pkg_name_offs[1765u]]), /* taplo */
#else
  RAF_PKG_INIT(0xfdafa03fu, 5u, 0u, 0x417aff86u, 0), /* taplo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa8f7477cu, 3u, 0u, 0x05e7e019u, &g_termux_pkg_names[g_termux_pkg_name_offs[1766u]]), /* tar */
#else
  RAF_PKG_INIT(0xa8f7477cu, 3u, 0u, 0x05e7e019u, 0), /* tar */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x14bdf3a9u, 12u, 0u, 0x63b8d23eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1767u]]), /* task-spooler */
#else
  RAF_PKG_INIT(0x14bdf3a9u, 12u, 0u, 0x63b8d23eu, 0), /* task-spooler */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x44dc5bbfu, 6u, 0u, 0x467a344cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1768u]]), /* tasksh */
#else
  RAF_PKG_INIT(0x44dc5bbfu, 6u, 0u, 0x467a344cu, 0), /* tasksh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x27c64bc6u, 11u, 0u, 0xe116f9d3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1769u]]), /* taskwarrior */
#else
  RAF_PKG_INIT(0x27c64bc6u, 11u, 0u, 0xe116f9d3u, 0), /* taskwarrior */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x91f2a619u, 3u, 0u, 0x04e36158u, &g_termux_pkg_names[g_termux_pkg_name_offs[1770u]]), /* tcc */
#else
  RAF_PKG_INIT(0x91f2a619u, 3u, 0u, 0x04e36158u, 0), /* tcc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9af2b444u, 3u, 0u, 0x03e35fc5u, &g_termux_pkg_names[g_termux_pkg_name_offs[1771u]]), /* tcl */
#else
  RAF_PKG_INIT(0x9af2b444u, 3u, 0u, 0x03e35fc5u, 0), /* tcl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x380349f3u, 6u, 0u, 0xc82d95acu, &g_termux_pkg_names[g_termux_pkg_name_offs[1772u]]), /* tcllib */
#else
  RAF_PKG_INIT(0x380349f3u, 6u, 0u, 0xc82d95acu, 0), /* tcllib */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1222e0f3u, 4u, 0u, 0xc21a6ea0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1773u]]), /* tcsh */
#else
  RAF_PKG_INIT(0x1222e0f3u, 4u, 0u, 0xc21a6ea0u, 0), /* tcsh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9d04008bu, 3u, 0u, 0x01f02892u, &g_termux_pkg_names[g_termux_pkg_name_offs[1774u]]), /* tdl */
#else
  RAF_PKG_INIT(0x9d04008bu, 3u, 0u, 0x01f02892u, 0), /* tdl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb401e629u, 3u, 0u, 0x2af2a7b4u, &g_termux_pkg_names[g_termux_pkg_name_offs[1775u]]), /* tea */
#else
  RAF_PKG_INIT(0xb401e629u, 3u, 0u, 0x2af2a7b4u, 0), /* tea */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdfaa12bbu, 8u, 0u, 0x9cb8c1b0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1776u]]), /* tealdeer */
#else
  RAF_PKG_INIT(0xdfaa12bbu, 8u, 0u, 0x9cb8c1b0u, 0), /* tealdeer */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x223e0255u, 6u, 0u, 0x67d7b43eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1777u]]), /* teckit */
#else
  RAF_PKG_INIT(0x223e0255u, 6u, 0u, 0x67d7b43eu, 0), /* teckit */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7a30fa58u, 8u, 0u, 0xf02738a7u, &g_termux_pkg_names[g_termux_pkg_name_offs[1778u]]), /* tectonic */
#else
  RAF_PKG_INIT(0x7a30fa58u, 8u, 0u, 0xf02738a7u, 0), /* tectonic */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6673533fu, 16u, 0u, 0x57947b70u, &g_termux_pkg_names[g_termux_pkg_name_offs[1779u]]), /* telegram-bot-api */
#else
  RAF_PKG_INIT(0x6673533fu, 16u, 0u, 0x57947b70u, 0), /* telegram-bot-api */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa2f1debcu, 12u, 0u, 0x1906711fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1780u]]), /* teleport-tsh */
#else
  RAF_PKG_INIT(0xa2f1debcu, 12u, 0u, 0x1906711fu, 0), /* teleport-tsh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9ace123fu, 4u, 0u, 0x7cddf388u, &g_termux_pkg_names[g_termux_pkg_name_offs[1781u]]), /* tere */
#else
  RAF_PKG_INIT(0x9ace123fu, 4u, 0u, 0x7cddf388u, 0), /* tere */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x702011fau, 7u, 0u, 0x4409535bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1782u]]), /* tergent */
#else
  RAF_PKG_INIT(0x702011fau, 7u, 0u, 0x4409535bu, 0), /* tergent */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf07d8f4cu, 9u, 0u, 0x758c9d6du, &g_termux_pkg_names[g_termux_pkg_name_offs[1783u]]), /* termimage */
#else
  RAF_PKG_INIT(0xf07d8f4cu, 9u, 0u, 0x758c9d6du, 0), /* termimage */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8652ca85u, 8u, 0u, 0x73b91572u, &g_termux_pkg_names[g_termux_pkg_name_offs[1784u]]), /* termplay */
#else
  RAF_PKG_INIT(0x8652ca85u, 8u, 0u, 0x73b91572u, 0), /* termplay */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x18bc17a3u, 9u, 0u, 0x259bb6e2u, &g_termux_pkg_names[g_termux_pkg_name_offs[1785u]]), /* termux-am */
#else
  RAF_PKG_INIT(0x18bc17a3u, 9u, 0u, 0x259bb6e2u, 0), /* termux-am */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x13861ab3u, 16u, 0u, 0x9d4f47e4u, &g_termux_pkg_names[g_termux_pkg_name_offs[1786u]]), /* termux-am-socket */
#else
  RAF_PKG_INIT(0x13861ab3u, 16u, 0u, 0x9d4f47e4u, 0), /* termux-am-socket */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbe0cad57u, 10u, 0u, 0xdb064568u, &g_termux_pkg_names[g_termux_pkg_name_offs[1787u]]), /* termux-api */
#else
  RAF_PKG_INIT(0xbe0cad57u, 10u, 0u, 0xdb064568u, 0), /* termux-api */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5528b2ffu, 15u, 0u, 0x4bd0686au, &g_termux_pkg_names[g_termux_pkg_name_offs[1788u]]), /* termux-apt-repo */
#else
  RAF_PKG_INIT(0x5528b2ffu, 15u, 0u, 0x4bd0686au, 0), /* termux-apt-repo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0398995fu, 11u, 0u, 0x3476e9f6u, &g_termux_pkg_names[g_termux_pkg_name_offs[1789u]]), /* termux-auth */
#else
  RAF_PKG_INIT(0x0398995fu, 11u, 0u, 0x3476e9f6u, 0), /* termux-auth */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd4f598eeu, 11u, 0u, 0x2f113477u, &g_termux_pkg_names[g_termux_pkg_name_offs[1790u]]), /* termux-core */
#else
  RAF_PKG_INIT(0xd4f598eeu, 11u, 0u, 0x2f113477u, 0), /* termux-core */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa6e64670u, 21u, 0u, 0xda7efe01u, &g_termux_pkg_names[g_termux_pkg_name_offs[1791u]]), /* termux-create-package */
#else
  RAF_PKG_INIT(0xa6e64670u, 21u, 0u, 0xda7efe01u, 0), /* termux-create-package */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x93584e1du, 18u, 0u, 0x671e22cau, &g_termux_pkg_names[g_termux_pkg_name_offs[1792u]]), /* termux-elf-cleaner */
#else
  RAF_PKG_INIT(0x93584e1du, 18u, 0u, 0x671e22cau, 0), /* termux-elf-cleaner */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3467384cu, 11u, 0u, 0x1a5025a1u, &g_termux_pkg_names[g_termux_pkg_name_offs[1793u]]), /* termux-exec */
#else
  RAF_PKG_INIT(0x3467384cu, 11u, 0u, 0x1a5025a1u, 0), /* termux-exec */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9f6fdbd9u, 15u, 0u, 0xe725b040u, &g_termux_pkg_names[g_termux_pkg_name_offs[1794u]]), /* termux-gui-bash */
#else
  RAF_PKG_INIT(0x9f6fdbd9u, 15u, 0u, 0xe725b040u, 0), /* termux-gui-bash */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf4a4b00cu, 12u, 0u, 0x7a3ab51bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1795u]]), /* termux-gui-c */
#else
  RAF_PKG_INIT(0xf4a4b00cu, 12u, 0u, 0x7a3ab51bu, 0), /* termux-gui-c */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8713e51du, 18u, 0u, 0x54213d52u, &g_termux_pkg_names[g_termux_pkg_name_offs[1796u]]), /* termux-gui-package */
#else
  RAF_PKG_INIT(0x8713e51du, 18u, 0u, 0x54213d52u, 0), /* termux-gui-package */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa06fa648u, 13u, 0u, 0xe04544e9u, &g_termux_pkg_names[g_termux_pkg_name_offs[1797u]]), /* termux-gui-pm */
#else
  RAF_PKG_INIT(0xa06fa648u, 13u, 0u, 0xe04544e9u, 0), /* termux-gui-pm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x268fed76u, 14u, 0u, 0xc886afc9u, &g_termux_pkg_names[g_termux_pkg_name_offs[1798u]]), /* termux-keyring */
#else
  RAF_PKG_INIT(0x268fed76u, 14u, 0u, 0xc886afc9u, 0), /* termux-keyring */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfb8aeda5u, 15u, 0u, 0x2bf69c58u, &g_termux_pkg_names[g_termux_pkg_name_offs[1799u]]), /* termux-licenses */
#else
  RAF_PKG_INIT(0xfb8aeda5u, 15u, 0u, 0x2bf69c58u, 0), /* termux-licenses */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x604800c5u, 15u, 0u, 0x082f61a8u, &g_termux_pkg_names[g_termux_pkg_name_offs[1800u]]), /* termux-services */
#else
  RAF_PKG_INIT(0x604800c5u, 15u, 0u, 0x082f61a8u, 0), /* termux-services */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x584dfd0cu, 12u, 0u, 0x75a52303u, &g_termux_pkg_names[g_termux_pkg_name_offs[1801u]]), /* termux-tools */
#else
  RAF_PKG_INIT(0x584dfd0cu, 12u, 0u, 0x75a52303u, 0), /* termux-tools */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x55492989u, 5u, 0u, 0x259826c4u, &g_termux_pkg_names[g_termux_pkg_name_offs[1802u]]), /* teseq */
#else
  RAF_PKG_INIT(0x55492989u, 5u, 0u, 0x259826c4u, 0), /* teseq */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0c7a18c5u, 9u, 0u, 0x8fceb6d4u, &g_termux_pkg_names[g_termux_pkg_name_offs[1803u]]), /* tesseract */
#else
  RAF_PKG_INIT(0x0c7a18c5u, 9u, 0u, 0x8fceb6d4u, 0), /* tesseract */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd4e72872u, 10u, 0u, 0xedb10425u, &g_termux_pkg_names[g_termux_pkg_name_offs[1804u]]), /* testssl.sh */
#else
  RAF_PKG_INIT(0xd4e72872u, 10u, 0u, 0xedb10425u, 0), /* testssl.sh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc06fa84cu, 8u, 0u, 0x4aca6ce3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1805u]]), /* tex-gyre */
#else
  RAF_PKG_INIT(0xc06fa84cu, 8u, 0u, 0x4aca6ce3u, 0), /* tex-gyre */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2c1f193eu, 7u, 0u, 0xd2484eabu, &g_termux_pkg_names[g_termux_pkg_name_offs[1806u]]), /* texinfo */
#else
  RAF_PKG_INIT(0x2c1f193eu, 7u, 0u, 0xd2484eabu, 0), /* texinfo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x34250555u, 6u, 0u, 0xc1d4e80eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1807u]]), /* texlab */
#else
  RAF_PKG_INIT(0x34250555u, 6u, 0u, 0xc1d4e80eu, 0), /* texlab */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x91ccd670u, 11u, 0u, 0xeea52f51u, &g_termux_pkg_names[g_termux_pkg_name_offs[1808u]]), /* texlive-bin */
#else
  RAF_PKG_INIT(0x91ccd670u, 11u, 0u, 0xeea52f51u, 0), /* texlive-bin */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2ed73b55u, 17u, 0u, 0x6091cb08u, &g_termux_pkg_names[g_termux_pkg_name_offs[1809u]]), /* texlive-installer */
#else
  RAF_PKG_INIT(0x2ed73b55u, 17u, 0u, 0x6091cb08u, 0), /* texlive-installer */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd0f3c540u, 4u, 0u, 0x823048e3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1810u]]), /* tgpt */
#else
  RAF_PKG_INIT(0xd0f3c540u, 4u, 0u, 0x823048e3u, 0), /* tgpt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x87198e02u, 6u, 0u, 0x894553edu, &g_termux_pkg_names[g_termux_pkg_name_offs[1811u]]), /* thrift */
#else
  RAF_PKG_INIT(0x87198e02u, 6u, 0u, 0x894553edu, 0), /* thrift */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6d4dfe35u, 4u, 0u, 0x519aefbau, &g_termux_pkg_names[g_termux_pkg_name_offs[1812u]]), /* tidy */
#else
  RAF_PKG_INIT(0x6d4dfe35u, 4u, 0u, 0x519aefbau, 0), /* tidy */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc60afcdbu, 3u, 0u, 0x28d48f7au, &g_termux_pkg_names[g_termux_pkg_name_offs[1813u]]), /* tig */
#else
  RAF_PKG_INIT(0xc60afcdbu, 3u, 0u, 0x28d48f7au, 0), /* tig */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xff1023a9u, 5u, 0u, 0xdb0dafbcu, &g_termux_pkg_names[g_termux_pkg_name_offs[1814u]]), /* tilde */
#else
  RAF_PKG_INIT(0xff1023a9u, 5u, 0u, 0xdb0dafbcu, 0), /* tilde */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5d3c9be4u, 4u, 0u, 0x6185429bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1815u]]), /* time */
#else
  RAF_PKG_INIT(0x5d3c9be4u, 4u, 0u, 0x6185429bu, 0), /* time */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x037b732eu, 11u, 0u, 0x3a8945ffu, &g_termux_pkg_names[g_termux_pkg_name_offs[1816u]]), /* timewarrior */
#else
  RAF_PKG_INIT(0x037b732eu, 11u, 0u, 0x3a8945ffu, 0), /* timewarrior */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5f3c9f0au, 4u, 0u, 0x638545c1u, &g_termux_pkg_names[g_termux_pkg_name_offs[1817u]]), /* timg */
#else
  RAF_PKG_INIT(0x5f3c9f0au, 4u, 0u, 0x638545c1u, 0), /* timg */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x86579b86u, 10u, 0u, 0x36b9622du, &g_termux_pkg_names[g_termux_pkg_name_offs[1818u]]), /* timidity++ */
#else
  RAF_PKG_INIT(0x86579b86u, 10u, 0u, 0x36b9622du, 0), /* timidity++ */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x64973a3eu, 10u, 0u, 0xf880987du, &g_termux_pkg_names[g_termux_pkg_name_offs[1819u]]), /* tin-summer */
#else
  RAF_PKG_INIT(0x64973a3eu, 10u, 0u, 0xf880987du, 0), /* tin-summer */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x930494e9u, 8u, 0u, 0x8aa2d78eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1820u]]), /* tintin++ */
#else
  RAF_PKG_INIT(0x930494e9u, 8u, 0u, 0x8aa2d78eu, 0), /* tintin++ */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd4033e15u, 9u, 0u, 0x371272d8u, &g_termux_pkg_names[g_termux_pkg_name_offs[1821u]]), /* tinyfugue */
#else
  RAF_PKG_INIT(0xd4033e15u, 9u, 0u, 0x371272d8u, 0), /* tinyfugue */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc9d486d1u, 6u, 0u, 0xc26edf62u, &g_termux_pkg_names[g_termux_pkg_name_offs[1822u]]), /* tinygo */
#else
  RAF_PKG_INIT(0xc9d486d1u, 6u, 0u, 0xc26edf62u, 0), /* tinygo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x13e823a6u, 8u, 0u, 0xad8b88a1u, &g_termux_pkg_names[g_termux_pkg_name_offs[1823u]]), /* tinymist */
#else
  RAF_PKG_INIT(0x13e823a6u, 8u, 0u, 0xad8b88a1u, 0), /* tinymist */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe3d9b8e5u, 9u, 0u, 0x15a79334u, &g_termux_pkg_names[g_termux_pkg_name_offs[1824u]]), /* tinyproxy */
#else
  RAF_PKG_INIT(0xe3d9b8e5u, 9u, 0u, 0x15a79334u, 0), /* tinyproxy */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x963dd7d0u, 10u, 0u, 0x583ad1f3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1825u]]), /* tinyscheme */
#else
  RAF_PKG_INIT(0x963dd7d0u, 10u, 0u, 0x583ad1f3u, 0), /* tinyscheme */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x67474276u, 10u, 0u, 0x6fb02945u, &g_termux_pkg_names[g_termux_pkg_name_offs[1826u]]), /* tinysparql */
#else
  RAF_PKG_INIT(0x67474276u, 10u, 0u, 0x6fb02945u, 0), /* tinysparql */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2140fe8fu, 7u, 0u, 0xe0e2cde2u, &g_termux_pkg_names[g_termux_pkg_name_offs[1827u]]), /* tizonia */
#else
  RAF_PKG_INIT(0x2140fe8fu, 7u, 0u, 0xe0e2cde2u, 0), /* tizonia */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3e4541d8u, 2u, 0u, 0xdd274393u, &g_termux_pkg_names[g_termux_pkg_name_offs[1828u]]), /* tk */
#else
  RAF_PKG_INIT(0x3e4541d8u, 2u, 0u, 0xdd274393u, 0), /* tk */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb9b0360eu, 5u, 0u, 0x33a84357u, &g_termux_pkg_names[g_termux_pkg_name_offs[1829u]]), /* tmate */
#else
  RAF_PKG_INIT(0xb9b0360eu, 5u, 0u, 0x33a84357u, 0), /* tmate */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1ec621cfu, 4u, 0u, 0xf8e5e3f8u, &g_termux_pkg_names[g_termux_pkg_name_offs[1830u]]), /* tmux */
#else
  RAF_PKG_INIT(0x1ec621cfu, 4u, 0u, 0xf8e5e3f8u, 0), /* tmux */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa6ca5e08u, 6u, 0u, 0xfdb6b20bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1831u]]), /* toilet */
#else
  RAF_PKG_INIT(0xa6ca5e08u, 6u, 0u, 0xfdb6b20bu, 0), /* toilet */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8f79e253u, 5u, 0u, 0x236cdb96u, &g_termux_pkg_names[g_termux_pkg_name_offs[1832u]]), /* tokei */
#else
  RAF_PKG_INIT(0x8f79e253u, 5u, 0u, 0x236cdb96u, 0), /* tokei */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xda8708a8u, 5u, 0u, 0x013dd501u, &g_termux_pkg_names[g_termux_pkg_name_offs[1833u]]), /* tome2 */
#else
  RAF_PKG_INIT(0xda8708a8u, 5u, 0u, 0x013dd501u, 0), /* tome2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x29464e97u, 6u, 0u, 0xb6a30734u, &g_termux_pkg_names[g_termux_pkg_name_offs[1834u]]), /* toml11 */
#else
  RAF_PKG_INIT(0x29464e97u, 6u, 0u, 0xb6a30734u, 0), /* toml11 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc6461b63u, 8u, 0u, 0x023c7f1cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1835u]]), /* topgrade */
#else
  RAF_PKG_INIT(0xc6461b63u, 8u, 0u, 0x023c7f1cu, 0), /* topgrade */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa910df62u, 3u, 0u, 0x1dd8fb57u, &g_termux_pkg_names[g_termux_pkg_name_offs[1836u]]), /* tor */
#else
  RAF_PKG_INIT(0xa910df62u, 3u, 0u, 0x1dd8fb57u, 0), /* tor */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcfdbbbfbu, 8u, 0u, 0xa8c2e4c4u, &g_termux_pkg_names[g_termux_pkg_name_offs[1837u]]), /* torsocks */
#else
  RAF_PKG_INIT(0xcfdbbbfbu, 8u, 0u, 0xa8c2e4c4u, 0), /* torsocks */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3d131867u, 15u, 0u, 0x244e367eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1838u]]), /* totem-pl-parser */
#else
  RAF_PKG_INIT(0x3d131867u, 15u, 0u, 0x244e367eu, 0), /* totem-pl-parser */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x195419ecu, 5u, 0u, 0x792f3805u, &g_termux_pkg_names[g_termux_pkg_name_offs[1839u]]), /* toxic */
#else
  RAF_PKG_INIT(0x195419ecu, 5u, 0u, 0x792f3805u, 0), /* toxic */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x50c18a45u, 9u, 0u, 0x5ca25210u, &g_termux_pkg_names[g_termux_pkg_name_offs[1840u]]), /* tracepath */
#else
  RAF_PKG_INIT(0x50c18a45u, 9u, 0u, 0x5ca25210u, 0), /* tracepath */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf42fdbc7u, 10u, 0u, 0xad00a5ccu, &g_termux_pkg_names[g_termux_pkg_name_offs[1841u]]), /* traceroute */
#else
  RAF_PKG_INIT(0xf42fdbc7u, 10u, 0u, 0xad00a5ccu, 0), /* traceroute */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcff6f4bau, 15u, 0u, 0xbbdf3eb3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1842u]]), /* translate-shell */
#else
  RAF_PKG_INIT(0xcff6f4bau, 15u, 0u, 0xbbdf3eb3u, 0), /* translate-shell */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x079280e5u, 12u, 0u, 0x9a4d3ec2u, &g_termux_pkg_names[g_termux_pkg_name_offs[1843u]]), /* transmission */
#else
  RAF_PKG_INIT(0x079280e5u, 12u, 0u, 0x9a4d3ec2u, 0), /* transmission */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6d8b34d5u, 4u, 0u, 0x43ebbdb6u, &g_termux_pkg_names[g_termux_pkg_name_offs[1844u]]), /* tree */
#else
  RAF_PKG_INIT(0x6d8b34d5u, 4u, 0u, 0x43ebbdb6u, 0), /* tree */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xea8b40c7u, 11u, 0u, 0x7a0c5eaeu, &g_termux_pkg_names[g_termux_pkg_name_offs[1845u]]), /* tree-sitter */
#else
  RAF_PKG_INIT(0xea8b40c7u, 11u, 0u, 0x7a0c5eaeu, 0), /* tree-sitter */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf54accd4u, 16u, 0u, 0x927b2113u, &g_termux_pkg_names[g_termux_pkg_name_offs[1846u]]), /* tree-sitter-bash */
#else
  RAF_PKG_INIT(0xf54accd4u, 16u, 0u, 0x927b2113u, 0), /* tree-sitter-bash */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xace0f007u, 13u, 0u, 0x442365aeu, &g_termux_pkg_names[g_termux_pkg_name_offs[1847u]]), /* tree-sitter-c */
#else
  RAF_PKG_INIT(0xace0f007u, 13u, 0u, 0x442365aeu, 0), /* tree-sitter-c */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x86c26a3du, 15u, 0u, 0x17c996fcu, &g_termux_pkg_names[g_termux_pkg_name_offs[1848u]]), /* tree-sitter-css */
#else
  RAF_PKG_INIT(0x86c26a3du, 15u, 0u, 0x17c996fcu, 0), /* tree-sitter-css */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xae1018bcu, 14u, 0u, 0x24c25b8fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1849u]]), /* tree-sitter-go */
#else
  RAF_PKG_INIT(0xae1018bcu, 14u, 0u, 0x24c25b8fu, 0), /* tree-sitter-go */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5728fbc3u, 16u, 0u, 0xb17ec88cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1850u]]), /* tree-sitter-html */
#else
  RAF_PKG_INIT(0x5728fbc3u, 16u, 0u, 0xb17ec88cu, 0), /* tree-sitter-html */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x328d6026u, 16u, 0u, 0x061cc5d1u, &g_termux_pkg_names[g_termux_pkg_name_offs[1851u]]), /* tree-sitter-java */
#else
  RAF_PKG_INIT(0x328d6026u, 16u, 0u, 0x061cc5d1u, 0), /* tree-sitter-java */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xafedf325u, 22u, 0u, 0x5dc7af3eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1852u]]), /* tree-sitter-javascript */
#else
  RAF_PKG_INIT(0xafedf325u, 22u, 0u, 0x5dc7af3eu, 0), /* tree-sitter-javascript */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x64e02228u, 16u, 0u, 0xc9ecff07u, &g_termux_pkg_names[g_termux_pkg_name_offs[1853u]]), /* tree-sitter-json */
#else
  RAF_PKG_INIT(0x64e02228u, 16u, 0u, 0xc9ecff07u, 0), /* tree-sitter-json */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbe25c14eu, 17u, 0u, 0x992e252fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1854u]]), /* tree-sitter-latex */
#else
  RAF_PKG_INIT(0xbe25c14eu, 17u, 0u, 0x992e252fu, 0), /* tree-sitter-latex */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdde9b348u, 15u, 0u, 0xf89fe47du, &g_termux_pkg_names[g_termux_pkg_name_offs[1855u]]), /* tree-sitter-lua */
#else
  RAF_PKG_INIT(0xdde9b348u, 15u, 0u, 0xf89fe47du, 0), /* tree-sitter-lua */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x37aeffdbu, 20u, 0u, 0xa8957eb8u, &g_termux_pkg_names[g_termux_pkg_name_offs[1856u]]), /* tree-sitter-markdown */
#else
  RAF_PKG_INIT(0x37aeffdbu, 20u, 0u, 0xa8957eb8u, 0), /* tree-sitter-markdown */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3e70836eu, 19u, 0u, 0xc22e828fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1857u]]), /* tree-sitter-parsers */
#else
  RAF_PKG_INIT(0x3e70836eu, 19u, 0u, 0xc22e828fu, 0), /* tree-sitter-parsers */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8b15cc08u, 18u, 0u, 0xe7cdbc63u, &g_termux_pkg_names[g_termux_pkg_name_offs[1858u]]), /* tree-sitter-python */
#else
  RAF_PKG_INIT(0x8b15cc08u, 18u, 0u, 0xe7cdbc63u, 0), /* tree-sitter-python */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x91ae7f22u, 17u, 0u, 0x0ce15c2fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1859u]]), /* tree-sitter-query */
#else
  RAF_PKG_INIT(0x91ae7f22u, 17u, 0u, 0x0ce15c2fu, 0), /* tree-sitter-query */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5d7b0e99u, 17u, 0u, 0xe58aaa9cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1860u]]), /* tree-sitter-regex */
#else
  RAF_PKG_INIT(0x5d7b0e99u, 17u, 0u, 0xe58aaa9cu, 0), /* tree-sitter-regex */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8a6492ccu, 16u, 0u, 0x6440f23bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1861u]]), /* tree-sitter-rust */
#else
  RAF_PKG_INIT(0x8a6492ccu, 16u, 0u, 0x6440f23bu, 0), /* tree-sitter-rust */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbbcf069au, 15u, 0u, 0x5ad7dc63u, &g_termux_pkg_names[g_termux_pkg_name_offs[1862u]]), /* tree-sitter-sql */
#else
  RAF_PKG_INIT(0xbbcf069au, 15u, 0u, 0x5ad7dc63u, 0), /* tree-sitter-sql */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x74b69612u, 16u, 0u, 0xa12f2ae9u, &g_termux_pkg_names[g_termux_pkg_name_offs[1863u]]), /* tree-sitter-toml */
#else
  RAF_PKG_INIT(0x74b69612u, 16u, 0u, 0xa12f2ae9u, 0), /* tree-sitter-toml */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7bc7b26au, 15u, 0u, 0x7b060da3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1864u]]), /* tree-sitter-vim */
#else
  RAF_PKG_INIT(0x7bc7b26au, 15u, 0u, 0x7b060da3u, 0), /* tree-sitter-vim */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6175db94u, 18u, 0u, 0x35efdac7u, &g_termux_pkg_names[g_termux_pkg_name_offs[1865u]]), /* tree-sitter-vimdoc */
#else
  RAF_PKG_INIT(0x6175db94u, 18u, 0u, 0x35efdac7u, 0), /* tree-sitter-vimdoc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9fcab6d3u, 15u, 0u, 0x899aa442u, &g_termux_pkg_names[g_termux_pkg_name_offs[1866u]]), /* tree-sitter-xml */
#else
  RAF_PKG_INIT(0x9fcab6d3u, 15u, 0u, 0x899aa442u, 0), /* tree-sitter-xml */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd662c84du, 16u, 0u, 0xef8add62u, &g_termux_pkg_names[g_termux_pkg_name_offs[1867u]]), /* tree-sitter-yaml */
#else
  RAF_PKG_INIT(0xd662c84du, 16u, 0u, 0xef8add62u, 0), /* tree-sitter-yaml */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5818a8beu, 9u, 0u, 0xc4b4498fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1868u]]), /* trojan-go */
#else
  RAF_PKG_INIT(0x5818a8beu, 9u, 0u, 0xc4b4498fu, 0), /* trojan-go */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdd5e6e7du, 5u, 0u, 0x70d523e0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1869u]]), /* trunk */
#else
  RAF_PKG_INIT(0xdd5e6e7du, 5u, 0u, 0x70d523e0u, 0), /* trunk */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf6692334u, 5u, 0u, 0x77f343f9u, &g_termux_pkg_names[g_termux_pkg_name_offs[1870u]]), /* trurl */
#else
  RAF_PKG_INIT(0xf6692334u, 5u, 0u, 0x77f343f9u, 0), /* trurl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3658ad37u, 8u, 0u, 0x52b48364u, &g_termux_pkg_names[g_termux_pkg_name_offs[1871u]]), /* trzsz-go */
#else
  RAF_PKG_INIT(0x3658ad37u, 8u, 0u, 0x52b48364u, 0), /* trzsz-go */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4a9c5665u, 9u, 0u, 0x231480e4u, &g_termux_pkg_names[g_termux_pkg_name_offs[1872u]]), /* trzsz-ssh */
#else
  RAF_PKG_INIT(0x4a9c5665u, 9u, 0u, 0x231480e4u, 0), /* trzsz-ssh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xee345f20u, 6u, 0u, 0xf48d84d3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1873u]]), /* tsocks */
#else
  RAF_PKG_INIT(0xee345f20u, 6u, 0u, 0xf48d84d3u, 0), /* tsocks */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa419d1dfu, 3u, 0u, 0x1b0a936au, &g_termux_pkg_names[g_termux_pkg_name_offs[1874u]]), /* tsu */
#else
  RAF_PKG_INIT(0xa419d1dfu, 3u, 0u, 0x1b0a936au, 0), /* tsu */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2271766bu, 10u, 0u, 0xc576e2c4u, &g_termux_pkg_names[g_termux_pkg_name_offs[1875u]]), /* ttf-dejavu */
#else
  RAF_PKG_INIT(0x2271766bu, 10u, 0u, 0xc576e2c4u, 0), /* ttf-dejavu */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb0dff5feu, 18u, 0u, 0x6df3c451u, &g_termux_pkg_names[g_termux_pkg_name_offs[1876u]]), /* ttf-jetbrains-mono */
#else
  RAF_PKG_INIT(0xb0dff5feu, 18u, 0u, 0x6df3c451u, 0), /* ttf-jetbrains-mono */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0b5bac80u, 22u, 0u, 0xf47359afu, &g_termux_pkg_names[g_termux_pkg_name_offs[1877u]]), /* ttf-nerd-fonts-symbols */
#else
  RAF_PKG_INIT(0x0b5bac80u, 22u, 0u, 0xf47359afu, 0), /* ttf-nerd-fonts-symbols */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2e7670efu, 9u, 0u, 0x5541495au, &g_termux_pkg_names[g_termux_pkg_name_offs[1878u]]), /* tty-clock */
#else
  RAF_PKG_INIT(0x2e7670efu, 9u, 0u, 0x5541495au, 0), /* tty-clock */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd4bd8375u, 13u, 0u, 0x5f8a4c88u, &g_termux_pkg_names[g_termux_pkg_name_offs[1879u]]), /* tty-solitaire */
#else
  RAF_PKG_INIT(0xd4bd8375u, 13u, 0u, 0x5f8a4c88u, 0), /* tty-solitaire */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdaf8ab85u, 4u, 0u, 0xdbaccceeu, &g_termux_pkg_names[g_termux_pkg_name_offs[1880u]]), /* ttyc */
#else
  RAF_PKG_INIT(0xdaf8ab85u, 4u, 0u, 0xdbaccceeu, 0), /* ttyc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd3f8a080u, 4u, 0u, 0xdeacd1a7u, &g_termux_pkg_names[g_termux_pkg_name_offs[1881u]]), /* ttyd */
#else
  RAF_PKG_INIT(0xd3f8a080u, 4u, 0u, 0xdeacd1a7u, 0), /* ttyd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb387310bu, 6u, 0u, 0x546a31a8u, &g_termux_pkg_names[g_termux_pkg_name_offs[1882u]]), /* ttyper */
#else
  RAF_PKG_INIT(0xb387310bu, 6u, 0u, 0x546a31a8u, 0), /* ttyper */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x45a6f27bu, 7u, 0u, 0xc8c76e5eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1883u]]), /* ttyplot */
#else
  RAF_PKG_INIT(0x45a6f27bu, 7u, 0u, 0xc8c76e5eu, 0), /* ttyplot */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x75a5bd52u, 6u, 0u, 0x4698ecadu, &g_termux_pkg_names[g_termux_pkg_name_offs[1884u]]), /* ttyrec */
#else
  RAF_PKG_INIT(0x75a5bd52u, 6u, 0u, 0x4698ecadu, 0), /* ttyrec */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x92323c27u, 4u, 0u, 0x24251d6cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1885u]]), /* tudo */
#else
  RAF_PKG_INIT(0x92323c27u, 4u, 0u, 0x24251d6cu, 0), /* tudo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf7b59e1fu, 8u, 0u, 0x63ce88dcu, &g_termux_pkg_names[g_termux_pkg_name_offs[1886u]]), /* tur-repo */
#else
  RAF_PKG_INIT(0xf7b59e1fu, 8u, 0u, 0x63ce88dcu, 0), /* tur-repo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcf3f34fbu, 5u, 0u, 0x64b82936u, &g_termux_pkg_names[g_termux_pkg_name_offs[1887u]]), /* turbo */
#else
  RAF_PKG_INIT(0xcf3f34fbu, 5u, 0u, 0x64b82936u, 0), /* turbo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb93d7846u, 9u, 0u, 0x9379368fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1888u]]), /* turbopack */
#else
  RAF_PKG_INIT(0xb93d7846u, 9u, 0u, 0x9379368fu, 0), /* turbopack */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa728e122u, 3u, 0u, 0x1819993bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1889u]]), /* tut */
#else
  RAF_PKG_INIT(0xa728e122u, 3u, 0u, 0x1819993bu, 0), /* tut */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x640167bau, 9u, 0u, 0x0a9d2ee3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1890u]]), /* tvheadend */
#else
  RAF_PKG_INIT(0x640167bau, 9u, 0u, 0x0a9d2ee3u, 0), /* tvheadend */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc9b81a38u, 6u, 0u, 0xdb9ae60fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1891u]]), /* tweego */
#else
  RAF_PKG_INIT(0xc9b81a38u, 6u, 0u, 0xdb9ae60fu, 0), /* tweego */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x99e96bd7u, 7u, 0u, 0xbc47b866u, &g_termux_pkg_names[g_termux_pkg_name_offs[1892u]]), /* txikijs */
#else
  RAF_PKG_INIT(0x99e96bd7u, 7u, 0u, 0xbc47b866u, 0), /* txikijs */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xfeaaa90du, 5u, 0u, 0x8b57efe4u, &g_termux_pkg_names[g_termux_pkg_name_offs[1893u]]), /* typst */
#else
  RAF_PKG_INIT(0xfeaaa90du, 5u, 0u, 0x8b57efe4u, 0), /* typst */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbdc54620u, 8u, 0u, 0xcc63467fu, &g_termux_pkg_names[g_termux_pkg_name_offs[1894u]]), /* typstfmt */
#else
  RAF_PKG_INIT(0xbdc54620u, 8u, 0u, 0xcc63467fu, 0), /* typstfmt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf6665fc1u, 8u, 0u, 0x13f886e6u, &g_termux_pkg_names[g_termux_pkg_name_offs[1895u]]), /* udftools */
#else
  RAF_PKG_INIT(0xf6665fc1u, 8u, 0u, 0x13f886e6u, 0), /* udftools */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xec6f1524u, 7u, 0u, 0x1df1e585u, &g_termux_pkg_names[g_termux_pkg_name_offs[1896u]]), /* udocker */
#else
  RAF_PKG_INIT(0xec6f1524u, 7u, 0u, 0x1df1e585u, 0), /* udocker */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3dee623fu, 7u, 0u, 0xcc9fbd52u, &g_termux_pkg_names[g_termux_pkg_name_offs[1897u]]), /* uftrace */
#else
  RAF_PKG_INIT(0x3dee623fu, 7u, 0u, 0xcc9fbd52u, 0), /* uftrace */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xabb77a50u, 5u, 0u, 0x0f83e369u, &g_termux_pkg_names[g_termux_pkg_name_offs[1898u]]), /* ugrep */
#else
  RAF_PKG_INIT(0xabb77a50u, 5u, 0u, 0x0f83e369u, 0), /* ugrep */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd6c88569u, 4u, 0u, 0xc0ca705eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1899u]]), /* unar */
#else
  RAF_PKG_INIT(0xd6c88569u, 4u, 0u, 0xc0ca705eu, 0), /* unar */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xef342d4au, 12u, 0u, 0x799cf9b1u, &g_termux_pkg_names[g_termux_pkg_name_offs[1900u]]), /* unicode-cldr */
#else
  RAF_PKG_INIT(0xef342d4au, 12u, 0u, 0x799cf9b1u, 0), /* unicode-cldr */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc269127fu, 12u, 0u, 0x47ce4ff0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1901u]]), /* unicode-data */
#else
  RAF_PKG_INIT(0xc269127fu, 12u, 0u, 0x47ce4ff0u, 0), /* unicode-data */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xae401cebu, 13u, 0u, 0x0118fed6u, &g_termux_pkg_names[g_termux_pkg_name_offs[1902u]]), /* unicode-emoji */
#else
  RAF_PKG_INIT(0xae401cebu, 13u, 0u, 0x0118fed6u, 0), /* unicode-emoji */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x11439fd7u, 7u, 0u, 0x8790911au, &g_termux_pkg_names[g_termux_pkg_name_offs[1903u]]), /* unicorn */
#else
  RAF_PKG_INIT(0x11439fd7u, 7u, 0u, 0x8790911au, 0), /* unicorn */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x01bac534u, 7u, 0u, 0xfc69dab9u, &g_termux_pkg_names[g_termux_pkg_name_offs[1904u]]), /* unifdef */
#else
  RAF_PKG_INIT(0x01bac534u, 7u, 0u, 0xfc69dab9u, 0), /* unifdef */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc918a49cu, 5u, 0u, 0x44ce0e3du, &g_termux_pkg_names[g_termux_pkg_name_offs[1905u]]), /* units */
#else
  RAF_PKG_INIT(0xc918a49cu, 5u, 0u, 0x44ce0e3du, 0), /* units */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x01d3097fu, 8u, 0u, 0xf4d4f3a0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1906u]]), /* unixodbc */
#else
  RAF_PKG_INIT(0x01d3097fu, 8u, 0u, 0xf4d4f3a0u, 0), /* unixodbc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x91ab39fcu, 7u, 0u, 0x301eb0cdu, &g_termux_pkg_names[g_termux_pkg_name_offs[1907u]]), /* unpaper */
#else
  RAF_PKG_INIT(0x91ab39fcu, 7u, 0u, 0x301eb0cdu, 0), /* unpaper */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2360460bu, 5u, 0u, 0xa7eeb896u, &g_termux_pkg_names[g_termux_pkg_name_offs[1908u]]), /* unrar */
#else
  RAF_PKG_INIT(0x2360460bu, 5u, 0u, 0xa7eeb896u, 0), /* unrar */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x02be6e27u, 8u, 0u, 0x26e4c46cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1909u]]), /* unshield */
#else
  RAF_PKG_INIT(0x02be6e27u, 8u, 0u, 0x26e4c46cu, 0), /* unshield */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbe3f1941u, 5u, 0u, 0x3cc9ddd0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1910u]]), /* unzip */
#else
  RAF_PKG_INIT(0xbe3f1941u, 5u, 0u, 0x3cc9ddd0u, 0), /* unzip */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x43430b20u, 2u, 0u, 0xfc29b2f7u, &g_termux_pkg_names[g_termux_pkg_name_offs[1911u]]), /* up */
#else
  RAF_PKG_INIT(0x43430b20u, 2u, 0u, 0xfc29b2f7u, 0), /* up */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x11c14029u, 6u, 0u, 0xd1fe971eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1912u]]), /* upower */
#else
  RAF_PKG_INIT(0x11c14029u, 6u, 0u, 0xd1fe971eu, 0), /* upower */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3a8adb88u, 3u, 0u, 0x84a4171du, &g_termux_pkg_names[g_termux_pkg_name_offs[1913u]]), /* upx */
#else
  RAF_PKG_INIT(0x3a8adb88u, 3u, 0u, 0x84a4171du, 0), /* upx */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xad03f3dcu, 7u, 0u, 0x3557f15du, &g_termux_pkg_names[g_termux_pkg_name_offs[1914u]]), /* urdfdom */
#else
  RAF_PKG_INIT(0xad03f3dcu, 7u, 0u, 0x3557f15du, 0), /* urdfdom */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x88b63293u, 15u, 0u, 0x3e509d82u, &g_termux_pkg_names[g_termux_pkg_name_offs[1915u]]), /* urdfdom-headers */
#else
  RAF_PKG_INIT(0x88b63293u, 15u, 0u, 0x3e509d82u, 0), /* urdfdom-headers */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf3dd625fu, 7u, 0u, 0x9b24b812u, &g_termux_pkg_names[g_termux_pkg_name_offs[1916u]]), /* usbmuxd */
#else
  RAF_PKG_INIT(0xf3dd625fu, 7u, 0u, 0x9b24b812u, 0), /* usbmuxd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7246de7cu, 4u, 0u, 0x8e511e37u, &g_termux_pkg_names[g_termux_pkg_name_offs[1917u]]), /* usql */
#else
  RAF_PKG_INIT(0x7246de7cu, 4u, 0u, 0x8e511e37u, 0), /* usql */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xec1645bbu, 7u, 0u, 0xdc701a2au, &g_termux_pkg_names[g_termux_pkg_name_offs[1918u]]), /* utf8cpp */
#else
  RAF_PKG_INIT(0xec1645bbu, 7u, 0u, 0xdc701a2au, 0), /* utf8cpp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd6b8597eu, 8u, 0u, 0x983c21a9u, &g_termux_pkg_names[g_termux_pkg_name_offs[1919u]]), /* utf8proc */
#else
  RAF_PKG_INIT(0xd6b8597eu, 8u, 0u, 0x983c21a9u, 0), /* utf8proc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x50e62a0cu, 6u, 0u, 0x4241c4abu, &g_termux_pkg_names[g_termux_pkg_name_offs[1920u]]), /* uthash */
#else
  RAF_PKG_INIT(0x50e62a0cu, 6u, 0u, 0x4241c4abu, 0), /* uthash */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdcafb8f2u, 10u, 0u, 0xb504fa81u, &g_termux_pkg_names[g_termux_pkg_name_offs[1921u]]), /* util-linux */
#else
  RAF_PKG_INIT(0xdcafb8f2u, 10u, 0u, 0xb504fa81u, 0), /* util-linux */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x379977ecu, 4u, 0u, 0x04c63f03u, &g_termux_pkg_names[g_termux_pkg_name_offs[1922u]]), /* uucp */
#else
  RAF_PKG_INIT(0x379977ecu, 4u, 0u, 0x04c63f03u, 0), /* uucp */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x49431492u, 2u, 0u, 0xfa29afd1u, &g_termux_pkg_names[g_termux_pkg_name_offs[1923u]]), /* uv */
#else
  RAF_PKG_INIT(0x49431492u, 2u, 0u, 0xfa29afd1u, 0), /* uv */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x97a2f482u, 5u, 0u, 0xc28152dbu, &g_termux_pkg_names[g_termux_pkg_name_offs[1924u]]), /* uwsgi */
#else
  RAF_PKG_INIT(0x97a2f482u, 5u, 0u, 0xc28152dbu, 0), /* uwsgi */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6f4d9673u, 5u, 0u, 0x3e05886eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1925u]]), /* v2ray */
#else
  RAF_PKG_INIT(0x6f4d9673u, 5u, 0u, 0x3e05886eu, 0), /* v2ray */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x34905a8cu, 5u, 0u, 0x95a0e761u, &g_termux_pkg_names[g_termux_pkg_name_offs[1926u]]), /* valac */
#else
  RAF_PKG_INIT(0x34905a8cu, 5u, 0u, 0x95a0e761u, 0), /* valac */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x50c3fc5bu, 4u, 0u, 0x6dfde224u, &g_termux_pkg_names[g_termux_pkg_name_offs[1927u]]), /* vale */
#else
  RAF_PKG_INIT(0x50c3fc5bu, 4u, 0u, 0x6dfde224u, 0), /* vale */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc19d8d6au, 8u, 0u, 0x0d368ed9u, &g_termux_pkg_names[g_termux_pkg_name_offs[1928u]]), /* valgrind */
#else
  RAF_PKG_INIT(0xc19d8d6au, 8u, 0u, 0x0d368ed9u, 0), /* valgrind */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1ed0bfabu, 6u, 0u, 0x16369c40u, &g_termux_pkg_names[g_termux_pkg_name_offs[1929u]]), /* valkey */
#else
  RAF_PKG_INIT(0x1ed0bfabu, 6u, 0u, 0x16369c40u, 0), /* valkey */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x28f73022u, 15u, 0u, 0xda4b5c63u, &g_termux_pkg_names[g_termux_pkg_name_offs[1930u]]), /* vamp-plugin-sdk */
#else
  RAF_PKG_INIT(0x28f73022u, 15u, 0u, 0xda4b5c63u, 0), /* vamp-plugin-sdk */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4e1c5e98u, 11u, 0u, 0xbe9c098du, &g_termux_pkg_names[g_termux_pkg_name_offs[1931u]]), /* vapoursynth */
#else
  RAF_PKG_INIT(0x4e1c5e98u, 11u, 0u, 0xbe9c098du, 0), /* vapoursynth */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x38791469u, 8u, 0u, 0x330d5fc2u, &g_termux_pkg_names[g_termux_pkg_name_offs[1932u]]), /* vbindiff */
#else
  RAF_PKG_INIT(0x38791469u, 8u, 0u, 0x330d5fc2u, 0), /* vbindiff */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2d4e39edu, 4u, 0u, 0x3dd5f9feu, &g_termux_pkg_names[g_termux_pkg_name_offs[1933u]]), /* vcsh */
#else
  RAF_PKG_INIT(0x2d4e39edu, 4u, 0u, 0x3dd5f9feu, 0), /* vcsh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x16e1e9ccu, 4u, 0u, 0xa3692d17u, &g_termux_pkg_names[g_termux_pkg_name_offs[1934u]]), /* vde2 */
#else
  RAF_PKG_INIT(0x16e1e9ccu, 4u, 0u, 0xa3692d17u, 0), /* vde2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6719b7f3u, 6u, 0u, 0x4281f914u, &g_termux_pkg_names[g_termux_pkg_name_offs[1935u]]), /* vegeta */
#else
  RAF_PKG_INIT(0x6719b7f3u, 6u, 0u, 0x4281f914u, 0), /* vegeta */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd5351d59u, 4u, 0u, 0xc9176076u, &g_termux_pkg_names[g_termux_pkg_name_offs[1936u]]), /* vera */
#else
  RAF_PKG_INIT(0xd5351d59u, 4u, 0u, 0xc9176076u, 0), /* vera */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x34596c25u, 9u, 0u, 0xbc194724u, &g_termux_pkg_names[g_termux_pkg_name_offs[1937u]]), /* vgmstream */
#else
  RAF_PKG_INIT(0x34596c25u, 9u, 0u, 0xbc194724u, 0), /* vgmstream */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x16ecab1cu, 8u, 0u, 0x49f8f7cfu, &g_termux_pkg_names[g_termux_pkg_name_offs[1938u]]), /* vgmtools */
#else
  RAF_PKG_INIT(0x16ecab1cu, 8u, 0u, 0x49f8f7cfu, 0), /* vgmtools */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd8f54993u, 5u, 0u, 0x85f95e6au, &g_termux_pkg_names[g_termux_pkg_name_offs[1939u]]), /* viddy */
#else
  RAF_PKG_INIT(0xd8f54993u, 5u, 0u, 0x85f95e6au, 0), /* viddy */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe5a7434du, 4u, 0u, 0xd0a3cd4au, &g_termux_pkg_names[g_termux_pkg_name_offs[1940u]]), /* vifm */
#else
  RAF_PKG_INIT(0xe5a7434du, 4u, 0u, 0xd0a3cd4au, 0), /* vifm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb9b60893u, 4u, 0u, 0xc4bbbf4cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1941u]]), /* vile */
#else
  RAF_PKG_INIT(0xb9b60893u, 4u, 0u, 0xc4bbbf4cu, 0), /* vile */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x75123ef7u, 3u, 0u, 0x49cd01ceu, &g_termux_pkg_names[g_termux_pkg_name_offs[1942u]]), /* vim */
#else
  RAF_PKG_INIT(0x75123ef7u, 3u, 0u, 0x49cd01ceu, 0), /* vim */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0ebd8466u, 13u, 0u, 0x2efe0cebu, &g_termux_pkg_names[g_termux_pkg_name_offs[1943u]]), /* virglrenderer */
#else
  RAF_PKG_INIT(0x0ebd8466u, 13u, 0u, 0x2efe0cebu, 0), /* virglrenderer */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x093d2910u, 21u, 0u, 0x47618539u, &g_termux_pkg_names[g_termux_pkg_name_offs[1944u]]), /* virglrenderer-android */
#else
  RAF_PKG_INIT(0x093d2910u, 21u, 0u, 0x47618539u, 0), /* virglrenderer-android */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xabb8022bu, 14u, 0u, 0xd3bbd100u, &g_termux_pkg_names[g_termux_pkg_name_offs[1945u]]), /* virustotal-cli */
#else
  RAF_PKG_INIT(0xabb8022bu, 14u, 0u, 0xd3bbd100u, 0), /* virustotal-cli */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7b124869u, 3u, 0u, 0x33ccdf2cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1946u]]), /* vis */
#else
  RAF_PKG_INIT(0x7b124869u, 3u, 0u, 0x33ccdf2cu, 0), /* vis */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdc42b9bdu, 8u, 0u, 0x13dd6e5au, &g_termux_pkg_names[g_termux_pkg_name_offs[1947u]]), /* vitetris */
#else
  RAF_PKG_INIT(0xdc42b9bdu, 8u, 0u, 0x13dd6e5au, 0), /* vitetris */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7d124b8fu, 3u, 0u, 0x31ccdc06u, &g_termux_pkg_names[g_termux_pkg_name_offs[1948u]]), /* viu */
#else
  RAF_PKG_INIT(0x7d124b8fu, 3u, 0u, 0x31ccdc06u, 0), /* viu */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8eee0f2fu, 5u, 0u, 0xd0293b3eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1949u]]), /* vivid */
#else
  RAF_PKG_INIT(0x8eee0f2fu, 5u, 0u, 0xd0293b3eu, 0), /* vivid */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa31f5354u, 3u, 0u, 0x4bc03901u, &g_termux_pkg_names[g_termux_pkg_name_offs[1950u]]), /* vlc */
#else
  RAF_PKG_INIT(0xa31f5354u, 3u, 0u, 0x4bc03901u, 0), /* vlc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb2b2616fu, 10u, 0u, 0x79ed1918u, &g_termux_pkg_names[g_termux_pkg_name_offs[1951u]]), /* vobsub2srt */
#else
  RAF_PKG_INIT(0xb2b2616fu, 10u, 0u, 0x79ed1918u, 0), /* vobsub2srt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xab51fd5cu, 12u, 0u, 0x20f251c7u, &g_termux_pkg_names[g_termux_pkg_name_offs[1952u]]), /* vorbis-tools */
#else
  RAF_PKG_INIT(0xab51fd5cu, 12u, 0u, 0x20f251c7u, 0), /* vorbis-tools */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x795b3b5eu, 3u, 0u, 0x45d54a47u, &g_termux_pkg_names[g_termux_pkg_name_offs[1953u]]), /* vtm */
#else
  RAF_PKG_INIT(0x795b3b5eu, 3u, 0u, 0x45d54a47u, 0), /* vtm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x76935773u, 6u, 0u, 0x811d2434u, &g_termux_pkg_names[g_termux_pkg_name_offs[1954u]]), /* vttest */
#else
  RAF_PKG_INIT(0x76935773u, 6u, 0u, 0x811d2434u, 0), /* vttest */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2933615eu, 22u, 0u, 0x105e8c3du, &g_termux_pkg_names[g_termux_pkg_name_offs[1955u]]), /* vulkan-extension-layer */
#else
  RAF_PKG_INIT(0x2933615eu, 22u, 0u, 0x105e8c3du, 0), /* vulkan-extension-layer */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x15e42131u, 14u, 0u, 0x497ede3au, &g_termux_pkg_names[g_termux_pkg_name_offs[1956u]]), /* vulkan-headers */
#else
  RAF_PKG_INIT(0x15e42131u, 14u, 0u, 0x497ede3au, 0), /* vulkan-headers */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc8cfb7fbu, 10u, 0u, 0x2d8c371cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1957u]]), /* vulkan-icd */
#else
  RAF_PKG_INIT(0xc8cfb7fbu, 10u, 0u, 0x2d8c371cu, 0), /* vulkan-icd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9ae692eau, 13u, 0u, 0x9c3ad5f3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1958u]]), /* vulkan-loader */
#else
  RAF_PKG_INIT(0x9ae692eau, 13u, 0u, 0x9c3ad5f3u, 0), /* vulkan-loader */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x248853acu, 21u, 0u, 0x4e3444a1u, &g_termux_pkg_names[g_termux_pkg_name_offs[1959u]]), /* vulkan-loader-android */
#else
  RAF_PKG_INIT(0x248853acu, 21u, 0u, 0x4e3444a1u, 0), /* vulkan-loader-android */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7c3a387au, 21u, 0u, 0x8dea72c3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1960u]]), /* vulkan-loader-generic */
#else
  RAF_PKG_INIT(0x7c3a387au, 21u, 0u, 0x8dea72c3u, 0), /* vulkan-loader-generic */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x43546644u, 12u, 0u, 0xad574a33u, &g_termux_pkg_names[g_termux_pkg_name_offs[1961u]]), /* vulkan-tools */
#else
  RAF_PKG_INIT(0x43546644u, 12u, 0u, 0xad574a33u, 0), /* vulkan-tools */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe2e3c45du, 24u, 0u, 0x06febccau, &g_termux_pkg_names[g_termux_pkg_name_offs[1962u]]), /* vulkan-utility-libraries */
#else
  RAF_PKG_INIT(0xe2e3c45du, 24u, 0u, 0x06febccau, 0), /* vulkan-utility-libraries */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xde9eb4a7u, 24u, 0u, 0xd206ed24u, &g_termux_pkg_names[g_termux_pkg_name_offs[1963u]]), /* vulkan-validation-layers */
#else
  RAF_PKG_INIT(0xde9eb4a7u, 24u, 0u, 0xd206ed24u, 0), /* vulkan-validation-layers */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1c17953bu, 11u, 0u, 0x261bc8b6u, &g_termux_pkg_names[g_termux_pkg_name_offs[1964u]]), /* vulkan-volk */
#else
  RAF_PKG_INIT(0x1c17953bu, 11u, 0u, 0x261bc8b6u, 0), /* vulkan-volk */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2c17f436u, 3u, 0u, 0x930c7113u, &g_termux_pkg_names[g_termux_pkg_name_offs[1965u]]), /* w3m */
#else
  RAF_PKG_INIT(0x2c17f436u, 3u, 0u, 0x930c7113u, 0), /* w3m */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8b2183d3u, 4u, 0u, 0x4e1437bcu, &g_termux_pkg_names[g_termux_pkg_name_offs[1966u]]), /* wabt */
#else
  RAF_PKG_INIT(0x8b2183d3u, 4u, 0u, 0x4e1437bcu, 0), /* wabt */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2360cf43u, 12u, 0u, 0x0b18ac78u, &g_termux_pkg_names[g_termux_pkg_name_offs[1967u]]), /* wakatime-cli */
#else
  RAF_PKG_INIT(0x2360cf43u, 12u, 0u, 0x0b18ac78u, 0), /* wakatime-cli */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa0262210u, 4u, 0u, 0x4536bbd3u, &g_termux_pkg_names[g_termux_pkg_name_offs[1968u]]), /* walk */
#else
  RAF_PKG_INIT(0xa0262210u, 4u, 0u, 0x4536bbd3u, 0), /* walk */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x74a81fe7u, 7u, 0u, 0x59950ac2u, &g_termux_pkg_names[g_termux_pkg_name_offs[1969u]]), /* wallust */
#else
  RAF_PKG_INIT(0x74a81fe7u, 7u, 0u, 0x59950ac2u, 0), /* wallust */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x42ed03b0u, 9u, 0u, 0x2c65f2f9u, &g_termux_pkg_names[g_termux_pkg_name_offs[1970u]]), /* wasi-libc */
#else
  RAF_PKG_INIT(0x42ed03b0u, 9u, 0u, 0x2c65f2f9u, 0), /* wasi-libc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6edbcbeeu, 17u, 0u, 0x2d92ecdfu, &g_termux_pkg_names[g_termux_pkg_name_offs[1971u]]), /* wasm-component-ld */
#else
  RAF_PKG_INIT(0x6edbcbeeu, 17u, 0u, 0x2d92ecdfu, 0), /* wasm-component-ld */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x67c41184u, 8u, 0u, 0x76301503u, &g_termux_pkg_names[g_termux_pkg_name_offs[1972u]]), /* wasmedge */
#else
  RAF_PKG_INIT(0x67c41184u, 8u, 0u, 0x76301503u, 0), /* wasmedge */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcc4e883eu, 6u, 0u, 0xbac718ddu, &g_termux_pkg_names[g_termux_pkg_name_offs[1973u]]), /* wasmer */
#else
  RAF_PKG_INIT(0xcc4e883eu, 6u, 0u, 0xbac718ddu, 0), /* wasmer */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa065460cu, 8u, 0u, 0xcd1ac76bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1974u]]), /* wasmtime */
#else
  RAF_PKG_INIT(0xa065460cu, 8u, 0u, 0xcd1ac76bu, 0), /* wasmtime */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcf951f11u, 9u, 0u, 0xd1a2c928u, &g_termux_pkg_names[g_termux_pkg_name_offs[1975u]]), /* watchexec */
#else
  RAF_PKG_INIT(0xcf951f11u, 9u, 0u, 0xd1a2c928u, 0), /* watchexec */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcfbc3418u, 7u, 0u, 0xa41afd9du, &g_termux_pkg_names[g_termux_pkg_name_offs[1976u]]), /* waypipe */
#else
  RAF_PKG_INIT(0xcfbc3418u, 7u, 0u, 0xa41afd9du, 0), /* waypipe */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x334c9943u, 5u, 0u, 0x104c1156u, &g_termux_pkg_names[g_termux_pkg_name_offs[1977u]]), /* wcalc */
#else
  RAF_PKG_INIT(0x334c9943u, 5u, 0u, 0x104c1156u, 0), /* wcalc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbe29e715u, 5u, 0u, 0x1645f8fcu, &g_termux_pkg_names[g_termux_pkg_name_offs[1978u]]), /* wdiff */
#else
  RAF_PKG_INIT(0xbe29e715u, 5u, 0u, 0x1645f8fcu, 0), /* wdiff */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x8bdb439cu, 18u, 0u, 0x9ee8d65bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1979u]]), /* webp-pixbuf-loader */
#else
  RAF_PKG_INIT(0x8bdb439cu, 18u, 0u, 0x9ee8d65bu, 0), /* webp-pixbuf-loader */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x78c9d73du, 8u, 0u, 0x6f2a243au, &g_termux_pkg_names[g_termux_pkg_name_offs[1980u]]), /* websocat */
#else
  RAF_PKG_INIT(0x78c9d73du, 8u, 0u, 0x6f2a243au, 0), /* websocat */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb911077cu, 10u, 0u, 0xd029030bu, &g_termux_pkg_names[g_termux_pkg_name_offs[1981u]]), /* websocketd */
#else
  RAF_PKG_INIT(0xb911077cu, 10u, 0u, 0xd029030bu, 0), /* websocketd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa9321833u, 9u, 0u, 0xd5feb4f6u, &g_termux_pkg_names[g_termux_pkg_name_offs[1982u]]), /* webtunnel */
#else
  RAF_PKG_INIT(0xa9321833u, 9u, 0u, 0xd5feb4f6u, 0), /* webtunnel */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x408b3bc2u, 7u, 0u, 0xb54b4877u, &g_termux_pkg_names[g_termux_pkg_name_offs[1983u]]), /* weechat */
#else
  RAF_PKG_INIT(0x408b3bc2u, 7u, 0u, 0xb54b4877u, 0), /* weechat */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x793bf408u, 17u, 0u, 0xd5558ef9u, &g_termux_pkg_names[g_termux_pkg_name_offs[1984u]]), /* weechat-matrix-rs */
#else
  RAF_PKG_INIT(0x793bf408u, 17u, 0u, 0xd5558ef9u, 0), /* weechat-matrix-rs */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbb061f98u, 6u, 0u, 0x58a358cbu, &g_termux_pkg_names[g_termux_pkg_name_offs[1985u]]), /* weggli */
#else
  RAF_PKG_INIT(0xbb061f98u, 6u, 0u, 0x58a358cbu, 0), /* weggli */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd1cb0d3fu, 4u, 0u, 0x94d3b484u, &g_termux_pkg_names[g_termux_pkg_name_offs[1986u]]), /* wego */
#else
  RAF_PKG_INIT(0xd1cb0d3fu, 4u, 0u, 0x94d3b484u, 0), /* wego */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x01980a92u, 4u, 0u, 0xd6bd5041u, &g_termux_pkg_names[g_termux_pkg_name_offs[1987u]]), /* wget */
#else
  RAF_PKG_INIT(0x01980a92u, 4u, 0u, 0xd6bd5041u, 0), /* wget */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2258b9e0u, 5u, 0u, 0x7f05a509u, &g_termux_pkg_names[g_termux_pkg_name_offs[1988u]]), /* wget2 */
#else
  RAF_PKG_INIT(0x2258b9e0u, 5u, 0u, 0x7f05a509u, 0), /* wget2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x86364f05u, 9u, 0u, 0xc3d1700cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1989u]]), /* wgetpaste */
#else
  RAF_PKG_INIT(0x86364f05u, 9u, 0u, 0xc3d1700cu, 0), /* wgetpaste */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x08d2ece2u, 5u, 0u, 0x17dad9cfu, &g_termux_pkg_names[g_termux_pkg_name_offs[1990u]]), /* which */
#else
  RAF_PKG_INIT(0x08d2ece2u, 5u, 0u, 0x17dad9cfu, 0), /* which */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc4daf9a5u, 14u, 0u, 0x4a37557eu, &g_termux_pkg_names[g_termux_pkg_name_offs[1991u]]), /* whitebox-tools */
#else
  RAF_PKG_INIT(0xc4daf9a5u, 14u, 0u, 0x4a37557eu, 0), /* whitebox-tools */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc363b0b3u, 5u, 0u, 0x3540dcaau, &g_termux_pkg_names[g_termux_pkg_name_offs[1992u]]), /* whois */
#else
  RAF_PKG_INIT(0xc363b0b3u, 5u, 0u, 0x3540dcaau, 0), /* whois */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x084726abu, 15u, 0u, 0xe37cb3e2u, &g_termux_pkg_names[g_termux_pkg_name_offs[1993u]]), /* wireguard-tools */
#else
  RAF_PKG_INIT(0x084726abu, 15u, 0u, 0xe37cb3e2u, 0), /* wireguard-tools */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7b443dc8u, 9u, 0u, 0xab5f4cf1u, &g_termux_pkg_names[g_termux_pkg_name_offs[1994u]]), /* wireproxy */
#else
  RAF_PKG_INIT(0x7b443dc8u, 9u, 0u, 0xab5f4cf1u, 0), /* wireproxy */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1ff7ead5u, 3u, 0u, 0x9faf5c20u, &g_termux_pkg_names[g_termux_pkg_name_offs[1995u]]), /* wiz */
#else
  RAF_PKG_INIT(0x1ff7ead5u, 3u, 0u, 0x9faf5c20u, 0), /* wiz */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x07a54453u, 5u, 0u, 0x88ea1bc2u, &g_termux_pkg_names[g_termux_pkg_name_offs[1996u]]), /* woff2 */
#else
  RAF_PKG_INIT(0x07a54453u, 5u, 0u, 0x88ea1bc2u, 0), /* woff2 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x2de8f655u, 3u, 0u, 0x91a03b8cu, &g_termux_pkg_names[g_termux_pkg_name_offs[1997u]]), /* wol */
#else
  RAF_PKG_INIT(0x2de8f655u, 3u, 0u, 0x91a03b8cu, 0), /* wol */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1847a50eu, 11u, 0u, 0x4be30743u, &g_termux_pkg_names[g_termux_pkg_name_offs[1998u]]), /* wordgrinder */
#else
  RAF_PKG_INIT(0x1847a50eu, 11u, 0u, 0x4be30743u, 0), /* wordgrinder */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x71d1513fu, 4u, 0u, 0x0c1c10c0u, &g_termux_pkg_names[g_termux_pkg_name_offs[1999u]]), /* wren */
#else
  RAF_PKG_INIT(0x71d1513fu, 4u, 0u, 0x0c1c10c0u, 0), /* wren */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0eb4ea25u, 3u, 0u, 0xb8711abcu, &g_termux_pkg_names[g_termux_pkg_name_offs[2000u]]), /* wrk */
#else
  RAF_PKG_INIT(0x0eb4ea25u, 3u, 0u, 0xb8711abcu, 0), /* wrk */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6ad6af7cu, 7u, 0u, 0x77501611u, &g_termux_pkg_names[g_termux_pkg_name_offs[2001u]]), /* wtfutil */
#else
  RAF_PKG_INIT(0x6ad6af7cu, 7u, 0u, 0x77501611u, 0), /* wtfutil */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0ee004f9u, 4u, 0u, 0xda4986cau, &g_termux_pkg_names[g_termux_pkg_name_offs[2002u]]), /* wuzz */
#else
  RAF_PKG_INIT(0x0ee004f9u, 4u, 0u, 0xda4986cau, 0), /* wuzz */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x388da278u, 8u, 0u, 0x302bce3bu, &g_termux_pkg_names[g_termux_pkg_name_offs[2003u]]), /* x11-repo */
#else
  RAF_PKG_INIT(0x388da278u, 8u, 0u, 0x302bce3bu, 0), /* x11-repo */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6824c251u, 9u, 0u, 0x99ec1fa4u, &g_termux_pkg_names[g_termux_pkg_name_offs[2004u]]), /* xcb-proto */
#else
  RAF_PKG_INIT(0x6824c251u, 9u, 0u, 0x99ec1fa4u, 0), /* xcb-proto */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa0cf58f4u, 7u, 0u, 0x5d0f8429u, &g_termux_pkg_names[g_termux_pkg_name_offs[2005u]]), /* xdelta3 */
#else
  RAF_PKG_INIT(0xa0cf58f4u, 7u, 0u, 0x5d0f8429u, 0), /* xdelta3 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4963683du, 2u, 0u, 0xe60acfaau, &g_termux_pkg_names[g_termux_pkg_name_offs[2006u]]), /* xh */
#else
  RAF_PKG_INIT(0x4963683du, 2u, 0u, 0xe60acfaau, 0), /* xh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1b416df5u, 5u, 0u, 0x32966a2cu, &g_termux_pkg_names[g_termux_pkg_name_offs[2007u]]), /* xmake */
#else
  RAF_PKG_INIT(0x1b416df5u, 5u, 0u, 0x32966a2cu, 0), /* xmake */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb9444b97u, 6u, 0u, 0x58660be8u, &g_termux_pkg_names[g_termux_pkg_name_offs[2008u]]), /* xmlsec */
#else
  RAF_PKG_INIT(0xb9444b97u, 6u, 0u, 0x58660be8u, 0), /* xmlsec */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xce139f6fu, 10u, 0u, 0x1407e73cu, &g_termux_pkg_names[g_termux_pkg_name_offs[2009u]]), /* xmlstarlet */
#else
  RAF_PKG_INIT(0xce139f6fu, 10u, 0u, 0x1407e73cu, 0), /* xmlstarlet */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x79694f2bu, 5u, 0u, 0xc4505ab2u, &g_termux_pkg_names[g_termux_pkg_name_offs[2010u]]), /* xmlto */
#else
  RAF_PKG_INIT(0x79694f2bu, 5u, 0u, 0xc4505ab2u, 0), /* xmlto */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd0ea7df7u, 5u, 0u, 0xff6d96ceu, &g_termux_pkg_names[g_termux_pkg_name_offs[2011u]]), /* xmppc */
#else
  RAF_PKG_INIT(0xd0ea7df7u, 5u, 0u, 0xff6d96ceu, 0), /* xmppc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x79216cecu, 16u, 0u, 0x7879e0abu, &g_termux_pkg_names[g_termux_pkg_name_offs[2012u]]), /* xorg-util-macros */
#else
  RAF_PKG_INIT(0x79216cecu, 16u, 0u, 0x7879e0abu, 0), /* xorg-util-macros */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb4a23677u, 9u, 0u, 0xbf2850cau, &g_termux_pkg_names[g_termux_pkg_name_offs[2013u]]), /* xorgproto */
#else
  RAF_PKG_INIT(0xb4a23677u, 9u, 0u, 0xbf2850cau, 0), /* xorgproto */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xe79d5399u, 7u, 0u, 0xa9898960u, &g_termux_pkg_names[g_termux_pkg_name_offs[2014u]]), /* xorriso */
#else
  RAF_PKG_INIT(0xe79d5399u, 7u, 0u, 0xa9898960u, 0), /* xorriso */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xbfd0bedbu, 6u, 0u, 0x22b9afd8u, &g_termux_pkg_names[g_termux_pkg_name_offs[2015u]]), /* xtrans */
#else
  RAF_PKG_INIT(0xbfd0bedbu, 6u, 0u, 0x22b9afd8u, 0), /* xtrans */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x77cb70f1u, 8u, 0u, 0x19a535f6u, &g_termux_pkg_names[g_termux_pkg_name_offs[2016u]]), /* xvidcore */
#else
  RAF_PKG_INIT(0x77cb70f1u, 8u, 0u, 0x19a535f6u, 0), /* xvidcore */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa03e3719u, 6u, 0u, 0xed3ec06eu, &g_termux_pkg_names[g_termux_pkg_name_offs[2017u]]), /* xxhash */
#else
  RAF_PKG_INIT(0xa03e3719u, 6u, 0u, 0xed3ec06eu, 0), /* xxhash */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x764eac94u, 4u, 0u, 0x72e5952bu, &g_termux_pkg_names[g_termux_pkg_name_offs[2018u]]), /* yadm */
#else
  RAF_PKG_INIT(0x764eac94u, 4u, 0u, 0x72e5952bu, 0), /* yadm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7b3fa9e9u, 4u, 0u, 0x75cd94feu, &g_termux_pkg_names[g_termux_pkg_name_offs[2019u]]), /* yajl */
#else
  RAF_PKG_INIT(0x7b3fa9e9u, 4u, 0u, 0x75cd94feu, 0), /* yajl */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x567b99d2u, 4u, 0u, 0x8308409du, &g_termux_pkg_names[g_termux_pkg_name_offs[2020u]]), /* yara */
#else
  RAF_PKG_INIT(0x567b99d2u, 4u, 0u, 0x8308409du, 0), /* yara */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x597b9e8bu, 4u, 0u, 0x74082900u, &g_termux_pkg_names[g_termux_pkg_name_offs[2021u]]), /* yarn */
#else
  RAF_PKG_INIT(0x597b9e8bu, 4u, 0u, 0x74082900u, 0), /* yarn */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x76798d9bu, 4u, 0u, 0x730bf904u, &g_termux_pkg_names[g_termux_pkg_name_offs[2022u]]), /* yasm */
#else
  RAF_PKG_INIT(0x76798d9bu, 4u, 0u, 0x730bf904u, 0), /* yasm */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5e681eb2u, 4u, 0u, 0x9af4deadu, &g_termux_pkg_names[g_termux_pkg_name_offs[2023u]]), /* yazi */
#else
  RAF_PKG_INIT(0x5e681eb2u, 4u, 0u, 0x9af4deadu, 0), /* yazi */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x80a3c0aau, 5u, 0u, 0xb411f567u, &g_termux_pkg_names[g_termux_pkg_name_offs[2024u]]), /* yosys */
#else
  RAF_PKG_INIT(0x80a3c0aau, 5u, 0u, 0xb411f567u, 0), /* yosys */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc2d011b4u, 9u, 0u, 0x351c49b9u, &g_termux_pkg_names[g_termux_pkg_name_offs[2025u]]), /* youtubedr */
#else
  RAF_PKG_INIT(0xc2d011b4u, 9u, 0u, 0x351c49b9u, 0), /* youtubedr */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4c5f9b5fu, 2u, 0u, 0xf30d22b8u, &g_termux_pkg_names[g_termux_pkg_name_offs[2026u]]), /* yq */
#else
  RAF_PKG_INIT(0x4c5f9b5fu, 2u, 0u, 0xf30d22b8u, 0), /* yq */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6bf58bc4u, 10u, 0u, 0xba06657fu, &g_termux_pkg_names[g_termux_pkg_name_offs[2027u]]), /* yt-dlp-ejs */
#else
  RAF_PKG_INIT(0x6bf58bc4u, 10u, 0u, 0xba06657fu, 0), /* yt-dlp-ejs */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x3ce3817au, 5u, 0u, 0xb8b08607u, &g_termux_pkg_names[g_termux_pkg_name_offs[2028u]]), /* ytfzf */
#else
  RAF_PKG_INIT(0x3ce3817au, 5u, 0u, 0xb8b08607u, 0), /* ytfzf */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x489a2f4cu, 10u, 0u, 0xa7d61753u, &g_termux_pkg_names[g_termux_pkg_name_offs[2029u]]), /* ytui-music */
#else
  RAF_PKG_INIT(0x489a2f4cu, 10u, 0u, 0xa7d61753u, 0), /* ytui-music */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xd4572c4fu, 7u, 0u, 0xa32d8caau, &g_termux_pkg_names[g_termux_pkg_name_offs[2030u]]), /* yuma123 */
#else
  RAF_PKG_INIT(0xd4572c4fu, 7u, 0u, 0xa32d8caau, 0), /* yuma123 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc2c80aa4u, 6u, 0u, 0xdaa3e2a3u, &g_termux_pkg_names[g_termux_pkg_name_offs[2031u]]), /* z-push */
#else
  RAF_PKG_INIT(0xc2c80aa4u, 6u, 0u, 0xdaa3e2a3u, 0), /* z-push */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x1e67a1bau, 2u, 0u, 0x250522a9u, &g_termux_pkg_names[g_termux_pkg_name_offs[2032u]]), /* z3 */
#else
  RAF_PKG_INIT(0x1e67a1bau, 2u, 0u, 0x250522a9u, 0), /* z3 */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x70ddd5f2u, 4u, 0u, 0xee44b815u, &g_termux_pkg_names[g_termux_pkg_name_offs[2033u]]), /* zbar */
#else
  RAF_PKG_INIT(0x70ddd5f2u, 4u, 0u, 0xee44b815u, 0), /* zbar */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x203c2843u, 6u, 0u, 0x671f6b18u, &g_termux_pkg_names[g_termux_pkg_name_offs[2034u]]), /* zellij */
#else
  RAF_PKG_INIT(0x203c2843u, 6u, 0u, 0x671f6b18u, 0), /* zellij */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xa10a2a86u, 7u, 0u, 0x76f00e13u, &g_termux_pkg_names[g_termux_pkg_name_offs[2035u]]), /* zeronet */
#else
  RAF_PKG_INIT(0xa10a2a86u, 7u, 0u, 0x76f00e13u, 0), /* zeronet */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9a8258f1u, 3u, 0u, 0x145e61a4u, &g_termux_pkg_names[g_termux_pkg_name_offs[2036u]]), /* zig */
#else
  RAF_PKG_INIT(0x9a8258f1u, 3u, 0u, 0x145e61a4u, 0), /* zig */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xaf16fb1fu, 4u, 0u, 0xd18716e0u, &g_termux_pkg_names[g_termux_pkg_name_offs[2037u]]), /* zile */
#else
  RAF_PKG_INIT(0xaf16fb1fu, 4u, 0u, 0xd18716e0u, 0), /* zile */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xab8273b4u, 3u, 0u, 0x235e7941u, &g_termux_pkg_names[g_termux_pkg_name_offs[2038u]]), /* zip */
#else
  RAF_PKG_INIT(0xab8273b4u, 3u, 0u, 0x235e7941u, 0), /* zip */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4cde8e71u, 6u, 0u, 0x9f642fb2u, &g_termux_pkg_names[g_termux_pkg_name_offs[2039u]]), /* zipios */
#else
  RAF_PKG_INIT(0x4cde8e71u, 6u, 0u, 0x9f642fb2u, 0), /* zipios */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x4667e0b2u, 2u, 0u, 0xdd04b151u, &g_termux_pkg_names[g_termux_pkg_name_offs[2040u]]), /* zk */
#else
  RAF_PKG_INIT(0x4667e0b2u, 2u, 0u, 0xdd04b151u, 0), /* zk */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x7c5452c4u, 4u, 0u, 0x3e1dd38fu, &g_termux_pkg_names[g_termux_pkg_name_offs[2041u]]), /* zlib */
#else
  RAF_PKG_INIT(0x7c5452c4u, 4u, 0u, 0x3e1dd38fu, 0), /* zlib */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x967a03e0u, 3u, 0u, 0x186523b5u, &g_termux_pkg_names[g_termux_pkg_name_offs[2042u]]), /* zls */
#else
  RAF_PKG_INIT(0x967a03e0u, 3u, 0u, 0x186523b5u, 0), /* zls */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xb67eb36eu, 3u, 0u, 0x106b274bu, &g_termux_pkg_names[g_termux_pkg_name_offs[2043u]]), /* znc */
#else
  RAF_PKG_INIT(0xb67eb36eu, 3u, 0u, 0x106b274bu, 0), /* znc */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x0b95660du, 4u, 0u, 0x5f79b326u, &g_termux_pkg_names[g_termux_pkg_name_offs[2044u]]), /* zola */
#else
  RAF_PKG_INIT(0x0b95660du, 4u, 0u, 0x5f79b326u, 0), /* zola */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x6c9bc196u, 6u, 0u, 0xf6a77875u, &g_termux_pkg_names[g_termux_pkg_name_offs[2045u]]), /* zoxide */
#else
  RAF_PKG_INIT(0x6c9bc196u, 6u, 0u, 0xf6a77875u, 0), /* zoxide */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x5fdd0839u, 4u, 0u, 0xdbe34af6u, &g_termux_pkg_names[g_termux_pkg_name_offs[2046u]]), /* zpaq */
#else
  RAF_PKG_INIT(0x5fdd0839u, 4u, 0u, 0xdbe34af6u, 0), /* zpaq */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x396dfcd7u, 4u, 0u, 0xcb167e70u, &g_termux_pkg_names[g_termux_pkg_name_offs[2047u]]), /* zrok */
#else
  RAF_PKG_INIT(0x396dfcd7u, 4u, 0u, 0xcb167e70u, 0), /* zrok */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xafc18e56u, 3u, 0u, 0x07765213u, &g_termux_pkg_names[g_termux_pkg_name_offs[2048u]]), /* zsh */
#else
  RAF_PKG_INIT(0xafc18e56u, 3u, 0u, 0x07765213u, 0), /* zsh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xf6b3f9c8u, 15u, 0u, 0x1aaee399u, &g_termux_pkg_names[g_termux_pkg_name_offs[2049u]]), /* zsh-completions */
#else
  RAF_PKG_INIT(0xf6b3f9c8u, 15u, 0u, 0x1aaee399u, 0), /* zsh-completions */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc59ce979u, 4u, 0u, 0x20808472u, &g_termux_pkg_names[g_termux_pkg_name_offs[2050u]]), /* zssh */
#else
  RAF_PKG_INIT(0xc59ce979u, 4u, 0u, 0x20808472u, 0), /* zssh */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xcfa9c52au, 4u, 0u, 0x1688c379u, &g_termux_pkg_names[g_termux_pkg_name_offs[2051u]]), /* zstd */
#else
  RAF_PKG_INIT(0xcfa9c52au, 4u, 0u, 0x1688c379u, 0), /* zstd */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0x9aa99ea2u, 5u, 0u, 0x0bc09f5bu, &g_termux_pkg_names[g_termux_pkg_name_offs[2052u]]), /* zsync */
#else
  RAF_PKG_INIT(0x9aa99ea2u, 5u, 0u, 0x0bc09f5bu, 0), /* zsync */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xdba11b8bu, 7u, 0u, 0x5db0c996u, &g_termux_pkg_names[g_termux_pkg_name_offs[2053u]]), /* zziplib */
#else
  RAF_PKG_INIT(0xdba11b8bu, 7u, 0u, 0x5db0c996u, 0), /* zziplib */
#endif
#if RAF_TERMUX_PKG_NAME_PTR_ENABLE
  RAF_PKG_INIT(0xc3449392u, 4u, 0u, 0x0ec6c625u, &g_termux_pkg_names[g_termux_pkg_name_offs[2054u]]), /* zzuf */
#else
  RAF_PKG_INIT(0xc3449392u, 4u, 0u, 0x0ec6c625u, 0), /* zzuf */
#endif
};

static const raf_termux_pkg_table_t g_table = {
  g_termux_pkgs,
  2055u,
  2166136261u,
  0x52414650u
};

const raf_termux_pkg_table_t *RmR_termux_packages(void){
  return &g_table;
}
