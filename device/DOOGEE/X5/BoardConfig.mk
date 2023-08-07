TARGET_BOARD_PLATFORM := mt6580

# Use the non-open-source part, if present
-include vendor/mediatek/X5/BoardConfigVendor.mk

# Use the 6580 common part
include device/mediatek/mt6580/BoardConfig.mk

ifneq ($(strip $(MTK_AB_OTA_UPDATER)), yes)
BOARD_CACHEIMAGE_FILE_SYSTEM_TYPE := ext4
endif

BOARD_FLASH_BLOCK_SIZE := 4096

BOARD_BLUETOOTH_BDROID_BUILDCFG_INCLUDE_DIR := device/DOOGEE/X5/bluetooth

MTK_INTERNAL_CDEFS := $(foreach t,$(AUTO_ADD_GLOBAL_DEFINE_BY_NAME),$(if $(filter-out no NO none NONE false FALSE,$($(t))),-D$(t)))
MTK_INTERNAL_CDEFS += $(foreach t,$(AUTO_ADD_GLOBAL_DEFINE_BY_VALUE),$(if $(filter-out no NO none NONE false FALSE,$($(t))),$(foreach v,$(shell echo $($(t)) | tr '[a-z]' '[A-Z]'),-D$(v))))
MTK_INTERNAL_CDEFS += $(foreach t,$(AUTO_ADD_GLOBAL_DEFINE_BY_NAME_VALUE),$(if $(filter-out no NO none NONE false FALSE,$($(t))),-D$(t)=\"$(strip $($(t)))\"))

MTK_GLOBAL_CFLAGS += $(MTK_INTERNAL_CDEFS)

BOARD_SEPOLICY_DIRS += \
        device/DOOGEE/X5/sepolicy

ifneq ($(MTK_K64_SUPPORT), yes)
BOARD_KERNEL_CMDLINE = bootopt=64S3,32S1,32S1
else
BOARD_KERNEL_CMDLINE = bootopt=64S3,32N2,64N2
endif

# ptgen
MTK_PTGEN_CHIP := $(shell echo $(TARGET_BOARD_PLATFORM) | tr '[a-z]' '[A-Z]')
-include device/mediatek/build/build/tools/ptgen/$(MTK_PTGEN_CHIP)/ptgen.mk

#Config partition size
-include $(MTK_PTGEN_OUT)/partition_size.mk
ifneq ($(strip $(MTK_AB_OTA_UPDATER)), yes)
BOARD_CACHEIMAGE_FILE_SYSTEM_TYPE := ext4
endif

-include device/mediatek/build/core/soong_config.mk
