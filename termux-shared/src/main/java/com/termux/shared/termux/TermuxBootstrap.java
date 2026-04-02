package com.termux.shared.termux;

import android.content.Context;
import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import com.termux.shared.logger.Logger;
import com.termux.shared.termux.TermuxConstants.TERMUX_APP;

public final class TermuxBootstrap {

    private static final String LOG_TAG = "TermuxBootstrap";

    /** Nome do campo na classe BuildConfig do Termux que armazena a variante do pacote. */
    public static final String BUILD_CONFIG_FIELD_TERMUX_PACKAGE_VARIANT = "TERMUX_PACKAGE_VARIANT";

    /** Gerenciador de pacotes usado no bootstrap (definido no build.gradle). */
    @Nullable
    public static BootstrapPackageManager TERMUX_APP_PACKAGE_MANAGER;

    /** Variante do pacote (ex: "apt-android-7"). */
    @Nullable
    public static BootstrapPackageVariant TERMUX_APP_PACKAGE_VARIANT;

    private TermuxBootstrap() {
        // Classe utilitária – não instanciar
    }

    /**
     * Define {@link #TERMUX_APP_PACKAGE_MANAGER} e {@link #TERMUX_APP_PACKAGE_VARIANT}
     * a partir do nome da variante.
     *
     * @param packageVariantName Nome da variante (ex: "apt-android-7") ou null
     */
    public static void setTermuxPackageManagerAndVariant(@Nullable String packageVariantName) {
        if (packageVariantName == null || packageVariantName.isEmpty()) {
            Logger.logError(LOG_TAG, "packageVariantName é nulo/vazio. Usando fallback: apt-android-7");
            packageVariantName = "apt-android-7";
        }

        TERMUX_APP_PACKAGE_VARIANT = BootstrapPackageVariant.variantOf(packageVariantName);
        if (TERMUX_APP_PACKAGE_VARIANT == null) {
            Logger.logError(LOG_TAG, "Variante \"" + packageVariantName + "\" não suportada. Usando APT_ANDROID_7.");
            TERMUX_APP_PACKAGE_VARIANT = BootstrapPackageVariant.APT_ANDROID_7;
        }
        Logger.logVerbose(LOG_TAG, "TERMUX_APP_PACKAGE_VARIANT = " + TERMUX_APP_PACKAGE_VARIANT);

        // O gerente é a parte antes do primeiro hífen
        int index = packageVariantName.indexOf('-');
        String managerName = (index == -1) ? packageVariantName : packageVariantName.substring(0, index);
        TERMUX_APP_PACKAGE_MANAGER = BootstrapPackageManager.managerOf(managerName);
        if (TERMUX_APP_PACKAGE_MANAGER == null) {
            Logger.logError(LOG_TAG, "Gerenciador \"" + managerName + "\" não suportado. Usando APT.");
            TERMUX_APP_PACKAGE_MANAGER = BootstrapPackageManager.APT;
        }
        Logger.logVerbose(LOG_TAG, "TERMUX_APP_PACKAGE_MANAGER = " + TERMUX_APP_PACKAGE_MANAGER);
    }

    /**
     * Lê a variante do pacote a partir da classe BuildConfig do Termux (requer sharedUserId).
     * Só funciona se o app atual compartilha o mesmo UID do Termux.
     *
     * @param currentPackageContext Contexto do pacote atual (plugin, etc.)
     */
    public static void setTermuxPackageManagerAndVariantFromTermuxApp(@NonNull Context currentPackageContext) {
        String variant = getTermuxAppBuildConfigPackageVariantFromTermuxApp(currentPackageContext);
        if (variant != null) {
            setTermuxPackageManagerAndVariant(variant);
        } else {
            Logger.logError(LOG_TAG, "Falha ao obter variante do Termux app. Usando fallback padrão.");
            setTermuxPackageManagerAndVariant(null);
        }
    }

    /**
     * Obtém o valor do campo {@link #BUILD_CONFIG_FIELD_TERMUX_PACKAGE_VARIANT}
     * da classe BuildConfig do Termux instalado.
     */
    @Nullable
    public static String getTermuxAppBuildConfigPackageVariantFromTermuxApp(@NonNull Context currentPackageContext) {
        try {
            Object value = TermuxUtils.getTermuxAppAPKBuildConfigClassField(
                    currentPackageContext,
                    BUILD_CONFIG_FIELD_TERMUX_PACKAGE_VARIANT
            );
            return (value instanceof String) ? (String) value : null;
        } catch (Exception e) {
            Logger.logStackTraceWithMessage(LOG_TAG,
                    "Erro ao ler campo " + BUILD_CONFIG_FIELD_TERMUX_PACKAGE_VARIANT +
                    " da classe " + TERMUX_APP.BUILD_CONFIG_CLASS_NAME, e);
            return null;
        }
    }

    // ========== Métodos auxiliares de verificação ==========

    public static boolean isAppPackageManagerAPT() {
        return BootstrapPackageManager.APT.equals(TERMUX_APP_PACKAGE_MANAGER);
    }

    public static boolean isAppPackageVariantAPTAndroid7() {
        return BootstrapPackageVariant.APT_ANDROID_7.equals(TERMUX_APP_PACKAGE_VARIANT);
    }

    public static boolean isAppPackageVariantAPTAndroid5() {
        return BootstrapPackageVariant.APT_ANDROID_5.equals(TERMUX_APP_PACKAGE_VARIANT);
    }

    // ========== Enums otimizadas ==========

    /** Gerenciadores de pacote suportados (APENAS apt ativo – outros podem ser adicionados). */
    public enum BootstrapPackageManager {
        APT("apt");

        private final String name;

        BootstrapPackageManager(String name) { this.name = name; }

        public String getName() { return name; }

        public boolean equalsManager(String manager) {
            return manager != null && manager.equals(name);
        }

        @Nullable
        public static BootstrapPackageManager managerOf(String name) {
            if (name == null) return null;
            for (BootstrapPackageManager v : values()) {
                if (v.name.equals(name)) return v;
            }
            return null;
        }

        @Override
        public String toString() { return name; }
    }

    /** Variantes de pacote (cada uma associa um gerenciador + versão Android mínima). */
    public enum BootstrapPackageVariant {
        APT_ANDROID_7("apt-android-7"),
        APT_ANDROID_5("apt-android-5");

        private final String name;

        BootstrapPackageVariant(String name) { this.name = name; }

        public String getName() { return name; }

        public boolean equalsVariant(String variant) {
            return variant != null && variant.equals(name);
        }

        @Nullable
        public static BootstrapPackageVariant variantOf(String name) {
            if (name == null) return null;
            for (BootstrapPackageVariant v : values()) {
                if (v.name.equals(name)) return v;
            }
            return null;
        }

        @Override
        public String toString() { return name; }
    }
}
