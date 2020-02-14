#
#  Copyright Statement:
#  ---------------------------
#  This software/firmware and related documentation ("MediaTek Software") are
#  protected under relevant copyright laws. The information contained herein 
#  is confidential and proprietary to MediaTek Inc. and/or its licensors.  
#  Without the prior written permission of MediaTek inc. and/or its licensors,
#  any reproduction,modification, use or disclosure of MediaTek Software, and
#  information contained herein, in whole or in part, shall be strictly prohibited.
#
#  MediaTek Inc.(C)2016.All rights reserved.
#
#  BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND
#  AGREES THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK 
#  SOFTWARE") RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED 
#  TO RECEIVER ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL 
#  WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED 
#  WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR 
#  NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER 
#  WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, 
#  INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER 
#  AGREES TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING 
#  THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE 
#  RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES 
#  CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR 
#  ANY MEDIATEK SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO 
#  CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND 
#  EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT 
#  TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,AT MEDIATEK'S OPTION, 
#  TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,OR REFUND ANY SOFTWARE 
#  LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK 
#  SOFTWARE AT ISSUE. 
#
# *************************************************************************

# Generated at 2019-11-12 16:48:00

# ------------------------------ Modem specification
MODEM_SPEC = MTK_MODEM_3G_WCDMA
#
#  Copyright Statement:
#  ---------------------------
#  This software/firmware and related documentation ("MediaTek Software") are
#  protected under relevant copyright laws. The information contained herein 
#  is confidential and proprietary to MediaTek Inc. and/or its licensors.  
#  Without the prior written permission of MediaTek inc. and/or its licensors,
#  any reproduction,modification, use or disclosure of MediaTek Software, and
#  information contained herein, in whole or in part, shall be strictly prohibited.
#   
#  MediaTek Inc.(C)2011.All rights reserved.
#
#  BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND
#  AGREES THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK 
#  SOFTWARE") RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED 
#  TO RECEIVER ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL 
#  WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED 
#  WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR 
#  NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER 
#  WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, 
#  INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER 
#  AGREES TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING 
#  THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE 
#  RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES 
#  CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR 
#  ANY MEDIATEK SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO 
#  CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND 
#  EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT 
#  TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,AT MEDIATEK'S OPTION, 
#  TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,OR REFUND ANY SOFTWARE 
#  LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK 
#  SOFTWARE AT ISSUE. 
#
# *************************************************************************

# Generated at 2012-11-29 14:23:02
EUTRAN_MODE_SUPPORT = NONE
  # Description:
  #   4G modem capability
  # Option Values:
  #   EUTRAN_MODE: Support EUTRAN mode
  #   NONE: NONE
  # Switch-ability:
  #   Non-switchable

UTRAN_MODE_SUPPORT = UTRAN_FDD_MODE
  # Description:
  #   3G modem capability
  # Option Values:
  #   UTRAN_FDD_MODE: Support 3G FDD
  #   UTRAN_TDD128_MODE: Support 3G TDD128
  #   NONE: NONE
  # Switch-ability:
  #   Non-switchable

GERAN_MODE_SUPPORT = GERAN_EGPRS_MODE
  # Description:
  #   2G modem capability
  # Option Values:
  #   GERAN_GSM_MODE: Support GSM only
  #   GERAN_GPRS_MODE: Support GPRS
  #   GERAN_EGPRS_MODE: Support EGPRS
  #   NONE: NONE
  # Switch-ability:
  #   Non-switchable

R99_SUPPORT = TRUE
  # Description:
  #   to enable R99 features to be R99 capable MS.
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   Non-switchable

R4_SUPPORT = TRUE
  # Description:
  #   R4 and R5 protocol features,maily NACC and ExtULTBF for cusotmers
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   Non-switchable

R5_SUPPORT = TRUE
  # Description:
  #   R4 and R5 protocol features,maily NACC and ExtULTBF for cusotmers
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   Non-switchable

UMTS_MODE_SUPPORT = UMTS_FDD_MODE_SUPPORT
  # Description:
  #   The option is to switch the FDD or TDD mode for 3G modem
  # Option Values:
  #   UMTS_FDD_MODE_SUPPORT: 3G modem in FDD mode
  #   UMTS_TDD128_MODE_SUPPORT: 3G modem in TDD mode
  #   NONE: None of 3G modem mode is supported.
  # Switch-ability:
  #   Non-switchable

