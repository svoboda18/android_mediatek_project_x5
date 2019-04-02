PRODUCT_PACKAGES += \
	busybox \
	su

PRODUCT_PACKAGES += mediatek-cta

SUPERUSER_EMBEDDED := true

# GAPPS apps
GAPPS_VARIANT := pico
GAPPS_FORCE_PACKAGE_OVERRIDES := true
DONT_DEXPREOPT_PREBUILTS := true
GAPPS_FORCE_WEBVIEW_OVERRIDES := true
GAPPS_FORCE_BROWSER_OVERRIDES := false

PRODUCT_PACKAGES += \
    GoogleTTS \
    PixelLauncher \
    LatinImeGoogle \
    Chrome \
    Velvet \
    Gmail

GAPPS_EXCLUDED_PACKAGES := \
	Video \
	Videos \
	CalendarGooglePrebuilt 

$(call inherit-product-if-exists, vendor/opengapps/build/opengapps-packages.mk)

