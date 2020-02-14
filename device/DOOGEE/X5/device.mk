# ProjectConfig
include device/DOOGEE/$(MTK_TARGET_PROJECT)/ProjectConfig.mk

# Common mt6580 device
$(call inherit-product, device/mediatek/mt6580/device.mk)

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
BANIMATION := $(LOCAL_PATH)/bootanimation

# Overlays
DEVICE_PACKAGE_OVERLAYS += $(LOCAL_PATH)/overlay
DEVICE_PACKAGE_OVERLAYS += device/mediatek/common/overlay/sd_in_ex_otg
DEVICE_PACKAGE_OVERLAYS += device/mediatek/common/overlay/navbar

# X5 project rootdir
PRODUCT_COPY_FILES += $(ROOTDIR)/factory_init.project.rc:$(TARGET_COPY_OUT_VENDOR)/etc/init/hw/factory_init.project.rc
PRODUCT_COPY_FILES += $(ROOTDIR)/init.project.rc:$(TARGET_COPY_OUT_VENDOR)/etc/init/hw/init.project.rc

# Thermal
PRODUCT_COPY_FILES += $(THERMALDIR)/thermal_eng.conf:$(TARGET_COPY_OUT_VENDOR)/etc/.tp/thermal.conf:mtk
PRODUCT_COPY_FILES += $(THERMALDIR)/thermal.conf:$(TARGET_COPY_OUT_VENDOR)/etc/.tp/thermal.conf:mtk

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
PRODUCT_COPY_FILES += $(PERMSDIR)/android.hardware.telephony.gsm.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/android.hardware.telephony.gsm.xml
PRODUCT_COPY_FILES += $(PERMSDIR)/android.hardware.microphone.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/android.hardware.microphone.xml
PRODUCT_COPY_FILES += $(PERMSDIR)/android.hardware.camera.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/android.hardware.camera.xml

# Audio
PRODUCT_COPY_FILES += $(AUDIODIR)/audio_policy.conf:$(TARGET_COPY_OUT_VENDOR)/etc/audio_policy.conf:mtk
PRODUCT_COPY_FILES += frameworks/av/media/libeffects/data/audio_effects.conf:$(TARGET_COPY_OUT_VENDOR)/etc/audio_effects.conf

# Media
PRODUCT_COPY_FILES += device/mediatek/mt6580/media_profiles_mt6580p.xml:$(TARGET_COPY_OUT_VENDOR)/etc/media_profiles.xml:mtk
PRODUCT_PROPERTY_OVERRIDES += media.settings.xml=/vendor/etc/media_profiles.xml
PRODUCT_PROPERTY_OVERRIDES += ro.media.maxmem=262144000

# Vendor override props
PRODUCT_PROPERTY_OVERRIDES += \
    ro.vendor.build.security_patch=2020-01-05 \
    qemu.hw.mainkeys=1 \
    ro.sf.lcd_density=320

# USB
PRODUCT_DEFAULT_PROPERTY_OVERRIDES += \
    persist.sys.usb.config=mtp \
    persist.service.acm.enable=0 \
    ro.mount.fs=EXT4

# Ovrride plat
PRODUCT_PROPERTY_OVERRIDES +=  \
    ro.mediatek.chip_ver=S01 \
    ro.mediatek.platform=MT6580

# Ovvride sim
PRODUCT_PROPERTY_OVERRIDES +=  \
    ro.telephony.sim.count=2 \
    persist.radio.default.sim=0

# HWUI
PRODUCT_DEFAULT_PROPERTY_OVERRIDES += \
    ro.hwui.path_cache_size=0 \
    ro.hwui.text_small_cache_width=512 \
    ro.hwui.text_small_cache_height=256 \
    ro.hwui.disable_asset_atlas=true

# Keyboard layout
PRODUCT_COPY_FILES += device/mediatek/mt6580/ACCDET.kl:system/usr/keylayout/ACCDET.kl:mtk
PRODUCT_COPY_FILES += $(KPDDIR)/mtk-kpd.kl:system/usr/keylayout/mtk-kpd.kl:mtk

# SPFT Files
PRODUCT_COPY_FILES += $(SPFTDIR)/secro.img:$(OUT)/secro.img
PRODUCT_COPY_FILES += $(SPFTDIR)/twrp.img:$(OUT)/twrp.img
PRODUCT_COPY_FILES += $(SPFTDIR)/lk.bin:$(OUT)/lk.bin
PRODUCT_COPY_FILES += $(SPFTDIR)/5_1_lk.bin:$(OUT)/5_1_lk.bin
PRODUCT_COPY_FILES += $(SPFTDIR)/logo.bin:$(OUT)/logo.bin
PRODUCT_COPY_FILES += $(SPFTDIR)/nvdata.bin:$(OUT)/nvdata.bin
PRODUCT_COPY_FILES += $(SPFTDIR)/nvram.bin:$(OUT)/nvram.bin
PRODUCT_COPY_FILES += $(SPFTDIR)/preloader_hct6580_weg_c_m.bin:$(OUT)/preloader_hct6580_weg_c_m.bin

# Bootanimation
PRODUCT_COPY_FILES += $(BANIMATION)/bootanimation.zip:system/media/bootanimation.zip

# GO-ify
ifeq (yes,$(strip $(MTK_GMO_ROM_OPTIMIZE)))
  DEVICE_PACKAGE_OVERLAYS += device/mediatek/common/overlay/slim_rom
endif
ifeq (yes,$(strip $(MTK_GMO_RAM_OPTIMIZE)))
  DEVICE_PACKAGE_OVERLAYS += device/mediatek/common/overlay/slim_ram
endif

PRODUCT_PROPERTY_OVERRIDES += \
     dalvik.vm.jit.codecachesize=0 \
     dalvik.vm.foreground-heap-growth-multiplier=2.0 \
     dalvik.vm.heapgrowthlimit=128m \
     dalvik.vm.heapsize=256

PRODUCT_PROPERTY_OVERRIDES += \
     pm.dexopt.downgrade_after_inactive_days=10 \
     pm.dexopt.shared=quicken

PRODUCT_PROPERTY_OVERRIDES += \
     ro.mtk_f2fs_enable=1 \
     ro.lmk.critical_upgrade=true \
     ro.lmk.upgrade_pressure=40 \
     ro.lmk.kill_heaviest_task=false

# X5 prebuilds
include vendor/DOOGEE/X5/prebuilds.mk
