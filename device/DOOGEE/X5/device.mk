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
    
PRODUCT_PROPERTY_OVERRIDES += \
   bluetooth.profile.avrcp.target.enabled=true \
   bluetooth.profile.bas.client.enabled=true \
   bluetooth.profile.gatt.enabled=true \
   bluetooth.profile.hfp.ag.enabled=true \
   bluetooth.profile.hid.device.enabled=true \
   bluetooth.profile.hid.host.enabled=true \
   bluetooth.profile.map.server.enabled=true \
   bluetooth.profile.opp.enabled=true \
   bluetooth.profile.pan.nap.enabled=true \
   bluetooth.profile.pan.panu.enabled=true \
   bluetooth.profile.pbap.server.enabled=true \
   bluetooth.profile.sap.server.enabled=true \
   dalvik.vm.dex2oat-minidebuginfo=false \
   dalvik.vm.foreground-heap-growth-multiplier=2.0 \
   dalvik.vm.heapgrowthlimit=48m \
   dalvik.vm.heapmaxfree=2m \
   dalvik.vm.heapminfree=512k \
   dalvik.vm.heapsize=128m \
   dalvik.vm.heapstartsize=5m \
   dalvik.vm.heaptargetutilization=0.75 \
   dalvik.vm.madvise-random=true \
   dalvik.vm.minidebuginfo=false \
   debug.fdsan=warn_once \
   debug.hwui.skia_atrace_enabled=false \
   debug.renderengine.backend=skiaglthreaded \
   debug.sf.disable_client_composition_cache=1 \
   debug.sf.early.app.duration=20000000 \
   debug.sf.early.sf.duration=27600000 \
   debug.sf.earlyGl.app.duration=20000000 \
   debug.sf.earlyGl.sf.duration=27600000 \
   debug.sf.enable_gl_backpressure=1 \
   debug.sf.enable_transaction_tracing=false \
   debug.sf.hwc.min.duration=17000000 \
   debug.sf.late.app.duration=20000000 \
   debug.sf.late.sf.duration=27600000 \
   debug.sf.predict_hwc_composition_strategy=0 \
   debug.sf.use_phase_offsets_as_durations=1 \
   debug.stagefright.ccodec=0 \
   drm.service.enabled=true \
   media.audio.hrt_freq=13000 \
   media.stagefright.thumbnail.prefer_hw_codecs=true \
   persist.sys.disable_rescue=true \
   persist.traced.enable=0 \
   persist.vendor.vilte_support=0 \
   persist.vendor.viwifi_support=0 \
   ro.crypto.volume.filenames_mode=aes-256-cts \
   ro.lmk.kill_heaviest_task=true \
   ro.lmk.kill_timeout_ms=100 \
   ro.lmk.log_stats=false \
   ro.lmk.upgrade_pressure=60 \
   ro.lmk.use_minfree_levels=true \
   ro.lmk.use_new_strategy=true \
   ro.surface_flinger.force_hwc_copy_for_virtual_displays=true \
   ro.surface_flinger.max_frame_buffer_acquired_buffers=3 \
   ro.surface_flinger.running_without_sync_framework=true \
   ro.vendor.dpframework.not_support_yv12=1 \
   ro.vendor.mtk_emmc_support=1 \
   ro.vendor.mtk_pq_support=0 \
   ro.vendor.mtk_hybrid_encode_support=true \
   ro.vendor.mtk_log_hide_gps=1 \
   ro.vendor.mtk_sec_video_path_support=1 \
   ro.vendor.mtk_wfd_support=1 \
   ro.vendor.mtk_widevine_drm_l1_support=1 \
   ro.vendor.wfd.dummy.enable=1 \
   ro.vendor.wfd.iframesize.level=0 \
   vendor.camera.mdp.cz.enable=0 \
   vendor.camera.mdp.dre.enable=0 \
   vendor.mtk.vdec.waitkeyframeforplay=1 \
   zygote.critical_window.minute=10

PRODUCT_PROPERTY_OVERRIDES += \
   ro.secure=0 \
   ro.adb.secure=0 \
   ro.debuggable=1 \
   persist.sys.usb.config=adb

# Keyboard layout
PRODUCT_COPY_FILES += device/mediatek/mt6580/ACCDET.kl:system/usr/keylayout/ACCDET.kl:mtk
PRODUCT_COPY_FILES += $(LOCAL_PATH)/mtk-kpd.kl:system/usr/keylayout/mtk-kpd.kl:mtk

