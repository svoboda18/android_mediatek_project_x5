# Busybox
PRODUCT_PACKAGES += \
	busybox

# GAPPS apps
GAPPS_VARIANT := pico
GAPPS_FORCE_PACKAGE_OVERRIDES := true

PRODUCT_PACKAGES += \
    Chrome
GAPPS_EXCLUDED_PACKAGES := \
    Books \
    Hangouts \
    Music2 \
    Newsstand \
    Photos \
    Movies \
    Street \
    Videos

$(call inherit-product-if-exists, vendor/opengapps/build/opengapps-packages.mk)

