$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base.mk)

# Set target and base project for flavor build
MTK_TARGET_PROJECT := $(subst full_,,$(TARGET_PRODUCT))
MTK_BASE_PROJECT := $(MTK_TARGET_PROJECT)
MTK_PROJECT_FOLDER := $(shell find device/* -maxdepth 1 -name $(MTK_BASE_PROJECT))
MTK_TARGET_PROJECT_FOLDER := $(shell find device/* -maxdepth 1 -name $(MTK_TARGET_PROJECT))

# This is where we'd set a backup provider if we had one
$(call inherit-product, device/DOOGEE/X5/device.mk)

# GO-ify
$(call inherit-product, device/mediatek/common/ago/device.mk)
PRODUCT_MINIMIZE_JAVA_DEBUG_INFO := true
PRODUCT_ART_TARGET_INCLUDE_DEBUG_BUILD := false
PRODUCT_DISABLE_SCUDO := true

# set locales & aapt config.
PRODUCT_LOCALES := en_US es_ES pt_BR ru_RU fr_FR de_DE tr_TR vi_VN ms_MY in_ID th_TH it_IT ar_EG hi_IN bn_IN ur_PK fa_IR pt_PT nl_NL el_GR hu_HU tl_PH ro_RO cs_CZ ko_KR km_KH iw_IL my_MM pl_PL es_US bg_BG hr_HR lv_LV lt_LT sk_SK uk_UA de_AT da_DK fi_FI nb_NO sv_SE en_GB hy_AM zh_HK et_EE ja_JP kk_KZ sr_RS sl_SI ca_ES

# Set those variables here to overwrite the inherited values.
PRODUCT_MANUFACTURER := DOOGEE
PRODUCT_NAME := full_X5
PRODUCT_DEVICE := X5
PRODUCT_MODEL := X5
PRODUCT_POLICY := android.policy_phone
PRODUCT_BRAND := DOOGEE

BUILD_FINGERPRINT := DOOGEE/full_hct6580_weg_c_m/hct6580_weg_c_m:6.0/MRA58K/1472705112:user/test-keys
PRIVATE_BUILD_DESC := "full_hct6580_weg_c_m-user" "6.0" "MRA58K" "1472705112" "test-keys"
TARGET_OTA_ASSERT_DEVICE := X5
PRODUCT_DEFAULT_LOCALE := en_US

KERNEL_DEFCONFIG := blackghost_defconfig