UMTS_RELEASE_SUPPORT = UMTS_R8_SUPPORT
  # Description:
  #   The option is to switch different version of release for 3G modem
  # Option Values:
  #   UMTS_R6_SUPPORT: 3G modem supports Rel6
  #   UMTS_R4_SUPPORT: 3G modem supports Rel4
  #   UMTS_R5_SUPPORT: 3G modem supports Rel5
  # Switch-ability:
  #   Non-switchable

DISABLE_A5_2 = TRUE
  # Description:
  #   Disable A5/2 cipering algo
  # Option Values:
  #   N/A
  # Switch-ability:
  #   Non-switchable

PBCCH_SUPPORT = FALSE
  # Description:
  #   Indicate whether MS supports PBCCH capability
  # Option Values:
  #   TRUE: Enable PBCCH capability
  #   FALSE: Disable PBCCH capability
  # Switch-ability:
  #   Non-switchable

L1_GPRS = TRUE
  # Description:
  #   Turn on the GPRS support of Layer 1
  #   This is used for internal test
  # Option Values:
  #   TRUE: GPRS enable
  #   FALSE: GPRS disable
  # Switch-ability:
  #   Non-switchable

L1_EGPRS = TRUE
  # Description:
  #   this compile option is only used for L1 Stand alone to turn on/off EDGE function
  # Option Values:
  #   TRUE: EGPRS enable
  #   FALSE: EGPRS disable
  # Switch-ability:
  #   Non-switchable

L1_WCDMA = TRUE
  # Description:
  #   Add an option to enable WCDMA L1 support
  # Option Values:
  #   TRUE: Support UMTS L1
  #   FALSE: Not support UMTS L1
  # Switch-ability:
  #   Non-switchable

HSDPA_SUPPORT = TRUE
  # Description:
  #   Define if UE supports HSDPA feature. (TRUE/FALSE)
  # Option Values:
  #   TRUE: HSDPA is support
  #   FALSE: HSDPA is not support
  # Switch-ability:
  #   Non-switchable

HSUPA_SUPPORT = TRUE
  # Description:
  #   Define if UE supports HSUPA feature. (TRUE/FALSE)
  # Option Values:
  #   TRUE: HSUPA is support
  #   FALSE: HSUPA is not support
  # Switch-ability:
  #   Non-switchable

L2_HSDPA_COPRO = TRUE
  # Description:
  #   Enable using L2 HSDPA Coprocessor
  # Option Values:
  #   TRUE: Enable L2 HSDPA Copro
  #   FALSE: Disable L2 HSDPA Copro
  # Switch-ability:
  #   Non-switchable

L2_HSUPA_COPRO = TRUE
  # Description:
  #   Enable using L2 HSUPA Coprocessor
  # Option Values:
  #   TRUE: Enable L2 HSUPA Copro
  #   FALSE: Disable L2 HSUPA Copro
  # Switch-ability:
  #   Non-switchable

UL2_HSPA_PLUS_RX_COPRO = TRUE
  # Description:
  #   The option is to enable R7R8 L2 RX copro and bytecopy
  # Option Values:
  #   TRUE: enable R7R8 L2 RX copro and bytecopy
  #   FALSE: disable R7R8 L2 RX copro and bytecopy
  # Switch-ability:
  #   Non-switchable

UL2_HSPA_PLUS_TX_COPRO = TRUE
  # Description:
  #   The option is to enable R7R8 L2 TX copro
  # Option Values:
  #   TRUE: enable R7R8 L2 TX copro
  #   FALSE: disable R7R8 L2 RX copro
  # Switch-ability:
  #   Non-switchable


# ------------------------------ Configurable Features
AFC_VCXO_TYPE = VCXO

OTP_SUPPORT = FALSE

BAND_SUPPORT = QUAD

RF_MODULE = MT6580RF_2G_CUSTOM

UMTS_RF_MODULE = CUSTOM_MT6580RF_UMTS_FDD

