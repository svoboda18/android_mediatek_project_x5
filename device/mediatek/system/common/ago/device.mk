#From O, project with less than 1G memory, must set prop ro.config.low_ram=true

# Disable per-app memcg
PRODUCT_SYSTEM_DEFAULT_PROPERTIES += ro.config.per_app_memcg=false
# Enable APP compaction
PRODUCT_SYSTEM_PRODUCT_PROPERTIES += persist.device_config.activity_manager.use_compaction=true

ifeq (yes,$(strip $(MTK_GMO_RAM_OPTIMIZE)))
    # To not pick-up LiveWallpapers, inherit from generic.mk NOT full_base.mk
    ifdef MTK_TB_WIFI_3G_MODE
        $(call inherit-product, $(SRC_TARGET_DIR)/product/generic_no_telephony.mk)
    else
        $(call inherit-product, $(SRC_TARGET_DIR)/product/generic.mk)
    endif
    $(call inherit-product, $(SRC_TARGET_DIR)/product/languages_full.mk)

    # Add MtkLauncher3 to replace Launcher3 when vendor code is available
    ifneq ($(wildcard vendor/mediatek/proprietary/packages/apps/Launcher3/Android.mk),)
        PRODUCT_PACKAGES += MtkLauncher3QuickStep
    else
        PRODUCT_PACKAGES += Launcher3QuickStepGo
    endif

    AGO_DRAM_LIMIT := $(shell printf "%d" 0xC0000000)
    LH_DRAM_THRES :=  $(shell printf "%d" 0x40000000)
    CUR_DRAM_SIZE := $(shell printf "%d" $(MSSI_CUSTOM_CONFIG_MAX_DRAM_SIZE))
    ifeq ($(shell test $(CUR_DRAM_SIZE) -le $(LH_DRAM_THRES) && echo true), true)
        ifneq ($(filter yes,$(BUILD_AGO_GMS) $(MTK_GMO_RAM_OPTIMIZE)),)
            $(call inherit-product, $(SRC_TARGET_DIR)/product/go_defaults_512.mk)
            #PRODUCT_COPY_FILES += device/mediatek/vendor/common/ago/init/init.ago_512.rc:$(MTK_TARGET_VENDOR_RC)/init.ago.rc
        endif
    else ifeq ($(shell test $(CUR_DRAM_SIZE) -le $(AGO_DRAM_LIMIT) && echo true), true)
        ifneq ($(filter yes,$(BUILD_AGO_GMS) $(MTK_GMO_RAM_OPTIMIZE)),)
            $(call inherit-product, $(SRC_TARGET_DIR)/product/go_defaults.mk)
        endif
        #PRODUCT_COPY_FILES += device/mediatek/vendor/common/ago/init/init.ago_default.rc:$(MTK_TARGET_VENDOR_RC)/init.ago.rc
    endif
    ifeq ($(strip $(MTK_K64_SUPPORT)), no)
        PRODUCT_DEFAULT_PROPERTY_OVERRIDES += ro.zygote=zygote32
    endif

    PRODUCT_PACKAGE_OVERLAYS += device/mediatek/system/common/overlay/ago

    ifneq ($(PLATFORM_VERSION),S)
        PRODUCT_SYSTEM_DEFAULT_PROPERTIES += \
            ro.boot.vendor.overlay.theme=com.android.theme.icon.roundedrect
    endif

    # Include Audio Go Audio Package
    $(call inherit-product-if-exists, frameworks/base/data/sounds/AudioPackageGo.mk)

    # Override with slim app
    PRODUCT_PACKAGES += SecureElementGo
    PRODUCT_PACKAGES += TraceurGo
    PRODUCT_PACKAGES += OneTimeInitializerGo
    PRODUCT_PACKAGES += CellBroadcastReceiverGo

    # HIde DocumentUI
    PRODUCT_COPY_FILES += device/mediatek/system/common/ago/component-overrides.xml:system/etc/sysconfig/component-overrides.xml
else
    #non-ago settings
    # Add for Automatic Setting for heapgrowthlimit & heapsize
    #RESOLUTION_HXW := $(shell expr $(LCM_HEIGHT) \* $(LCM_WIDTH))

    #ifeq ($(shell test $(RESOLUTION_HXW) -ge 0 && test $(RESOLUTION_HXW) -lt 3500000 && echo true), true)
        #PRODUCT_PROPERTY_OVERRIDES += dalvik.vm.heapgrowthlimit=256m
        #PRODUCT_PROPERTY_OVERRIDES += dalvik.vm.heapsize=512m
    #endif

    #ifeq ($(shell test $(RESOLUTION_HXW) -ge 3500000 && echo true), true)
        #PRODUCT_PROPERTY_OVERRIDES += dalvik.vm.heapgrowthlimit=384m
        #PRODUCT_PROPERTY_OVERRIDES += dalvik.vm.heapsize=768m
    #endif

    # $(call inherit-product, ($SRC_TARGET_DIR)/product/full_base.mk)
    ifeq ($(strip $(MSSI_MTK_LIVEWALLPAPER_APP)), yes)
        PRODUCT_COPY_FILES += packages/wallpapers/LivePicker/android.software.live_wallpaper.xml:system/etc/permissions/android.software.live_wallpaper.xml
    endif
    # Handheld core hardware: Default
    #PRODUCT_COPY_FILES += frameworks/native/data/etc/handheld_core_hardware.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/handheld_core_hardware.xml

    #PRODUCT_COPY_FILES += device/mediatek/vendor/common/fstab.enableswap:$(TARGET_COPY_OUT_VENDOR)/etc/fstab.enableswap:mtk
    #PRODUCT_COPY_FILES += device/mediatek/vendor/common/ago/init/init.ago_default.rc:$(MTK_TARGET_VENDOR_RC)/init.ago.rc
    # Add the 1GB overlays (to enable pinning on 1GB but not 512)
    PRODUCT_PACKAGE_OVERLAYS += device/mediatek/system/common/overlay/ago/ago_1gb
    # Add MtkLauncher3 to replace Launcher3 when vendor code is available
    ifneq ($(wildcard vendor/mediatek/proprietary/packages/apps/Launcher3/Android.mk),)
        PRODUCT_PACKAGES += MtkLauncher3QuickStep
    else
        PRODUCT_PACKAGES += Launcher3QuickStep
    endif
    # QuickSearchBox AOSP code will be replaced by MTK subject to availablity.
    ifneq ($(wildcard vendor/mediatek/proprietary/packages/apps/QuickSearchBox/Android.mk),)
        #PRODUCT_PACKAGES += MtkQuickSearchBox
    endif
    # F2FS filesystem
    #PRODUCT_PROPERTY_OVERRIDES += ro.vendor.mtk_f2fs_enable=0
    $(call inherit-product-if-exists, frameworks/base/data/sounds/AllAudio.mk)
endif

