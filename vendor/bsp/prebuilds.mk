# Busybox
PRODUCT_PACKAGES += \
	busybox

# GAPPS apps
GAPPS_VARIANT := pico
DONT_DEXPREOPT_PREBUILTS := true
GAPPS_FORCE_WEBVIEW_OVERRIDES := true
GAPPS_FORCE_PACKAGE_OVERRIDES := true

PRODUCT_PACKAGES += \
    Chrome \
    CalendarGooglePrebuilt \
    CalculatorGoogle \
    PrebuiltDeskClockGoogle \
    Wallpapers \
    GoogleContacts \
    GoogleContactsSyncAdapter \
    GoogleDialer \
    DialerFramework \
    PrebuiltBugle \
    PixelLauncher \
    GooglePackageInstaller \
    LatinImeGoogle \
    Velvet \
    YouTube

GAPPS_EXCLUDED_PACKAGES := \
    Books \
    Hangouts \
    Music2 \
    Newsstand \
    Photos \
    Street \
    Videos

$(call inherit-product-if-exists, vendor/opengapps/build/opengapps-packages.mk)