# ------------------------------ Verno information
VERNO = MOLY.WR8.W1449.MD.WG.MP.V270
BUILD = BUILD_NO
BRANCH = WR8.W1449.MD.WG.MP
# ------------------------------ System configurations
PLATFORM = MT6580

CHIP_VER = S00

BOARD_VER = BIRD_Q0MP1_K80_BSP_BB



#===============================
# if you want to add compile option to build, please add the compile option to the following variable.
# e.g., CUSTOM_OPTION += __EXAMPLE__
CUSTOM_OPTION +=

# internal configuration
PROJECT_MAKEFILE_EXT = BIRD_Q0MP1_K80_BSP_HSPA_EXT
#
#  Copyright Statement:
#  ---------------------------
#  This software/firmware and related documentation ("MediaTek Software") are
#  protected under relevant copyright laws. The information contained herein 
#  is confidential and proprietary to MediaTek Inc. and/or its licensors.  
#  Without the prior written permission of MediaTek inc. and/or its licensors,
#  any reproduction,modification, use or disclosure of MediaTek Software, and
#  information contained herein, in whole or in part, shall be strictly prohibited.
#
#  MediaTek Inc.(C)2016.All rights reserved.
#
#  BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND
#  AGREES THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK 
#  SOFTWARE") RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED 
#  TO RECEIVER ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL 
#  WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED 
#  WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR 
#  NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER 
#  WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, 
#  INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER 
#  AGREES TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING 
#  THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE 
#  RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES 
#  CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR 
#  ANY MEDIATEK SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO 
#  CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND 
#  EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT 
#  TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,AT MEDIATEK'S OPTION, 
#  TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,OR REFUND ANY SOFTWARE 
#  LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK 
#  SOFTWARE AT ISSUE. 
#
# *************************************************************************

# Generated at 2019-11-12 16:48:00


# =========================================================================
# Non-Switchable Feature Option
# =========================================================================
2G_3SECTION_TEMPERATURE_COMP = FALSE
  # Description:
  #   Turn On/Off 3 section temperature compensation feature
  # Option Values:
  #   FALSE: NOT SUPPORT 3 SECTION TEMP COMPENSATION
  #   TRUE: SUPPORT 3 SECTION TEMP COMPENSATION
  # Switch-ability:
  #   Non-switchable

DCO_SCA_MONITOR = FALSE
  # Description:
  #   Description:
  #   Option Values:
  #   TRUE:Set to TRUE if support DCO_SCA_MONITOR.
  #   FALSE:Set to FALSE if not support DCO_SCA_MONITOR.
  # Option Values:
  #   FALSE: FALSE:Set to FALSE if not support DCO_SCA_MONITOR.
  #   TRUE: TRUE:Set to TRUE if support DCO_SCA_MONITOR.
  # Switch-ability:
  #   Non-switchable

MIPI_SUPPORT = FALSE
  # Description:
  #   MIPI_SUPPORT= FALSE
  #   Description:
  #   Turn on/off this compile option to enable/disable MIPI support
  #   Option Values:
  #   TRUE: MIPI_SUPPORT enable
  #   FALSE: MIPI_SUPPORT disable
  #   Switch-ability:
  #   Non-switchable
  # Option Values:
  #   FALSE: MIPI_SUPPORT disable
  #   TRUE: MIPI_SUPPORT enable
  # Switch-ability:
  #   Non-switchable


# =========================================================================
# Feature Options which customer can NOT modify
# =========================================================================
HW_VER = BIRD_Q0MP1_K80_BSP_HSPA_HW

MTK_BT_CHIP = MTK_CONSYS_MT6580
  # Description:
  #   MTK_BT_CHIP
  # Option Values:
  #   MTK_CONSYS_MT6571: Need to support software BT codec (CVSD / mSBC).
  #   MTK_CONSYS_MT6572: Need to support software BT codec (CVSD / mSBC).
  #   MTK_CONSYS_MT6582: Need to support software BT codec (CVSD / mSBC).
  #   MTK_CONSYS_MT6592: Need to support software BT codec (CVSD / mSBC).
  #   MTK_CONSYS_MT6752: Need to support software BT codec (CVSD / mSBC).
  #   MTK_MT6620: Need to support BT phone call PCM interface.
  #   MTK_MT6622: Need to support BT phone call PCM interface.
  #   MTK_MT6626: Need to support BT phone call PCM interface.
  #   MTK_MT6628: Need to support BT phone call PCM interface.
  #   MTK_MT6630: Need to support BT phone call PCM interface.
  #   NONE: No BT phone call.
  # Switch-ability:
  #   Switchable

