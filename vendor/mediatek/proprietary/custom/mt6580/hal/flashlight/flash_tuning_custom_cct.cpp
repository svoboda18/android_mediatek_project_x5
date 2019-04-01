#define LOG_TAG "flash_tuning_custom_cct.cpp"
#include "string.h"
#include "camera_custom_nvram.h"
#include "camera_custom_types.h"
#include "camera_custom_AEPlinetable.h"
#include <cutils/log.h>
#include "flash_feature.h"
#include "flash_param.h"
#include "flash_tuning_custom.h"
#include <kd_camera_feature.h>

//==============================================================================
//
//==============================================================================
int cust_fillDefaultStrobeNVRam_main (void* data)
{
    NVRAM_CAMERA_STROBE_STRUCT* p;
    p = (NVRAM_CAMERA_STROBE_STRUCT*)data;
	static short engTab[]={
	3178,	4518,	5522,	6871,	7789,	8406,	8839,	9176,	9446,	9654,	9841,	9999,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	
	};
	memcpy(p->engTab.yTab, engTab, 1600*sizeof(short));
    p->u4Version = NVRAM_CAMERA_STROBE_FILE_VERSION;

	p->tuningPara[0].yTarget = 188;
	p->tuningPara[0].fgWIncreaseLevelbySize = 10;
	p->tuningPara[0].fgWIncreaseLevelbyRef = 0;
	p->tuningPara[0].ambientRefAccuracyRatio = 5;
	p->tuningPara[0].flashRefAccuracyRatio = 1;
	p->tuningPara[0].backlightAccuracyRatio = 18;
	p->tuningPara[0].backlightUnderY = 40;
	p->tuningPara[0].backlightWeakRefRatio = 32;
	p->tuningPara[0].safetyExp = 33322;
	p->tuningPara[0].maxUsableISO = 680;
	p->tuningPara[0].yTargetWeight = 0;
	p->tuningPara[0].lowReflectanceThreshold = 13;
	p->tuningPara[0].flashReflectanceWeight = 0;
	p->tuningPara[0].bgSuppressMaxDecreaseEV = 20;
	p->tuningPara[0].bgSuppressMaxOverExpRatio = 6;
	p->tuningPara[0].fgEnhanceMaxIncreaseEV = 50;
	p->tuningPara[0].fgEnhanceMaxOverExpRatio = 6;
	p->tuningPara[0].isFollowCapPline = 0;
	p->tuningPara[0].histStretchMaxFgYTarget = 300;
	p->tuningPara[0].histStretchBrightestYTarget = 480;
	p->tuningPara[0].fgSizeShiftRatio = 0;
	p->tuningPara[0].backlitPreflashTriggerLV = 90;
	p->tuningPara[0].backlitMinYTarget = 100;

	p->tuningPara[1].yTarget = 188;
	p->tuningPara[1].fgWIncreaseLevelbySize = 10;
	p->tuningPara[1].fgWIncreaseLevelbyRef = 0;
	p->tuningPara[1].ambientRefAccuracyRatio = 5;
	p->tuningPara[1].flashRefAccuracyRatio = 1;
	p->tuningPara[1].backlightAccuracyRatio = 18;
	p->tuningPara[1].backlightUnderY = 40;
	p->tuningPara[1].backlightWeakRefRatio = 32;
	p->tuningPara[1].safetyExp = 33322;
	p->tuningPara[1].maxUsableISO = 680;
	p->tuningPara[1].yTargetWeight = 0;
	p->tuningPara[1].lowReflectanceThreshold = 13;
	p->tuningPara[1].flashReflectanceWeight = 0;
	p->tuningPara[1].bgSuppressMaxDecreaseEV = 20;
	p->tuningPara[1].bgSuppressMaxOverExpRatio = 6;
	p->tuningPara[1].fgEnhanceMaxIncreaseEV = 50;
	p->tuningPara[1].fgEnhanceMaxOverExpRatio = 6;
	p->tuningPara[1].isFollowCapPline = 1;
	p->tuningPara[1].histStretchMaxFgYTarget = 300;
	p->tuningPara[1].histStretchBrightestYTarget = 480;
	p->tuningPara[1].fgSizeShiftRatio = 0;
	p->tuningPara[1].backlitPreflashTriggerLV = 90;
	p->tuningPara[1].backlitMinYTarget = 100;

	p->tuningPara[2].yTarget = 188;
	p->tuningPara[2].fgWIncreaseLevelbySize = 10;
	p->tuningPara[2].fgWIncreaseLevelbyRef = 0;
	p->tuningPara[2].ambientRefAccuracyRatio = 5;
	p->tuningPara[2].flashRefAccuracyRatio = 1;
	p->tuningPara[2].backlightAccuracyRatio = 18;
	p->tuningPara[2].backlightUnderY = 40;
	p->tuningPara[2].backlightWeakRefRatio = 32;
	p->tuningPara[2].safetyExp = 33322;
	p->tuningPara[2].maxUsableISO = 680;
	p->tuningPara[2].yTargetWeight = 0;
	p->tuningPara[2].lowReflectanceThreshold = 13;
	p->tuningPara[2].flashReflectanceWeight = 0;
	p->tuningPara[2].bgSuppressMaxDecreaseEV = 20;
	p->tuningPara[2].bgSuppressMaxOverExpRatio = 6;
	p->tuningPara[2].fgEnhanceMaxIncreaseEV = 50;
	p->tuningPara[2].fgEnhanceMaxOverExpRatio = 6;
	p->tuningPara[2].isFollowCapPline = 1;
	p->tuningPara[2].histStretchMaxFgYTarget = 300;
	p->tuningPara[2].histStretchBrightestYTarget = 480;
	p->tuningPara[2].fgSizeShiftRatio = 0;
	p->tuningPara[2].backlitPreflashTriggerLV = 90;
	p->tuningPara[2].backlitMinYTarget = 100;

	p->tuningPara[3].yTarget = 188;
	p->tuningPara[3].fgWIncreaseLevelbySize = 10;
	p->tuningPara[3].fgWIncreaseLevelbyRef = 0;
	p->tuningPara[3].ambientRefAccuracyRatio = 5;
	p->tuningPara[3].flashRefAccuracyRatio = 1;
	p->tuningPara[3].backlightAccuracyRatio = 18;
	p->tuningPara[3].backlightUnderY = 40;
	p->tuningPara[3].backlightWeakRefRatio = 32;
	p->tuningPara[3].safetyExp = 33322;
	p->tuningPara[3].maxUsableISO = 680;
	p->tuningPara[3].yTargetWeight = 0;
	p->tuningPara[3].lowReflectanceThreshold = 13;
	p->tuningPara[3].flashReflectanceWeight = 0;
	p->tuningPara[3].bgSuppressMaxDecreaseEV = 20;
	p->tuningPara[3].bgSuppressMaxOverExpRatio = 6;
	p->tuningPara[3].fgEnhanceMaxIncreaseEV = 50;
	p->tuningPara[3].fgEnhanceMaxOverExpRatio = 6;
	p->tuningPara[3].isFollowCapPline = 1;
	p->tuningPara[3].histStretchMaxFgYTarget = 300;
	p->tuningPara[3].histStretchBrightestYTarget = 480;
	p->tuningPara[3].fgSizeShiftRatio = 0;
	p->tuningPara[3].backlitPreflashTriggerLV = 90;
	p->tuningPara[3].backlitMinYTarget = 100;

	p->tuningPara[4].yTarget = 188;
	p->tuningPara[4].fgWIncreaseLevelbySize = 10;
	p->tuningPara[4].fgWIncreaseLevelbyRef = 0;
	p->tuningPara[4].ambientRefAccuracyRatio = 5;
	p->tuningPara[4].flashRefAccuracyRatio = 1;
	p->tuningPara[4].backlightAccuracyRatio = 18;
	p->tuningPara[4].backlightUnderY = 40;
	p->tuningPara[4].backlightWeakRefRatio = 32;
	p->tuningPara[4].safetyExp = 33322;
	p->tuningPara[4].maxUsableISO = 680;
	p->tuningPara[4].yTargetWeight = 0;
	p->tuningPara[4].lowReflectanceThreshold = 13;
	p->tuningPara[4].flashReflectanceWeight = 0;
	p->tuningPara[4].bgSuppressMaxDecreaseEV = 20;
	p->tuningPara[4].bgSuppressMaxOverExpRatio = 6;
	p->tuningPara[4].fgEnhanceMaxIncreaseEV = 50;
	p->tuningPara[4].fgEnhanceMaxOverExpRatio = 6;
	p->tuningPara[4].isFollowCapPline = 1;
	p->tuningPara[4].histStretchMaxFgYTarget = 300;
	p->tuningPara[4].histStretchBrightestYTarget = 480;
	p->tuningPara[4].fgSizeShiftRatio = 0;
	p->tuningPara[4].backlitPreflashTriggerLV = 90;
	p->tuningPara[4].backlitMinYTarget = 100;

	p->tuningPara[5].yTarget = 188;
	p->tuningPara[5].fgWIncreaseLevelbySize = 10;
	p->tuningPara[5].fgWIncreaseLevelbyRef = 0;
	p->tuningPara[5].ambientRefAccuracyRatio = 5;
	p->tuningPara[5].flashRefAccuracyRatio = 1;
	p->tuningPara[5].backlightAccuracyRatio = 18;
	p->tuningPara[5].backlightUnderY = 40;
	p->tuningPara[5].backlightWeakRefRatio = 32;
	p->tuningPara[5].safetyExp = 33322;
	p->tuningPara[5].maxUsableISO = 680;
	p->tuningPara[5].yTargetWeight = 0;
	p->tuningPara[5].lowReflectanceThreshold = 13;
	p->tuningPara[5].flashReflectanceWeight = 0;
	p->tuningPara[5].bgSuppressMaxDecreaseEV = 20;
	p->tuningPara[5].bgSuppressMaxOverExpRatio = 6;
	p->tuningPara[5].fgEnhanceMaxIncreaseEV = 50;
	p->tuningPara[5].fgEnhanceMaxOverExpRatio = 6;
	p->tuningPara[5].isFollowCapPline = 1;
	p->tuningPara[5].histStretchMaxFgYTarget = 300;
	p->tuningPara[5].histStretchBrightestYTarget = 480;
	p->tuningPara[5].fgSizeShiftRatio = 0;
	p->tuningPara[5].backlitPreflashTriggerLV = 90;
	p->tuningPara[5].backlitMinYTarget = 100;

	p->tuningPara[6].yTarget = 188;
	p->tuningPara[6].fgWIncreaseLevelbySize = 10;
	p->tuningPara[6].fgWIncreaseLevelbyRef = 0;
	p->tuningPara[6].ambientRefAccuracyRatio = 5;
	p->tuningPara[6].flashRefAccuracyRatio = 1;
	p->tuningPara[6].backlightAccuracyRatio = 18;
	p->tuningPara[6].backlightUnderY = 40;
	p->tuningPara[6].backlightWeakRefRatio = 32;
	p->tuningPara[6].safetyExp = 33322;
	p->tuningPara[6].maxUsableISO = 680;
	p->tuningPara[6].yTargetWeight = 0;
	p->tuningPara[6].lowReflectanceThreshold = 13;
	p->tuningPara[6].flashReflectanceWeight = 0;
	p->tuningPara[6].bgSuppressMaxDecreaseEV = 20;
	p->tuningPara[6].bgSuppressMaxOverExpRatio = 6;
	p->tuningPara[6].fgEnhanceMaxIncreaseEV = 50;
	p->tuningPara[6].fgEnhanceMaxOverExpRatio = 6;
	p->tuningPara[6].isFollowCapPline = 1;
	p->tuningPara[6].histStretchMaxFgYTarget = 300;
	p->tuningPara[6].histStretchBrightestYTarget = 480;
	p->tuningPara[6].fgSizeShiftRatio = 0;
	p->tuningPara[6].backlitPreflashTriggerLV = 90;
	p->tuningPara[6].backlitMinYTarget = 100;

	p->tuningPara[7].yTarget = 188;
	p->tuningPara[7].fgWIncreaseLevelbySize = 10;
	p->tuningPara[7].fgWIncreaseLevelbyRef = 0;
	p->tuningPara[7].ambientRefAccuracyRatio = 5;
	p->tuningPara[7].flashRefAccuracyRatio = 1;
	p->tuningPara[7].backlightAccuracyRatio = 18;
	p->tuningPara[7].backlightUnderY = 40;
	p->tuningPara[7].backlightWeakRefRatio = 32;
	p->tuningPara[7].safetyExp = 33322;
	p->tuningPara[7].maxUsableISO = 680;
	p->tuningPara[7].yTargetWeight = 0;
	p->tuningPara[7].lowReflectanceThreshold = 13;
	p->tuningPara[7].flashReflectanceWeight = 0;
	p->tuningPara[7].bgSuppressMaxDecreaseEV = 20;
	p->tuningPara[7].bgSuppressMaxOverExpRatio = 6;
	p->tuningPara[7].fgEnhanceMaxIncreaseEV = 50;
	p->tuningPara[7].fgEnhanceMaxOverExpRatio = 6;
	p->tuningPara[7].isFollowCapPline = 1;
	p->tuningPara[7].histStretchMaxFgYTarget = 300;
	p->tuningPara[7].histStretchBrightestYTarget = 480;
	p->tuningPara[7].fgSizeShiftRatio = 0;
	p->tuningPara[7].backlitPreflashTriggerLV = 90;
	p->tuningPara[7].backlitMinYTarget = 100;

    p->paraIdxForceOn[0] = 1;  //default                       
    p->paraIdxForceOn[1] = 0;  //LIB3A_AE_SCENE_OFF            
    p->paraIdxForceOn[2] = 0;  //LIB3A_AE_SCENE_AUTO           
    p->paraIdxForceOn[3] = 1;  //LIB3A_AE_SCENE_NIGHT          
    p->paraIdxForceOn[4] = 1;  //LIB3A_AE_SCENE_ACTION         
    p->paraIdxForceOn[5] = 1;  //LIB3A_AE_SCENE_BEACH          
    p->paraIdxForceOn[6] = 1;  //LIB3A_AE_SCENE_CANDLELIGHT    
    p->paraIdxForceOn[7] = 1;  //LIB3A_AE_SCENE_FIREWORKS      
    p->paraIdxForceOn[8] = 1;  //LIB3A_AE_SCENE_LANDSCAPE      
    p->paraIdxForceOn[9] = 1;  //LIB3A_AE_SCENE_PORTRAIT       
    p->paraIdxForceOn[10] = 1;  //LIB3A_AE_SCENE_NIGHT_PORTRAIT 
    p->paraIdxForceOn[11] = 1;  //LIB3A_AE_SCENE_PARTY          
    p->paraIdxForceOn[12] = 1;  //LIB3A_AE_SCENE_SNOW           
    p->paraIdxForceOn[13] = 1;  //LIB3A_AE_SCENE_SPORTS         
    p->paraIdxForceOn[14] = 1;  //LIB3A_AE_SCENE_STEADYPHOTO    
    p->paraIdxForceOn[15] = 1;  //LIB3A_AE_SCENE_SUNSET         
    p->paraIdxForceOn[16] = 1;  //LIB3A_AE_SCENE_THEATRE        
    p->paraIdxForceOn[17] = 1;  //LIB3A_AE_SCENE_ISO_ANTI_SHAKE 
    p->paraIdxForceOn[18] = 1;  //LIB3A_AE_SCENE_BACKLIGHT      

    p->paraIdxAuto[0] = 1;  //default                       
    p->paraIdxAuto[1] = 0;  //LIB3A_AE_SCENE_OFF            
    p->paraIdxAuto[2] = 0;  //LIB3A_AE_SCENE_AUTO           
    p->paraIdxAuto[3] = 1;  //LIB3A_AE_SCENE_NIGHT          
    p->paraIdxAuto[4] = 1;  //LIB3A_AE_SCENE_ACTION         
    p->paraIdxAuto[5] = 1;  //LIB3A_AE_SCENE_BEACH          
    p->paraIdxAuto[6] = 1;  //LIB3A_AE_SCENE_CANDLELIGHT    
    p->paraIdxAuto[7] = 1;  //LIB3A_AE_SCENE_FIREWORKS      
    p->paraIdxAuto[8] = 1;  //LIB3A_AE_SCENE_LANDSCAPE      
    p->paraIdxAuto[9] = 1;  //LIB3A_AE_SCENE_PORTRAIT       
    p->paraIdxAuto[10] = 1;  //LIB3A_AE_SCENE_NIGHT_PORTRAIT 
    p->paraIdxAuto[11] = 1;  //LIB3A_AE_SCENE_PARTY          
    p->paraIdxAuto[12] = 1;  //LIB3A_AE_SCENE_SNOW           
    p->paraIdxAuto[13] = 1;  //LIB3A_AE_SCENE_SPORTS         
    p->paraIdxAuto[14] = 1;  //LIB3A_AE_SCENE_STEADYPHOTO    
    p->paraIdxAuto[15] = 1;  //LIB3A_AE_SCENE_SUNSET         
    p->paraIdxAuto[16] = 1;  //LIB3A_AE_SCENE_THEATRE        
    p->paraIdxAuto[17] = 1;  //LIB3A_AE_SCENE_ISO_ANTI_SHAKE 
    p->paraIdxAuto[18] = 1;  //LIB3A_AE_SCENE_BACKLIGHT      

    //--------------------
    //eng level
    //index mode
    //torch
    p->engLevel.torchDuty = 0;
    p->engLevel.torchDutyEx[0] = 0;
    p->engLevel.torchDutyEx[1] = 0;
    p->engLevel.torchDutyEx[2] = 0;
    p->engLevel.torchDutyEx[3] = 0;
    p->engLevel.torchDutyEx[4] = 0;
    p->engLevel.torchDutyEx[5] = 0;
    p->engLevel.torchDutyEx[6] = 0;
    p->engLevel.torchDutyEx[7] = 0;
    p->engLevel.torchDutyEx[8] = 0;
    p->engLevel.torchDutyEx[9] = 0;
    p->engLevel.torchDutyEx[10] = 0;
    p->engLevel.torchDutyEx[11] = 0;
    p->engLevel.torchDutyEx[12] = 0;
    p->engLevel.torchDutyEx[13] = 0;
    p->engLevel.torchDutyEx[14] = 0;
    p->engLevel.torchDutyEx[15] = 0;
    p->engLevel.torchDutyEx[16] = 0;
    p->engLevel.torchDutyEx[17] = 0;
    p->engLevel.torchDutyEx[18] = 0;
    p->engLevel.torchDutyEx[19] = 0;
    //af
    p->engLevel.afDuty = 0;
    //pf, mf, normal
    p->engLevel.pfDuty = 0;
    p->engLevel.mfDutyMax = 11;
    p->engLevel.mfDutyMin = 0;
    //low bat
    p->engLevel.IChangeByVBatEn = 0;
    p->engLevel.vBatL = 3250;
    p->engLevel.pfDutyL = 1;
    p->engLevel.mfDutyMaxL = 3;
    p->engLevel.mfDutyMinL = 0;
    //burst setting
    p->engLevel.IChangeByBurstEn = 1;
    p->engLevel.pfDutyB = 1;
    p->engLevel.mfDutyMaxB = 2;
    p->engLevel.mfDutyMinB = 0;
    //high current setting
    p->engLevel.decSysIAtHighEn = 1;
    p->engLevel.dutyH = 8;

    p->engLevelLT.torchDuty = 0;
    p->engLevelLT.torchDutyEx[0] = 0;
    p->engLevelLT.torchDutyEx[1] = 0;
    p->engLevelLT.torchDutyEx[2] = 0;
    p->engLevelLT.torchDutyEx[3] = 0;
    p->engLevelLT.torchDutyEx[4] = 0;
    p->engLevelLT.torchDutyEx[5] = 0;
    p->engLevelLT.torchDutyEx[6] = 0;
    p->engLevelLT.torchDutyEx[7] = 0;
    p->engLevelLT.torchDutyEx[8] = 0;
    p->engLevelLT.torchDutyEx[9] = 0;
    p->engLevelLT.torchDutyEx[10] = 0;
    p->engLevelLT.torchDutyEx[11] = 0;
    p->engLevelLT.torchDutyEx[12] = 0;
    p->engLevelLT.torchDutyEx[13] = 0;
    p->engLevelLT.torchDutyEx[14] = 0;
    p->engLevelLT.torchDutyEx[15] = 0;
    p->engLevelLT.torchDutyEx[16] = 0;
    p->engLevelLT.torchDutyEx[17] = 0;
    p->engLevelLT.torchDutyEx[18] = 0;
    p->engLevelLT.torchDutyEx[19] = 0;
    p->engLevelLT.afDuty = 0;
    p->engLevelLT.pfDuty = 0;
    p->engLevelLT.mfDutyMax = 0;
    p->engLevelLT.mfDutyMin = 0;
    p->engLevelLT.pfDutyL = 0;
    p->engLevelLT.mfDutyMaxL = 0;
    p->engLevelLT.mfDutyMinL = 0;
    p->engLevelLT.pfDutyB = 0;
    p->engLevelLT.mfDutyMaxB = 0;
    p->engLevelLT.mfDutyMinB = 0;

    p->dualTuningPara.toleranceEV_pos = 10;
    p->dualTuningPara.toleranceEV_neg = 10;

    p->dualTuningPara.XYWeighting = 64;
    p->dualTuningPara.useAwbPreferenceGain = 0;
    p->dualTuningPara.envOffsetIndex[0] = -200;
    p->dualTuningPara.envOffsetIndex[1] = -100;
    p->dualTuningPara.envOffsetIndex[2] = 50;
    p->dualTuningPara.envOffsetIndex[3] = 150;

    p->dualTuningPara.envXrOffsetValue[0] = 0;
    p->dualTuningPara.envXrOffsetValue[1] = 0;
    p->dualTuningPara.envXrOffsetValue[2] = 0;
    p->dualTuningPara.envXrOffsetValue[3] = 0;

    p->dualTuningPara.envYrOffsetValue[0] = 0;
    p->dualTuningPara.envYrOffsetValue[1] = 0;
    p->dualTuningPara.envYrOffsetValue[2] = 0;
    p->dualTuningPara.envYrOffsetValue[3] = 0;

    return 0;
}
