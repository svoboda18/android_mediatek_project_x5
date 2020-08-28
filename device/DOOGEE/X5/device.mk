# ProjectConfig
include device/DOOGEE/$(MTK_TARGET_PROJECT)/ProjectConfig.mk

# MT6580
$(call inherit-product, device/mediatek/mt6580/device.mk)

# Local dir(s)
LOCAL_PATH := device/DOOGEE/X5
ROOTDIR := $(LOCAL_PATH)/rootdir
SPFTDIR := $(LOCAL_PATH)/spft
BANIMATION := $(LOCAL_PATH)/bootanimation

# Overlays
DEVICE_PACKAGE_OVERLAYS += $(LOCAL_PATH)/overlay
DEVICE_PACKAGE_OVERLAYS += device/mediatek/common/overlay/sd_in_ex_otg
DEVICE_PACKAGE_OVERLAYS += device/mediatek/common/overlay/navbar

# X5 project rootdir
PRODUCT_COPY_FILES += $(ROOTDIR)/factory_init.project.rc:$(TARGET_COPY_OUT_VENDOR)/etc/init/hw/factory_init.project.rc
PRODUCT_COPY_FILES += $(ROOTDIR)/init.project.rc:$(TARGET_COPY_OUT_VENDOR)/etc/init/hw/init.project.rc

# Thermal
PRODUCT_COPY_FILES += $(LOCAL_PATH)/thermal.conf:$(TARGET_COPY_OUT_VENDOR)/etc/.tp/thermal.conf:mtk

# Permission
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.sensor.accelerometer.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/android.hardware.sensor.accelerometer.xml
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.sensor.proximity.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/android.hardware.sensor.proximity.xml
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.sensor.light.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/android.hardware.sensor.light.xml
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.faketouch.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/android.hardware.faketouch.xml
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.touchscreen.multitouch.distinct.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/android.hardware.touchscreen.multitouch.distinct.xml
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.touchscreen.multitouch.jazzhand.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/android.hardware.touchscreen.multitouch.jazzhand.xml
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.touchscreen.multitouch.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/android.hardware.touchscreen.multitouch.xml
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.touchscreen.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/android.hardware.touchscreen.xml
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.location.gps.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/android.hardware.location.gps.xml
PRODUCT_COPY_FILES += $(LOCAL_PATH)/android.hardware.telephony.gsm.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/android.hardware.telephony.gsm.xml
PRODUCT_COPY_FILES += $(LOCAL_PATH)/android.hardware.microphone.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/android.hardware.microphone.xml
PRODUCT_COPY_FILES += $(LOCAL_PATH)/android.hardware.camera.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/android.hardware.camera.xml

# Audio
PRODUCT_COPY_FILES += frameworks/av/media/libeffects/data/audio_effects.conf:system/etc/audio_effects.conf
PRODUCT_COPY_FILES += $(LOCAL_PATH)/audio_policy.conf:$(TARGET_COPY_OUT_VENDOR)/etc/audio_policy.conf:mtk

# Media
PRODUCT_COPY_FILES += device/mediatek/mt6580/media_profiles_mt6580p.xml:$(TARGET_COPY_OUT_VENDOR)/etc/media_profiles.xml:mtk
PRODUCT_PROPERTY_OVERRIDES += media.settings.xml=/vendor/etc/media_profiles.xml
PRODUCT_PROPERTY_OVERRIDES += ro.media.maxmem=262144000

# Vendor override props
PRODUCT_PROPERTY_OVERRIDES += \
    qemu.hw.mainkeys=1 \
    ro.sf.lcd_density=320

# Performance Optimizations 
PRODUCT_PROPERTY_OVERRIDES += \
    dalvik.vm.jit.codecachesize=0 \
    config.disable_atlas=true

# USB
PRODUCT_DEFAULT_PROPERTY_OVERRIDES += \
    persist.sys.usb.config=mtp \
    persist.service.acm.enable=0 \
    ro.mount.fs=EXT4

# Override plat
PRODUCT_PROPERTY_OVERRIDES +=  \
    ro.mediatek.chip_ver=S01 \
    ro.mediatek.platform=MT6580

# Override sim
PRODUCT_PROPERTY_OVERRIDES +=  \
    ro.telephony.sim.count=2 \
    persist.radio.default.sim=0

# Keyboard layout
PRODUCT_COPY_FILES += device/mediatek/mt6580/ACCDET.kl:system/usr/keylayout/ACCDET.kl:mtk
PRODUCT_COPY_FILES += $(LOCAL_PATH)/mtk-kpd.kl:system/usr/keylayout/mtk-kpd.kl:mtk

# Bootanimation
PRODUCT_COPY_FILES += $(BANIMATION)/bootanimation.zip:system/media/bootanimation.zip

# SPFT
PRODUCT_COPY_FILES += $(SPFTDIR)/nvdata.bin:$(OUT_DIR)/nvdata.bin
PRODUCT_COPY_FILES += $(SPFTDIR)/nvram.bin:$(OUT_DIR)/nvram.bin

# Gapps
include vendor/bsp/prebuilds.mk

$(call inherit-product-if-exists, vendor/mediatek/libs/$(MTK_TARGET_PROJECT)/device-vendor.mk)