ORIGINAL_VERNO = MOLY.WR8.W1449.MD.WG.MP.V270

RF_DRDI_CAPABILITY_SUPPORT = TRUE
  # Description:
  #   RF_DRDI_CAPABILITY_SUPPORT = TRUE  
  #   Description: 
  #   Option Values: 
  #   TRUE:Set to TRUE if support DRDI. 
  #   FALSE:Set to FALSE if not support DRDI.
  # Option Values:
  #   FALSE: Set to FALSE if not support DRDI.
  #   TRUE: Set to TRUE if support DRDI.
  # Switch-ability:
  #   Non-switchable


2G_BPI_PT3A_SUPPORT = FALSE

2G_RF_CUSTOM_TOOL_SUPPORT = TRUE

2G_TX_VOLTAGE_COMPENSATION_SUPPORT = TRUE

32K_XOSC_REMOVE = TRUE

3G_DATA_PLANE_MEMORY_SHRINK = TRUE

3G_NEW_DATA_PLANE_ARCH = TRUE

3G_VIDEO_CALL = FALSE

3SET_F8F9_ENABLE = TRUE

ACC_NC_AFC_DB_UPDATE_SUPPORT = FALSE

AEC_ENABLE = TRUE

AGPS_CP_SIB15_SUPPORT = TRUE

AGPS_SUPPORT = CONTROL_PLANE

AGPS_UP_CP_CONFLICT_HANDLING_SUPPORT = TRUE

AMRWB_LINK_SUPPORT = TRUE

AMR_LINK_SUPPORT = TRUE

AOC_SUPPORT = TRUE

AST_CHIP_VERSION = NONE

AST_SUPPORT = NONE

AT_COMMAND_SET = FULL

BACKGROUND_SOUND = TRUE

BIP_SCWS_SUPPORT = FALSE

BOOT_CERT_SUPPORT = FALSE

BYTECOPY_SUPPORT = TRUE

CCBS_SUPPORT = FALSE

CDMA_USE_MTK_BB_PMU = FALSE

CENTRALIZED_SLEEP_MANAGER = TRUE

CHIP_VERSION_CHECK = TRUE

CHK_ENV_FLAG = TRUE

CMUX_SUPPORT = TRUE

CNAP_SUPPORT = FALSE

COMBO_MEMORY_SUPPORT = FALSE

COMPILER = GCC

CSD_SUPPORT = NONE

CTA_ECC_SUPPORT = TRUE

CTM_SUPPORT = TRUE

CUSTOMER_SPECIFIC_FACTORY_DETECTION = NONE

CUSTOM_CFLAGS = ##-gdwarf-3

CUSTOM_DEBUG_MODULES = NVRAM SYS_SVC SYS_DRV CONFIG

CUSTOM_NON_DEBUG_MODULES = NONE

DATA_CARD_SPEECH = FALSE

DEMAND_PAGING_VERSION = DPV2

DEMO_PROJECT = FALSE

DMA_UART_VFIFO_TUNNEL_SUPPORT = FALSE

DMA_UART_VIRTUAL_FIFO = TRUE

DRV_CUSTOM_TOOL_SUPPORT = TRUE

DRV_DEBUG_MEMORY_TRACE_SUPPORT = TRUE

DSPIRDBG = FALSE

DSP_SOLUTION = NONE

DT_SUPPORT = FALSE

DUALTALK = FALSE

DUAL_SIM_HOT_SWAP_CO_DECK = FALSE

DUAL_TALK_RX_GAIN_TABLE_CO_BAND_SUPPORT = FALSE

DUMMY_SCATTER_ENABLE = FALSE

ECC_RETRY_ENHANCEMENT = TRUE

EDGE_CLASS_10 = FALSE

EDGE_SUPPORT = TRUE

EES_ENABLE = TRUE

EMMC_BOOTING = NONE

ENHANCED_SINGLE_BANK_NOR_FLASH_SUPPORT = FALSE

