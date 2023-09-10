/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein is
 * confidential and proprietary to MediaTek Inc. and/or its licensors. Without
 * the prior written permission of MediaTek inc. and/or its licensors, any
 * reproduction, modification, use or disclosure of MediaTek Software, and
 * information contained herein, in whole or in part, shall be strictly
 * prohibited.
 *
 * MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER
 * ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR
 * NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH
 * RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
 * INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES
 * TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO.
 * RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO
 * OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES CONTAINED IN MEDIATEK
 * SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE
 * RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S
 * ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE
 * RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE
 * MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE
 * CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek
 * Software") have been modified by MediaTek Inc. All revisions are subject to
 * any receiver's applicable license agreements with MediaTek Inc.
 */


STATIC_METADATA_BEGIN(DEVICE, REQUEST, SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW)
//------------------------------------------------------------------------------
//  android.request
//------------------------------------------------------------------------------
    CONFIG_METADATA_BEGIN(MTK_REQUEST_MAX_NUM_OUTPUT_STREAMS)//new hidden
        CONFIG_ENTRY_VALUE(1, MINT32)
        CONFIG_ENTRY_VALUE(3, MINT32)
        CONFIG_ENTRY_VALUE(1, MINT32)
    CONFIG_METADATA_END()
    //==========================================================================
    CONFIG_METADATA_BEGIN(MTK_REQUEST_MAX_NUM_INPUT_STREAMS)//new hidden
        CONFIG_ENTRY_VALUE(0, MINT32)
    CONFIG_METADATA_END()
    //==========================================================================
    CONFIG_METADATA_BEGIN(MTK_REQUEST_PIPELINE_MAX_DEPTH)//new
        CONFIG_ENTRY_VALUE(8 , MUINT8)
    CONFIG_METADATA_END()
    //==========================================================================
    CONFIG_METADATA_BEGIN(MTK_REQUEST_PARTIAL_RESULT_COUNT)//new
        CONFIG_ENTRY_VALUE(10 , MINT32)
    CONFIG_METADATA_END()
    //==========================================================================
    CONFIG_METADATA_BEGIN(MTK_REQUEST_AVAILABLE_CAPABILITIES)//new
        CONFIG_ENTRY_VALUE(MTK_REQUEST_AVAILABLE_CAPABILITIES_BACKWARD_COMPATIBLE, MUINT8)
        CONFIG_ENTRY_VALUE(MTK_REQUEST_AVAILABLE_CAPABILITIES_MANUAL_SENSOR, MUINT8)
        CONFIG_ENTRY_VALUE(MTK_REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING, MUINT8)
        CONFIG_ENTRY_VALUE(MTK_REQUEST_AVAILABLE_CAPABILITIES_READ_SENSOR_SETTINGS, MUINT8)
        CONFIG_ENTRY_VALUE(MTK_REQUEST_AVAILABLE_CAPABILITIES_RAW, MUINT8)
        CONFIG_ENTRY_VALUE(MTK_REQUEST_AVAILABLE_CAPABILITIES_BURST_CAPTURE, MUINT8)
    CONFIG_METADATA_END()
    //==========================================================================
    CONFIG_METADATA_BEGIN(MTK_REQUEST_AVAILABLE_REQUEST_KEYS)//new hidden
        CONFIG_ENTRY_VALUE(MTK_COLOR_CORRECTION_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_COLOR_CORRECTION_TRANSFORM, MINT32)
        CONFIG_ENTRY_VALUE(MTK_COLOR_CORRECTION_GAINS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_COLOR_CORRECTION_ABERRATION_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AE_ANTIBANDING_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AE_EXPOSURE_COMPENSATION, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AE_LOCK, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AE_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AE_REGIONS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AE_TARGET_FPS_RANGE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AE_PRECAPTURE_TRIGGER, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AF_MODE, MINT32)
        //CONFIG_ENTRY_VALUE(MTK_CONTROL_AF_REGIONS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AF_TRIGGER, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AWB_LOCK, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AWB_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AWB_REGIONS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_CAPTURE_INTENT, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_EFFECT_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_SCENE_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_VIDEO_STABILIZATION_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_DEMOSAIC_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_EDGE_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_EDGE_STRENGTH, MINT32)
        CONFIG_ENTRY_VALUE(MTK_FLASH_FIRING_POWER, MINT32)
        CONFIG_ENTRY_VALUE(MTK_FLASH_FIRING_TIME, MINT32)
        CONFIG_ENTRY_VALUE(MTK_FLASH_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_HOT_PIXEL_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_JPEG_GPS_COORDINATES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_JPEG_GPS_PROCESSING_METHOD, MINT32)
        CONFIG_ENTRY_VALUE(MTK_JPEG_GPS_TIMESTAMP, MINT32)
        CONFIG_ENTRY_VALUE(MTK_JPEG_ORIENTATION, MINT32)
        CONFIG_ENTRY_VALUE(MTK_JPEG_QUALITY, MINT32)
        CONFIG_ENTRY_VALUE(MTK_JPEG_THUMBNAIL_QUALITY, MINT32)
        CONFIG_ENTRY_VALUE(MTK_JPEG_THUMBNAIL_SIZE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_LENS_APERTURE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_LENS_FILTER_DENSITY, MINT32)
        CONFIG_ENTRY_VALUE(MTK_LENS_FOCAL_LENGTH, MINT32)
        CONFIG_ENTRY_VALUE(MTK_LENS_FOCUS_DISTANCE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_LENS_OPTICAL_STABILIZATION_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_NOISE_REDUCTION_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_NOISE_REDUCTION_STRENGTH, MINT32)
        CONFIG_ENTRY_VALUE(MTK_REQUEST_ID, MINT32)
        CONFIG_ENTRY_VALUE(MTK_REQUEST_METADATA_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SCALER_CROP_REGION, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_EXPOSURE_TIME, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_FRAME_DURATION, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_SENSITIVITY, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_TEST_PATTERN_DATA, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_TEST_PATTERN_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SHADING_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SHADING_STRENGTH, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_FACE_DETECT_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_HISTOGRAM_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_SHARPNESS_MAP_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_HOT_PIXEL_MAP_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_LENS_SHADING_MAP_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_TONEMAP_CURVE_BLUE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_TONEMAP_CURVE_GREEN, MINT32)
        CONFIG_ENTRY_VALUE(MTK_TONEMAP_CURVE_RED, MINT32)
        CONFIG_ENTRY_VALUE(MTK_TONEMAP_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_LED_TRANSMIT, MINT32)
        CONFIG_ENTRY_VALUE(MTK_BLACK_LEVEL_LOCK, MINT32)
        // vendor tag
        // face feature
        CONFIG_ENTRY_VALUE(MTK_FACE_FEATURE_GESTURE_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_FACE_FEATURE_SMILE_DETECT_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_FACE_FEATURE_ASD_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_FACE_FEATURE_FORCE_FACE_3A, MINT32)
        // MFNR feature
        CONFIG_ENTRY_VALUE(MTK_MFNR_FEATURE_MFB_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_MFNR_FEATURE_AIS_MODE, MINT32)
        // 3DNR
        CONFIG_ENTRY_VALUE(MTK_NR_FEATURE_3DNR_MODE, MINT32)

        //CSHOT
        CONFIG_ENTRY_VALUE(MTK_CSHOT_FEATURE_CAPTURE, MINT32)

        //p2done callback
        CONFIG_ENTRY_VALUE(MTK_CONTROL_CAPTURE_EARLY_NOTIFICATION_TRIGGER, MINT32)

        //postview
        CONFIG_ENTRY_VALUE(MTK_CONTROL_CAPTURE_POSTVIEW_SIZE, MINT32)

        //bgservice prerelease
        CONFIG_ENTRY_VALUE(MTK_BGSERVICE_FEATURE_PRERELEASE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_BGSERVICE_FEATURE_IMAGEREADERID, MINT32)

        // 3A Feature
        CONFIG_ENTRY_VALUE(MTK_3A_FEATURE_AE_REQUEST_ISO_SPEED, MINT32)
        CONFIG_ENTRY_VALUE(MTK_3A_FEATURE_AE_REQUEST_METERING_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_3A_FEATURE_AWB_REQUEST_VALUE, MINT32)

        //jpeg flip
        CONFIG_ENTRY_VALUE(MTK_CONTROL_CAPTURE_JPEG_FLIP_MODE, MINT32)
    CONFIG_METADATA_END()
    //==========================================================================
    CONFIG_METADATA_BEGIN(MTK_REQUEST_AVAILABLE_RESULT_KEYS)//new hidden
        CONFIG_ENTRY_VALUE(MTK_COLOR_CORRECTION_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_COLOR_CORRECTION_TRANSFORM, MINT32)
        CONFIG_ENTRY_VALUE(MTK_COLOR_CORRECTION_GAINS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_COLOR_CORRECTION_ABERRATION_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AE_ANTIBANDING_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AE_EXPOSURE_COMPENSATION, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AE_LOCK, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AE_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AE_REGIONS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AE_TARGET_FPS_RANGE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AE_PRECAPTURE_TRIGGER, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AE_STATE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AF_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AF_REGIONS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AF_TRIGGER, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AF_STATE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AWB_LOCK, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AWB_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AWB_REGIONS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_CAPTURE_INTENT, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AWB_STATE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_EFFECT_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_SCENE_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_VIDEO_STABILIZATION_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_EDGE_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_FLASH_FIRING_POWER, MINT32)
        CONFIG_ENTRY_VALUE(MTK_FLASH_FIRING_TIME, MINT32)
        CONFIG_ENTRY_VALUE(MTK_FLASH_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_FLASH_STATE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_HOT_PIXEL_MODE, MINT32)
        //CONFIG_ENTRY_VALUE(MTK_JPEG_GPS_LOCATION, MINT32)
        CONFIG_ENTRY_VALUE(MTK_JPEG_GPS_COORDINATES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_JPEG_GPS_PROCESSING_METHOD, MINT32)
        CONFIG_ENTRY_VALUE(MTK_JPEG_GPS_TIMESTAMP, MINT32)
        CONFIG_ENTRY_VALUE(MTK_JPEG_ORIENTATION, MINT32)
        CONFIG_ENTRY_VALUE(MTK_JPEG_QUALITY, MINT32)
        CONFIG_ENTRY_VALUE(MTK_JPEG_SIZE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_JPEG_THUMBNAIL_QUALITY, MINT32)
        CONFIG_ENTRY_VALUE(MTK_JPEG_THUMBNAIL_SIZE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_LENS_APERTURE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_LENS_FILTER_DENSITY, MINT32)
        CONFIG_ENTRY_VALUE(MTK_LENS_FOCAL_LENGTH, MINT32)
        CONFIG_ENTRY_VALUE(MTK_LENS_FOCUS_DISTANCE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_LENS_FOCUS_RANGE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_LENS_OPTICAL_STABILIZATION_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_LENS_STATE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_NOISE_REDUCTION_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_REQUEST_ID, MINT32)
        CONFIG_ENTRY_VALUE(MTK_REQUEST_METADATA_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_REQUEST_PIPELINE_DEPTH, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SCALER_CROP_REGION, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_EXPOSURE_TIME, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_FRAME_DURATION, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_SENSITIVITY, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_TIMESTAMP, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_TEMPERATURE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_NEUTRAL_COLOR_POINT, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_NOISE_PROFILE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_PROFILE_HUE_SAT_MAP, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_PROFILE_TONE_CURVE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_GREEN_SPLIT, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_TEST_PATTERN_DATA, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_TEST_PATTERN_MODE, MINT32)
        //CONFIG_ENTRY_VALUE(MTK_SENSOR_ROLLING_SHUTTER_SKEW, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SHADING_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_FACE_DETECT_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_FACE_IDS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_FACE_LANDMARKS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_FACE_RECTANGLES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_FACE_SCORES, MINT32)
        //CONFIG_ENTRY_VALUE(MTK_STATISTICS_FACES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_HISTOGRAM, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_HISTOGRAM_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_SHARPNESS_MAP, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_SHARPNESS_MAP_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_LENS_SHADING_CORRECTION_MAP, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_LENS_SHADING_MAP, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_SCENE_FLICKER, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_HOT_PIXEL_MAP_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_HOT_PIXEL_MAP, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_LENS_SHADING_MAP_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_TONEMAP_CURVE_BLUE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_TONEMAP_CURVE_GREEN, MINT32)
        CONFIG_ENTRY_VALUE(MTK_TONEMAP_CURVE_RED, MINT32)
        //CONFIG_ENTRY_VALUE(MTK_TONEMAP_CURVE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_TONEMAP_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_LED_TRANSMIT, MINT32)
        CONFIG_ENTRY_VALUE(MTK_BLACK_LEVEL_LOCK, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SYNC_FRAME_NUMBER, MINT32)
        // vendor tag
        // face feature
        CONFIG_ENTRY_VALUE(MTK_FACE_FEATURE_GESTURE_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_FACE_FEATURE_GESTURE_RESULT, MINT32)
        CONFIG_ENTRY_VALUE(MTK_FACE_FEATURE_SMILE_DETECT_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_FACE_FEATURE_SMILE_DETECT_RESULT, MINT32)
        CONFIG_ENTRY_VALUE(MTK_FACE_FEATURE_ASD_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_FACE_FEATURE_ASD_RESULT, MINT32)
        // MFNR feature
        CONFIG_ENTRY_VALUE(MTK_MFNR_FEATURE_AIS_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_MFNR_FEATURE_AIS_RESULT, MINT32)
        CONFIG_ENTRY_VALUE(MTK_MFNR_FEATURE_MFB_MODE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_MFNR_FEATURE_MFB_RESULT, MINT32)
        // 3DNR
        CONFIG_ENTRY_VALUE(MTK_NR_FEATURE_3DNR_MODE, MINT32)
        // 3A FEATUR
        CONFIG_ENTRY_VALUE(MTK_3A_FEATURE_AE_ROI, MINT32)
        CONFIG_ENTRY_VALUE(MTK_3A_FEATURE_AF_ROI, MINT32)
        CONFIG_ENTRY_VALUE(MTK_3A_FEATURE_AWB_ROI, MINT32)
        CONFIG_ENTRY_VALUE(MTK_3A_FEATURE_AE_AVAILABLE_METERING, MINT32)
        CONFIG_ENTRY_VALUE(MTK_3A_FEATURE_AE_AVERAGE_BRIGHTNESS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_3A_FEATURE_AWB_AVAILABL_RANGE, MINT32)
        //p2done callback
        CONFIG_ENTRY_VALUE(MTK_CONTROL_CAPTURE_NEXT_READY, MINT32)
    CONFIG_METADATA_END()
    //==========================================================================
    CONFIG_METADATA_BEGIN(MTK_REQUEST_AVAILABLE_CHARACTERISTICS_KEYS)//new hidden
        CONFIG_ENTRY_VALUE(MTK_COLOR_CORRECTION_AVAILABLE_ABERRATION_MODES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AE_AVAILABLE_ANTIBANDING_MODES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AE_AVAILABLE_MODES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AE_AVAILABLE_TARGET_FPS_RANGES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AE_COMPENSATION_RANGE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AE_COMPENSATION_STEP, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AF_AVAILABLE_MODES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AVAILABLE_EFFECTS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AVAILABLE_SCENE_MODES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AVAILABLE_VIDEO_STABILIZATION_MODES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_AWB_AVAILABLE_MODES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_MAX_REGIONS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_CONTROL_SCENE_MODE_OVERRIDES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_EDGE_AVAILABLE_EDGE_MODES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_FLASH_INFO_AVAILABLE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_FLASH_INFO_CHARGE_DURATION, MINT32)
        CONFIG_ENTRY_VALUE(MTK_HOT_PIXEL_AVAILABLE_HOT_PIXEL_MODES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_JPEG_AVAILABLE_THUMBNAIL_SIZES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_JPEG_MAX_SIZE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_LENS_INFO_AVAILABLE_APERTURES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_LENS_INFO_AVAILABLE_FILTER_DENSITIES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_LENS_INFO_AVAILABLE_FOCAL_LENGTHS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_LENS_INFO_AVAILABLE_OPTICAL_STABILIZATION, MINT32)
        CONFIG_ENTRY_VALUE(MTK_LENS_INFO_HYPERFOCAL_DISTANCE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_LENS_INFO_MINIMUM_FOCUS_DISTANCE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_LENS_INFO_SHADING_MAP_SIZE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_LENS_INFO_FOCUS_DISTANCE_CALIBRATION, MINT32)
        CONFIG_ENTRY_VALUE(MTK_NOISE_REDUCTION_AVAILABLE_NOISE_REDUCTION_MODES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_REQUEST_MAX_NUM_OUTPUT_STREAMS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_REQUEST_MAX_NUM_INPUT_STREAMS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_REQUEST_PIPELINE_MAX_DEPTH, MINT32)
        CONFIG_ENTRY_VALUE(MTK_REQUEST_PARTIAL_RESULT_COUNT, MINT32)
        CONFIG_ENTRY_VALUE(MTK_REQUEST_AVAILABLE_CHARACTERISTICS_KEYS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_REQUEST_AVAILABLE_CAPABILITIES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_REQUEST_AVAILABLE_REQUEST_KEYS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_REQUEST_AVAILABLE_RESULT_KEYS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_REQUEST_AVAILABLE_CHARACTERISTICS_KEYS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SCALER_AVAILABLE_MAX_DIGITAL_ZOOM, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SCALER_AVAILABLE_STREAM_CONFIGURATIONS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SCALER_AVAILABLE_MIN_FRAME_DURATIONS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SCALER_AVAILABLE_STALL_DURATIONS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SCALER_CROPPING_TYPE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_INFO_ACTIVE_ARRAY_REGION, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_INFO_SENSITIVITY_RANGE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_INFO_COLOR_FILTER_ARRANGEMENT, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_INFO_EXPOSURE_TIME_RANGE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_INFO_MAX_FRAME_DURATION, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_INFO_PHYSICAL_SIZE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_INFO_PIXEL_ARRAY_SIZE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_INFO_WHITE_LEVEL, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_INFO_TIMESTAMP_SOURCE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_REFERENCE_ILLUMINANT1, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_REFERENCE_ILLUMINANT2, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_CALIBRATION_TRANSFORM1, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_CALIBRATION_TRANSFORM2, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_COLOR_TRANSFORM1, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_COLOR_TRANSFORM2, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_FORWARD_MATRIX1, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_FORWARD_MATRIX2, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_BASE_GAIN_FACTOR, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_BLACK_LEVEL_PATTERN, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_MAX_ANALOG_SENSITIVITY, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_ORIENTATION, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_PROFILE_HUE_SAT_MAP_DIMENSIONS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_ORIENTATION, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_AVAILABLE_TEST_PATTERN_MODES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SENSOR_INFO_FACING, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_INFO_AVAILABLE_FACE_DETECT_MODES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_INFO_MAX_FACE_COUNT, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_INFO_MAX_FACE_COUNT, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_INFO_HISTOGRAM_BUCKET_COUNT, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_INFO_MAX_HISTOGRAM_COUNT, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_INFO_MAX_SHARPNESS_MAP_VALUE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_INFO_SHARPNESS_MAP_SIZE, MINT32)
        CONFIG_ENTRY_VALUE(MTK_STATISTICS_INFO_AVAILABLE_HOT_PIXEL_MAP_MODES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_TONEMAP_MAX_CURVE_POINTS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_TONEMAP_AVAILABLE_TONE_MAP_MODES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_LED_AVAILABLE_LEDS, MINT32)
        CONFIG_ENTRY_VALUE(MTK_INFO_SUPPORTED_HARDWARE_LEVEL, MINT32)
        CONFIG_ENTRY_VALUE(MTK_SYNC_MAX_LATENCY, MINT32)
        // vendor tag
        // face feature
        CONFIG_ENTRY_VALUE(MTK_FACE_FEATURE_AVAILABLE_GESTURE_MODES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_FACE_FEATURE_AVAILABLE_SMILE_DETECT_MODES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_FACE_FEATURE_AVAILABLE_ASD_MODES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_FACE_FEATURE_AVAILABLE_FORCE_FACE_3A, MINT32)
        // MFNR feature
        CONFIG_ENTRY_VALUE(MTK_MFNR_FEATURE_AVAILABLE_MFB_MODES, MINT32)
        CONFIG_ENTRY_VALUE(MTK_MFNR_FEATURE_AVAILABLE_AIS_MODES, MINT32)
        // 3DNR
        CONFIG_ENTRY_VALUE(MTK_NR_FEATURE_AVAILABLE_3DNR_MODES, MINT32)

        //CSHOT
        CONFIG_ENTRY_VALUE(MTK_CSHOT_FEATURE_AVAILABLE_MODES, MINT32)

        //p2done callback
        CONFIG_ENTRY_VALUE(MTK_CONTROL_CAPTURE_EARLY_NOTIFICATION_SUPPORT, MINT32)

        //postview
        CONFIG_ENTRY_VALUE(MTK_CONTROL_CAPTURE_AVAILABLE_POSTVIEW_MODES, MINT32)

        //bgservice prerelease
        CONFIG_ENTRY_VALUE(MTK_BGSERVICE_FEATURE_PRERELEASE_AVAILABLE_MODES, MINT32)

     CONFIG_METADATA_END()
    //==========================================================================
     CONFIG_METADATA_BEGIN(MTK_REQUEST_AVAILABLE_SESSION_KEYS)
        //postview
        CONFIG_ENTRY_VALUE(MTK_CONTROL_CAPTURE_POSTVIEW_SIZE, MINT32)
     CONFIG_METADATA_END()
    //==========================================================================
//------------------------------------------------------------------------------
STATIC_METADATA_END()

