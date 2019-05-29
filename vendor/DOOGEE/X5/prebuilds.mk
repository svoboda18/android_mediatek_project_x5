# Busybox
PRODUCT_PACKAGES += \
	busybox

# GAPPS apps
GAPPS_VARIANT := pico
GAPPS_FORCE_PACKAGE_OVERRIDES := true
DONT_DEXPREOPT_PREBUILTS := true
GAPPS_FORCE_WEBVIEW_OVERRIDES := true

PRODUCT_PACKAGES += \
    Chrome \
    LatinImeGoogle \
    Drive \
    YouTube \
    Velvet \
    WebViewGoogle \
    WebViewStub

GAPPS_EXCLUDED_PACKAGES := \
    Movies \
    Music \
    Videos \
    CalendarGooglePrebuilt 

$(call inherit-product-if-exists, vendor/opengapps/build/opengapps-packages.mk)