ENLARGE_CODE_BBM = FALSE

EVDO_CT_SUPPORT = FALSE

EXT_BL_UPDATE_SUPPORT = FALSE

EXT_CLOCK = EXT_26M

EXT_MODEM_SUPPORT = FALSE

FAST_DORMANCY_SUPPORT = TRUE

FAX_SUPPORT = FALSE

FDD_EDCH_PHYSICAL_CATEGORY = 6

FDD_HSDSCH_PHYSICAL_CATEGORY = 14

FEATURE_OVERLOAD = FALSE

FLASH_DRV_IN_BL = NONE

FS_DEDICATED_BUFFER = TRUE

FS_OPEN_HINT_SUPPORT = TRUE

FS_RAMDISK = FALSE

FS_TRACE_SUPPORT = FALSE

GCC_WARN_AS_ERROR = FALSE

GEMINI = 2

GEMINI_VERSION = V2

GERAN_RELEASE_SUPPORT = GERAN_R8_SUPPORT

GPRS_CLASS_10 = FALSE

GPRS_DIALUP_PPP_DROP_PACKETS_WHEN_2G_PS_SUSPEND = TRUE

GPRS_DIALUP_PPP_SUPPORT_ESCAPE_ATO = TRUE

GPRS_MAX_PDP_SUPPORT = 6

GPS_SUPPORT = SMART_PHONE_MODEM

HSUPA_CAPABILITY_NOT_SUPPORT = FALSE

HW_PFC_SUPPORT = FALSE

HW_VER = BIRD_Q0MP1_K80_BSP_HSPA_HW

IC_TEST_TYPE = NONE

IPV6_PDP_SUPPORT = TRUE

KAL_ASSERT_LEVEL = KAL_ASSERT_LEVEL3

KAL_DEBUG_LEVEL = NORMAL_DEBUG_KAL

KAL_RECORD_BOOTUP_LOG = FALSE

KAL_TRACE_OUTPUT = FULL

L1D_LOOPBACK = 0

L1L2_TX_NEW_ARCH = TRUE

L1_3GSOLUTION = MTK_UL1_FDD

L1_CATCHER = TRUE

L1_COCLK_REQUIREMENT_CHECK_SUPPORT = FALSE

L1_EPSK_TX = TRUE

L1_GPS_CO_CLOCK_SUPPORT = TRUE

L1_GPS_REF_TIME_SUPPORT = TRUE

L1_LOCK_AFCDAC_AT_STARTUP_SUPPORT = TRUE

L1_TDD128 = FALSE

LOW_COST_SUPPORT = NONE

MAX_NUM_OF_NDIS_SUPPORT = 6

MCD_CODESET_SHIFT_SUPPORT = 440000

MCD_SUPPORT = TRUE

MCU_CLOCK = MCU_480M

MCU_DCM = DCM_ENABLE

MCU_DORMANT_MODE = TRUE

MDSYS = NONE

MOBILE_BROADBAND = NONE

MODEMRESERVEDSIZE_AUTOCONFIG = TRUE

MODEM_3G_LOGGING = FALSE

MODEM_CARD = NONE

MODEM_NFC_SUPPORT = TRUE

MODIS_FDM = OFF

MSDC_CARD_SUPPORT_TYPE = NONE

MTK_CTA_SET = TRUE

MTK_SLEEP_ENABLE = TRUE

MULTIPLE_NDIS_SUPPORT = TRUE

MULTIPLE_PPP_DIALUP_SUPPORT = FALSE

MULTIPLE_TBF = FALSE

NAND_FLASH_BOOTING = NONE

NAND_SUPPORT = FALSE

NAND_SUPPORT_RAW_DISK = FALSE

NDIS_SUPPORT = UPS

NOR_SUPPORT_RAW_DISK = FALSE

NOT_BENEFIT_FROM_BATTERY_CONSUMPTION_OPTIMISATION = FALSE

NVRAM_PSEUDO_MERGE = OFF

OP01_2G_ONLY = FALSE

OPTIMIZED_AFC_INIT_FLOW_SUPPORT = FALSE

OPTR_SPEC_MODEM = NONE

ORIGINAL_FLAVOR = DEFAULT

