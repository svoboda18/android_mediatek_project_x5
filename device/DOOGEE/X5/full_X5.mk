# include this too
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base.mk)

# This is where we'd set a backup provider if we had one
$(call inherit-product, $(LOCAL_PATH)/device.mk)

# ProjectConfig
include $(LOCAL_PATH)/ProjectConfig.mk

# Set target and base project for flavor build
MTK_TARGET_PROJECT := $(subst full_,,$(TARGET_PRODUCT))
MTK_BASE_PROJECT := $(MTK_TARGET_PROJECT)
MTK_PROJECT_FOLDER := $(LOCAL_PATH)
MTK_TARGET_PROJECT_FOLDER := $(LOCAL_PATH)

# Set those variables here to be overwritten.
PRODUCT_MANUFACTURER := DOOGEE
PRODUCT_NAME := full_X5
PRODUCT_DEVICE := X5
PRODUCT_MODEL := X5
PRODUCT_POLICY := android.policy_phone
PRODUCT_BRAND := DOOGEE

BUILD_FINGERPRINT := "DOOGEE/full_hct6580_weg_c_m/hct6580_weg_c_m:6.0/MRA58K/1472705112:user/test-keys"
PRIVATE_BUILD_DESC := "full_hct6580_weg_c_m-user" "6.0" "MRA58K" "1472705112" "test-keys"
PRODUCT_DEFAULT_LOCALE := en_US

KERNEL_DEFCONFIG ?= blackghost_defconfig
PRELOADER_TARGET_PRODUCT ?= X5
LK_PROJECT ?= X5
TRUSTY_PROJECT ?= X5
