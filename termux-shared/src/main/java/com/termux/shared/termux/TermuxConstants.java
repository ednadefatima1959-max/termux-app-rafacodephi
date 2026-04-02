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
    // 3. Plugins
    // ------------------------------------------------------------
    @NonNull
    public static final String TERMUX_API_PACKAGE_NAME = TERMUX_PACKAGE_NAME + ".api";
    @NonNull
    public static final String TERMUX_BOOT_PACKAGE_NAME = TERMUX_PACKAGE_NAME + ".boot";
    @NonNull
    public static final String TERMUX_FLOAT_PACKAGE_NAME = TERMUX_PACKAGE_NAME + ".float";
    @NonNull
    public static final String TERMUX_STYLING_PACKAGE_NAME = TERMUX_PACKAGE_NAME + ".styling";
    @NonNull
    public static final String TERMUX_TASKER_PACKAGE_NAME = TERMUX_PACKAGE_NAME + ".tasker";
    @NonNull
    public static final String TERMUX_WIDGET_PACKAGE_NAME = TERMUX_PACKAGE_NAME + ".widget";

    // (Você já tem as URLs e nomes, vou omitir para encurtar, mas mantenha as que já estavam)

    // ------------------------------------------------------------
    // 4. Repositórios adicionais
    // ------------------------------------------------------------
    @NonNull
    public static final String TERMUX_PACKAGES_GITHUB_REPO_NAME = "termux-packages";
    @NonNull
    public static final String TERMUX_PACKAGES_GITHUB_REPO_URL = TERMUX_GITHUB_ORGANIZATION_URL + "/" + TERMUX_PACKAGES_GITHUB_REPO_NAME;
    @NonNull
    public static final String TERMUX_PACKAGES_GITHUB_ISSUES_URL = TERMUX_PACKAGES_GITHUB_REPO_URL + "/issues";
    @NonNull
    public static final String TERMUX_PACKAGES_GITHUB_ISSUES_REPO_URL = TERMUX_PACKAGES_GITHUB_ISSUES_URL;
    @NonNull
    public static final String TERMUX_PACKAGES_GITHUB_WIKI_REPO_URL = TERMUX_PACKAGES_GITHUB_REPO_URL + "/wiki";
    @NonNull
    public static final String TERMUX_GITHUB_WIKI_REPO_URL = TERMUX_GITHUB_REPO_URL + "/wiki";

    // ------------------------------------------------------------
    // 5. Wikis e suporte
    // ------------------------------------------------------------
    @NonNull
    public static final String TERMUX_WIKI = "Termux Wiki";
    @NonNull
    public static final String TERMUX_WIKI_URL = "https://wiki.termux.com";
    @NonNull
    public static final String TERMUX_SUPPORT_EMAIL_URL = "support@termux.dev";
    @NonNull
    public static final String TERMUX_SUPPORT_EMAIL_MAILTO_URL = "mailto:" + TERMUX_SUPPORT_EMAIL_URL;

    // ------------------------------------------------------------
    // 6. Actions, broadcast, notificações
    // ------------------------------------------------------------
    public static final String BROADCAST_TERMUX_OPENED = TERMUX_PACKAGE_NAME + ".action.OPENED";
    public static final String TERMUX_ACTIVITY_NAME = TERMUX_PACKAGE_NAME + ".TermuxActivity";
    public static final String TERMUX_RUN_COMMAND_NOTIFICATION_ID = "run_command_notification";

    public static final String TERMUX_CRASH_REPORTS_NOTIFICATION_CHANNEL_ID = TERMUX_PACKAGE_NAME + ".crash_reports";
    public static final String TERMUX_CRASH_REPORTS_NOTIFICATION_CHANNEL_NAME = "Termux Crash Reports";

    // ------------------------------------------------------------
    // 7. Lista de plugins
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
    // 8. APK release types (certificados)
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
    // 9. Propriedades (exemplo)
    // ------------------------------------------------------------
    public static final String PROP_ALLOW_EXTERNAL_APPS = "allow-external-apps";

    // ------------------------------------------------------------
    // 10. Inner class TERMUX_APP
    // ------------------------------------------------------------
    public static final class TERMUX_APP {
        public static final String BUILD_CONFIG_CLASS_NAME = TERMUX_PACKAGE_NAME + ".BuildConfig";

        public static final class TERMUX_ACTIVITY {
            public static final String ACTION_NOTIFY_APP_CRASH = TERMUX_PACKAGE_NAME + ".action.NOTIFY_APP_CRASH";
        }

        public static final class TERMUX_SERVICE {
            // Se necessário, adicione constantes aqui
        }
    }

    private TermuxConstants() {}
}