ORIGINAL_PROJECT_NAME = BIRD_Q0MP1_K80_BSP_HSPA

PACKAGE_SEG = NONE

PARTIAL_TRACE_LIB = NONE

PHB_ADDITIONAL_SUPPORT = TRUE

PHB_FDN_ENTRY = 50

PHB_LN_ENTRY = 10

PHB_PHONE_ENTRY = 10

PHB_SIM_ENTRY = 1000

PHB_SYNC = ON

PLATFORM_FOR_CHECK = NONE

PLMN_LIST_PREF_SUPPORT = DEFAULT

PMIC = MT6350

PPP_SUPPORT = NONE

PPP_TYPE_PDP_DIALUP_SUPPORT = FALSE

PRODUCTION_RELEASE = TRUE

PS_HANDOVER = FALSE

R7R8_FULL_SET_SUPPORT = FALSE

REDUCE_HEADER_DEPTH = TRUE

RES_PROT = FALSE

RFC2507_SUPPORT = TRUE

RPMB_SECURE_SHAREDMEM_SUPPORT = FALSE

RRC_PAYLOAD_FOR_3G_UP_SUPPORT = FALSE

RRLP_VER_SUPPORT = R7

RSAT_SUPPORT = MODEM_WITH_RSAT

RTOS = NUCLEUS_V2

RTOS_DEBUG = TRUE

RVCT_PARTIAL_LINK = FALSE

RVCT_VERSION = NONE

SDIO_DEVICE_CONNECTIVITY = DISABLE

SDS_SUPPORT = FALSE

SECURE_CUSTOM_NAME = MTK

SECURE_JTAG_ENABLE = TRUE

SECURE_PORT_SUPPORT = FALSE

SECURE_RO_ENABLE = FALSE

SECURE_SUPPORT = FALSE

SECURE_VERSION = 1

SERIAL_FLASH_SUPPORT = FALSE

SIM_HOT_SWAP = SIM_SLOT_1

SIM_RECOVERY_ENHANCEMENT = TRUE

SIM_SWTICH_CONTROLLER_MT6302 = FALSE

SIM_SWTICH_CONTROLLER_MT6306 = FALSE

SIP_RAM_SIZE = NONE

SIP_SERIAL_FLASH_SIZE = NONE

SMART_PHONE_CORE = ANDROID_MODEM

SML_SUPPORT = TRUE

SMS_OVER_PS_SUPPORT = TRUE

SMS_PHONE_ENTRY = 10

SMS_R8_NATION_LANGUAGE = FALSE

SMS_TOTAL_ENTRY = 500

SP_VIDEO_CALL_SUPPORT = TRUE

SSS_SUPPORT = SSS_LIB

SUB_BOARD_VER = PCB01

SWLA_SELFSPACE_SUPPORT = FALSE

SW_BINDING_SUPPORT = NONE

SYSDRV_BACKUP_DISK_SUPPORT = NONE

TDD_EDCH_PHYSICAL_CATEGORY = NONE

TDD_HSDSCH_PHYSICAL_CATEGORY = NONE

TEE_SECURE_SHAREDMEM_SUPPORT = FALSE

TEST_LOAD_TYPE = NONE

TST_DNT_LOGGING = FALSE

TST_LOGACC_SUPPORT = FALSE

TST_MALMO_SUPPORT = FALSE

TST_SET_LOG_BUF_SIZ = 17

TST_SUPPORT = TRUE

TST_WRITE_TO_FILE = FALSE

UART3_SUPPORT = FALSE

ULCS_ASN_SUPPORT_VERSION = ULCS_ASN_SUPPORT_R99

UMTS_TDD128_BAND_A = FALSE

UMTS_TDD128_BAND_B = FALSE

UMTS_TDD128_BAND_C = FALSE

UMTS_TDD128_BAND_D = FALSE

UMTS_TDD128_BAND_E = FALSE

UMTS_TDD128_BAND_F = FALSE

USB_BOOTUP_TRACE = FALSE

USB_COMPORT_PC_DRIVER_SUPPORT = MS

USB_COM_PORT_SUPPORT = FALSE

USB_DOWNLOAD_IN_BL = NONE

USB_HIGH_SPEED_COM_PORT_SUPPORT = FALSE

USB_HS_SUPPORT = FALSE

