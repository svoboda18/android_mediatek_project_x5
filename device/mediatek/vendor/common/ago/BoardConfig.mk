ifeq (yes,$(strip $(SVB_ENABLE_AGO)))
    MALLOC_SVELTE := true
    ifeq ($(HOST_OS),linux)
        TARGET_USERIMAGES_USE_F2FS := true
    endif
    #Config data partition for F2FS
    BOARD_USERDATAIMAGE_FILE_SYSTEM_TYPE := f2fs
endif