# Bootanimation
PRODUCT_COPY_FILES += $(BANIMATION)/bootanimation.zip:system/media/bootanimation.zip

# override HIDLs
PRODUCT_PACKAGES += \
    android.hardware.drm@1.0-service-lazy \
    android.hardware.drm@1.2-service-lazy.clearkey \
    android.hardware.drm@1.2-service-lazy.widevine \
    android.hardware.light@2.0-service-mediatek-lazy \
    vendor.mediatek.hardware.nvram@1.1-service-lazy

PRODUCT_PROPERTY_OVERRIDES += \
   persist.log.tag.APM-ServiceJ=S \
   persist.log.tag.APM-SessionJ=S \
   persist.log.tag.APM-SessionN=S \
   persist.log.tag.APM-Subscriber=S \
   persist.log.tag.AT=S \
   persist.log.tag.AdnRecord=S \
   persist.log.tag.AdnRecordCache=S \
   persist.log.tag.AdnRecordLoader=S \
   persist.log.tag.AirplaneHandler=S \
   persist.log.tag.AutoRegSmsFwk=S \
   persist.log.tag.C2K_RIL-DATA=S \
   persist.log.tag.CapaSwitch=S \
   persist.log.tag.CarrierExpressServiceImpl=S \
   persist.log.tag.CarrierExpressServiceImplExt=S \
   persist.log.tag.CdmaMoSms=S \
   persist.log.tag.CdmaMtSms=S \
   persist.log.tag.ConSmsFwkExt=S \
   persist.log.tag.CountryDetector=S \
   persist.log.tag.DC-C-1=S \
   persist.log.tag.DC-C-2=S \
   persist.log.tag.DCT-C-0=S \
   persist.log.tag.DCT-C-1=S \
   persist.log.tag.DCT-I-0=S \
   persist.log.tag.DCT-I-1=S \
   persist.log.tag.DMC-ApmService=S \
   persist.log.tag.DMC-Core=S \
   persist.log.tag.DMC-DmcService=S \
   persist.log.tag.DMC-EventsSubscriber=S \
   persist.log.tag.DMC-ReqQManager=S \
   persist.log.tag.DMC-SessionManager=S \
   persist.log.tag.DMC-TranslatorLoader=S \
   persist.log.tag.DMC-TranslatorUtils=S \
   persist.log.tag.DSSelector=S \
   persist.log.tag.DSSelectorOP01=S \
   persist.log.tag.DSSelectorOP02=S \
   persist.log.tag.DSSelectorOP09=S \
   persist.log.tag.DSSelectorOP18=S \
   persist.log.tag.DSSelectorOm=S \
   persist.log.tag.DSSelectorUtil=S \
   persist.log.tag.DataDispatcher=S \
   persist.log.tag.DataOnlySmsFwk=S \
   persist.log.tag.DcFcMgr=S \
   persist.log.tag.DupSmsFilterExt=S \
   persist.log.tag.ExternalSimMgr=S \
   persist.log.tag.GmsClient=S \
   persist.log.tag.GsmCallTkrHlpr=S \
   persist.log.tag.GsmCdmaConn=S \
   persist.log.tag.GsmCdmaPhone=S \
   persist.log.tag.IMGMapper=S \
   persist.log.tag.IMSRILRequest=S \
   persist.log.tag.IMS_RILA=S \
   persist.log.tag.IccCardProxy=S \
   persist.log.tag.IccPhoneBookIM=S \
   persist.log.tag.IccProvider=S \
   persist.log.tag.ImsApp=S \
   persist.log.tag.ImsBaseCommands=S \
   persist.log.tag.ImsCall=S \
   persist.log.tag.ImsCallProfile=S \
   persist.log.tag.ImsCallSession=S \
   persist.log.tag.ImsEcbm=S \
   persist.log.tag.ImsEcbmProxy=S \
   persist.log.tag.ImsManager=S \
   persist.log.tag.ImsPhone=S \
   persist.log.tag.ImsPhoneBase=S \
   persist.log.tag.ImsPhoneCall=S \
   persist.log.tag.ImsService=S \
   persist.log.tag.ImsVTProvider=S \
   persist.log.tag.IsimFileHandler=S \
   persist.log.tag.IsimRecords=S \
   persist.log.tag.LCM-Subscriber=S \
   persist.log.tag.LoadCastServiceInfoTask=S \
   persist.log.tag.MAPI-CommandProcessor=S \
   persist.log.tag.MAPI-MdiRedirector=S \
   persist.log.tag.MAPI-MdiRedirectorCtrl=S \
   persist.log.tag.MAPI-NetworkSocketConnection=S \
   persist.log.tag.MAPI-SocketConnection=S \
   persist.log.tag.MAPI-SocketListener=S \
   persist.log.tag.MAPI-TranslatorManager=S \
   persist.log.tag.MDM-Subscriber=S \
   persist.log.tag.MDP=S \
   persist.log.tag.MGsmSMSDisp=S \
   persist.log.tag.MSimSmsIStatus=S \
   persist.log.tag.MSmsStorageMtr=S \
   persist.log.tag.MSmsUsageMtr=S \
   persist.log.tag.MTKSST=S \
   persist.log.tag.MTK_GRALLOC=S \
   persist.log.tag.MtkAdnRecord=S \
   persist.log.tag.MtkConSmsFwk=S \
   persist.log.tag.MtkCsimFH=S \
   persist.log.tag.MtkDc=S \
   persist.log.tag.MtkDcc=S \
   persist.log.tag.MtkDct=S \
   persist.log.tag.MtkDupSmsFilter=S \
   persist.log.tag.MtkEmbmsAdaptor=S \
   persist.log.tag.MtkFactory=S \
   persist.log.tag.MtkGsmCdmaConn=S \
   persist.log.tag.MtkIccCardProxy=S \
   persist.log.tag.MtkIccPHBIM=S \
   persist.log.tag.MtkIccProvider=S \
   persist.log.tag.MtkIccSmsIntMgr=S \
   persist.log.tag.MtkImsManager=S \
   persist.log.tag.MtkImsService=S \
   persist.log.tag.MtkIsimFH=S \
   persist.log.tag.MtkOmxCore=S \
   persist.log.tag.MtkOmxMVAMgr=S \
   persist.log.tag.MtkOmxVenc=S \
   persist.log.tag.MtkPhoneNotifr=S \
   persist.log.tag.MtkPhoneNumberUtils=S \
   persist.log.tag.MtkPhoneSwitcher=S \
   persist.log.tag.MtkRecordLoader=S \
   persist.log.tag.MtkRetryManager=S \
   persist.log.tag.MtkRuimFH=S \
   persist.log.tag.MtkSIMFH=S \
   persist.log.tag.MtkSIMRecords=S \
   persist.log.tag.MtkSmsCbHeader=S \
   persist.log.tag.MtkSmsManager=S \
   persist.log.tag.MtkSmsMessage=S \
   persist.log.tag.MtkSpnOverride=S \
   persist.log.tag.MtkSubCtrl=S \
   persist.log.tag.MtkUiccCard=S \
   persist.log.tag.MtkUiccCardApp=S \
   persist.log.tag.MtkUiccCtrl=S \
   persist.log.tag.MtkUsimFH=S \
   persist.log.tag.Mtk_RIL_ImsSms=S \
   persist.log.tag.MwiRIL=S \
   persist.log.tag.NetAgentService=S \
   persist.log.tag.NetAgent_IO=S \
   persist.log.tag.NetLnkEventHdlr=S \
   persist.log.tag.NetworkPolicy=S \
   persist.log.tag.NetworkStats=S \
   persist.log.tag.OneGoogle=S \
   persist.log.tag.OperatorUtils=S \
   persist.log.tag.PKM-Lib=S \
   persist.log.tag.PKM-MDM=S \
   persist.log.tag.PKM-Monitor=S \
   persist.log.tag.PKM-SA=S \
   persist.log.tag.PKM-Service=S \
   persist.log.tag.PQ_DS=S \
   persist.log.tag.Phone=S \
   persist.log.tag.PhoneConfigurationSettings=S \
   persist.log.tag.PhoneFactory=S \
   persist.log.tag.PowerHalAddressUitls=S \
   persist.log.tag.PowerHalMgrImpl=S \
   persist.log.tag.PowerHalMgrServiceImpl=S \
   persist.log.tag.PowerHalWifiMonitor=S \
   persist.log.tag.PowerWrap=S \
   persist.log.tag.ProxyController=S \
   persist.log.tag.RFX=S \
   persist.log.tag.RIL=S \
   persist.log.tag.RIL-CC=S \
   persist.log.tag.RIL-DATA=S \
   persist.log.tag.RIL-Fusion=S \
   persist.log.tag.RIL-Netlink=S \
   persist.log.tag.RIL-OEM=S \
   persist.log.tag.RIL-PHB=S \
   persist.log.tag.RIL-Parcel=S \
   persist.log.tag.RIL-RP=S \
   persist.log.tag.RIL-SIM=S \
   persist.log.tag.RIL-SMS=S \
   persist.log.tag.RIL-SocListen=S \
   persist.log.tag.RIL-Socket=S \
   persist.log.tag.RILC=S \
   persist.log.tag.RILC-MTK=S \
   persist.log.tag.RILC-OP=S \
   persist.log.tag.RILC-RP=S \
   persist.log.tag.RILD=S \
   persist.log.tag.RILMD2-SS=S \
   persist.log.tag.RILMUXD=S \
   persist.log.tag.RIL_Mux=S \
   persist.log.tag.RIL_UIM_SOCKET=S \
   persist.log.tag.RP_DAC=S \
   persist.log.tag.RP_DC=S \
   persist.log.tag.RP_IMS=S \
   persist.log.tag.RTC_DAC=S \
   persist.log.tag.RadioManager=S \
   persist.log.tag.RetryManager=S \
   persist.log.tag.RfxAction=S \
   persist.log.tag.RfxChannelMgr=S \
   persist.log.tag.RfxCloneMgr=S \
   persist.log.tag.RfxContFactory=S \
   persist.log.tag.RfxController=S \
   persist.log.tag.RfxDT=S \
   persist.log.tag.RfxDebugInfo=S \
   persist.log.tag.RfxDefDestUtils=S \
   persist.log.tag.RfxDisThread=S \
   persist.log.tag.RfxFragEnc=S \
   persist.log.tag.RfxHandlerMgr=S \
   persist.log.tag.RfxIdToMsgId=S \
   persist.log.tag.RfxIdToStr=S \
   persist.log.tag.RfxMainThread=S \
   persist.log.tag.RfxMclDisThread=S \
   persist.log.tag.RfxMclMessenger=S \
   persist.log.tag.RfxMclStatusMgr=S \
   persist.log.tag.RfxMessage=S \
   persist.log.tag.RfxObject=S \
   persist.log.tag.RfxOpUtils=S \
   persist.log.tag.RfxRilAdapter=S \
   persist.log.tag.RfxRilUtils=S \
   persist.log.tag.RfxRoot=S \
   persist.log.tag.RfxSM=S \
   persist.log.tag.RfxSocketSM=S \
   persist.log.tag.RfxStatusMgr=S \
   persist.log.tag.RfxTimer=S \
   persist.log.tag.RfxTransUtils=S \
   persist.log.tag.RilClient=S \
   persist.log.tag.RilMalClient=S \
   persist.log.tag.RilOemClient=S \
   persist.log.tag.RilOpProxy=S \
   persist.log.tag.RmcCapa=S \
   persist.log.tag.RmcCdmaSimRequest=S \
   persist.log.tag.RmcCdmaSimUrc=S \
   persist.log.tag.RmcCommSimOpReq=S \
   persist.log.tag.RmcCommSimReq=S \
   persist.log.tag.RmcCommSimUrc=S \
   persist.log.tag.RmcDcCommon=S \
   persist.log.tag.RmcDcDefault=S \
   persist.log.tag.RmcDcPdnManager=S \
   persist.log.tag.RmcDcReqHandler=S \
   persist.log.tag.RmcDcUtility=S \
   persist.log.tag.RmcEccNumberUrcHandler=S \
   persist.log.tag.RmcEmbmsReq=S \
   persist.log.tag.RmcEmbmsUrc=S \
   persist.log.tag.RmcGsmSimRequest=S \
   persist.log.tag.RmcGsmSimUrc=S \
   persist.log.tag.RmcImsCtlReqHdl=S \
   persist.log.tag.RmcImsCtlUrcHdl=S \
   persist.log.tag.RmcNwHdlr=S \
   persist.log.tag.RmcNwRTReqHdlr=S \
   persist.log.tag.RmcNwReqHdlr=S \
   persist.log.tag.RmcOemHandler=S \
   persist.log.tag.RmcOpRadioReq=S \
   persist.log.tag.RmcPhbReq=S \
   persist.log.tag.RmcPhbUrc=S \
   persist.log.tag.RmcRadioReq=S \
   persist.log.tag.RmcRatSwHdlr=S \
   persist.log.tag.RmcWp=S \
   persist.log.tag.RpAudioControl=S \
   persist.log.tag.RpCallControl=S \
   persist.log.tag.RpCdmaOemCtrl=S \
   persist.log.tag.RpCdmaRadioCtrl=S \
   persist.log.tag.RpFOUtils=S \
   persist.log.tag.RpMDCtrl=S \
   persist.log.tag.RpMalController=S \
   persist.log.tag.RpModemMessage=S \
   persist.log.tag.RpPhbController=S \
   persist.log.tag.RpPhoneNumberController=S \
   persist.log.tag.RpRadioCtrl=S \
   persist.log.tag.RpRadioMessage=S \
   persist.log.tag.RpRilClientCtrl=S \
   persist.log.tag.RpSimController=S \
   persist.log.tag.RtcCapa=S \
   persist.log.tag.RtcCommSimCtrl=S \
   persist.log.tag.RtcDC=S \
   persist.log.tag.RtcEccNumberController=S \
   persist.log.tag.RtcEmbmsAt=S \
   persist.log.tag.RtcEmbmsUtil=S \
   persist.log.tag.RtcIms=S \
   persist.log.tag.RtcImsConference=S \
   persist.log.tag.RtcImsDialog=S \
   persist.log.tag.RtcModeCont=S \
   persist.log.tag.RtcNwCtrl=S \
   persist.log.tag.RtcPhb=S \
   persist.log.tag.RtcRadioCont=S \
   persist.log.tag.RtcRatSwCtrl=S \
   persist.log.tag.RtcWp=S \
   persist.log.tag.SIMRecords=S \
   persist.log.tag.SimSwitchOP01=S \
   persist.log.tag.SimSwitchOP02=S \
   persist.log.tag.SimSwitchOP18=S \
   persist.log.tag.SlotQueueEntry=S \
   persist.log.tag.SmsPlusCode=S \
   persist.log.tag.SpnOverride=S \
   persist.log.tag.TrafficStats=S \
   persist.log.tag.UiccCard=S \
   persist.log.tag.UiccController=S \
   persist.log.tag.UxUtility=S \
   persist.log.tag.VT=S \
   persist.log.tag.VsimAdaptor=S \
   persist.log.tag.WORLDMODE=S \
   persist.log.tag.WfoApp=S \
   persist.log.tag.WpfaCcciDataHeaderEncoder=S \
   persist.log.tag.WpfaCcciReader=S \
   persist.log.tag.WpfaCcciSender=S \
   persist.log.tag.WpfaControlMsgHandler=S \
   persist.log.tag.WpfaDriver=S \
   persist.log.tag.WpfaDriverAccept=S \
   persist.log.tag.WpfaDriverAdapter=S \
   persist.log.tag.WpfaDriverDeReg=S \
   persist.log.tag.WpfaDriverMessage=S \
   persist.log.tag.WpfaDriverRegFilter=S \
   persist.log.tag.WpfaDriverULIpPkt=S \
   persist.log.tag.WpfaDriverUtilis=S \
   persist.log.tag.WpfaDriverVersion=S \
   persist.log.tag.WpfaFilterRuleReqHandler=S \
   persist.log.tag.WpfaParsing=S \
   persist.log.tag.WpfaRingBuffer=S \
   persist.log.tag.WpfaRuleContainer=S \
   persist.log.tag.WpfaRuleRegister=S \
   persist.log.tag.WpfaShmAccessController=S \
   persist.log.tag.WpfaShmReadMsgHandler=S \
   persist.log.tag.WpfaShmSynchronizer=S \
   persist.log.tag.WpfaShmWriteMsgHandler=S \
   persist.log.tag.hdmi_cec=S \
   persist.log.tag.legacy_power@2.1-impl=S \
   persist.log.tag.libPowerHal=S \
   persist.log.tag.mtkperf_client=S \
   persist.log.tag.mtkpower@1.0-impl=S \
   persist.log.tag.mtkpower@impl=S \
   persist.log.tag.mtkpower_client=S \
   persist.log.tag.power@1.3-impl=S \
   persist.log.tag.powerd=S \
   persist.log.tag.wpfa_iptable_android=S

$(call inherit-product, device/mediatek/mt6580/device.mk)
$(call inherit-product-if-exists, vendor/mediatek/libs/$(MTK_TARGET_PROJECT)/device-vendor.mk)

ifeq ($(strip $(BUILD_GMS)), yes)
	PRODUCT_PACKAGES += CallRecorderService
endif