USB_IN_META_SUPPORT = FALSE

USB_IN_NORMAL_MODE_SUPPORT = FALSE

USB_MASS_STORAGE_CDROM_SUPPORT = FALSE

USB_MASS_STORAGE_SUPPORT = FALSE

USB_MULTIPLE_COMPORT_ENABLE = FALSE

USB_SUPPORT = FALSE

USB_TETHERING = FALSE

USIM_SUPPORT = TRUE

UUS_SUPPORT = FALSE

VAMOS_SUPPORT = TRUE

VENDOR = NONE

WAV_CODEC = TRUE

WCDMA_PREFERRED = TRUE

X_BOOTING = NONE

ZIMAGE_FAVOR_ROM = FALSE

ZIMAGE_SUPPORT = FALSE


# *************************************************************************
# Release Setting Section
# *************************************************************************
RELEASE_PACKAGE		= REL_CR_BASIC	# REL_CR_MMI_GPRS, REL_CR_MMI_GSM, REL_CR_L4_GPRS, REL_CR_L4_GSM REL_SUB_UAS_UMTS
RELEASE_PACKAGE_SUB_PS = REL_SUB_PROTOCOL

RELEASE_$(strip $(INPUT_METHOD)) = SRC	# MTK/SRC, only works when INPUT_METHOD is turning on
RELEASE_INPUT_METHODS_SRC =		# MMI_ZI, MMI_T9, MMI_ITAP,
RELEASE_TYPE = NONE           # NONE, INTERNAL
############################################################

# *************************************************************************
# Consistent Feature Options
# *************************************************************************
COM_DEFS_FOR_MT6580RF_2G_CUSTOM   = MT6580RF_2G_RF MT6580RF_2G_CUSTOM
COM_DEFS_FOR_CUSTOM_MT6580RF_UMTS_FDD   = MT6580RF_UMTS_FDD_RF CUSTOM_MT6580RF_UMTS_FDD
# *************************************************************************
# Include MODEM.mak
# *************************************************************************
include make/MODEM.mak

# *************************************************************************
# Common preprocessor definitions
# *************************************************************************
CUSTOM_OPTION += __MANUAL_MODE_NW_SEL__ \
                 __CP_HW_CIPHER_ENABLE__ __CP_HW_INTEGRITY_ENABLE__ \
                 __USIM_DRV__ \

CUSTOM_OPTION += __NBR_CELL_INFO__ \
                 __SATCC__ __SATC3__ __SATCE__

CUSTOM_OPTION += __R6_OOS__

CUSTOM_OPTION += __HSPA_PREFERENCE_SETTING__  __DYNAMIC_HSPA_PREFERENCE__

CUSTOM_OPTION += __BT_SIM_PROFILE__ __CTA_DUAL_SIM_STANDARD__ __L4C_ROOT__

CUSTOM_OPTION += __AT_EPBW_SUPPORT__ __CPI_SUPPORT__

CUSTOM_OPTION += DEBUG_SWLA

CUSTOM_OPTION += __GEMINI_3G_SWITCH__

CUSTOM_OPTION += __L1BOXSTER__

CUSTOM_OPTION += __NVRAM_IMPORTANT_PARTITIONS__

CUSTOM_OPTION += __2STAGE_NW_SELECTION__ __REPORT_AVAILABLE_PLMN__ __TDFD_SHARED_NVRAM__

CUSTOM_OPTION += __SIM_UPDATE_PIN2_CNT_BY_VERIFYING__

CUSTOM_OPTION += __ANDROID_TXRX_ACTIVE_TIME__

# *************************************************************************
# Component trace definition header files for custom release only
# *************************************************************************
# Customer can add new trace headers here for new modules
NEW_CUS_REL_TRACE_DEFS_MODEM =

# *************************************************************************
# Custom Release Component Configuration
# *************************************************************************
include make/rel/$(strip $(RELEASE_PACKAGE)).mak

ifeq ($(strip $(CUSTOM_RELEASE)),TRUE)
  ifneq ($(findstring REL_SUB_, $(strip $(RELEASE_PACKAGE))),)
    -include make/rel/sub_ps/$(strip $(RELEASE_PACKAGE_SUB_PS)).mak
  endif
endif




