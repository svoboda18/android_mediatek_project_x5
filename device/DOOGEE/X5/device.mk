include device/DOOGEE/$(MTK_TARGET_PROJECT)/ProjectConfig.mk

# Local dir(s)
LOCAL_PATH := device/DOOGEE/X5
OUT := $(TARGET_COPY_OUT_VENDOR)/..
ROOTDIR := $(LOCAL_PATH)/rootdir
CONFIGDIR := $(LOCAL_PATH)/configs
SPFTDIR := $(LOCAL_PATH)/spft
PERMSDIR := $(CONFIGDIR)/permissions
THERMALDIR := $(CONFIGDIR)/thermal
AUDIODIR := $(CONFIGDIR)/audio
KPDDIR := $(CONFIGDIR)/kpd

# Packages
PRODUCT_PACKAGES += tiny_fallocate
PRODUCT_PACKAGES += chattr

# Overlays
DEVICE_PACKAGE_OVERLAYS += $(LOCAL_PATH)/overlay
DEVICE_PACKAGE_OVERLAYS += device/mediatek/common/overlay/sd_in_ex_otg
DEVICE_PACKAGE_OVERLAYS += device/mediatek/common/overlay/navbar

# X5 project rootdir
PRODUCT_COPY_FILES += $(ROOTDIR)/factory_init.project.rc:root/factory_init.project.rc
PRODUCT_COPY_FILES += $(ROOTDIR)/init.project.rc:root/init.project.rc
PRODUCT_COPY_FILES += $(ROOTDIR)/meta_init.project.rc:root/meta_init.project.rc

# Thermal
PRODUCT_COPY_FILES += $(THERMALDIR)/thermal_eng.conf:$(TARGET_COPY_OUT_VENDOR)/etc/.tp/thermal.conf:mtk
PRODUCT_COPY_FILES += $(THERMALDIR)/thermal.conf:$(TARGET_COPY_OUT_VENDOR)/etc/.tp/thermal.conf:mtk

# Permission
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.sensor.accelerometer.xml:system/etc/permissions/android.hardware.sensor.accelerometer.xml
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.sensor.proximity.xml:system/etc/permissions/android.hardware.sensor.proximity.xml
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.sensor.light.xml:system/etc/permissions/android.hardware.sensor.light.xml
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.faketouch.xml:system/etc/permissions/android.hardware.faketouch.xml
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.touchscreen.multitouch.distinct.xml:system/etc/permissions/android.hardware.touchscreen.multitouch.distinct.xml
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.touchscreen.multitouch.jazzhand.xml:system/etc/permissions/android.hardware.touchscreen.multitouch.jazzhand.xml
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.touchscreen.multitouch.xml:system/etc/permissions/android.hardware.touchscreen.multitouch.xml
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.touchscreen.xml:system/etc/permissions/android.hardware.touchscreen.xml
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.location.gps.xml:system/etc/permissions/android.hardware.location.gps.xml
PRODUCT_COPY_FILES += frameworks/av/media/libeffects/data/audio_effects.conf:system/etc/audio_effects.conf
PRODUCT_COPY_FILES += $(PERMSDIR)/android.hardware.telephony.gsm.xml:system/etc/permissions/android.hardware.telephony.gsm.xml
PRODUCT_COPY_FILES += $(PERMSDIR)/android.hardware.microphone.xml:system/etc/permissions/android.hardware.microphone.xml
PRODUCT_COPY_FILES += $(PERMSDIR)/android.hardware.camera.xml:system/etc/permissions/android.hardware.camera.xml
PRODUCT_COPY_FILES += $(AUDIODIR)/audio_policy.conf:$(TARGET_COPY_OUT_VENDOR)/etc/audio_policy.conf:mtk

# USB
PRODUCT_DEFAULT_PROPERTY_OVERRIDES += persist.sys.usb.config=mtp
PRODUCT_DEFAULT_PROPERTY_OVERRIDES += persist.service.acm.enable=0
PRODUCT_DEFAULT_PROPERTY_OVERRIDES += ro.mount.fs=EXT4

# Ovrride plat
PRODUCT_PROPERTY_OVERRIDES += ro.mediatek.chip_ver=S01
PRODUCT_PROPERTY_OVERRIDES += ro.mediatek.platform=MT6580

# Ovvride sim
PRODUCT_PROPERTY_OVERRIDES += ro.telephony.sim.count=2
PRODUCT_PROPERTY_OVERRIDES += persist.radio.default.sim=0

# HWUI
PRODUCT_DEFAULT_PROPERTY_OVERRIDES += ro.hwui.path_cache_size=0
PRODUCT_DEFAULT_PROPERTY_OVERRIDES += ro.hwui.text_small_cache_width=512
PRODUCT_DEFAULT_PROPERTY_OVERRIDES += ro.hwui.text_small_cache_height=256
PRODUCT_DEFAULT_PROPERTY_OVERRIDES += ro.hwui.disable_asset_atlas=true

# Keyboard layout
PRODUCT_COPY_FILES += device/mediatek/mt6580/ACCDET.kl:system/usr/keylayout/ACCDET.kl:mtk
PRODUCT_COPY_FILES += $(KPDDIR)/mtk-kpd.kl:system/usr/keylayout/mtk-kpd.kl:mtk

# Factory test
PRODUCT_COPY_FILES += vendor/mediatek/proprietary/custom/X5/factory/res/images/lcd_test_00.png:$(TARGET_COPY_OUT_VENDOR)/res/images/lcd_test_00.png:mtk
PRODUCT_COPY_FILES += vendor/mediatek/proprietary/custom/X5/factory/res/images/lcd_test_01.png:$(TARGET_COPY_OUT_VENDOR)/res/images/lcd_test_01.png:mtk
PRODUCT_COPY_FILES += vendor/mediatek/proprietary/custom/X5/factory/res/images/lcd_test_02.png:$(TARGET_COPY_OUT_VENDOR)/res/images/lcd_test_02.png:mtk
PRODUCT_COPY_FILES += vendor/mediatek/proprietary/custom/X5/factory/res/sound/testpattern1.wav:$(TARGET_COPY_OUT_VENDOR)/res/sound/testpattern1.wav:mtk
PRODUCT_COPY_FILES += vendor/mediatek/proprietary/custom/X5/factory/res/sound/ringtone.wav:$(TARGET_COPY_OUT_VENDOR)/res/sound/ringtone.wav:mtk

# SPFT Files
PRODUCT_COPY_FILES += $(SPFTDIR)/lk.bin:$(OUT)/lk.img
PRODUCT_COPY_FILES += $(SPFTDIR)/logo.bin:$(OUT)/logo.bin
PRODUCT_COPY_FILES += $(SPFTDIR)/nvdata.bin:$(OUT)/nvdata.bin
PRODUCT_COPY_FILES += $(SPFTDIR)/nvram.bin:$(OUT)/nvram.bin
PRODUCT_COPY_FILES += $(SPFTDIR)/preloader_hct6580_weg_c_m.bin:$(OUT)/preloader_hct6580_weg_c_m.bin

# Common mt6580 device
$(call inherit-product, device/mediatek/mt6580/device.mk)

# X5 vendor
$(call inherit-product, vendor/DOOGEE/X5/device-vendor.mk)
include vendor/DOOGEE/X5/prebuilds.mk
