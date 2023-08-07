# Local dir(s)
LOCAL_PATH := device/DOOGEE/X5
ROOTDIR := $(LOCAL_PATH)/rootdir
BANIMATION := $(LOCAL_PATH)/bootanimation

SIM_COUNT := 2

# Overlays
DEVICE_PACKAGE_OVERLAYS += $(LOCAL_PATH)/overlay

# X5 project rootdir
PRODUCT_COPY_FILES += $(ROOTDIR)/factory_init.project.rc:$(TARGET_COPY_OUT_VENDOR)/etc/init/hw/factory_init.project.rc
PRODUCT_COPY_FILES += $(ROOTDIR)/init.project.rc:$(TARGET_COPY_OUT_VENDOR)/etc/init/hw/init.project.rc

# Thermal
PRODUCT_COPY_FILES += $(LOCAL_PATH)/thermal.conf:$(TARGET_COPY_OUT_VENDOR)/etc/.tp/thermal.conf:mtk

# Permission
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.sensor.accelerometer.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/android.hardware.sensor.accelerometer.xml
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.sensor.proximity.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/android.hardware.sensor.proximity.xml
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.sensor.light.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/android.hardware.sensor.light.xml
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.touchscreen.multitouch.jazzhand.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/android.hardware.touchscreen.multitouch.jazzhand.xml
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.location.gps.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/android.hardware.location.gps.xml
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.camera.autofocus.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/android.hardware.camera.autofocus.xml
PRODUCT_COPY_FILES += $(LOCAL_PATH)/android.hardware.telephony.gsm.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/android.hardware.telephony.gsm.xml
PRODUCT_COPY_FILES += $(LOCAL_PATH)/android.hardware.microphone.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/android.hardware.microphone.xml
PRODUCT_COPY_FILES += $(LOCAL_PATH)/android.hardware.camera.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/android.hardware.camera.xml
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.software.app_widgets.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/android.software.app_widgets.xml

# Audio
PRODUCT_COPY_FILES += $(LOCAL_PATH)/audio_policy.conf:$(TARGET_COPY_OUT_VENDOR)/etc/audio_policy.conf:mtk

# Vendor override props
PRODUCT_PROPERTY_OVERRIDES += \
    qemu.hw.mainkeys=1 \
    ro.sf.lcd_density=320

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

PRODUCT_PROPERTY_OVERRIDES += \
    ro.config.vc_call_vol_steps=8 \
    ro.config.media_vol_steps=25 \
    ro.config.ringtone=Ring_Synth_04.ogg

# Keyboard layout
PRODUCT_COPY_FILES += device/mediatek/mt6580/ACCDET.kl:system/usr/keylayout/ACCDET.kl:mtk
PRODUCT_COPY_FILES += $(LOCAL_PATH)/mtk-kpd.kl:system/usr/keylayout/mtk-kpd.kl:mtk

# Bootanimation
PRODUCT_COPY_FILES += $(BANIMATION)/bootanimation.zip:system/media/bootanimation.zip

$(call inherit-product, device/mediatek/mt6580/device.mk)

$(call inherit-product-if-exists, vendor/mediatek/libs/$(MTK_TARGET_PROJECT)/device-vendor.mk)

ifeq ($(strip $(BUILD_GMS)), yes)
	PRODUCT_PACKAGES += CallRecorderService
endif
