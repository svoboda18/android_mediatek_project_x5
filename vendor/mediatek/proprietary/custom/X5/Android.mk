LOCAL_PATH:= $(call my-dir)
ifeq ($(MTK_PROJECT), X5)
include $(call all-makefiles-under,$(LOCAL_PATH))
endif
