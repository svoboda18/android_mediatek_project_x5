PRODUCT_PACKAGES += \
	busybox

PRODUCT_PACKAGES += mediatek-cta

# GAPPS apps
GAPPS_VARIANT := pico
GAPPS_FORCE_PACKAGE_OVERRIDES := true
DONT_DEXPREOPT_PREBUILTS := true
GAPPS_FORCE_WEBVIEW_OVERRIDES := true
GAPPS_FORCE_BROWSER_OVERRIDES := false

GAPPS_EXCLUDED_PACKAGES := \
    Video \
    Videos \
    CalendarGooglePrebuilt 

$(call inherit-product-if-exists, vendor/opengapps/build/opengapps-packages.mk)

