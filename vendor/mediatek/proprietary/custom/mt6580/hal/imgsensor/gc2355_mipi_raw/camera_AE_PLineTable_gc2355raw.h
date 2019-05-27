/* Copyright Statement:
*
* This software/firmware and related documentation ("MediaTek Software") are
* protected under relevant copyright laws. The information contained herein
* is confidential and proprietary to MediaTek Inc. and/or its licensors.
* Without the prior written permission of MediaTek inc. and/or its licensors,
* any reproduction, modification, use or disclosure of MediaTek Software,
* and information contained herein, in whole or in part, shall be strictly prohibited.
*/
/* MediaTek Inc. (C) 2010. All rights reserved.
*
* BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
* THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
* RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
* AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
* NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
* SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
* SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
* THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
* THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
* CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
* SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
* STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
* CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
* AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
* OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
* MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
* The following software/firmware and/or related documentation ("MediaTek Software")
* have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
*/

#ifndef _CAMERA_AE_PLINETABLE_GC2355RAW_H
#define _CAMERA_AE_PLINETABLE_GC2355RAW_H

#include "camera_custom_AEPlinetable.h"
static strEvPline sPreviewPLineTable_60Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1136,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.88  BV=5.00
    {8320,1232,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1296,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1440,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.18  BV=4.70
    {8320,1536,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.27  BV=4.61
    {8320,1648,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1744,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1856,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.58  BV=4.30
    {8320,2000,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2160,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.78  BV=4.10
    {16680,1136,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.87  BV=4.00
    {16680,1232,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1296,1064, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.07  BV=3.80
    {16680,1392,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.17  BV=3.71
    {16680,1536,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.27  BV=3.60
    {16680,1648,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.38  BV=3.50
    {25000,1136,1064, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=4.88  BV=3.41
    {25000,1232,1064, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.00  BV=3.29
    {25000,1344,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.09  BV=3.20
    {25000,1440,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.18  BV=3.11
    {33320,1136,1064, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.88  BV=3.00
    {33320,1232,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.97  BV=2.91
    {33320,1296,1064, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.07  BV=2.81
    {41680,1136,1040, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=4.85  BV=2.71
    {41680,1232,1032, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=4.96  BV=2.60
    {41680,1296,1048, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.05  BV=2.50
    {50000,1136,1064, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.88  BV=2.41
    {50000,1232,1056, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.99  BV=2.30
    {58320,1136,1056, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=4.87  BV=2.20
    {58320,1232,1040, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=4.97  BV=2.10
    {66680,1136,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=4.86  BV=2.02
    {66680,1232,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=4.97  BV=1.91
    {66680,1344,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.07  BV=1.81
    {66680,1392,1056, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.17  BV=1.71
    {66680,1536,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.27  BV=1.60
    {66680,1648,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.36  BV=1.51
    {66680,1744,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.47  BV=1.41
    {66680,1856,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.57  BV=1.31
    {66680,2000,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.68  BV=1.20
    {66680,2160,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.78  BV=1.10
    {75000,2048,1040, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=5.70  BV=1.01
    {75000,2208,1040, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=5.81  BV=0.90
    {83320,2112,1048, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=5.76  BV=0.80
    {91680,2048,1056, 0, 0, 0},  //TV = 3.45(2292 lines)  AV=2.97  SV=5.72  BV=0.70
    {100000,2048,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.69  BV=0.60
    {100000,2160,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.78  BV=0.52
    {100000,2368,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.89  BV=0.41
    {100000,2512,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.98  BV=0.31
    {100000,2704,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.08  BV=0.21
    {100000,2912,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.19  BV=0.11
    {100000,3136,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.29  BV=0.00
    {100000,3328,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.39  BV=-0.10
    {100000,3600,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.49  BV=-0.20
    {100000,3856,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.59  BV=-0.30
    {100000,4096,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.70  BV=-0.41
    {108320,4096,1032, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=6.69  BV=-0.51
    {108320,4384,1024, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=6.78  BV=-0.60
    {116680,4304,1040, 0, 0, 0},  //TV = 3.10(2917 lines)  AV=2.97  SV=6.77  BV=-0.70
    {125000,4304,1040, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=6.77  BV=-0.80
    {125000,4688,1024, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=6.87  BV=-0.90
    {125000,4960,1032, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=6.97  BV=-0.99
    {125000,5360,1024, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=7.07  BV=-1.10
    {125000,5712,1032, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=7.17  BV=-1.20
    {125000,6096,1040, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=7.27  BV=-1.30
    {125000,6400,1064, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=7.38  BV=-1.41
    {125000,7086,1032, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=7.48  BV=-1.51
    {133320,7086,1032, 0, 0, 0},  //TV = 2.91(3333 lines)  AV=2.97  SV=7.48  BV=-1.60
    {141680,7086,1048, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=7.50  BV=-1.71
    {150000,7086,1056, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=7.51  BV=-1.81
    {158320,7086,1072, 0, 0, 0},  //TV = 2.66(3958 lines)  AV=2.97  SV=7.53  BV=-1.90
    {175000,7086,1040, 0, 0, 0},  //TV = 2.51(4375 lines)  AV=2.97  SV=7.49  BV=-2.01
    {183320,7086,1064, 0, 0, 0},  //TV = 2.45(4583 lines)  AV=2.97  SV=7.52  BV=-2.11
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sPreviewPLineTable_50Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1136,1040, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1136,1032, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1136,1032, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1184,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.91  BV=4.70
    {10000,1232,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.01  BV=4.60
    {10000,1344,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.50
    {10000,1440,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.21  BV=4.40
    {10000,1536,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.32  BV=4.30
    {10000,1696,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.42  BV=4.20
    {10000,1808,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1920,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.71  BV=3.90
    {10000,2208,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.81  BV=3.81
    {20000,1184,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=4.91  BV=3.70
    {20000,1232,1072, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.01  BV=3.60
    {20000,1344,1064, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.13  BV=3.49
    {20000,1440,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.21  BV=3.40
    {20000,1536,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.31  BV=3.31
    {20000,1648,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.41  BV=3.21
    {30000,1184,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=4.92  BV=3.11
    {30000,1296,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.03  BV=3.00
    {30000,1344,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.13  BV=2.90
    {30000,1488,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.23  BV=2.80
    {40000,1184,1040, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=4.91  BV=2.70
    {40000,1232,1080, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.02  BV=2.59
    {40000,1344,1056, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.11  BV=2.50
    {50000,1136,1064, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.88  BV=2.41
    {50000,1232,1056, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.99  BV=2.30
    {50000,1344,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.09  BV=2.20
    {60000,1184,1048, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=4.92  BV=2.11
    {60000,1296,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.02  BV=2.01
    {60000,1344,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.11  BV=1.91
    {60000,1488,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.22  BV=1.81
    {60000,1536,1064, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.32  BV=1.71
    {60000,1696,1032, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.42  BV=1.61
    {60000,1808,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.52  BV=1.51
    {60000,1952,1032, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.62  BV=1.41
    {60000,2048,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.72  BV=1.31
    {60000,2256,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.82  BV=1.21
    {70000,2048,1048, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=5.71  BV=1.10
    {70000,2208,1040, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=5.81  BV=1.00
    {80000,2048,1048, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=5.71  BV=0.90
    {80000,2208,1040, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=5.81  BV=0.81
    {90000,2112,1040, 0, 0, 0},  //TV = 3.47(2250 lines)  AV=2.97  SV=5.74  BV=0.70
    {100000,2048,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.69  BV=0.60
    {100000,2160,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.78  BV=0.52
    {100000,2368,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.89  BV=0.41
    {100000,2512,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.98  BV=0.31
    {100000,2704,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.08  BV=0.21
    {100000,2912,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.19  BV=0.11
    {100000,3136,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.29  BV=0.00
    {100000,3328,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.39  BV=-0.10
    {100000,3600,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.49  BV=-0.20
    {100000,3856,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.59  BV=-0.30
    {100000,4096,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.70  BV=-0.41
    {100000,4384,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.80  BV=-0.51
    {110000,4304,1032, 0, 0, 0},  //TV = 3.18(2750 lines)  AV=2.97  SV=6.76  BV=-0.61
    {120000,4240,1032, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=6.74  BV=-0.71
    {120000,4528,1032, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=6.83  BV=-0.80
    {120000,4864,1024, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=6.93  BV=-0.90
    {120000,5152,1032, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.02  BV=-0.99
    {120000,5584,1024, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.13  BV=-1.10
    {120000,5968,1032, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.23  BV=-1.20
    {120000,6400,1032, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.33  BV=-1.30
    {120000,6912,1024, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.43  BV=-1.40
    {120000,7086,1072, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.53  BV=-1.51
    {130000,7086,1064, 0, 0, 0},  //TV = 2.94(3250 lines)  AV=2.97  SV=7.52  BV=-1.61
    {140000,7086,1056, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=7.51  BV=-1.71
    {150000,7086,1056, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=7.51  BV=-1.81
    {160000,7086,1064, 0, 0, 0},  //TV = 2.64(4000 lines)  AV=2.97  SV=7.52  BV=-1.91
    {170000,7086,1072, 0, 0, 0},  //TV = 2.56(4250 lines)  AV=2.97  SV=7.53  BV=-2.01
    {190000,7086,1024, 0, 0, 0},  //TV = 2.40(4750 lines)  AV=2.97  SV=7.47  BV=-2.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_PreviewAutoTable =
{
    AETABLE_RPEVIEW_AUTO,    //eAETableID
    121,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    -21,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -10,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sPreviewPLineTable_60Hz,
    sPreviewPLineTable_50Hz,
    NULL,
};

static strEvPline sCapturePLineTable_60Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1136,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.88  BV=5.00
    {8320,1232,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1296,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1440,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.18  BV=4.70
    {8320,1536,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.27  BV=4.61
    {8320,1648,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1744,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1856,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.58  BV=4.30
    {8320,2000,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2160,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.78  BV=4.10
    {16680,1136,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.87  BV=4.00
    {16680,1232,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1296,1064, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.07  BV=3.80
    {16680,1392,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.17  BV=3.71
    {16680,1536,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.27  BV=3.60
    {16680,1648,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.38  BV=3.50
    {25000,1136,1064, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=4.88  BV=3.41
    {25000,1232,1064, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.00  BV=3.29
    {25000,1344,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.09  BV=3.20
    {25000,1440,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.18  BV=3.11
    {33320,1136,1064, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.88  BV=3.00
    {33320,1232,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.97  BV=2.91
    {33320,1296,1064, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.07  BV=2.81
    {41680,1136,1040, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=4.85  BV=2.71
    {41680,1232,1032, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=4.96  BV=2.60
    {41680,1296,1048, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.05  BV=2.50
    {50000,1136,1064, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.88  BV=2.41
    {50000,1232,1056, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.99  BV=2.30
    {58320,1136,1056, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=4.87  BV=2.20
    {58320,1232,1040, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=4.97  BV=2.10
    {66680,1136,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=4.86  BV=2.02
    {66680,1232,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=4.97  BV=1.91
    {66680,1344,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.07  BV=1.81
    {66680,1392,1056, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.17  BV=1.71
    {66680,1536,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.27  BV=1.60
    {66680,1648,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.36  BV=1.51
    {66680,1744,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.47  BV=1.41
    {66680,1856,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.57  BV=1.31
    {66680,2000,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.68  BV=1.20
    {66680,2160,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.78  BV=1.10
    {75000,2048,1040, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=5.70  BV=1.01
    {75000,2208,1040, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=5.81  BV=0.90
    {83320,2112,1048, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=5.76  BV=0.80
    {91680,2048,1056, 0, 0, 0},  //TV = 3.45(2292 lines)  AV=2.97  SV=5.72  BV=0.70
    {100000,2048,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.69  BV=0.60
    {100000,2160,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.78  BV=0.52
    {100000,2368,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.89  BV=0.41
    {100000,2512,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.98  BV=0.31
    {100000,2704,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.08  BV=0.21
    {100000,2912,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.19  BV=0.11
    {100000,3136,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.29  BV=0.00
    {100000,3328,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.39  BV=-0.10
    {100000,3600,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.49  BV=-0.20
    {100000,3856,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.59  BV=-0.30
    {100000,4096,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.70  BV=-0.41
    {108320,4096,1032, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=6.69  BV=-0.51
    {108320,4384,1024, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=6.78  BV=-0.60
    {116680,4304,1040, 0, 0, 0},  //TV = 3.10(2917 lines)  AV=2.97  SV=6.77  BV=-0.70
    {133320,4096,1032, 0, 0, 0},  //TV = 2.91(3333 lines)  AV=2.97  SV=6.69  BV=-0.81
    {141680,4096,1040, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=6.70  BV=-0.91
    {141680,4384,1032, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=6.79  BV=-1.00
    {141680,4688,1040, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=6.90  BV=-1.11
    {141680,5040,1032, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=6.99  BV=-1.20
    {141680,5360,1040, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=7.09  BV=-1.30
    {141680,5840,1024, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=7.19  BV=-1.40
    {141680,6096,1048, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=7.29  BV=-1.49
    {141680,6400,1072, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=7.39  BV=-1.60
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCapturePLineTable_50Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1136,1040, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1136,1032, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1136,1032, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1184,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.91  BV=4.70
    {10000,1232,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.01  BV=4.60
    {10000,1344,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.50
    {10000,1440,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.21  BV=4.40
    {10000,1536,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.32  BV=4.30
    {10000,1696,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.42  BV=4.20
    {10000,1808,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1920,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.71  BV=3.90
    {10000,2208,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.81  BV=3.81
    {20000,1184,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=4.91  BV=3.70
    {20000,1232,1072, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.01  BV=3.60
    {20000,1344,1064, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.13  BV=3.49
    {20000,1440,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.21  BV=3.40
    {20000,1536,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.31  BV=3.31
    {20000,1648,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.41  BV=3.21
    {30000,1184,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=4.92  BV=3.11
    {30000,1296,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.03  BV=3.00
    {30000,1344,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.13  BV=2.90
    {30000,1488,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.23  BV=2.80
    {40000,1184,1040, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=4.91  BV=2.70
    {40000,1232,1080, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.02  BV=2.59
    {40000,1344,1056, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.11  BV=2.50
    {50000,1136,1064, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.88  BV=2.41
    {50000,1232,1056, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.99  BV=2.30
    {50000,1344,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.09  BV=2.20
    {60000,1184,1048, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=4.92  BV=2.11
    {60000,1296,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.02  BV=2.01
    {60000,1344,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.11  BV=1.91
    {60000,1488,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.22  BV=1.81
    {60000,1536,1064, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.32  BV=1.71
    {60000,1696,1032, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.42  BV=1.61
    {60000,1808,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.52  BV=1.51
    {60000,1952,1032, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.62  BV=1.41
    {60000,2048,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.72  BV=1.31
    {60000,2256,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.82  BV=1.21
    {70000,2048,1048, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=5.71  BV=1.10
    {70000,2208,1040, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=5.81  BV=1.00
    {80000,2048,1048, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=5.71  BV=0.90
    {80000,2208,1040, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=5.81  BV=0.81
    {90000,2112,1040, 0, 0, 0},  //TV = 3.47(2250 lines)  AV=2.97  SV=5.74  BV=0.70
    {100000,2048,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.69  BV=0.60
    {100000,2160,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.78  BV=0.52
    {100000,2368,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.89  BV=0.41
    {100000,2512,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.98  BV=0.31
    {100000,2704,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.08  BV=0.21
    {100000,2912,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.19  BV=0.11
    {100000,3136,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.29  BV=0.00
    {100000,3328,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.39  BV=-0.10
    {100000,3600,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.49  BV=-0.20
    {100000,3856,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.59  BV=-0.30
    {100000,4096,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.70  BV=-0.41
    {100000,4384,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.80  BV=-0.51
    {110000,4304,1032, 0, 0, 0},  //TV = 3.18(2750 lines)  AV=2.97  SV=6.76  BV=-0.61
    {120000,4240,1032, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=6.74  BV=-0.71
    {130000,4160,1040, 0, 0, 0},  //TV = 2.94(3250 lines)  AV=2.97  SV=6.72  BV=-0.81
    {140000,4160,1032, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=6.71  BV=-0.90
    {140000,4448,1032, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=6.81  BV=-1.00
    {140000,4768,1032, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=6.91  BV=-1.10
    {140000,5152,1024, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=7.01  BV=-1.20
    {140000,5472,1032, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=7.11  BV=-1.30
    {140000,5840,1032, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=7.20  BV=-1.39
    {140000,6096,1064, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=7.31  BV=-1.50
    {140000,6720,1032, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=7.40  BV=-1.60
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureAutoTable =
{
    AETABLE_CAPTURE_AUTO,    //eAETableID
    116,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    -16,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCapturePLineTable_60Hz,
    sCapturePLineTable_50Hz,
    NULL,
};

static strEvPline sVideoPLineTable_60Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1136,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.87  BV=5.01
    {8320,1232,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1296,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.06  BV=4.82
    {8320,1440,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.17  BV=4.71
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.26  BV=4.62
    {8320,1648,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.36  BV=4.52
    {8320,1744,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.47  BV=4.41
    {8320,1856,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.57  BV=4.31
    {8320,2000,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.67  BV=4.21
    {8320,2160,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.77  BV=4.11
    {8320,2304,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.88  BV=4.00
    {8320,2512,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.97  BV=3.91
    {8320,2688,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.08  BV=3.80
    {8320,2880,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.18  BV=3.70
    {8320,3088,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.27  BV=3.61
    {8320,3280,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.38  BV=3.50
    {8320,3552,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.47  BV=3.41
    {8320,3760,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.58  BV=3.30
    {8320,4048,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.67  BV=3.21
    {16680,2160,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.77  BV=3.11
    {16680,2304,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.87  BV=3.01
    {16680,2448,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.97  BV=2.91
    {16680,2624,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.07  BV=2.81
    {16680,2816,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.17  BV=2.71
    {25000,2048,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.69  BV=2.60
    {25000,2160,1048, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.79  BV=2.50
    {25000,2368,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.89  BV=2.41
    {25000,2512,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.00  BV=2.30
    {25000,2704,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.08  BV=2.21
    {33200,2160,1040, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=5.78  BV=2.11
    {33200,2304,1040, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=5.87  BV=2.01
    {33200,2512,1032, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=5.98  BV=1.90
    {33200,2704,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.08  BV=1.80
    {33200,2880,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.17  BV=1.71
    {33200,3088,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.27  BV=1.61
    {33200,3280,1032, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.37  BV=1.51
    {33200,3552,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.47  BV=1.41
    {33200,3808,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.57  BV=1.31
    {33200,4048,1032, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.67  BV=1.21
    {33200,4384,1032, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.79  BV=1.10
    {33200,4688,1032, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.88  BV=1.00
    {33200,5040,1032, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.99  BV=0.90
    {41680,4304,1024, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=6.75  BV=0.81
    {41680,4528,1040, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=6.85  BV=0.71
    {50000,4096,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.69  BV=0.60
    {50000,4384,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.79  BV=0.51
    {50000,4688,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.90  BV=0.40
    {58320,4304,1040, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=6.77  BV=0.30
    {58320,4608,1040, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=6.87  BV=0.20
    {66520,4384,1024, 0, 0, 0},  //TV = 3.91(1663 lines)  AV=2.97  SV=6.78  BV=0.10
    {66520,4688,1032, 0, 0, 0},  //TV = 3.91(1663 lines)  AV=2.97  SV=6.88  BV=-0.00
    {66520,5040,1024, 0, 0, 0},  //TV = 3.91(1663 lines)  AV=2.97  SV=6.98  BV=-0.10
    {66520,5360,1032, 0, 0, 0},  //TV = 3.91(1663 lines)  AV=2.97  SV=7.08  BV=-0.20
    {66520,5712,1040, 0, 0, 0},  //TV = 3.91(1663 lines)  AV=2.97  SV=7.18  BV=-0.30
    {66520,6096,1040, 0, 0, 0},  //TV = 3.91(1663 lines)  AV=2.97  SV=7.27  BV=-0.39
    {66520,6400,1072, 0, 0, 0},  //TV = 3.91(1663 lines)  AV=2.97  SV=7.39  BV=-0.51
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideoPLineTable_50Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1136,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.87  BV=5.01
    {8320,1232,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1296,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.06  BV=4.82
    {8320,1440,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.17  BV=4.71
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.26  BV=4.62
    {8320,1648,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.36  BV=4.52
    {8320,1744,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.47  BV=4.41
    {8320,1856,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.57  BV=4.31
    {8320,2000,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.67  BV=4.21
    {8840,2048,1032, 0, 0, 0},  //TV = 6.82(221 lines)  AV=2.97  SV=5.69  BV=4.10
    {9560,2000,1048, 0, 0, 0},  //TV = 6.71(239 lines)  AV=2.97  SV=5.68  BV=4.00
    {10000,2048,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.71  BV=3.90
    {10000,2208,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.81  BV=3.81
    {10000,2368,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.91  BV=3.70
    {10000,2560,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.01  BV=3.60
    {10000,2704,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.11  BV=3.50
    {10000,2912,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.21  BV=3.41
    {10000,3136,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.30  BV=3.31
    {10000,3328,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.41  BV=3.20
    {10000,3600,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.50  BV=3.11
    {10000,3856,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.61  BV=3.00
    {20000,2048,1048, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.71  BV=2.90
    {20000,2208,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.81  BV=2.81
    {20000,2368,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.91  BV=2.70
    {20000,2560,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.02  BV=2.59
    {20000,2768,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.11  BV=2.50
    {20000,2912,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.21  BV=2.41
    {30000,2048,1056, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.72  BV=2.31
    {30000,2256,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.82  BV=2.21
    {30000,2416,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.92  BV=2.11
    {30000,2560,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.02  BV=2.01
    {30000,2768,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.11  BV=1.92
    {30000,2992,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.22  BV=1.80
    {30000,3200,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.32  BV=1.71
    {30000,3408,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.41  BV=1.62
    {30000,3648,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.51  BV=1.52
    {30000,3920,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.63  BV=1.40
    {30000,4160,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.72  BV=1.31
    {30000,4528,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.82  BV=1.21
    {30000,4864,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.93  BV=1.10
    {30000,5152,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.02  BV=1.01
    {40000,4160,1032, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=6.71  BV=0.90
    {40000,4448,1032, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=6.81  BV=0.81
    {40000,4768,1040, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=6.92  BV=0.70
    {50000,4096,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.69  BV=0.60
    {50000,4384,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.79  BV=0.51
    {50000,4688,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.90  BV=0.40
    {60000,4160,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.72  BV=0.31
    {60000,4528,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.82  BV=0.21
    {60000,4864,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.93  BV=0.10
    {60000,5152,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=7.03  BV=-0.00
    {60000,5584,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=7.13  BV=-0.10
    {60000,5968,1032, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=7.23  BV=-0.20
    {60000,6400,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=7.32  BV=-0.29
    {60000,6720,1048, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=7.43  BV=-0.40
    {60000,7086,1064, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=7.52  BV=-0.49
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_VideoAutoTable =
{
    AETABLE_VIDEO_AUTO,    //eAETableID
    105,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    -5,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sVideoPLineTable_60Hz,
    sVideoPLineTable_50Hz,
    NULL,
};

static strEvPline sVideo1PLineTable_60Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1136,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.87  BV=5.01
    {8320,1232,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1296,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.06  BV=4.82
    {8320,1440,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.17  BV=4.71
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.26  BV=4.62
    {8320,1648,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.36  BV=4.52
    {8320,1744,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.47  BV=4.41
    {8320,1856,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.57  BV=4.31
    {8320,2000,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.67  BV=4.21
    {8320,2160,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.77  BV=4.11
    {8320,2304,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.87  BV=4.01
    {8320,2512,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.97  BV=3.91
    {8320,2688,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.07  BV=3.81
    {8320,2880,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.17  BV=3.71
    {8320,3088,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.27  BV=3.61
    {8320,3280,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.37  BV=3.51
    {8320,3552,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.47  BV=3.41
    {8320,3808,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.57  BV=3.31
    {8320,4048,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.67  BV=3.21
    {8320,4304,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.76  BV=3.12
    {8320,4608,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.87  BV=3.01
    {8320,5040,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.98  BV=2.90
    {8320,5360,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.07  BV=2.81
    {8320,5712,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.17  BV=2.71
    {8320,6096,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.27  BV=2.61
    {8320,6400,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.37  BV=2.51
    {8320,7086,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.47  BV=2.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideo1PLineTable_50Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1136,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.87  BV=5.01
    {8320,1232,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1296,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.06  BV=4.82
    {8320,1440,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.17  BV=4.71
    {8320,1536,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.26  BV=4.62
    {8320,1648,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.36  BV=4.52
    {8320,1744,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.47  BV=4.41
    {8320,1856,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.57  BV=4.31
    {8320,2000,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.67  BV=4.21
    {8320,2160,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.77  BV=4.11
    {8320,2304,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.87  BV=4.01
    {8320,2512,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.97  BV=3.91
    {8320,2688,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.07  BV=3.81
    {8320,2880,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.17  BV=3.71
    {8320,3088,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.27  BV=3.61
    {8320,3280,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.37  BV=3.51
    {8320,3552,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.47  BV=3.41
    {8320,3808,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.57  BV=3.31
    {8320,4048,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.67  BV=3.21
    {8320,4304,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.76  BV=3.12
    {8320,4608,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.87  BV=3.01
    {8320,5040,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.98  BV=2.90
    {8320,5360,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.07  BV=2.81
    {8320,5712,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.17  BV=2.71
    {8320,6096,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.27  BV=2.61
    {8320,6400,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.37  BV=2.51
    {8320,7086,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.47  BV=2.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Video1AutoTable =
{
    AETABLE_VIDEO1_AUTO,    //eAETableID
    76,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    24,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sVideo1PLineTable_60Hz,
    sVideo1PLineTable_50Hz,
    NULL,
};

static strEvPline sVideo2PLineTable_60Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1136,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.88  BV=5.00
    {8320,1232,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1296,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1440,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.18  BV=4.70
    {8320,1536,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.27  BV=4.61
    {8320,1648,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1744,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1856,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.58  BV=4.30
    {8320,2000,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2160,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.78  BV=4.10
    {16680,1184,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.89  BV=3.99
    {16680,1232,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1296,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.06  BV=3.81
    {16680,1392,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.17  BV=3.71
    {16680,1536,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.26  BV=3.61
    {16680,1648,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.36  BV=3.51
    {16680,1744,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.47  BV=3.41
    {16680,1856,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.56  BV=3.32
    {16680,2000,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.67  BV=3.21
    {16680,2160,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.77  BV=3.11
    {16680,2304,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.86  BV=3.02
    {16680,2448,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.97  BV=2.91
    {16680,2624,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.07  BV=2.81
    {16680,2880,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.17  BV=2.71
    {16680,3024,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.27  BV=2.60
    {16680,3280,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.37  BV=2.51
    {16680,3504,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.48  BV=2.40
    {16680,3760,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.57  BV=2.31
    {16680,4048,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.67  BV=2.20
    {16680,4304,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.77  BV=2.10
    {25000,3088,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.28  BV=2.01
    {25000,3328,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.39  BV=1.90
    {25000,3552,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.48  BV=1.81
    {25000,3808,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.58  BV=1.71
    {33200,3088,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.27  BV=1.61
    {33200,3280,1032, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.37  BV=1.51
    {33200,3552,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.47  BV=1.41
    {33200,3808,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.57  BV=1.31
    {33200,4096,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.68  BV=1.21
    {33200,4384,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.78  BV=1.11
    {33200,4688,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.87  BV=1.01
    {33200,4960,1032, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.97  BV=0.92
    {33200,5360,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.07  BV=0.82
    {33200,5712,1032, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.17  BV=0.71
    {33200,6096,1040, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.27  BV=0.61
    {33200,6400,1064, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.38  BV=0.51
    {33200,7086,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.47  BV=0.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideo2PLineTable_50Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1136,1040, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1136,1032, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1136,1032, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1184,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.91  BV=4.70
    {10000,1232,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.01  BV=4.60
    {10000,1344,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.50
    {10000,1440,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.21  BV=4.40
    {10000,1536,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.32  BV=4.30
    {10000,1696,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.42  BV=4.20
    {10000,1808,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1952,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.63  BV=3.98
    {10000,2048,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.70  BV=3.91
    {10000,2208,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.80  BV=3.82
    {10000,2368,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.91  BV=3.70
    {10000,2560,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.01  BV=3.60
    {10000,2704,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.11  BV=3.50
    {10000,2912,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.21  BV=3.41
    {10000,3136,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.30  BV=3.31
    {10000,3328,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.40  BV=3.21
    {10000,3600,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.50  BV=3.11
    {10000,3856,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.61  BV=3.00
    {10000,4160,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.70  BV=2.91
    {10000,4448,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.80  BV=2.82
    {10000,4768,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.91  BV=2.71
    {10000,5040,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.01  BV=2.60
    {10000,5472,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.11  BV=2.51
    {10000,5840,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.21  BV=2.40
    {20000,3136,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.30  BV=2.31
    {20000,3328,1048, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.41  BV=2.20
    {20000,3600,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.50  BV=2.11
    {20000,3856,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.61  BV=2.00
    {20000,4160,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.70  BV=1.91
    {20000,4448,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.81  BV=1.81
    {30000,3136,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.33  BV=1.70
    {30000,3408,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.42  BV=1.61
    {30000,3648,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.52  BV=1.51
    {30000,3920,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.61  BV=1.42
    {30000,4160,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.72  BV=1.31
    {30000,4528,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.82  BV=1.21
    {30000,4768,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.92  BV=1.11
    {30000,5152,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.02  BV=1.01
    {30000,5472,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.12  BV=0.91
    {30000,5840,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.21  BV=0.82
    {30000,6096,1072, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.32  BV=0.71
    {30000,6720,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.43  BV=0.60
    {30000,7086,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.52  BV=0.51
    {30000,7086,1136, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.62  BV=0.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Video2AutoTable =
{
    AETABLE_VIDEO2_AUTO,    //eAETableID
    96,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    4,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sVideo2PLineTable_60Hz,
    sVideo2PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom1PLineTable_60Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1136,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.88  BV=5.00
    {8320,1232,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1296,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1440,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.18  BV=4.70
    {8320,1536,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.27  BV=4.61
    {8320,1648,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1744,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1856,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.58  BV=4.30
    {8320,2000,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2160,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.78  BV=4.10
    {16680,1136,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.86  BV=4.02
    {16680,1232,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1296,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.06  BV=3.81
    {16680,1392,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.17  BV=3.71
    {16680,1536,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.26  BV=3.61
    {16680,1648,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.36  BV=3.51
    {16680,1744,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.47  BV=3.41
    {16680,1856,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.57  BV=3.31
    {16680,2000,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.67  BV=3.21
    {16680,2160,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.77  BV=3.11
    {16680,2304,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.86  BV=3.02
    {16680,2448,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.96  BV=2.92
    {16680,2688,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.07  BV=2.81
    {16680,2816,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.16  BV=2.72
    {16680,3024,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.27  BV=2.60
    {16680,3280,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.37  BV=2.51
    {16680,3504,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.48  BV=2.40
    {16680,3760,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.57  BV=2.31
    {16680,4048,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.67  BV=2.20
    {16680,4304,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.77  BV=2.10
    {25000,3088,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.28  BV=2.01
    {25000,3328,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.39  BV=1.90
    {25000,3552,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.48  BV=1.81
    {25000,3808,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.58  BV=1.71
    {33320,3088,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.27  BV=1.61
    {33320,3280,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.37  BV=1.51
    {33320,3504,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.46  BV=1.41
    {33320,3808,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.57  BV=1.31
    {33320,4048,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.67  BV=1.21
    {33320,4304,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.77  BV=1.11
    {33320,4608,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.87  BV=1.01
    {33320,4960,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.97  BV=0.91
    {33320,5360,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.07  BV=0.81
    {33320,5712,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.17  BV=0.71
    {33320,6096,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.27  BV=0.60
    {33320,6400,1056, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.37  BV=0.51
    {33320,6912,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.47  BV=0.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom1PLineTable_50Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1136,1040, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1136,1032, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1136,1032, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1184,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.91  BV=4.70
    {10000,1232,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.01  BV=4.60
    {10000,1344,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.50
    {10000,1440,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.21  BV=4.40
    {10000,1536,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.32  BV=4.30
    {10000,1696,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.42  BV=4.20
    {10000,1808,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1952,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.70  BV=3.91
    {10000,2208,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.81  BV=3.81
    {10000,2368,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.90  BV=3.72
    {10000,2560,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.01  BV=3.60
    {10000,2704,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.10  BV=3.51
    {10000,2912,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.21  BV=3.41
    {10000,3136,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.30  BV=3.31
    {10000,3328,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.40  BV=3.21
    {10000,3600,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.50  BV=3.11
    {10000,3856,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.60  BV=3.01
    {10000,4160,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.70  BV=2.91
    {10000,4448,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.81  BV=2.81
    {10000,4768,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.91  BV=2.71
    {10000,5040,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.01  BV=2.60
    {10000,5472,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.11  BV=2.51
    {10000,5840,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.21  BV=2.40
    {20000,3136,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.30  BV=2.31
    {20000,3328,1048, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.41  BV=2.20
    {20000,3600,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.50  BV=2.11
    {20000,3856,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.61  BV=2.00
    {20000,4160,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.70  BV=1.91
    {20000,4448,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.81  BV=1.81
    {30000,3136,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.33  BV=1.70
    {30000,3408,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.42  BV=1.61
    {30000,3648,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.52  BV=1.51
    {30000,3920,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.61  BV=1.42
    {30000,4160,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.72  BV=1.31
    {30000,4528,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.82  BV=1.21
    {30000,4768,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.92  BV=1.11
    {30000,5152,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.02  BV=1.01
    {30000,5472,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.12  BV=0.91
    {30000,5840,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.21  BV=0.82
    {30000,6096,1072, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.32  BV=0.71
    {30000,6720,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.43  BV=0.60
    {30000,7086,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.52  BV=0.51
    {30000,7086,1136, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.62  BV=0.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom1AutoTable =
{
    AETABLE_CUSTOM1_AUTO,    //eAETableID
    96,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    4,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom1PLineTable_60Hz,
    sCustom1PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom2PLineTable_60Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1136,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.88  BV=5.00
    {8320,1232,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1296,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1440,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.18  BV=4.70
    {8320,1536,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.27  BV=4.61
    {8320,1648,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1744,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1856,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.58  BV=4.30
    {8320,2000,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2160,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.78  BV=4.10
    {16680,1136,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.86  BV=4.02
    {16680,1232,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1296,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.06  BV=3.81
    {16680,1392,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.17  BV=3.71
    {16680,1536,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.26  BV=3.61
    {16680,1648,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.36  BV=3.51
    {16680,1744,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.47  BV=3.41
    {16680,1856,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.57  BV=3.31
    {16680,2000,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.67  BV=3.21
    {16680,2160,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.77  BV=3.11
    {16680,2304,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.86  BV=3.02
    {16680,2448,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.96  BV=2.92
    {16680,2688,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.07  BV=2.81
    {16680,2816,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.16  BV=2.72
    {16680,3024,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.27  BV=2.60
    {16680,3280,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.37  BV=2.51
    {16680,3504,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.48  BV=2.40
    {16680,3760,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.57  BV=2.31
    {16680,4048,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.67  BV=2.20
    {16680,4304,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.77  BV=2.10
    {25000,3088,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.28  BV=2.01
    {25000,3328,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.39  BV=1.90
    {25000,3552,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.48  BV=1.81
    {25000,3808,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.58  BV=1.71
    {33320,3088,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.27  BV=1.61
    {33320,3280,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.37  BV=1.51
    {33320,3504,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.46  BV=1.41
    {33320,3808,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.57  BV=1.31
    {33320,4048,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.67  BV=1.21
    {33320,4304,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.77  BV=1.11
    {33320,4608,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.87  BV=1.01
    {33320,4960,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.97  BV=0.91
    {33320,5360,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.07  BV=0.81
    {33320,5712,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.17  BV=0.71
    {33320,6096,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.27  BV=0.60
    {33320,6400,1056, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.37  BV=0.51
    {33320,6912,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.47  BV=0.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom2PLineTable_50Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1136,1040, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1136,1032, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1136,1032, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1184,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.91  BV=4.70
    {10000,1232,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.01  BV=4.60
    {10000,1344,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.50
    {10000,1440,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.21  BV=4.40
    {10000,1536,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.32  BV=4.30
    {10000,1696,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.42  BV=4.20
    {10000,1808,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1952,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.70  BV=3.91
    {10000,2208,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.81  BV=3.81
    {10000,2368,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.90  BV=3.72
    {10000,2560,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.01  BV=3.60
    {10000,2704,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.10  BV=3.51
    {10000,2912,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.21  BV=3.41
    {10000,3136,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.30  BV=3.31
    {10000,3328,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.40  BV=3.21
    {10000,3600,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.50  BV=3.11
    {10000,3856,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.60  BV=3.01
    {10000,4160,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.70  BV=2.91
    {10000,4448,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.81  BV=2.81
    {10000,4768,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.91  BV=2.71
    {10000,5040,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.01  BV=2.60
    {10000,5472,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.11  BV=2.51
    {10000,5840,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.21  BV=2.40
    {20000,3136,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.30  BV=2.31
    {20000,3328,1048, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.41  BV=2.20
    {20000,3600,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.50  BV=2.11
    {20000,3856,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.61  BV=2.00
    {20000,4160,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.70  BV=1.91
    {20000,4448,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.81  BV=1.81
    {30000,3136,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.33  BV=1.70
    {30000,3408,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.42  BV=1.61
    {30000,3648,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.52  BV=1.51
    {30000,3920,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.61  BV=1.42
    {30000,4160,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.72  BV=1.31
    {30000,4528,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.82  BV=1.21
    {30000,4768,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.92  BV=1.11
    {30000,5152,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.02  BV=1.01
    {30000,5472,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.12  BV=0.91
    {30000,5840,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.21  BV=0.82
    {30000,6096,1072, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.32  BV=0.71
    {30000,6720,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.43  BV=0.60
    {30000,7086,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.52  BV=0.51
    {30000,7086,1136, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.62  BV=0.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom2AutoTable =
{
    AETABLE_CUSTOM2_AUTO,    //eAETableID
    96,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    4,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom2PLineTable_60Hz,
    sCustom2PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom3PLineTable_60Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1136,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.88  BV=5.00
    {8320,1232,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1296,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1440,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.18  BV=4.70
    {8320,1536,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.27  BV=4.61
    {8320,1648,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1744,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1856,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.58  BV=4.30
    {8320,2000,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2160,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.78  BV=4.10
    {16680,1136,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.86  BV=4.02
    {16680,1232,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1296,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.06  BV=3.81
    {16680,1392,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.17  BV=3.71
    {16680,1536,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.26  BV=3.61
    {16680,1648,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.36  BV=3.51
    {16680,1744,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.47  BV=3.41
    {16680,1856,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.57  BV=3.31
    {16680,2000,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.67  BV=3.21
    {16680,2160,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.77  BV=3.11
    {16680,2304,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.86  BV=3.02
    {16680,2448,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.96  BV=2.92
    {16680,2688,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.07  BV=2.81
    {16680,2816,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.16  BV=2.72
    {16680,3024,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.27  BV=2.60
    {16680,3280,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.37  BV=2.51
    {16680,3504,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.48  BV=2.40
    {16680,3760,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.57  BV=2.31
    {16680,4048,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.67  BV=2.20
    {16680,4304,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.77  BV=2.10
    {25000,3088,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.28  BV=2.01
    {25000,3328,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.39  BV=1.90
    {25000,3552,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.48  BV=1.81
    {25000,3808,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.58  BV=1.71
    {33320,3088,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.27  BV=1.61
    {33320,3280,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.37  BV=1.51
    {33320,3504,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.46  BV=1.41
    {33320,3808,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.57  BV=1.31
    {33320,4048,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.67  BV=1.21
    {33320,4304,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.77  BV=1.11
    {33320,4608,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.87  BV=1.01
    {33320,4960,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.97  BV=0.91
    {33320,5360,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.07  BV=0.81
    {33320,5712,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.17  BV=0.71
    {33320,6096,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.27  BV=0.60
    {33320,6400,1056, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.37  BV=0.51
    {33320,6912,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.47  BV=0.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom3PLineTable_50Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1136,1040, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1136,1032, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1136,1032, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1184,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.91  BV=4.70
    {10000,1232,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.01  BV=4.60
    {10000,1344,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.50
    {10000,1440,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.21  BV=4.40
    {10000,1536,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.32  BV=4.30
    {10000,1696,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.42  BV=4.20
    {10000,1808,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1952,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.70  BV=3.91
    {10000,2208,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.81  BV=3.81
    {10000,2368,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.90  BV=3.72
    {10000,2560,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.01  BV=3.60
    {10000,2704,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.10  BV=3.51
    {10000,2912,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.21  BV=3.41
    {10000,3136,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.30  BV=3.31
    {10000,3328,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.40  BV=3.21
    {10000,3600,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.50  BV=3.11
    {10000,3856,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.60  BV=3.01
    {10000,4160,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.70  BV=2.91
    {10000,4448,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.81  BV=2.81
    {10000,4768,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.91  BV=2.71
    {10000,5040,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.01  BV=2.60
    {10000,5472,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.11  BV=2.51
    {10000,5840,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.21  BV=2.40
    {20000,3136,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.30  BV=2.31
    {20000,3328,1048, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.41  BV=2.20
    {20000,3600,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.50  BV=2.11
    {20000,3856,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.61  BV=2.00
    {20000,4160,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.70  BV=1.91
    {20000,4448,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.81  BV=1.81
    {30000,3136,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.33  BV=1.70
    {30000,3408,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.42  BV=1.61
    {30000,3648,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.52  BV=1.51
    {30000,3920,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.61  BV=1.42
    {30000,4160,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.72  BV=1.31
    {30000,4528,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.82  BV=1.21
    {30000,4768,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.92  BV=1.11
    {30000,5152,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.02  BV=1.01
    {30000,5472,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.12  BV=0.91
    {30000,5840,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.21  BV=0.82
    {30000,6096,1072, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.32  BV=0.71
    {30000,6720,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.43  BV=0.60
    {30000,7086,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.52  BV=0.51
    {30000,7086,1136, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.62  BV=0.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom3AutoTable =
{
    AETABLE_CUSTOM3_AUTO,    //eAETableID
    96,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    4,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom3PLineTable_60Hz,
    sCustom3PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom4PLineTable_60Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1136,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.88  BV=5.00
    {8320,1232,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1296,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1440,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.18  BV=4.70
    {8320,1536,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.27  BV=4.61
    {8320,1648,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1744,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1856,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.58  BV=4.30
    {8320,2000,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2160,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.78  BV=4.10
    {16680,1136,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.86  BV=4.02
    {16680,1232,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1296,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.06  BV=3.81
    {16680,1392,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.17  BV=3.71
    {16680,1536,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.26  BV=3.61
    {16680,1648,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.36  BV=3.51
    {16680,1744,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.47  BV=3.41
    {16680,1856,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.57  BV=3.31
    {16680,2000,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.67  BV=3.21
    {16680,2160,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.77  BV=3.11
    {16680,2304,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.86  BV=3.02
    {16680,2448,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.96  BV=2.92
    {16680,2688,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.07  BV=2.81
    {16680,2816,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.16  BV=2.72
    {16680,3024,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.27  BV=2.60
    {16680,3280,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.37  BV=2.51
    {16680,3504,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.48  BV=2.40
    {16680,3760,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.57  BV=2.31
    {16680,4048,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.67  BV=2.20
    {16680,4304,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.77  BV=2.10
    {25000,3088,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.28  BV=2.01
    {25000,3328,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.39  BV=1.90
    {25000,3552,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.48  BV=1.81
    {25000,3808,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.58  BV=1.71
    {33320,3088,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.27  BV=1.61
    {33320,3280,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.37  BV=1.51
    {33320,3504,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.46  BV=1.41
    {33320,3808,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.57  BV=1.31
    {33320,4048,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.67  BV=1.21
    {33320,4304,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.77  BV=1.11
    {33320,4608,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.87  BV=1.01
    {33320,4960,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.97  BV=0.91
    {33320,5360,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.07  BV=0.81
    {33320,5712,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.17  BV=0.71
    {33320,6096,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.27  BV=0.60
    {33320,6400,1056, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.37  BV=0.51
    {33320,6912,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.47  BV=0.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom4PLineTable_50Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1136,1040, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1136,1032, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1136,1032, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1184,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.91  BV=4.70
    {10000,1232,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.01  BV=4.60
    {10000,1344,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.50
    {10000,1440,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.21  BV=4.40
    {10000,1536,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.32  BV=4.30
    {10000,1696,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.42  BV=4.20
    {10000,1808,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1952,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.70  BV=3.91
    {10000,2208,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.81  BV=3.81
    {10000,2368,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.90  BV=3.72
    {10000,2560,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.01  BV=3.60
    {10000,2704,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.10  BV=3.51
    {10000,2912,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.21  BV=3.41
    {10000,3136,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.30  BV=3.31
    {10000,3328,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.40  BV=3.21
    {10000,3600,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.50  BV=3.11
    {10000,3856,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.60  BV=3.01
    {10000,4160,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.70  BV=2.91
    {10000,4448,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.81  BV=2.81
    {10000,4768,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.91  BV=2.71
    {10000,5040,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.01  BV=2.60
    {10000,5472,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.11  BV=2.51
    {10000,5840,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.21  BV=2.40
    {20000,3136,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.30  BV=2.31
    {20000,3328,1048, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.41  BV=2.20
    {20000,3600,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.50  BV=2.11
    {20000,3856,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.61  BV=2.00
    {20000,4160,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.70  BV=1.91
    {20000,4448,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.81  BV=1.81
    {30000,3136,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.33  BV=1.70
    {30000,3408,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.42  BV=1.61
    {30000,3648,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.52  BV=1.51
    {30000,3920,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.61  BV=1.42
    {30000,4160,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.72  BV=1.31
    {30000,4528,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.82  BV=1.21
    {30000,4768,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.92  BV=1.11
    {30000,5152,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.02  BV=1.01
    {30000,5472,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.12  BV=0.91
    {30000,5840,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.21  BV=0.82
    {30000,6096,1072, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.32  BV=0.71
    {30000,6720,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.43  BV=0.60
    {30000,7086,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.52  BV=0.51
    {30000,7086,1136, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.62  BV=0.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom4AutoTable =
{
    AETABLE_CUSTOM4_AUTO,    //eAETableID
    96,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    4,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom4PLineTable_60Hz,
    sCustom4PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom5PLineTable_60Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1136,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.88  BV=5.00
    {8320,1232,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1296,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1440,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.18  BV=4.70
    {8320,1536,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.27  BV=4.61
    {8320,1648,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1744,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1856,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.58  BV=4.30
    {8320,2000,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2160,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.78  BV=4.10
    {16680,1136,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.86  BV=4.02
    {16680,1232,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1296,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.06  BV=3.81
    {16680,1392,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.17  BV=3.71
    {16680,1536,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.26  BV=3.61
    {16680,1648,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.36  BV=3.51
    {16680,1744,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.47  BV=3.41
    {16680,1856,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.57  BV=3.31
    {16680,2000,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.67  BV=3.21
    {16680,2160,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.77  BV=3.11
    {16680,2304,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.86  BV=3.02
    {16680,2448,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.96  BV=2.92
    {16680,2688,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.07  BV=2.81
    {16680,2816,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.16  BV=2.72
    {16680,3024,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.27  BV=2.60
    {16680,3280,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.37  BV=2.51
    {16680,3504,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.48  BV=2.40
    {16680,3760,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.57  BV=2.31
    {16680,4048,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.67  BV=2.20
    {16680,4304,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.77  BV=2.10
    {25000,3088,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.28  BV=2.01
    {25000,3328,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.39  BV=1.90
    {25000,3552,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.48  BV=1.81
    {25000,3808,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.58  BV=1.71
    {33320,3088,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.27  BV=1.61
    {33320,3280,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.37  BV=1.51
    {33320,3504,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.46  BV=1.41
    {33320,3808,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.57  BV=1.31
    {33320,4048,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.67  BV=1.21
    {33320,4304,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.77  BV=1.11
    {33320,4608,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.87  BV=1.01
    {33320,4960,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.97  BV=0.91
    {33320,5360,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.07  BV=0.81
    {33320,5712,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.17  BV=0.71
    {33320,6096,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.27  BV=0.60
    {33320,6400,1056, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.37  BV=0.51
    {33320,6912,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.47  BV=0.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom5PLineTable_50Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1136,1040, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1136,1032, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1136,1032, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1184,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.91  BV=4.70
    {10000,1232,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.01  BV=4.60
    {10000,1344,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.50
    {10000,1440,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.21  BV=4.40
    {10000,1536,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.32  BV=4.30
    {10000,1696,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.42  BV=4.20
    {10000,1808,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1952,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.70  BV=3.91
    {10000,2208,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.81  BV=3.81
    {10000,2368,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.90  BV=3.72
    {10000,2560,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.01  BV=3.60
    {10000,2704,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.10  BV=3.51
    {10000,2912,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.21  BV=3.41
    {10000,3136,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.30  BV=3.31
    {10000,3328,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.40  BV=3.21
    {10000,3600,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.50  BV=3.11
    {10000,3856,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.60  BV=3.01
    {10000,4160,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.70  BV=2.91
    {10000,4448,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.81  BV=2.81
    {10000,4768,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.91  BV=2.71
    {10000,5040,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.01  BV=2.60
    {10000,5472,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.11  BV=2.51
    {10000,5840,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.21  BV=2.40
    {20000,3136,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.30  BV=2.31
    {20000,3328,1048, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.41  BV=2.20
    {20000,3600,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.50  BV=2.11
    {20000,3856,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.61  BV=2.00
    {20000,4160,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.70  BV=1.91
    {20000,4448,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.81  BV=1.81
    {30000,3136,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.33  BV=1.70
    {30000,3408,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.42  BV=1.61
    {30000,3648,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.52  BV=1.51
    {30000,3920,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.61  BV=1.42
    {30000,4160,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.72  BV=1.31
    {30000,4528,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.82  BV=1.21
    {30000,4768,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.92  BV=1.11
    {30000,5152,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.02  BV=1.01
    {30000,5472,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.12  BV=0.91
    {30000,5840,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.21  BV=0.82
    {30000,6096,1072, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.32  BV=0.71
    {30000,6720,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.43  BV=0.60
    {30000,7086,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.52  BV=0.51
    {30000,7086,1136, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.62  BV=0.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom5AutoTable =
{
    AETABLE_CUSTOM5_AUTO,    //eAETableID
    96,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    4,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom5PLineTable_60Hz,
    sCustom5PLineTable_50Hz,
    NULL,
};

static strEvPline sVideoNightPLineTable_60Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1136,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.88  BV=5.00
    {8320,1232,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1296,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1440,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.18  BV=4.70
    {8320,1536,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.27  BV=4.61
    {8320,1648,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1744,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1856,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.58  BV=4.30
    {8320,2000,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2160,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.78  BV=4.10
    {16680,1136,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.86  BV=4.02
    {16680,1232,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1296,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.06  BV=3.81
    {16680,1392,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.17  BV=3.71
    {16680,1536,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.26  BV=3.61
    {16680,1648,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.36  BV=3.51
    {16680,1744,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.47  BV=3.41
    {16680,1856,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.57  BV=3.31
    {16680,2000,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.67  BV=3.21
    {16680,2160,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.77  BV=3.11
    {16680,2304,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.86  BV=3.02
    {16680,2448,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.96  BV=2.92
    {16680,2688,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.07  BV=2.81
    {16680,2816,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.16  BV=2.72
    {16680,3024,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.27  BV=2.60
    {16680,3280,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.37  BV=2.51
    {16680,3504,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.48  BV=2.40
    {16680,3760,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.57  BV=2.31
    {16680,4048,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.67  BV=2.20
    {16680,4304,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.77  BV=2.10
    {25000,3088,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.28  BV=2.01
    {25000,3328,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.39  BV=1.90
    {25000,3552,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.48  BV=1.81
    {25000,3808,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.58  BV=1.71
    {33200,3088,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.27  BV=1.61
    {33200,3280,1032, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.37  BV=1.51
    {33200,3552,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.47  BV=1.41
    {33200,3808,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.57  BV=1.31
    {33200,4096,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.68  BV=1.21
    {33200,4384,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.78  BV=1.11
    {33200,4688,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.87  BV=1.01
    {33200,4960,1032, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=6.97  BV=0.92
    {33200,5360,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.07  BV=0.82
    {33200,5712,1032, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.17  BV=0.71
    {33200,6096,1040, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.27  BV=0.61
    {33200,6400,1064, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.38  BV=0.51
    {33200,7086,1024, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.47  BV=0.41
    {33200,7086,1104, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.58  BV=0.31
    {33200,7086,1184, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.68  BV=0.21
    {33200,7086,1264, 0, 0, 0},  //TV = 4.91(830 lines)  AV=2.97  SV=7.77  BV=0.11
    {41680,7086,1088, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=7.56  BV=-0.00
    {41680,7086,1176, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=7.67  BV=-0.11
    {50000,7086,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.49  BV=-0.20
    {50000,7086,1120, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.60  BV=-0.31
    {58320,7086,1024, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=7.47  BV=-0.40
    {58320,7086,1096, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=7.57  BV=-0.50
    {66520,7086,1040, 0, 0, 0},  //TV = 3.91(1663 lines)  AV=2.97  SV=7.49  BV=-0.61
    {66520,7086,1112, 0, 0, 0},  //TV = 3.91(1663 lines)  AV=2.97  SV=7.59  BV=-0.71
    {75000,7086,1056, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=7.51  BV=-0.81
    {75000,7086,1136, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=7.62  BV=-0.91
    {83320,7086,1088, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=7.56  BV=-1.00
    {91680,7086,1064, 0, 0, 0},  //TV = 3.45(2292 lines)  AV=2.97  SV=7.52  BV=-1.11
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideoNightPLineTable_50Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1136,1040, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1136,1032, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1136,1032, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1184,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.91  BV=4.70
    {10000,1232,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.01  BV=4.60
    {10000,1344,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.50
    {10000,1440,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.21  BV=4.40
    {10000,1536,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.32  BV=4.30
    {10000,1696,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.42  BV=4.20
    {10000,1808,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1952,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.70  BV=3.91
    {10000,2208,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.81  BV=3.81
    {10000,2368,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.90  BV=3.72
    {10000,2560,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.01  BV=3.60
    {10000,2704,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.10  BV=3.51
    {10000,2912,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.21  BV=3.41
    {10000,3136,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.30  BV=3.31
    {10000,3328,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.40  BV=3.21
    {10000,3600,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.50  BV=3.11
    {10000,3856,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.60  BV=3.01
    {10000,4160,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.70  BV=2.91
    {10000,4448,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.81  BV=2.81
    {10000,4768,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.91  BV=2.71
    {10000,5040,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.01  BV=2.60
    {10000,5472,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.11  BV=2.51
    {10000,5840,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.21  BV=2.40
    {20000,3136,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.30  BV=2.31
    {20000,3328,1048, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.41  BV=2.20
    {20000,3600,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.50  BV=2.11
    {20000,3856,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.61  BV=2.00
    {20000,4160,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.70  BV=1.91
    {20000,4448,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.81  BV=1.81
    {30000,3136,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.33  BV=1.70
    {30000,3408,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.42  BV=1.61
    {30000,3648,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.52  BV=1.51
    {30000,3920,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.61  BV=1.42
    {30000,4160,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.72  BV=1.31
    {30000,4528,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.82  BV=1.21
    {30000,4768,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.92  BV=1.11
    {30000,5152,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.02  BV=1.01
    {30000,5472,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.12  BV=0.91
    {30000,5840,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.21  BV=0.82
    {30000,6096,1072, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.32  BV=0.71
    {30000,6720,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.43  BV=0.60
    {30000,7086,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.52  BV=0.51
    {30000,7086,1136, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.62  BV=0.41
    {30000,7086,1216, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.72  BV=0.31
    {30000,7086,1304, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.82  BV=0.21
    {40000,7086,1048, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=7.50  BV=0.11
    {40000,7086,1144, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=7.63  BV=-0.01
    {40000,7086,1216, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=7.72  BV=-0.10
    {50000,7086,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.49  BV=-0.20
    {50000,7086,1120, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.60  BV=-0.31
    {50000,7086,1200, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.70  BV=-0.40
    {60000,7086,1072, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=7.53  BV=-0.51
    {60000,7086,1152, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=7.64  BV=-0.61
    {70000,7086,1056, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=7.51  BV=-0.71
    {70000,7086,1136, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=7.62  BV=-0.81
    {80000,7086,1064, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=7.52  BV=-0.91
    {80000,7086,1144, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=7.63  BV=-1.01
    {90000,7086,1088, 0, 0, 0},  //TV = 3.47(2250 lines)  AV=2.97  SV=7.56  BV=-1.11
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_VideoNightTable =
{
    AETABLE_VIDEO_NIGHT,    //eAETableID
    111,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    -11,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -10,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sVideoNightPLineTable_60Hz,
    sVideoNightPLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO100PLineTable_60Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1136,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.88  BV=5.00
    {8320,1232,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1296,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1440,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.18  BV=4.70
    {8320,1536,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.27  BV=4.61
    {8320,1648,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1744,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1856,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.58  BV=4.30
    {8320,2000,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2160,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.78  BV=4.10
    {16680,1136,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.87  BV=4.00
    {16680,1232,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1296,1064, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.07  BV=3.80
    {16680,1392,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.17  BV=3.71
    {16680,1536,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.27  BV=3.60
    {16680,1648,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.38  BV=3.50
    {25000,1136,1064, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=4.88  BV=3.41
    {25000,1232,1064, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.00  BV=3.29
    {25000,1344,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.09  BV=3.20
    {25000,1440,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.18  BV=3.11
    {33320,1136,1064, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.88  BV=3.00
    {33320,1232,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.97  BV=2.91
    {33320,1296,1064, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.07  BV=2.81
    {41680,1136,1040, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=4.85  BV=2.71
    {41680,1232,1032, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=4.96  BV=2.60
    {41680,1296,1048, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.05  BV=2.50
    {50000,1136,1064, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.88  BV=2.41
    {50000,1232,1056, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.99  BV=2.30
    {58320,1136,1056, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=4.87  BV=2.20
    {58320,1232,1040, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=4.97  BV=2.10
    {66680,1136,1056, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=4.87  BV=2.01
    {66680,1232,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=4.97  BV=1.91
    {75000,1184,1040, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=4.91  BV=1.80
    {83320,1136,1040, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=4.85  BV=1.71
    {83320,1232,1032, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=4.96  BV=1.60
    {91680,1184,1048, 0, 0, 0},  //TV = 3.45(2292 lines)  AV=2.97  SV=4.92  BV=1.50
    {100000,1136,1064, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=4.88  BV=1.41
    {108320,1136,1056, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=4.87  BV=1.31
    {116680,1136,1056, 0, 0, 0},  //TV = 3.10(2917 lines)  AV=2.97  SV=4.87  BV=1.20
    {125000,1136,1056, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=4.87  BV=1.10
    {133320,1136,1056, 0, 0, 0},  //TV = 2.91(3333 lines)  AV=2.97  SV=4.87  BV=1.01
    {141680,1136,1064, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=4.88  BV=0.91
    {150000,1184,1040, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=4.91  BV=0.80
    {166640,1136,1040, 0, 0, 0},  //TV = 2.59(4166 lines)  AV=2.97  SV=4.85  BV=0.71
    {175000,1136,1064, 0, 0, 0},  //TV = 2.51(4375 lines)  AV=2.97  SV=4.88  BV=0.60
    {191640,1136,1040, 0, 0, 0},  //TV = 2.38(4791 lines)  AV=2.97  SV=4.85  BV=0.50
    {200000,1136,1064, 0, 0, 0},  //TV = 2.32(5000 lines)  AV=2.97  SV=4.88  BV=0.41
    {216640,1136,1056, 0, 0, 0},  //TV = 2.21(5416 lines)  AV=2.97  SV=4.87  BV=0.31
    {233320,1136,1056, 0, 0, 0},  //TV = 2.10(5833 lines)  AV=2.97  SV=4.87  BV=0.20
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO100PLineTable_50Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1136,1040, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1136,1032, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1136,1032, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1184,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.91  BV=4.70
    {10000,1232,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.01  BV=4.60
    {10000,1344,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.50
    {10000,1440,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.21  BV=4.40
    {10000,1536,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.32  BV=4.30
    {10000,1696,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.42  BV=4.20
    {10000,1808,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1920,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.71  BV=3.90
    {10000,2208,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.81  BV=3.81
    {20000,1184,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=4.91  BV=3.70
    {20000,1232,1072, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.01  BV=3.60
    {20000,1344,1064, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.13  BV=3.49
    {20000,1440,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.21  BV=3.40
    {20000,1536,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.31  BV=3.31
    {20000,1648,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.41  BV=3.21
    {30000,1184,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=4.92  BV=3.11
    {30000,1296,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.04  BV=2.99
    {30000,1344,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.13  BV=2.90
    {30000,1488,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.23  BV=2.80
    {40000,1184,1040, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=4.91  BV=2.70
    {40000,1232,1072, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.01  BV=2.60
    {40000,1344,1056, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.11  BV=2.50
    {50000,1136,1064, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.88  BV=2.41
    {50000,1232,1056, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.99  BV=2.30
    {50000,1344,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.09  BV=2.20
    {60000,1184,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=4.93  BV=2.10
    {60000,1296,1032, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.03  BV=2.00
    {70000,1184,1040, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=4.91  BV=1.90
    {70000,1232,1064, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=5.00  BV=1.81
    {80000,1184,1040, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=4.91  BV=1.70
    {80000,1232,1072, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=5.01  BV=1.60
    {90000,1184,1056, 0, 0, 0},  //TV = 3.47(2250 lines)  AV=2.97  SV=4.93  BV=1.51
    {100000,1136,1064, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=4.88  BV=1.41
    {110000,1136,1040, 0, 0, 0},  //TV = 3.18(2750 lines)  AV=2.97  SV=4.85  BV=1.31
    {110000,1232,1032, 0, 0, 0},  //TV = 3.18(2750 lines)  AV=2.97  SV=4.96  BV=1.20
    {120000,1184,1048, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=4.92  BV=1.11
    {130000,1184,1040, 0, 0, 0},  //TV = 2.94(3250 lines)  AV=2.97  SV=4.91  BV=1.00
    {140000,1184,1040, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=4.91  BV=0.90
    {150000,1184,1040, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=4.91  BV=0.80
    {160000,1184,1040, 0, 0, 0},  //TV = 2.64(4000 lines)  AV=2.97  SV=4.91  BV=0.70
    {180000,1136,1040, 0, 0, 0},  //TV = 2.47(4500 lines)  AV=2.97  SV=4.85  BV=0.59
    {190000,1136,1048, 0, 0, 0},  //TV = 2.40(4750 lines)  AV=2.97  SV=4.86  BV=0.51
    {200000,1136,1064, 0, 0, 0},  //TV = 2.32(5000 lines)  AV=2.97  SV=4.88  BV=0.41
    {220000,1136,1040, 0, 0, 0},  //TV = 2.18(5500 lines)  AV=2.97  SV=4.85  BV=0.31
    {230000,1136,1064, 0, 0, 0},  //TV = 2.12(5750 lines)  AV=2.97  SV=4.88  BV=0.21
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO100Table =
{
    AETABLE_CAPTURE_ISO100,    //eAETableID
    98,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    2,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_100, //ISO SPEED
    sCaptureISO100PLineTable_60Hz,
    sCaptureISO100PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO200PLineTable_60Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {480,1232,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.99  BV=9.01
    {480,1344,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.08  BV=8.91
    {480,1440,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.18  BV=8.81
    {480,1536,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.29  BV=8.71
    {480,1648,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.39  BV=8.61
    {480,1744,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.49  BV=8.50
    {480,1920,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.58  BV=8.41
    {480,2048,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.69  BV=8.31
    {480,2160,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.79  BV=8.21
    {520,2160,1032, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=5.77  BV=8.11
    {560,2160,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=5.77  BV=8.01
    {600,2160,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=5.77  BV=7.91
    {680,2048,1032, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=5.69  BV=7.80
    {720,2048,1048, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=5.71  BV=7.70
    {760,2112,1024, 0, 0, 0},  //TV = 10.36(19 lines)  AV=2.97  SV=5.72  BV=7.61
    {840,2048,1032, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=5.69  BV=7.50
    {880,2048,1056, 0, 0, 0},  //TV = 10.15(22 lines)  AV=2.97  SV=5.72  BV=7.40
    {960,2048,1032, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=5.69  BV=7.31
    {1000,2112,1032, 0, 0, 0},  //TV = 9.97(25 lines)  AV=2.97  SV=5.73  BV=7.20
    {1080,2048,1056, 0, 0, 0},  //TV = 9.85(27 lines)  AV=2.97  SV=5.72  BV=7.10
    {1160,2048,1056, 0, 0, 0},  //TV = 9.75(29 lines)  AV=2.97  SV=5.72  BV=7.00
    {1240,2048,1056, 0, 0, 0},  //TV = 9.66(31 lines)  AV=2.97  SV=5.72  BV=6.90
    {1360,2048,1032, 0, 0, 0},  //TV = 9.52(34 lines)  AV=2.97  SV=5.69  BV=6.80
    {1440,2048,1048, 0, 0, 0},  //TV = 9.44(36 lines)  AV=2.97  SV=5.71  BV=6.70
    {1560,2048,1040, 0, 0, 0},  //TV = 9.32(39 lines)  AV=2.97  SV=5.70  BV=6.59
    {1680,2048,1032, 0, 0, 0},  //TV = 9.22(42 lines)  AV=2.97  SV=5.69  BV=6.50
    {1800,2048,1032, 0, 0, 0},  //TV = 9.12(45 lines)  AV=2.97  SV=5.69  BV=6.40
    {1920,2048,1040, 0, 0, 0},  //TV = 9.02(48 lines)  AV=2.97  SV=5.70  BV=6.30
    {2040,2048,1040, 0, 0, 0},  //TV = 8.94(51 lines)  AV=2.97  SV=5.70  BV=6.21
    {2200,2048,1032, 0, 0, 0},  //TV = 8.83(55 lines)  AV=2.97  SV=5.69  BV=6.11
    {2360,2048,1040, 0, 0, 0},  //TV = 8.73(59 lines)  AV=2.97  SV=5.70  BV=6.00
    {2520,2048,1040, 0, 0, 0},  //TV = 8.63(63 lines)  AV=2.97  SV=5.70  BV=5.90
    {2720,2048,1032, 0, 0, 0},  //TV = 8.52(68 lines)  AV=2.97  SV=5.69  BV=5.80
    {2920,2048,1032, 0, 0, 0},  //TV = 8.42(73 lines)  AV=2.97  SV=5.69  BV=5.70
    {3120,2048,1040, 0, 0, 0},  //TV = 8.32(78 lines)  AV=2.97  SV=5.70  BV=5.59
    {3360,2048,1032, 0, 0, 0},  //TV = 8.22(84 lines)  AV=2.97  SV=5.69  BV=5.50
    {3600,2048,1032, 0, 0, 0},  //TV = 8.12(90 lines)  AV=2.97  SV=5.69  BV=5.40
    {3880,2048,1032, 0, 0, 0},  //TV = 8.01(97 lines)  AV=2.97  SV=5.69  BV=5.29
    {4160,2000,1048, 0, 0, 0},  //TV = 7.91(104 lines)  AV=2.97  SV=5.68  BV=5.20
    {4440,2048,1032, 0, 0, 0},  //TV = 7.82(111 lines)  AV=2.97  SV=5.69  BV=5.10
    {4760,2000,1048, 0, 0, 0},  //TV = 7.71(119 lines)  AV=2.97  SV=5.68  BV=5.01
    {5080,2048,1032, 0, 0, 0},  //TV = 7.62(127 lines)  AV=2.97  SV=5.69  BV=4.90
    {5440,2048,1032, 0, 0, 0},  //TV = 7.52(136 lines)  AV=2.97  SV=5.69  BV=4.80
    {5840,2048,1032, 0, 0, 0},  //TV = 7.42(146 lines)  AV=2.97  SV=5.69  BV=4.70
    {6280,2048,1032, 0, 0, 0},  //TV = 7.32(157 lines)  AV=2.97  SV=5.69  BV=4.60
    {6760,2000,1048, 0, 0, 0},  //TV = 7.21(169 lines)  AV=2.97  SV=5.68  BV=4.50
    {7240,2000,1048, 0, 0, 0},  //TV = 7.11(181 lines)  AV=2.97  SV=5.68  BV=4.40
    {7760,2000,1048, 0, 0, 0},  //TV = 7.01(194 lines)  AV=2.97  SV=5.68  BV=4.30
    {8280,2048,1032, 0, 0, 0},  //TV = 6.92(207 lines)  AV=2.97  SV=5.69  BV=4.20
    {8320,2160,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.78  BV=4.10
    {8320,2304,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.87  BV=4.01
    {8320,2448,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.97  BV=3.91
    {8320,2688,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.07  BV=3.81
    {8320,2880,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.17  BV=3.71
    {8320,3088,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.27  BV=3.61
    {8320,3280,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.37  BV=3.51
    {8320,3504,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.48  BV=3.40
    {8320,3760,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.58  BV=3.30
    {8320,4048,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.67  BV=3.21
    {16680,2160,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.78  BV=3.10
    {16680,2304,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.87  BV=3.01
    {16680,2448,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.97  BV=2.91
    {16680,2688,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.07  BV=2.81
    {16680,2880,1024, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.17  BV=2.71
    {25000,2048,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.69  BV=2.60
    {25000,2208,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.79  BV=2.51
    {25000,2368,1024, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.89  BV=2.41
    {25000,2512,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.00  BV=2.30
    {25000,2704,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.09  BV=2.20
    {33320,2160,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.78  BV=2.10
    {33320,2304,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.88  BV=2.00
    {33320,2512,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.97  BV=1.91
    {41680,2112,1040, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.74  BV=1.81
    {41680,2304,1024, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.85  BV=1.71
    {50000,2048,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.69  BV=1.60
    {50000,2160,1048, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.79  BV=1.50
    {50000,2304,1056, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.89  BV=1.40
    {58320,2160,1032, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=5.77  BV=1.30
    {58320,2304,1040, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=5.87  BV=1.20
    {66680,2160,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.77  BV=1.11
    {75000,2048,1048, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=5.71  BV=1.00
    {75000,2208,1032, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=5.80  BV=0.91
    {83320,2112,1040, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=5.74  BV=0.81
    {91680,2048,1048, 0, 0, 0},  //TV = 3.45(2292 lines)  AV=2.97  SV=5.71  BV=0.71
    {100000,2048,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.69  BV=0.60
    {100000,2160,1048, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.79  BV=0.50
    {108320,2160,1032, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=5.77  BV=0.41
    {116680,2160,1032, 0, 0, 0},  //TV = 3.10(2917 lines)  AV=2.97  SV=5.77  BV=0.30
    {125000,2160,1032, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=5.77  BV=0.20
    {141680,2048,1032, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=5.69  BV=0.10
    {150000,2048,1048, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=5.71  BV=-0.00
    {158320,2112,1032, 0, 0, 0},  //TV = 2.66(3958 lines)  AV=2.97  SV=5.73  BV=-0.10
    {175000,2048,1032, 0, 0, 0},  //TV = 2.51(4375 lines)  AV=2.97  SV=5.69  BV=-0.20
    {183320,2048,1056, 0, 0, 0},  //TV = 2.45(4583 lines)  AV=2.97  SV=5.72  BV=-0.30
    {200000,2048,1040, 0, 0, 0},  //TV = 2.32(5000 lines)  AV=2.97  SV=5.70  BV=-0.41
    {216640,2048,1032, 0, 0, 0},  //TV = 2.21(5416 lines)  AV=2.97  SV=5.69  BV=-0.51
    {225000,2112,1024, 0, 0, 0},  //TV = 2.15(5625 lines)  AV=2.97  SV=5.72  BV=-0.60
    {241640,2048,1056, 0, 0, 0},  //TV = 2.05(6041 lines)  AV=2.97  SV=5.72  BV=-0.70
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO200PLineTable_50Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {480,1232,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.99  BV=9.01
    {480,1344,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.08  BV=8.91
    {480,1440,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.18  BV=8.81
    {480,1536,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.29  BV=8.71
    {480,1648,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.39  BV=8.61
    {480,1744,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.49  BV=8.50
    {480,1920,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.58  BV=8.41
    {480,2048,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.69  BV=8.31
    {480,2160,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.79  BV=8.21
    {520,2160,1032, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=5.77  BV=8.11
    {560,2160,1032, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=5.77  BV=8.01
    {600,2160,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=5.77  BV=7.91
    {680,2048,1032, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=5.69  BV=7.80
    {720,2048,1048, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=5.71  BV=7.70
    {760,2112,1024, 0, 0, 0},  //TV = 10.36(19 lines)  AV=2.97  SV=5.72  BV=7.61
    {840,2048,1032, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=5.69  BV=7.50
    {880,2048,1056, 0, 0, 0},  //TV = 10.15(22 lines)  AV=2.97  SV=5.72  BV=7.40
    {960,2048,1032, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=5.69  BV=7.31
    {1000,2112,1032, 0, 0, 0},  //TV = 9.97(25 lines)  AV=2.97  SV=5.73  BV=7.20
    {1080,2048,1056, 0, 0, 0},  //TV = 9.85(27 lines)  AV=2.97  SV=5.72  BV=7.10
    {1160,2048,1056, 0, 0, 0},  //TV = 9.75(29 lines)  AV=2.97  SV=5.72  BV=7.00
    {1240,2048,1056, 0, 0, 0},  //TV = 9.66(31 lines)  AV=2.97  SV=5.72  BV=6.90
    {1360,2048,1032, 0, 0, 0},  //TV = 9.52(34 lines)  AV=2.97  SV=5.69  BV=6.80
    {1440,2048,1048, 0, 0, 0},  //TV = 9.44(36 lines)  AV=2.97  SV=5.71  BV=6.70
    {1560,2048,1040, 0, 0, 0},  //TV = 9.32(39 lines)  AV=2.97  SV=5.70  BV=6.59
    {1680,2048,1032, 0, 0, 0},  //TV = 9.22(42 lines)  AV=2.97  SV=5.69  BV=6.50
    {1800,2048,1032, 0, 0, 0},  //TV = 9.12(45 lines)  AV=2.97  SV=5.69  BV=6.40
    {1920,2048,1040, 0, 0, 0},  //TV = 9.02(48 lines)  AV=2.97  SV=5.70  BV=6.30
    {2040,2048,1040, 0, 0, 0},  //TV = 8.94(51 lines)  AV=2.97  SV=5.70  BV=6.21
    {2200,2048,1032, 0, 0, 0},  //TV = 8.83(55 lines)  AV=2.97  SV=5.69  BV=6.11
    {2360,2048,1040, 0, 0, 0},  //TV = 8.73(59 lines)  AV=2.97  SV=5.70  BV=6.00
    {2520,2048,1040, 0, 0, 0},  //TV = 8.63(63 lines)  AV=2.97  SV=5.70  BV=5.90
    {2720,2048,1032, 0, 0, 0},  //TV = 8.52(68 lines)  AV=2.97  SV=5.69  BV=5.80
    {2920,2048,1032, 0, 0, 0},  //TV = 8.42(73 lines)  AV=2.97  SV=5.69  BV=5.70
    {3120,2048,1040, 0, 0, 0},  //TV = 8.32(78 lines)  AV=2.97  SV=5.70  BV=5.59
    {3360,2048,1032, 0, 0, 0},  //TV = 8.22(84 lines)  AV=2.97  SV=5.69  BV=5.50
    {3600,2048,1032, 0, 0, 0},  //TV = 8.12(90 lines)  AV=2.97  SV=5.69  BV=5.40
    {3880,2048,1032, 0, 0, 0},  //TV = 8.01(97 lines)  AV=2.97  SV=5.69  BV=5.29
    {4160,2000,1048, 0, 0, 0},  //TV = 7.91(104 lines)  AV=2.97  SV=5.68  BV=5.20
    {4440,2048,1032, 0, 0, 0},  //TV = 7.82(111 lines)  AV=2.97  SV=5.69  BV=5.10
    {4760,2000,1048, 0, 0, 0},  //TV = 7.71(119 lines)  AV=2.97  SV=5.68  BV=5.01
    {5080,2048,1032, 0, 0, 0},  //TV = 7.62(127 lines)  AV=2.97  SV=5.69  BV=4.90
    {5440,2048,1032, 0, 0, 0},  //TV = 7.52(136 lines)  AV=2.97  SV=5.69  BV=4.80
    {5840,2048,1032, 0, 0, 0},  //TV = 7.42(146 lines)  AV=2.97  SV=5.69  BV=4.70
    {6280,2048,1032, 0, 0, 0},  //TV = 7.32(157 lines)  AV=2.97  SV=5.69  BV=4.60
    {6760,2000,1048, 0, 0, 0},  //TV = 7.21(169 lines)  AV=2.97  SV=5.68  BV=4.50
    {7240,2000,1048, 0, 0, 0},  //TV = 7.11(181 lines)  AV=2.97  SV=5.68  BV=4.40
    {7760,2000,1048, 0, 0, 0},  //TV = 7.01(194 lines)  AV=2.97  SV=5.68  BV=4.30
    {8280,2048,1032, 0, 0, 0},  //TV = 6.92(207 lines)  AV=2.97  SV=5.69  BV=4.20
    {8880,2048,1032, 0, 0, 0},  //TV = 6.82(222 lines)  AV=2.97  SV=5.69  BV=4.10
    {9520,2000,1048, 0, 0, 0},  //TV = 6.71(238 lines)  AV=2.97  SV=5.68  BV=4.01
    {10000,2048,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.71  BV=3.90
    {10000,2208,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.81  BV=3.81
    {10000,2368,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.91  BV=3.70
    {10000,2560,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.01  BV=3.60
    {10000,2704,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.11  BV=3.50
    {10000,2912,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.21  BV=3.41
    {10000,3136,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.30  BV=3.31
    {10000,3328,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.40  BV=3.21
    {10000,3648,1024, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.51  BV=3.10
    {10000,3856,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.60  BV=3.01
    {20000,2048,1048, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.71  BV=2.90
    {20000,2208,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.81  BV=2.81
    {20000,2368,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.91  BV=2.70
    {20000,2560,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.01  BV=2.60
    {20000,2704,1048, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.11  BV=2.50
    {20000,2912,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.21  BV=2.41
    {30000,2112,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.72  BV=2.31
    {30000,2256,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.83  BV=2.20
    {30000,2416,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.93  BV=2.10
    {30000,2560,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.02  BV=2.01
    {40000,2048,1048, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.71  BV=1.90
    {40000,2208,1040, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.81  BV=1.81
    {40000,2368,1040, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.91  BV=1.70
    {50000,2048,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.69  BV=1.60
    {50000,2160,1048, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.79  BV=1.50
    {50000,2304,1056, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.89  BV=1.40
    {60000,2112,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.72  BV=1.31
    {60000,2256,1032, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.83  BV=1.20
    {70000,2048,1040, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=5.70  BV=1.11
    {70000,2208,1032, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=5.80  BV=1.01
    {80000,2048,1048, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=5.71  BV=0.90
    {80000,2208,1040, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=5.81  BV=0.81
    {90000,2112,1032, 0, 0, 0},  //TV = 3.47(2250 lines)  AV=2.97  SV=5.73  BV=0.71
    {100000,2048,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.69  BV=0.60
    {100000,2160,1048, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.79  BV=0.50
    {110000,2112,1040, 0, 0, 0},  //TV = 3.18(2750 lines)  AV=2.97  SV=5.74  BV=0.41
    {120000,2048,1056, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=5.72  BV=0.31
    {130000,2048,1048, 0, 0, 0},  //TV = 2.94(3250 lines)  AV=2.97  SV=5.71  BV=0.20
    {140000,2048,1040, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=5.70  BV=0.11
    {150000,2048,1048, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=5.71  BV=-0.00
    {160000,2048,1056, 0, 0, 0},  //TV = 2.64(4000 lines)  AV=2.97  SV=5.72  BV=-0.11
    {170000,2112,1032, 0, 0, 0},  //TV = 2.56(4250 lines)  AV=2.97  SV=5.73  BV=-0.21
    {180000,2112,1040, 0, 0, 0},  //TV = 2.47(4500 lines)  AV=2.97  SV=5.74  BV=-0.30
    {200000,2048,1040, 0, 0, 0},  //TV = 2.32(5000 lines)  AV=2.97  SV=5.70  BV=-0.41
    {210000,2112,1024, 0, 0, 0},  //TV = 2.25(5250 lines)  AV=2.97  SV=5.72  BV=-0.50
    {230000,2048,1040, 0, 0, 0},  //TV = 2.12(5750 lines)  AV=2.97  SV=5.70  BV=-0.61
    {240000,2112,1032, 0, 0, 0},  //TV = 2.06(6000 lines)  AV=2.97  SV=5.73  BV=-0.70
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO200Table =
{
    AETABLE_CAPTURE_ISO200,    //eAETableID
    107,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    -7,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_200, //ISO SPEED
    sCaptureISO200PLineTable_60Hz,
    sCaptureISO200PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO400PLineTable_60Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {480,1232,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.99  BV=9.01
    {480,1344,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.08  BV=8.91
    {480,1440,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.18  BV=8.81
    {480,1536,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.29  BV=8.71
    {480,1648,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.39  BV=8.61
    {480,1744,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.49  BV=8.50
    {480,1920,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.58  BV=8.41
    {480,2048,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.69  BV=8.31
    {480,2160,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.78  BV=8.22
    {480,2368,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.89  BV=8.11
    {480,2512,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.98  BV=8.01
    {480,2704,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.09  BV=7.91
    {480,2912,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.19  BV=7.81
    {480,3088,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.28  BV=7.71
    {480,3328,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.38  BV=7.62
    {480,3600,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.49  BV=7.50
    {480,3856,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.59  BV=7.40
    {480,4096,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.69  BV=7.31
    {480,4384,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.79  BV=7.21
    {520,4304,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=6.77  BV=7.11
    {560,4304,1040, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=6.77  BV=7.00
    {600,4304,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=6.76  BV=6.91
    {680,4096,1032, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=6.69  BV=6.80
    {720,4160,1024, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=6.70  BV=6.71
    {760,4160,1040, 0, 0, 0},  //TV = 10.36(19 lines)  AV=2.97  SV=6.72  BV=6.61
    {840,4096,1024, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=6.68  BV=6.51
    {880,4160,1032, 0, 0, 0},  //TV = 10.15(22 lines)  AV=2.97  SV=6.71  BV=6.41
    {960,4096,1032, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=6.69  BV=6.31
    {1000,4240,1024, 0, 0, 0},  //TV = 9.97(25 lines)  AV=2.97  SV=6.73  BV=6.21
    {1080,4160,1032, 0, 0, 0},  //TV = 9.85(27 lines)  AV=2.97  SV=6.71  BV=6.11
    {1160,4160,1032, 0, 0, 0},  //TV = 9.75(29 lines)  AV=2.97  SV=6.71  BV=6.01
    {1240,4160,1040, 0, 0, 0},  //TV = 9.66(31 lines)  AV=2.97  SV=6.72  BV=5.90
    {1360,4096,1032, 0, 0, 0},  //TV = 9.52(34 lines)  AV=2.97  SV=6.69  BV=5.80
    {1440,4160,1024, 0, 0, 0},  //TV = 9.44(36 lines)  AV=2.97  SV=6.70  BV=5.71
    {1560,4096,1032, 0, 0, 0},  //TV = 9.32(39 lines)  AV=2.97  SV=6.69  BV=5.61
    {1680,4096,1032, 0, 0, 0},  //TV = 9.22(42 lines)  AV=2.97  SV=6.69  BV=5.50
    {1800,4096,1024, 0, 0, 0},  //TV = 9.12(45 lines)  AV=2.97  SV=6.68  BV=5.41
    {1920,4096,1040, 0, 0, 0},  //TV = 9.02(48 lines)  AV=2.97  SV=6.70  BV=5.30
    {2040,4160,1024, 0, 0, 0},  //TV = 8.94(51 lines)  AV=2.97  SV=6.70  BV=5.21
    {2200,4096,1032, 0, 0, 0},  //TV = 8.83(55 lines)  AV=2.97  SV=6.69  BV=5.11
    {2360,4096,1040, 0, 0, 0},  //TV = 8.73(59 lines)  AV=2.97  SV=6.70  BV=5.00
    {2520,4096,1040, 0, 0, 0},  //TV = 8.63(63 lines)  AV=2.97  SV=6.70  BV=4.90
    {2720,4096,1032, 0, 0, 0},  //TV = 8.52(68 lines)  AV=2.97  SV=6.69  BV=4.80
    {2920,4096,1024, 0, 0, 0},  //TV = 8.42(73 lines)  AV=2.97  SV=6.68  BV=4.71
    {3120,4096,1032, 0, 0, 0},  //TV = 8.32(78 lines)  AV=2.97  SV=6.69  BV=4.61
    {3360,4096,1032, 0, 0, 0},  //TV = 8.22(84 lines)  AV=2.97  SV=6.69  BV=4.50
    {3600,4096,1024, 0, 0, 0},  //TV = 8.12(90 lines)  AV=2.97  SV=6.68  BV=4.41
    {3840,4096,1032, 0, 0, 0},  //TV = 8.02(96 lines)  AV=2.97  SV=6.69  BV=4.31
    {4160,4048,1040, 0, 0, 0},  //TV = 7.91(104 lines)  AV=2.97  SV=6.68  BV=4.20
    {4440,4096,1032, 0, 0, 0},  //TV = 7.82(111 lines)  AV=2.97  SV=6.69  BV=4.10
    {4760,4096,1024, 0, 0, 0},  //TV = 7.71(119 lines)  AV=2.97  SV=6.68  BV=4.01
    {5080,4096,1032, 0, 0, 0},  //TV = 7.62(127 lines)  AV=2.97  SV=6.69  BV=3.90
    {5440,4096,1032, 0, 0, 0},  //TV = 7.52(136 lines)  AV=2.97  SV=6.69  BV=3.80
    {5840,4096,1024, 0, 0, 0},  //TV = 7.42(146 lines)  AV=2.97  SV=6.68  BV=3.71
    {6240,4096,1032, 0, 0, 0},  //TV = 7.32(156 lines)  AV=2.97  SV=6.69  BV=3.61
    {6760,4048,1040, 0, 0, 0},  //TV = 7.21(169 lines)  AV=2.97  SV=6.68  BV=3.50
    {7240,4048,1040, 0, 0, 0},  //TV = 7.11(181 lines)  AV=2.97  SV=6.68  BV=3.40
    {7760,4048,1040, 0, 0, 0},  //TV = 7.01(194 lines)  AV=2.97  SV=6.68  BV=3.30
    {8280,4096,1032, 0, 0, 0},  //TV = 6.92(207 lines)  AV=2.97  SV=6.69  BV=3.20
    {8320,4304,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.77  BV=3.11
    {8320,4688,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.87  BV=3.01
    {8320,4960,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=6.98  BV=2.90
    {8320,5360,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.08  BV=2.80
    {8320,5712,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.17  BV=2.71
    {8320,6096,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.27  BV=2.61
    {8320,6400,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.38  BV=2.50
    {8320,7086,1024, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.47  BV=2.41
    {8320,7086,1096, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.57  BV=2.31
    {8320,7086,1176, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.67  BV=2.21
    {16680,4304,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.77  BV=2.10
    {16680,4608,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.87  BV=2.01
    {16680,4960,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=6.98  BV=1.90
    {16680,5360,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.08  BV=1.80
    {16680,5712,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.18  BV=1.70
    {25000,4096,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.69  BV=1.60
    {25000,4384,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.79  BV=1.51
    {25000,4688,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.90  BV=1.40
    {25000,5040,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=6.99  BV=1.30
    {25000,5360,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=7.09  BV=1.20
    {33320,4304,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.77  BV=1.11
    {33320,4688,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.87  BV=1.01
    {33320,4960,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.98  BV=0.90
    {41680,4304,1024, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=6.75  BV=0.81
    {41680,4608,1024, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=6.85  BV=0.71
    {50000,4096,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.69  BV=0.60
    {50000,4384,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.79  BV=0.51
    {50000,4688,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.90  BV=0.40
    {58320,4304,1032, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=6.76  BV=0.31
    {58320,4608,1040, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=6.87  BV=0.20
    {66680,4304,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.77  BV=0.11
    {75000,4160,1032, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=6.71  BV=-0.00
    {75000,4448,1032, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=6.81  BV=-0.10
    {83320,4304,1032, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=6.76  BV=-0.20
    {91680,4160,1040, 0, 0, 0},  //TV = 3.45(2292 lines)  AV=2.97  SV=6.72  BV=-0.30
    {100000,4096,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.70  BV=-0.41
    {108320,4096,1032, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=6.69  BV=-0.51
    {108320,4384,1032, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=6.79  BV=-0.61
    {116680,4304,1040, 0, 0, 0},  //TV = 3.10(2917 lines)  AV=2.97  SV=6.77  BV=-0.70
    {133320,4096,1032, 0, 0, 0},  //TV = 2.91(3333 lines)  AV=2.97  SV=6.69  BV=-0.81
    {141680,4096,1040, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=6.70  BV=-0.91
    {150000,4160,1032, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=6.71  BV=-1.00
    {158320,4240,1032, 0, 0, 0},  //TV = 2.66(3958 lines)  AV=2.97  SV=6.74  BV=-1.11
    {175000,4096,1032, 0, 0, 0},  //TV = 2.51(4375 lines)  AV=2.97  SV=6.69  BV=-1.20
    {183320,4160,1040, 0, 0, 0},  //TV = 2.45(4583 lines)  AV=2.97  SV=6.72  BV=-1.30
    {200000,4096,1040, 0, 0, 0},  //TV = 2.32(5000 lines)  AV=2.97  SV=6.70  BV=-1.41
    {216640,4096,1032, 0, 0, 0},  //TV = 2.21(5416 lines)  AV=2.97  SV=6.69  BV=-1.51
    {225000,4160,1040, 0, 0, 0},  //TV = 2.15(5625 lines)  AV=2.97  SV=6.72  BV=-1.60
    {241640,4160,1040, 0, 0, 0},  //TV = 2.05(6041 lines)  AV=2.97  SV=6.72  BV=-1.70
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO400PLineTable_50Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {480,1232,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.99  BV=9.01
    {480,1344,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.08  BV=8.91
    {480,1440,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.18  BV=8.81
    {480,1536,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.29  BV=8.71
    {480,1648,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.39  BV=8.61
    {480,1744,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.49  BV=8.50
    {480,1920,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.58  BV=8.41
    {480,2048,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.69  BV=8.31
    {480,2160,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.78  BV=8.22
    {480,2368,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.89  BV=8.11
    {480,2512,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.98  BV=8.01
    {480,2704,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.09  BV=7.91
    {480,2912,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.19  BV=7.81
    {480,3088,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.28  BV=7.71
    {480,3328,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.38  BV=7.62
    {480,3600,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.49  BV=7.50
    {480,3856,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.59  BV=7.40
    {480,4096,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.69  BV=7.31
    {480,4384,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.79  BV=7.21
    {520,4304,1040, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=6.77  BV=7.11
    {560,4304,1040, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=6.77  BV=7.00
    {600,4304,1032, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=6.76  BV=6.91
    {680,4096,1032, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=6.69  BV=6.80
    {720,4160,1024, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=6.70  BV=6.71
    {760,4160,1040, 0, 0, 0},  //TV = 10.36(19 lines)  AV=2.97  SV=6.72  BV=6.61
    {840,4096,1024, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=6.68  BV=6.51
    {880,4160,1032, 0, 0, 0},  //TV = 10.15(22 lines)  AV=2.97  SV=6.71  BV=6.41
    {960,4096,1032, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=6.69  BV=6.31
    {1000,4240,1024, 0, 0, 0},  //TV = 9.97(25 lines)  AV=2.97  SV=6.73  BV=6.21
    {1080,4160,1032, 0, 0, 0},  //TV = 9.85(27 lines)  AV=2.97  SV=6.71  BV=6.11
    {1160,4160,1032, 0, 0, 0},  //TV = 9.75(29 lines)  AV=2.97  SV=6.71  BV=6.01
    {1240,4160,1040, 0, 0, 0},  //TV = 9.66(31 lines)  AV=2.97  SV=6.72  BV=5.90
    {1360,4096,1032, 0, 0, 0},  //TV = 9.52(34 lines)  AV=2.97  SV=6.69  BV=5.80
    {1440,4160,1024, 0, 0, 0},  //TV = 9.44(36 lines)  AV=2.97  SV=6.70  BV=5.71
    {1560,4096,1032, 0, 0, 0},  //TV = 9.32(39 lines)  AV=2.97  SV=6.69  BV=5.61
    {1680,4096,1032, 0, 0, 0},  //TV = 9.22(42 lines)  AV=2.97  SV=6.69  BV=5.50
    {1800,4096,1024, 0, 0, 0},  //TV = 9.12(45 lines)  AV=2.97  SV=6.68  BV=5.41
    {1920,4096,1040, 0, 0, 0},  //TV = 9.02(48 lines)  AV=2.97  SV=6.70  BV=5.30
    {2040,4160,1024, 0, 0, 0},  //TV = 8.94(51 lines)  AV=2.97  SV=6.70  BV=5.21
    {2200,4096,1032, 0, 0, 0},  //TV = 8.83(55 lines)  AV=2.97  SV=6.69  BV=5.11
    {2360,4096,1040, 0, 0, 0},  //TV = 8.73(59 lines)  AV=2.97  SV=6.70  BV=5.00
    {2520,4096,1040, 0, 0, 0},  //TV = 8.63(63 lines)  AV=2.97  SV=6.70  BV=4.90
    {2720,4096,1032, 0, 0, 0},  //TV = 8.52(68 lines)  AV=2.97  SV=6.69  BV=4.80
    {2920,4096,1024, 0, 0, 0},  //TV = 8.42(73 lines)  AV=2.97  SV=6.68  BV=4.71
    {3120,4096,1032, 0, 0, 0},  //TV = 8.32(78 lines)  AV=2.97  SV=6.69  BV=4.61
    {3360,4096,1032, 0, 0, 0},  //TV = 8.22(84 lines)  AV=2.97  SV=6.69  BV=4.50
    {3600,4096,1024, 0, 0, 0},  //TV = 8.12(90 lines)  AV=2.97  SV=6.68  BV=4.41
    {3840,4096,1032, 0, 0, 0},  //TV = 8.02(96 lines)  AV=2.97  SV=6.69  BV=4.31
    {4160,4048,1040, 0, 0, 0},  //TV = 7.91(104 lines)  AV=2.97  SV=6.68  BV=4.20
    {4440,4096,1032, 0, 0, 0},  //TV = 7.82(111 lines)  AV=2.97  SV=6.69  BV=4.10
    {4760,4096,1024, 0, 0, 0},  //TV = 7.71(119 lines)  AV=2.97  SV=6.68  BV=4.01
    {5080,4096,1032, 0, 0, 0},  //TV = 7.62(127 lines)  AV=2.97  SV=6.69  BV=3.90
    {5440,4096,1032, 0, 0, 0},  //TV = 7.52(136 lines)  AV=2.97  SV=6.69  BV=3.80
    {5840,4096,1024, 0, 0, 0},  //TV = 7.42(146 lines)  AV=2.97  SV=6.68  BV=3.71
    {6240,4096,1032, 0, 0, 0},  //TV = 7.32(156 lines)  AV=2.97  SV=6.69  BV=3.61
    {6760,4048,1040, 0, 0, 0},  //TV = 7.21(169 lines)  AV=2.97  SV=6.68  BV=3.50
    {7240,4048,1040, 0, 0, 0},  //TV = 7.11(181 lines)  AV=2.97  SV=6.68  BV=3.40
    {7760,4048,1040, 0, 0, 0},  //TV = 7.01(194 lines)  AV=2.97  SV=6.68  BV=3.30
    {8280,4096,1032, 0, 0, 0},  //TV = 6.92(207 lines)  AV=2.97  SV=6.69  BV=3.20
    {8880,4096,1024, 0, 0, 0},  //TV = 6.82(222 lines)  AV=2.97  SV=6.68  BV=3.11
    {9520,4096,1024, 0, 0, 0},  //TV = 6.71(238 lines)  AV=2.97  SV=6.68  BV=3.01
    {10000,4160,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.71  BV=2.90
    {10000,4448,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.81  BV=2.81
    {10000,4768,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=6.91  BV=2.71
    {10000,5040,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.01  BV=2.60
    {10000,5472,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.11  BV=2.51
    {10000,5840,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.21  BV=2.40
    {10000,6096,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.31  BV=2.31
    {10000,6720,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.40  BV=2.21
    {10000,7086,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.51  BV=2.10
    {10000,7086,1136, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.62  BV=2.00
    {20000,4160,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.71  BV=1.90
    {20000,4448,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.81  BV=1.81
    {20000,4768,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=6.92  BV=1.70
    {20000,5152,1024, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.01  BV=1.61
    {20000,5472,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.11  BV=1.51
    {20000,5840,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.21  BV=1.40
    {30000,4160,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.72  BV=1.31
    {30000,4528,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.82  BV=1.21
    {30000,4768,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.93  BV=1.10
    {30000,5152,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.03  BV=1.00
    {40000,4160,1032, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=6.71  BV=0.90
    {40000,4448,1032, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=6.81  BV=0.81
    {40000,4768,1032, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=6.91  BV=0.71
    {50000,4096,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.69  BV=0.60
    {50000,4384,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.79  BV=0.51
    {50000,4688,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=6.90  BV=0.40
    {60000,4160,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.72  BV=0.31
    {60000,4528,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.82  BV=0.21
    {70000,4160,1024, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=6.70  BV=0.11
    {70000,4448,1032, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=6.81  BV=-0.00
    {80000,4160,1040, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=6.72  BV=-0.11
    {80000,4448,1040, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=6.82  BV=-0.20
    {90000,4240,1040, 0, 0, 0},  //TV = 3.47(2250 lines)  AV=2.97  SV=6.75  BV=-0.31
    {100000,4096,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.70  BV=-0.41
    {100000,4384,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.80  BV=-0.51
    {110000,4304,1032, 0, 0, 0},  //TV = 3.18(2750 lines)  AV=2.97  SV=6.76  BV=-0.61
    {120000,4240,1032, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=6.74  BV=-0.71
    {130000,4160,1040, 0, 0, 0},  //TV = 2.94(3250 lines)  AV=2.97  SV=6.72  BV=-0.81
    {140000,4160,1032, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=6.71  BV=-0.90
    {150000,4160,1032, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=6.71  BV=-1.00
    {160000,4160,1040, 0, 0, 0},  //TV = 2.64(4000 lines)  AV=2.97  SV=6.72  BV=-1.11
    {170000,4240,1024, 0, 0, 0},  //TV = 2.56(4250 lines)  AV=2.97  SV=6.73  BV=-1.20
    {180000,4240,1040, 0, 0, 0},  //TV = 2.47(4500 lines)  AV=2.97  SV=6.75  BV=-1.31
    {200000,4096,1040, 0, 0, 0},  //TV = 2.32(5000 lines)  AV=2.97  SV=6.70  BV=-1.41
    {210000,4160,1040, 0, 0, 0},  //TV = 2.25(5250 lines)  AV=2.97  SV=6.72  BV=-1.50
    {230000,4096,1040, 0, 0, 0},  //TV = 2.12(5750 lines)  AV=2.97  SV=6.70  BV=-1.61
    {240000,4240,1024, 0, 0, 0},  //TV = 2.06(6000 lines)  AV=2.97  SV=6.73  BV=-1.70
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO400Table =
{
    AETABLE_CAPTURE_ISO400,    //eAETableID
    117,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    -17,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_400, //ISO SPEED
    sCaptureISO400PLineTable_60Hz,
    sCaptureISO400PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO800PLineTable_60Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {480,1232,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.99  BV=9.01
    {480,1344,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.08  BV=8.91
    {480,1440,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.18  BV=8.81
    {480,1536,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.29  BV=8.71
    {480,1648,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.39  BV=8.61
    {480,1744,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.49  BV=8.50
    {480,1920,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.58  BV=8.41
    {480,2048,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.69  BV=8.31
    {480,2160,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.78  BV=8.22
    {480,2368,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.89  BV=8.11
    {480,2512,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.98  BV=8.01
    {480,2704,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.09  BV=7.91
    {480,2912,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.19  BV=7.81
    {480,3088,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.28  BV=7.71
    {480,3328,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.38  BV=7.62
    {480,3600,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.49  BV=7.50
    {480,3856,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.59  BV=7.40
    {480,4096,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.69  BV=7.31
    {480,4384,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.79  BV=7.21
    {480,4688,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.88  BV=7.11
    {480,5040,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.98  BV=7.02
    {480,5360,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.09  BV=6.91
    {480,5840,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.19  BV=6.81
    {480,6096,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.29  BV=6.71
    {480,6400,1072, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.39  BV=6.61
    {480,7086,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.48  BV=6.52
    {520,7086,1024, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=7.47  BV=6.41
    {560,6912,1048, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=7.47  BV=6.31
    {560,7086,1096, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=7.57  BV=6.21
    {640,7086,1024, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=7.47  BV=6.11
    {680,7086,1040, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=7.49  BV=6.00
    {720,7086,1048, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=7.50  BV=5.91
    {760,7086,1064, 0, 0, 0},  //TV = 10.36(19 lines)  AV=2.97  SV=7.52  BV=5.81
    {840,7086,1032, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=7.48  BV=5.71
    {880,7086,1056, 0, 0, 0},  //TV = 10.15(22 lines)  AV=2.97  SV=7.51  BV=5.61
    {960,7086,1040, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=7.49  BV=5.50
    {1040,7086,1032, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=7.48  BV=5.40
    {1080,7086,1056, 0, 0, 0},  //TV = 9.85(27 lines)  AV=2.97  SV=7.51  BV=5.31
    {1160,7086,1056, 0, 0, 0},  //TV = 9.75(29 lines)  AV=2.97  SV=7.51  BV=5.21
    {1280,7086,1032, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=7.48  BV=5.10
    {1360,7086,1032, 0, 0, 0},  //TV = 9.52(34 lines)  AV=2.97  SV=7.48  BV=5.01
    {1440,7086,1056, 0, 0, 0},  //TV = 9.44(36 lines)  AV=2.97  SV=7.51  BV=4.90
    {1560,7086,1040, 0, 0, 0},  //TV = 9.32(39 lines)  AV=2.97  SV=7.49  BV=4.80
    {1680,7086,1032, 0, 0, 0},  //TV = 9.22(42 lines)  AV=2.97  SV=7.48  BV=4.71
    {1800,7086,1032, 0, 0, 0},  //TV = 9.12(45 lines)  AV=2.97  SV=7.48  BV=4.61
    {1920,7086,1040, 0, 0, 0},  //TV = 9.02(48 lines)  AV=2.97  SV=7.49  BV=4.50
    {2080,7086,1032, 0, 0, 0},  //TV = 8.91(52 lines)  AV=2.97  SV=7.48  BV=4.40
    {2200,7086,1040, 0, 0, 0},  //TV = 8.83(55 lines)  AV=2.97  SV=7.49  BV=4.31
    {2400,7086,1024, 0, 0, 0},  //TV = 8.70(60 lines)  AV=2.97  SV=7.47  BV=4.20
    {2560,7086,1032, 0, 0, 0},  //TV = 8.61(64 lines)  AV=2.97  SV=7.48  BV=4.10
    {2720,7086,1032, 0, 0, 0},  //TV = 8.52(68 lines)  AV=2.97  SV=7.48  BV=4.01
    {2920,7086,1032, 0, 0, 0},  //TV = 8.42(73 lines)  AV=2.97  SV=7.48  BV=3.91
    {3160,7086,1024, 0, 0, 0},  //TV = 8.31(79 lines)  AV=2.97  SV=7.47  BV=3.81
    {3360,7086,1032, 0, 0, 0},  //TV = 8.22(84 lines)  AV=2.97  SV=7.48  BV=3.71
    {3600,7086,1032, 0, 0, 0},  //TV = 8.12(90 lines)  AV=2.97  SV=7.48  BV=3.61
    {3880,7086,1024, 0, 0, 0},  //TV = 8.01(97 lines)  AV=2.97  SV=7.47  BV=3.51
    {4160,7086,1032, 0, 0, 0},  //TV = 7.91(104 lines)  AV=2.97  SV=7.48  BV=3.40
    {4480,7086,1024, 0, 0, 0},  //TV = 7.80(112 lines)  AV=2.97  SV=7.47  BV=3.30
    {4800,6912,1048, 0, 0, 0},  //TV = 7.70(120 lines)  AV=2.97  SV=7.47  BV=3.21
    {5120,7086,1032, 0, 0, 0},  //TV = 7.61(128 lines)  AV=2.97  SV=7.48  BV=3.10
    {5480,7086,1032, 0, 0, 0},  //TV = 7.51(137 lines)  AV=2.97  SV=7.48  BV=3.00
    {5880,7086,1024, 0, 0, 0},  //TV = 7.41(147 lines)  AV=2.97  SV=7.47  BV=2.91
    {6280,7086,1032, 0, 0, 0},  //TV = 7.32(157 lines)  AV=2.97  SV=7.48  BV=2.81
    {6760,7086,1024, 0, 0, 0},  //TV = 7.21(169 lines)  AV=2.97  SV=7.47  BV=2.71
    {7240,7086,1024, 0, 0, 0},  //TV = 7.11(181 lines)  AV=2.97  SV=7.47  BV=2.61
    {7800,7086,1024, 0, 0, 0},  //TV = 7.00(195 lines)  AV=2.97  SV=7.47  BV=2.50
    {8320,7086,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.48  BV=2.40
    {8320,7086,1104, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.58  BV=2.30
    {8320,7086,1184, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.68  BV=2.20
    {8320,7086,1264, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.77  BV=2.11
    {8320,7086,1360, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.88  BV=2.00
    {8320,7086,1456, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.98  BV=1.90
    {8320,7086,1560, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=8.08  BV=1.80
    {8320,7086,1672, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=8.18  BV=1.70
    {8320,7086,1792, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=8.28  BV=1.60
    {8320,7086,1912, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=8.37  BV=1.51
    {16680,6912,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.47  BV=1.41
    {16680,7086,1096, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.57  BV=1.31
    {16680,7086,1176, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.67  BV=1.21
    {16680,7086,1256, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.76  BV=1.11
    {16680,7086,1352, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.87  BV=1.01
    {16680,7086,1448, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.97  BV=0.91
    {25000,7086,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=7.49  BV=0.80
    {25000,7086,1112, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=7.59  BV=0.71
    {25000,7086,1192, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=7.69  BV=0.60
    {25000,7086,1280, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=7.79  BV=0.50
    {33320,7086,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.48  BV=0.40
    {33320,7086,1104, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.58  BV=0.30
    {33320,7086,1184, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.68  BV=0.20
    {33320,7086,1264, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.77  BV=0.11
    {41680,7086,1096, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=7.57  BV=-0.01
    {41680,7086,1168, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=7.66  BV=-0.10
    {50000,7086,1048, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.50  BV=-0.21
    {50000,7086,1120, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.60  BV=-0.31
    {58320,7086,1032, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=7.48  BV=-0.41
    {58320,7086,1104, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=7.58  BV=-0.51
    {66680,7086,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=7.48  BV=-0.60
    {66680,7086,1112, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=7.59  BV=-0.71
    {75000,7086,1056, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=7.51  BV=-0.81
    {75000,7086,1136, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=7.62  BV=-0.91
    {83320,7086,1096, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=7.57  BV=-1.01
    {91680,7086,1064, 0, 0, 0},  //TV = 3.45(2292 lines)  AV=2.97  SV=7.52  BV=-1.11
    {100000,7086,1048, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.50  BV=-1.21
    {108320,7086,1032, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=7.48  BV=-1.30
    {116680,7086,1032, 0, 0, 0},  //TV = 3.10(2917 lines)  AV=2.97  SV=7.48  BV=-1.41
    {125000,7086,1032, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=7.48  BV=-1.51
    {133320,7086,1032, 0, 0, 0},  //TV = 2.91(3333 lines)  AV=2.97  SV=7.48  BV=-1.60
    {141680,7086,1040, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=7.49  BV=-1.70
    {150000,7086,1056, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=7.51  BV=-1.81
    {158320,7086,1072, 0, 0, 0},  //TV = 2.66(3958 lines)  AV=2.97  SV=7.53  BV=-1.90
    {175000,7086,1040, 0, 0, 0},  //TV = 2.51(4375 lines)  AV=2.97  SV=7.49  BV=-2.01
    {183320,7086,1064, 0, 0, 0},  //TV = 2.45(4583 lines)  AV=2.97  SV=7.52  BV=-2.11
    {200000,7086,1048, 0, 0, 0},  //TV = 2.32(5000 lines)  AV=2.97  SV=7.50  BV=-2.21
    {216640,7086,1032, 0, 0, 0},  //TV = 2.21(5416 lines)  AV=2.97  SV=7.48  BV=-2.30
    {233320,7086,1032, 0, 0, 0},  //TV = 2.10(5833 lines)  AV=2.97  SV=7.48  BV=-2.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO800PLineTable_50Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {480,1232,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.99  BV=9.01
    {480,1344,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.08  BV=8.91
    {480,1440,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.18  BV=8.81
    {480,1536,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.29  BV=8.71
    {480,1648,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.39  BV=8.61
    {480,1744,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.49  BV=8.50
    {480,1920,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.58  BV=8.41
    {480,2048,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.69  BV=8.31
    {480,2160,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.78  BV=8.22
    {480,2368,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.89  BV=8.11
    {480,2512,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.98  BV=8.01
    {480,2704,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.09  BV=7.91
    {480,2912,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.19  BV=7.81
    {480,3088,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.28  BV=7.71
    {480,3328,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.38  BV=7.62
    {480,3600,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.49  BV=7.50
    {480,3856,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.59  BV=7.40
    {480,4096,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.69  BV=7.31
    {480,4384,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.79  BV=7.21
    {480,4688,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.88  BV=7.11
    {480,5040,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.98  BV=7.02
    {480,5360,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.09  BV=6.91
    {480,5840,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.19  BV=6.81
    {480,6096,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.29  BV=6.71
    {480,6400,1072, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.39  BV=6.61
    {480,7086,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.48  BV=6.52
    {520,7086,1024, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=7.47  BV=6.41
    {560,6912,1048, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=7.47  BV=6.31
    {560,7086,1096, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=7.57  BV=6.21
    {640,7086,1024, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=7.47  BV=6.11
    {680,7086,1040, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=7.49  BV=6.00
    {720,7086,1048, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=7.50  BV=5.91
    {760,7086,1064, 0, 0, 0},  //TV = 10.36(19 lines)  AV=2.97  SV=7.52  BV=5.81
    {840,7086,1032, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=7.48  BV=5.71
    {880,7086,1056, 0, 0, 0},  //TV = 10.15(22 lines)  AV=2.97  SV=7.51  BV=5.61
    {960,7086,1040, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=7.49  BV=5.50
    {1040,7086,1032, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=7.48  BV=5.40
    {1080,7086,1056, 0, 0, 0},  //TV = 9.85(27 lines)  AV=2.97  SV=7.51  BV=5.31
    {1160,7086,1056, 0, 0, 0},  //TV = 9.75(29 lines)  AV=2.97  SV=7.51  BV=5.21
    {1280,7086,1032, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=7.48  BV=5.10
    {1360,7086,1032, 0, 0, 0},  //TV = 9.52(34 lines)  AV=2.97  SV=7.48  BV=5.01
    {1440,7086,1056, 0, 0, 0},  //TV = 9.44(36 lines)  AV=2.97  SV=7.51  BV=4.90
    {1560,7086,1040, 0, 0, 0},  //TV = 9.32(39 lines)  AV=2.97  SV=7.49  BV=4.80
    {1680,7086,1032, 0, 0, 0},  //TV = 9.22(42 lines)  AV=2.97  SV=7.48  BV=4.71
    {1800,7086,1032, 0, 0, 0},  //TV = 9.12(45 lines)  AV=2.97  SV=7.48  BV=4.61
    {1920,7086,1040, 0, 0, 0},  //TV = 9.02(48 lines)  AV=2.97  SV=7.49  BV=4.50
    {2080,7086,1032, 0, 0, 0},  //TV = 8.91(52 lines)  AV=2.97  SV=7.48  BV=4.40
    {2200,7086,1040, 0, 0, 0},  //TV = 8.83(55 lines)  AV=2.97  SV=7.49  BV=4.31
    {2400,7086,1024, 0, 0, 0},  //TV = 8.70(60 lines)  AV=2.97  SV=7.47  BV=4.20
    {2560,7086,1032, 0, 0, 0},  //TV = 8.61(64 lines)  AV=2.97  SV=7.48  BV=4.10
    {2720,7086,1032, 0, 0, 0},  //TV = 8.52(68 lines)  AV=2.97  SV=7.48  BV=4.01
    {2920,7086,1032, 0, 0, 0},  //TV = 8.42(73 lines)  AV=2.97  SV=7.48  BV=3.91
    {3160,7086,1024, 0, 0, 0},  //TV = 8.31(79 lines)  AV=2.97  SV=7.47  BV=3.81
    {3360,7086,1032, 0, 0, 0},  //TV = 8.22(84 lines)  AV=2.97  SV=7.48  BV=3.71
    {3600,7086,1032, 0, 0, 0},  //TV = 8.12(90 lines)  AV=2.97  SV=7.48  BV=3.61
    {3880,7086,1024, 0, 0, 0},  //TV = 8.01(97 lines)  AV=2.97  SV=7.47  BV=3.51
    {4160,7086,1032, 0, 0, 0},  //TV = 7.91(104 lines)  AV=2.97  SV=7.48  BV=3.40
    {4480,7086,1024, 0, 0, 0},  //TV = 7.80(112 lines)  AV=2.97  SV=7.47  BV=3.30
    {4800,6912,1048, 0, 0, 0},  //TV = 7.70(120 lines)  AV=2.97  SV=7.47  BV=3.21
    {5120,7086,1032, 0, 0, 0},  //TV = 7.61(128 lines)  AV=2.97  SV=7.48  BV=3.10
    {5480,7086,1032, 0, 0, 0},  //TV = 7.51(137 lines)  AV=2.97  SV=7.48  BV=3.00
    {5880,7086,1024, 0, 0, 0},  //TV = 7.41(147 lines)  AV=2.97  SV=7.47  BV=2.91
    {6280,7086,1032, 0, 0, 0},  //TV = 7.32(157 lines)  AV=2.97  SV=7.48  BV=2.81
    {6760,7086,1024, 0, 0, 0},  //TV = 7.21(169 lines)  AV=2.97  SV=7.47  BV=2.71
    {7240,7086,1024, 0, 0, 0},  //TV = 7.11(181 lines)  AV=2.97  SV=7.47  BV=2.61
    {7800,7086,1024, 0, 0, 0},  //TV = 7.00(195 lines)  AV=2.97  SV=7.47  BV=2.50
    {8360,7086,1024, 0, 0, 0},  //TV = 6.90(209 lines)  AV=2.97  SV=7.47  BV=2.40
    {8960,7086,1024, 0, 0, 0},  //TV = 6.80(224 lines)  AV=2.97  SV=7.47  BV=2.30
    {9600,6912,1048, 0, 0, 0},  //TV = 6.70(240 lines)  AV=2.97  SV=7.47  BV=2.21
    {10000,7086,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.51  BV=2.10
    {10000,7086,1128, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.61  BV=2.01
    {10000,7086,1208, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.71  BV=1.91
    {10000,7086,1296, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.81  BV=1.81
    {10000,7086,1392, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.91  BV=1.70
    {10000,7086,1488, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=8.01  BV=1.61
    {10000,7086,1592, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=8.11  BV=1.51
    {10000,7086,1704, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=8.20  BV=1.41
    {10000,7086,1832, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=8.31  BV=1.31
    {10000,7086,1960, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=8.41  BV=1.21
    {20000,7086,1048, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.50  BV=1.11
    {20000,7086,1136, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.62  BV=1.00
    {20000,7086,1216, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.72  BV=0.90
    {20000,7086,1296, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.81  BV=0.81
    {20000,7086,1392, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.91  BV=0.70
    {20000,7086,1496, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=8.02  BV=0.60
    {30000,7086,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.52  BV=0.51
    {30000,7086,1144, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.63  BV=0.40
    {30000,7086,1224, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.73  BV=0.30
    {30000,7086,1312, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.83  BV=0.20
    {40000,7086,1056, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=7.51  BV=0.10
    {40000,7086,1136, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=7.62  BV=-0.00
    {40000,7086,1224, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=7.73  BV=-0.11
    {50000,7086,1048, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.50  BV=-0.21
    {50000,7086,1120, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.60  BV=-0.31
    {50000,7086,1200, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.70  BV=-0.40
    {60000,7086,1072, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=7.53  BV=-0.51
    {60000,7086,1152, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=7.64  BV=-0.61
    {70000,7086,1056, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=7.51  BV=-0.71
    {70000,7086,1136, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=7.62  BV=-0.81
    {80000,7086,1064, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=7.52  BV=-0.91
    {80000,7086,1136, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=7.62  BV=-1.00
    {90000,7086,1088, 0, 0, 0},  //TV = 3.47(2250 lines)  AV=2.97  SV=7.56  BV=-1.11
    {100000,7086,1048, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.50  BV=-1.21
    {100000,7086,1120, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.60  BV=-1.31
    {110000,7086,1096, 0, 0, 0},  //TV = 3.18(2750 lines)  AV=2.97  SV=7.57  BV=-1.41
    {120000,7086,1072, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.53  BV=-1.51
    {130000,7086,1064, 0, 0, 0},  //TV = 2.94(3250 lines)  AV=2.97  SV=7.52  BV=-1.61
    {140000,7086,1056, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=7.51  BV=-1.71
    {150000,7086,1056, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=7.51  BV=-1.81
    {160000,7086,1064, 0, 0, 0},  //TV = 2.64(4000 lines)  AV=2.97  SV=7.52  BV=-1.91
    {170000,7086,1072, 0, 0, 0},  //TV = 2.56(4250 lines)  AV=2.97  SV=7.53  BV=-2.01
    {190000,7086,1024, 0, 0, 0},  //TV = 2.40(4750 lines)  AV=2.97  SV=7.47  BV=-2.10
    {200000,7086,1048, 0, 0, 0},  //TV = 2.32(5000 lines)  AV=2.97  SV=7.50  BV=-2.21
    {210000,7086,1064, 0, 0, 0},  //TV = 2.25(5250 lines)  AV=2.97  SV=7.52  BV=-2.30
    {230000,7086,1040, 0, 0, 0},  //TV = 2.12(5750 lines)  AV=2.97  SV=7.49  BV=-2.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO800Table =
{
    AETABLE_CAPTURE_ISO800,    //eAETableID
    124,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    -24,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_800, //ISO SPEED
    sCaptureISO800PLineTable_60Hz,
    sCaptureISO800PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO1600PLineTable_60Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {480,1232,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.99  BV=9.01
    {480,1344,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.08  BV=8.91
    {480,1440,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.18  BV=8.81
    {480,1536,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.29  BV=8.71
    {480,1648,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.39  BV=8.61
    {480,1744,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.49  BV=8.50
    {480,1920,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.58  BV=8.41
    {480,2048,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.69  BV=8.31
    {480,2160,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.78  BV=8.22
    {480,2368,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.89  BV=8.11
    {480,2512,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.98  BV=8.01
    {480,2704,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.09  BV=7.91
    {480,2912,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.19  BV=7.81
    {480,3088,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.28  BV=7.71
    {480,3328,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.38  BV=7.62
    {480,3600,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.49  BV=7.50
    {480,3856,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.59  BV=7.40
    {480,4096,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.69  BV=7.31
    {480,4384,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.79  BV=7.21
    {480,4688,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.88  BV=7.11
    {480,5040,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.98  BV=7.02
    {480,5360,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.09  BV=6.91
    {480,5840,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.19  BV=6.81
    {480,6096,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.29  BV=6.71
    {480,6400,1072, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.39  BV=6.61
    {480,7086,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.48  BV=6.52
    {520,7086,1024, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=7.47  BV=6.41
    {560,6912,1048, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=7.47  BV=6.31
    {560,7086,1096, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=7.57  BV=6.21
    {640,7086,1024, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=7.47  BV=6.11
    {680,7086,1040, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=7.49  BV=6.00
    {720,7086,1048, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=7.50  BV=5.91
    {760,7086,1064, 0, 0, 0},  //TV = 10.36(19 lines)  AV=2.97  SV=7.52  BV=5.81
    {840,7086,1032, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=7.48  BV=5.71
    {880,7086,1056, 0, 0, 0},  //TV = 10.15(22 lines)  AV=2.97  SV=7.51  BV=5.61
    {960,7086,1040, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=7.49  BV=5.50
    {1040,7086,1032, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=7.48  BV=5.40
    {1080,7086,1056, 0, 0, 0},  //TV = 9.85(27 lines)  AV=2.97  SV=7.51  BV=5.31
    {1160,7086,1056, 0, 0, 0},  //TV = 9.75(29 lines)  AV=2.97  SV=7.51  BV=5.21
    {1280,7086,1032, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=7.48  BV=5.10
    {1360,7086,1032, 0, 0, 0},  //TV = 9.52(34 lines)  AV=2.97  SV=7.48  BV=5.01
    {1440,7086,1056, 0, 0, 0},  //TV = 9.44(36 lines)  AV=2.97  SV=7.51  BV=4.90
    {1560,7086,1040, 0, 0, 0},  //TV = 9.32(39 lines)  AV=2.97  SV=7.49  BV=4.80
    {1680,7086,1032, 0, 0, 0},  //TV = 9.22(42 lines)  AV=2.97  SV=7.48  BV=4.71
    {1800,7086,1032, 0, 0, 0},  //TV = 9.12(45 lines)  AV=2.97  SV=7.48  BV=4.61
    {1920,7086,1040, 0, 0, 0},  //TV = 9.02(48 lines)  AV=2.97  SV=7.49  BV=4.50
    {2080,7086,1032, 0, 0, 0},  //TV = 8.91(52 lines)  AV=2.97  SV=7.48  BV=4.40
    {2200,7086,1040, 0, 0, 0},  //TV = 8.83(55 lines)  AV=2.97  SV=7.49  BV=4.31
    {2400,7086,1024, 0, 0, 0},  //TV = 8.70(60 lines)  AV=2.97  SV=7.47  BV=4.20
    {2560,7086,1032, 0, 0, 0},  //TV = 8.61(64 lines)  AV=2.97  SV=7.48  BV=4.10
    {2720,7086,1032, 0, 0, 0},  //TV = 8.52(68 lines)  AV=2.97  SV=7.48  BV=4.01
    {2920,7086,1032, 0, 0, 0},  //TV = 8.42(73 lines)  AV=2.97  SV=7.48  BV=3.91
    {3160,7086,1024, 0, 0, 0},  //TV = 8.31(79 lines)  AV=2.97  SV=7.47  BV=3.81
    {3360,7086,1032, 0, 0, 0},  //TV = 8.22(84 lines)  AV=2.97  SV=7.48  BV=3.71
    {3600,7086,1032, 0, 0, 0},  //TV = 8.12(90 lines)  AV=2.97  SV=7.48  BV=3.61
    {3880,7086,1024, 0, 0, 0},  //TV = 8.01(97 lines)  AV=2.97  SV=7.47  BV=3.51
    {4160,7086,1032, 0, 0, 0},  //TV = 7.91(104 lines)  AV=2.97  SV=7.48  BV=3.40
    {4480,7086,1024, 0, 0, 0},  //TV = 7.80(112 lines)  AV=2.97  SV=7.47  BV=3.30
    {4800,6912,1048, 0, 0, 0},  //TV = 7.70(120 lines)  AV=2.97  SV=7.47  BV=3.21
    {5120,7086,1032, 0, 0, 0},  //TV = 7.61(128 lines)  AV=2.97  SV=7.48  BV=3.10
    {5480,7086,1032, 0, 0, 0},  //TV = 7.51(137 lines)  AV=2.97  SV=7.48  BV=3.00
    {5880,7086,1024, 0, 0, 0},  //TV = 7.41(147 lines)  AV=2.97  SV=7.47  BV=2.91
    {6280,7086,1032, 0, 0, 0},  //TV = 7.32(157 lines)  AV=2.97  SV=7.48  BV=2.81
    {6760,7086,1024, 0, 0, 0},  //TV = 7.21(169 lines)  AV=2.97  SV=7.47  BV=2.71
    {7240,7086,1024, 0, 0, 0},  //TV = 7.11(181 lines)  AV=2.97  SV=7.47  BV=2.61
    {7800,7086,1024, 0, 0, 0},  //TV = 7.00(195 lines)  AV=2.97  SV=7.47  BV=2.50
    {8320,7086,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.48  BV=2.40
    {8320,7086,1104, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.58  BV=2.30
    {8320,7086,1184, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.68  BV=2.20
    {8320,7086,1264, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.77  BV=2.11
    {8320,7086,1360, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.88  BV=2.00
    {8320,7086,1456, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=7.98  BV=1.90
    {8320,7086,1560, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=8.08  BV=1.80
    {8320,7086,1672, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=8.18  BV=1.70
    {8320,7086,1792, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=8.28  BV=1.60
    {8320,7086,1912, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=8.37  BV=1.51
    {16680,6912,1048, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.47  BV=1.41
    {16680,7086,1096, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.57  BV=1.31
    {16680,7086,1176, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.67  BV=1.21
    {16680,7086,1256, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.76  BV=1.11
    {16680,7086,1352, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.87  BV=1.01
    {16680,7086,1448, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=7.97  BV=0.91
    {25000,7086,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=7.49  BV=0.80
    {25000,7086,1112, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=7.59  BV=0.71
    {25000,7086,1192, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=7.69  BV=0.60
    {25000,7086,1280, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=7.79  BV=0.50
    {33320,7086,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.48  BV=0.40
    {33320,7086,1104, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.58  BV=0.30
    {33320,7086,1184, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.68  BV=0.20
    {33320,7086,1264, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.77  BV=0.11
    {41680,7086,1096, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=7.57  BV=-0.01
    {41680,7086,1168, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=7.66  BV=-0.10
    {50000,7086,1048, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.50  BV=-0.21
    {50000,7086,1120, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.60  BV=-0.31
    {58320,7086,1032, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=7.48  BV=-0.41
    {58320,7086,1104, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=7.58  BV=-0.51
    {66680,7086,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=7.48  BV=-0.60
    {66680,7086,1112, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=7.59  BV=-0.71
    {75000,7086,1056, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=7.51  BV=-0.81
    {75000,7086,1136, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=7.62  BV=-0.91
    {83320,7086,1096, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=7.57  BV=-1.01
    {91680,7086,1064, 0, 0, 0},  //TV = 3.45(2292 lines)  AV=2.97  SV=7.52  BV=-1.11
    {100000,7086,1048, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.50  BV=-1.21
    {108320,7086,1032, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=7.48  BV=-1.30
    {116680,7086,1032, 0, 0, 0},  //TV = 3.10(2917 lines)  AV=2.97  SV=7.48  BV=-1.41
    {125000,7086,1032, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=7.48  BV=-1.51
    {133320,7086,1032, 0, 0, 0},  //TV = 2.91(3333 lines)  AV=2.97  SV=7.48  BV=-1.60
    {141680,7086,1040, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=7.49  BV=-1.70
    {150000,7086,1056, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=7.51  BV=-1.81
    {158320,7086,1072, 0, 0, 0},  //TV = 2.66(3958 lines)  AV=2.97  SV=7.53  BV=-1.90
    {175000,7086,1040, 0, 0, 0},  //TV = 2.51(4375 lines)  AV=2.97  SV=7.49  BV=-2.01
    {183320,7086,1064, 0, 0, 0},  //TV = 2.45(4583 lines)  AV=2.97  SV=7.52  BV=-2.11
    {200000,7086,1048, 0, 0, 0},  //TV = 2.32(5000 lines)  AV=2.97  SV=7.50  BV=-2.21
    {216640,7086,1032, 0, 0, 0},  //TV = 2.21(5416 lines)  AV=2.97  SV=7.48  BV=-2.30
    {233320,7086,1032, 0, 0, 0},  //TV = 2.10(5833 lines)  AV=2.97  SV=7.48  BV=-2.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO1600PLineTable_50Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {480,1232,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.99  BV=9.01
    {480,1344,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.08  BV=8.91
    {480,1440,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.18  BV=8.81
    {480,1536,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.29  BV=8.71
    {480,1648,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.39  BV=8.61
    {480,1744,1056, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.49  BV=8.50
    {480,1920,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.58  BV=8.41
    {480,2048,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.69  BV=8.31
    {480,2160,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.78  BV=8.22
    {480,2368,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.89  BV=8.11
    {480,2512,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=5.98  BV=8.01
    {480,2704,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.09  BV=7.91
    {480,2912,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.19  BV=7.81
    {480,3088,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.28  BV=7.71
    {480,3328,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.38  BV=7.62
    {480,3600,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.49  BV=7.50
    {480,3856,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.59  BV=7.40
    {480,4096,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.69  BV=7.31
    {480,4384,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.79  BV=7.21
    {480,4688,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.88  BV=7.11
    {480,5040,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=6.98  BV=7.02
    {480,5360,1040, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.09  BV=6.91
    {480,5840,1024, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.19  BV=6.81
    {480,6096,1048, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.29  BV=6.71
    {480,6400,1072, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.39  BV=6.61
    {480,7086,1032, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=7.48  BV=6.52
    {520,7086,1024, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=7.47  BV=6.41
    {560,6912,1048, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=7.47  BV=6.31
    {560,7086,1096, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=7.57  BV=6.21
    {640,7086,1024, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=7.47  BV=6.11
    {680,7086,1040, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=7.49  BV=6.00
    {720,7086,1048, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=7.50  BV=5.91
    {760,7086,1064, 0, 0, 0},  //TV = 10.36(19 lines)  AV=2.97  SV=7.52  BV=5.81
    {840,7086,1032, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=7.48  BV=5.71
    {880,7086,1056, 0, 0, 0},  //TV = 10.15(22 lines)  AV=2.97  SV=7.51  BV=5.61
    {960,7086,1040, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=7.49  BV=5.50
    {1040,7086,1032, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=7.48  BV=5.40
    {1080,7086,1056, 0, 0, 0},  //TV = 9.85(27 lines)  AV=2.97  SV=7.51  BV=5.31
    {1160,7086,1056, 0, 0, 0},  //TV = 9.75(29 lines)  AV=2.97  SV=7.51  BV=5.21
    {1280,7086,1032, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=7.48  BV=5.10
    {1360,7086,1032, 0, 0, 0},  //TV = 9.52(34 lines)  AV=2.97  SV=7.48  BV=5.01
    {1440,7086,1056, 0, 0, 0},  //TV = 9.44(36 lines)  AV=2.97  SV=7.51  BV=4.90
    {1560,7086,1040, 0, 0, 0},  //TV = 9.32(39 lines)  AV=2.97  SV=7.49  BV=4.80
    {1680,7086,1032, 0, 0, 0},  //TV = 9.22(42 lines)  AV=2.97  SV=7.48  BV=4.71
    {1800,7086,1032, 0, 0, 0},  //TV = 9.12(45 lines)  AV=2.97  SV=7.48  BV=4.61
    {1920,7086,1040, 0, 0, 0},  //TV = 9.02(48 lines)  AV=2.97  SV=7.49  BV=4.50
    {2080,7086,1032, 0, 0, 0},  //TV = 8.91(52 lines)  AV=2.97  SV=7.48  BV=4.40
    {2200,7086,1040, 0, 0, 0},  //TV = 8.83(55 lines)  AV=2.97  SV=7.49  BV=4.31
    {2400,7086,1024, 0, 0, 0},  //TV = 8.70(60 lines)  AV=2.97  SV=7.47  BV=4.20
    {2560,7086,1032, 0, 0, 0},  //TV = 8.61(64 lines)  AV=2.97  SV=7.48  BV=4.10
    {2720,7086,1032, 0, 0, 0},  //TV = 8.52(68 lines)  AV=2.97  SV=7.48  BV=4.01
    {2920,7086,1032, 0, 0, 0},  //TV = 8.42(73 lines)  AV=2.97  SV=7.48  BV=3.91
    {3160,7086,1024, 0, 0, 0},  //TV = 8.31(79 lines)  AV=2.97  SV=7.47  BV=3.81
    {3360,7086,1032, 0, 0, 0},  //TV = 8.22(84 lines)  AV=2.97  SV=7.48  BV=3.71
    {3600,7086,1032, 0, 0, 0},  //TV = 8.12(90 lines)  AV=2.97  SV=7.48  BV=3.61
    {3880,7086,1024, 0, 0, 0},  //TV = 8.01(97 lines)  AV=2.97  SV=7.47  BV=3.51
    {4160,7086,1032, 0, 0, 0},  //TV = 7.91(104 lines)  AV=2.97  SV=7.48  BV=3.40
    {4480,7086,1024, 0, 0, 0},  //TV = 7.80(112 lines)  AV=2.97  SV=7.47  BV=3.30
    {4800,6912,1048, 0, 0, 0},  //TV = 7.70(120 lines)  AV=2.97  SV=7.47  BV=3.21
    {5120,7086,1032, 0, 0, 0},  //TV = 7.61(128 lines)  AV=2.97  SV=7.48  BV=3.10
    {5480,7086,1032, 0, 0, 0},  //TV = 7.51(137 lines)  AV=2.97  SV=7.48  BV=3.00
    {5880,7086,1024, 0, 0, 0},  //TV = 7.41(147 lines)  AV=2.97  SV=7.47  BV=2.91
    {6280,7086,1032, 0, 0, 0},  //TV = 7.32(157 lines)  AV=2.97  SV=7.48  BV=2.81
    {6760,7086,1024, 0, 0, 0},  //TV = 7.21(169 lines)  AV=2.97  SV=7.47  BV=2.71
    {7240,7086,1024, 0, 0, 0},  //TV = 7.11(181 lines)  AV=2.97  SV=7.47  BV=2.61
    {7800,7086,1024, 0, 0, 0},  //TV = 7.00(195 lines)  AV=2.97  SV=7.47  BV=2.50
    {8360,7086,1024, 0, 0, 0},  //TV = 6.90(209 lines)  AV=2.97  SV=7.47  BV=2.40
    {8960,7086,1024, 0, 0, 0},  //TV = 6.80(224 lines)  AV=2.97  SV=7.47  BV=2.30
    {9600,6912,1048, 0, 0, 0},  //TV = 6.70(240 lines)  AV=2.97  SV=7.47  BV=2.21
    {10000,7086,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.51  BV=2.10
    {10000,7086,1128, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.61  BV=2.01
    {10000,7086,1208, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.71  BV=1.91
    {10000,7086,1296, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.81  BV=1.81
    {10000,7086,1392, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=7.91  BV=1.70
    {10000,7086,1488, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=8.01  BV=1.61
    {10000,7086,1592, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=8.11  BV=1.51
    {10000,7086,1704, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=8.20  BV=1.41
    {10000,7086,1832, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=8.31  BV=1.31
    {10000,7086,1960, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=8.41  BV=1.21
    {20000,7086,1048, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.50  BV=1.11
    {20000,7086,1136, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.62  BV=1.00
    {20000,7086,1216, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.72  BV=0.90
    {20000,7086,1296, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.81  BV=0.81
    {20000,7086,1392, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=7.91  BV=0.70
    {20000,7086,1496, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=8.02  BV=0.60
    {30000,7086,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.52  BV=0.51
    {30000,7086,1144, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.63  BV=0.40
    {30000,7086,1224, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.73  BV=0.30
    {30000,7086,1312, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.83  BV=0.20
    {40000,7086,1056, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=7.51  BV=0.10
    {40000,7086,1136, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=7.62  BV=-0.00
    {40000,7086,1224, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=7.73  BV=-0.11
    {50000,7086,1048, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.50  BV=-0.21
    {50000,7086,1120, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.60  BV=-0.31
    {50000,7086,1200, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=7.70  BV=-0.40
    {60000,7086,1072, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=7.53  BV=-0.51
    {60000,7086,1152, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=7.64  BV=-0.61
    {70000,7086,1056, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=7.51  BV=-0.71
    {70000,7086,1136, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=7.62  BV=-0.81
    {80000,7086,1064, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=7.52  BV=-0.91
    {80000,7086,1136, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=7.62  BV=-1.00
    {90000,7086,1088, 0, 0, 0},  //TV = 3.47(2250 lines)  AV=2.97  SV=7.56  BV=-1.11
    {100000,7086,1048, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.50  BV=-1.21
    {100000,7086,1120, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.60  BV=-1.31
    {110000,7086,1096, 0, 0, 0},  //TV = 3.18(2750 lines)  AV=2.97  SV=7.57  BV=-1.41
    {120000,7086,1072, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.53  BV=-1.51
    {130000,7086,1064, 0, 0, 0},  //TV = 2.94(3250 lines)  AV=2.97  SV=7.52  BV=-1.61
    {140000,7086,1056, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=7.51  BV=-1.71
    {150000,7086,1056, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=7.51  BV=-1.81
    {160000,7086,1064, 0, 0, 0},  //TV = 2.64(4000 lines)  AV=2.97  SV=7.52  BV=-1.91
    {170000,7086,1072, 0, 0, 0},  //TV = 2.56(4250 lines)  AV=2.97  SV=7.53  BV=-2.01
    {190000,7086,1024, 0, 0, 0},  //TV = 2.40(4750 lines)  AV=2.97  SV=7.47  BV=-2.10
    {200000,7086,1048, 0, 0, 0},  //TV = 2.32(5000 lines)  AV=2.97  SV=7.50  BV=-2.21
    {210000,7086,1064, 0, 0, 0},  //TV = 2.25(5250 lines)  AV=2.97  SV=7.52  BV=-2.30
    {230000,7086,1040, 0, 0, 0},  //TV = 2.12(5750 lines)  AV=2.97  SV=7.49  BV=-2.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO1600Table =
{
    AETABLE_CAPTURE_ISO1600,    //eAETableID
    124,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    -24,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_1600, //ISO SPEED
    sCaptureISO1600PLineTable_60Hz,
    sCaptureISO1600PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureStrobePLineTable_60Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1136,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.88  BV=5.00
    {8320,1232,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1296,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1440,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.18  BV=4.70
    {8320,1536,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.27  BV=4.61
    {8320,1648,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1744,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1856,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.58  BV=4.30
    {8320,2000,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2160,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.78  BV=4.10
    {16680,1136,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.87  BV=4.00
    {16680,1232,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1296,1064, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.07  BV=3.80
    {16680,1392,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.17  BV=3.71
    {16680,1536,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.27  BV=3.60
    {16680,1648,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.38  BV=3.50
    {25000,1136,1064, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=4.88  BV=3.41
    {25000,1232,1064, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.00  BV=3.29
    {25000,1344,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.09  BV=3.20
    {25000,1440,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.18  BV=3.11
    {33320,1136,1064, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.88  BV=3.00
    {33320,1232,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.97  BV=2.91
    {33320,1296,1064, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.07  BV=2.81
    {41680,1136,1040, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=4.85  BV=2.71
    {41680,1232,1032, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=4.96  BV=2.60
    {41680,1296,1048, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.05  BV=2.50
    {50000,1136,1064, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.88  BV=2.41
    {50000,1232,1056, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.99  BV=2.30
    {58320,1136,1056, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=4.87  BV=2.20
    {58320,1232,1040, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=4.97  BV=2.10
    {66680,1136,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=4.86  BV=2.02
    {66680,1232,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=4.97  BV=1.91
    {66680,1344,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.07  BV=1.81
    {66680,1392,1056, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.17  BV=1.71
    {66680,1536,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.27  BV=1.60
    {66680,1648,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.36  BV=1.51
    {66680,1744,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.47  BV=1.41
    {66680,1856,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.57  BV=1.31
    {66680,2000,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.68  BV=1.20
    {66680,2160,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.77  BV=1.11
    {66680,2304,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.87  BV=1.01
    {66680,2448,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.96  BV=0.92
    {66680,2688,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.07  BV=0.81
    {66680,2880,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.17  BV=0.71
    {66680,3024,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.26  BV=0.61
    {66680,3280,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.36  BV=0.52
    {66680,3552,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.47  BV=0.40
    {66680,3760,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.57  BV=0.31
    {66680,4048,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.67  BV=0.21
    {66680,4304,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.77  BV=0.11
    {75000,4160,1032, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=6.71  BV=-0.00
    {75000,4448,1040, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=6.82  BV=-0.11
    {83320,4304,1032, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=6.76  BV=-0.20
    {91680,4160,1040, 0, 0, 0},  //TV = 3.45(2292 lines)  AV=2.97  SV=6.72  BV=-0.30
    {100000,4096,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.69  BV=-0.40
    {100000,4384,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.79  BV=-0.49
    {100000,4688,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.88  BV=-0.59
    {100000,5040,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.99  BV=-0.70
    {100000,5472,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.10  BV=-0.80
    {100000,5840,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100000,6096,1056, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.30  BV=-1.00
    {100000,6720,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.39  BV=-1.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureStrobePLineTable_50Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1136,1040, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1136,1032, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1136,1032, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1184,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.91  BV=4.70
    {10000,1232,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.01  BV=4.60
    {10000,1344,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.50
    {10000,1440,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.21  BV=4.40
    {10000,1536,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.32  BV=4.30
    {10000,1696,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.42  BV=4.20
    {10000,1808,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1920,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.71  BV=3.90
    {10000,2208,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.81  BV=3.81
    {20000,1184,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=4.91  BV=3.70
    {20000,1232,1072, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.01  BV=3.60
    {20000,1344,1064, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.13  BV=3.49
    {20000,1440,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.21  BV=3.40
    {20000,1536,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.31  BV=3.31
    {20000,1648,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.41  BV=3.21
    {30000,1184,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=4.92  BV=3.11
    {30000,1296,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.04  BV=2.99
    {30000,1344,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.13  BV=2.90
    {30000,1488,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.23  BV=2.80
    {40000,1184,1040, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=4.91  BV=2.70
    {40000,1232,1072, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.01  BV=2.60
    {40000,1344,1056, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.11  BV=2.50
    {50000,1136,1064, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.88  BV=2.41
    {50000,1232,1056, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.99  BV=2.30
    {50000,1344,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.09  BV=2.20
    {60000,1184,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=4.93  BV=2.10
    {60000,1296,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.02  BV=2.01
    {60000,1344,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.11  BV=1.91
    {60000,1488,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.22  BV=1.81
    {60000,1536,1064, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.32  BV=1.71
    {60000,1696,1032, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.42  BV=1.61
    {60000,1808,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.52  BV=1.51
    {60000,1952,1032, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.62  BV=1.41
    {60000,2048,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.72  BV=1.31
    {60000,2256,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.82  BV=1.21
    {60000,2416,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.92  BV=1.11
    {60000,2560,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.02  BV=1.01
    {60000,2768,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.11  BV=0.92
    {60000,2992,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.22  BV=0.80
    {60000,3200,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.32  BV=0.71
    {60000,3408,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.41  BV=0.62
    {60000,3648,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.51  BV=0.52
    {60000,3920,1032, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.63  BV=0.40
    {60000,4160,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.72  BV=0.31
    {60000,4448,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.82  BV=0.21
    {70000,4096,1040, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=6.70  BV=0.11
    {70000,4448,1040, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=6.82  BV=-0.01
    {80000,4160,1040, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=6.72  BV=-0.11
    {80000,4448,1040, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=6.82  BV=-0.20
    {90000,4304,1024, 0, 0, 0},  //TV = 3.47(2250 lines)  AV=2.97  SV=6.75  BV=-0.30
    {100000,4096,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.69  BV=-0.40
    {100000,4384,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.79  BV=-0.49
    {100000,4688,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.88  BV=-0.59
    {100000,5040,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.99  BV=-0.70
    {100000,5472,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.10  BV=-0.80
    {100000,5840,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100000,6096,1056, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.30  BV=-1.00
    {100000,6720,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.39  BV=-1.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_StrobeTable =
{
    AETABLE_STROBE,    //eAETableID
    111,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    -11,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCaptureStrobePLineTable_60Hz,
    sCaptureStrobePLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene1PLineTable_60Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1136,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.88  BV=5.00
    {8320,1232,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1296,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1440,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.18  BV=4.70
    {8320,1536,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.27  BV=4.61
    {8320,1648,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1744,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1856,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.58  BV=4.30
    {8320,2000,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2160,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.78  BV=4.10
    {16680,1136,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.87  BV=4.00
    {16680,1232,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1296,1064, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.07  BV=3.80
    {16680,1392,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.17  BV=3.71
    {16680,1536,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.27  BV=3.60
    {16680,1648,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.38  BV=3.50
    {25000,1136,1064, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=4.88  BV=3.41
    {25000,1232,1064, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.00  BV=3.29
    {25000,1344,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.09  BV=3.20
    {25000,1440,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.18  BV=3.11
    {33320,1136,1064, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.88  BV=3.00
    {33320,1232,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.97  BV=2.91
    {33320,1296,1064, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.07  BV=2.81
    {41680,1136,1040, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=4.85  BV=2.71
    {41680,1232,1032, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=4.96  BV=2.60
    {41680,1296,1048, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.05  BV=2.50
    {50000,1136,1064, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.88  BV=2.41
    {50000,1232,1056, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.99  BV=2.30
    {58320,1136,1056, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=4.87  BV=2.20
    {58320,1232,1040, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=4.97  BV=2.10
    {66680,1136,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=4.86  BV=2.02
    {66680,1232,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=4.97  BV=1.91
    {66680,1344,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.07  BV=1.81
    {66680,1392,1056, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.17  BV=1.71
    {66680,1536,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.27  BV=1.60
    {66680,1648,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.36  BV=1.51
    {66680,1744,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.47  BV=1.41
    {66680,1856,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.57  BV=1.31
    {66680,2000,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.68  BV=1.20
    {66680,2160,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.77  BV=1.11
    {66680,2304,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.87  BV=1.01
    {66680,2448,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.96  BV=0.92
    {66680,2688,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.07  BV=0.81
    {66680,2880,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.17  BV=0.71
    {66680,3088,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.27  BV=0.61
    {66680,3280,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.37  BV=0.51
    {75000,3136,1032, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=6.30  BV=0.40
    {75000,3328,1040, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=6.40  BV=0.31
    {83320,3248,1032, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=6.35  BV=0.20
    {91680,3136,1040, 0, 0, 0},  //TV = 3.45(2292 lines)  AV=2.97  SV=6.32  BV=0.10
    {100000,3136,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.29  BV=0.00
    {100000,3328,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.39  BV=-0.10
    {100000,3600,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.49  BV=-0.20
    {100000,3856,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.59  BV=-0.30
    {100000,4096,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.70  BV=-0.41
    {108320,4096,1032, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=6.69  BV=-0.51
    {108320,4384,1024, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=6.78  BV=-0.60
    {116680,4304,1040, 0, 0, 0},  //TV = 3.10(2917 lines)  AV=2.97  SV=6.77  BV=-0.70
    {125000,4304,1040, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=6.77  BV=-0.80
    {125000,4688,1024, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=6.87  BV=-0.90
    {125000,4960,1032, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=6.97  BV=-0.99
    {125000,5360,1024, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=7.07  BV=-1.10
    {125000,5712,1032, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=7.17  BV=-1.20
    {125000,6096,1040, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=7.27  BV=-1.30
    {125000,6400,1064, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=7.38  BV=-1.41
    {125000,7086,1032, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=7.48  BV=-1.51
    {133320,7086,1032, 0, 0, 0},  //TV = 2.91(3333 lines)  AV=2.97  SV=7.48  BV=-1.60
    {141680,7086,1048, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=7.50  BV=-1.71
    {150000,7086,1056, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=7.51  BV=-1.81
    {158320,7086,1072, 0, 0, 0},  //TV = 2.66(3958 lines)  AV=2.97  SV=7.53  BV=-1.90
    {175000,7086,1040, 0, 0, 0},  //TV = 2.51(4375 lines)  AV=2.97  SV=7.49  BV=-2.01
    {183320,7086,1064, 0, 0, 0},  //TV = 2.45(4583 lines)  AV=2.97  SV=7.52  BV=-2.11
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene1PLineTable_50Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1136,1040, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1136,1032, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1136,1032, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1184,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.91  BV=4.70
    {10000,1232,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.01  BV=4.60
    {10000,1344,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.50
    {10000,1440,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.21  BV=4.40
    {10000,1536,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.32  BV=4.30
    {10000,1696,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.42  BV=4.20
    {10000,1808,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1920,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.71  BV=3.90
    {10000,2208,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.81  BV=3.81
    {20000,1184,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=4.91  BV=3.70
    {20000,1232,1072, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.01  BV=3.60
    {20000,1344,1064, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.13  BV=3.49
    {20000,1440,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.21  BV=3.40
    {20000,1536,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.31  BV=3.31
    {20000,1648,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.41  BV=3.21
    {30000,1184,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=4.92  BV=3.11
    {30000,1296,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.03  BV=3.00
    {30000,1344,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.13  BV=2.90
    {30000,1488,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.23  BV=2.80
    {40000,1184,1040, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=4.91  BV=2.70
    {40000,1232,1080, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.02  BV=2.59
    {40000,1344,1056, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.11  BV=2.50
    {50000,1136,1064, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.88  BV=2.41
    {50000,1232,1056, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.99  BV=2.30
    {50000,1344,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.09  BV=2.20
    {60000,1184,1048, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=4.92  BV=2.11
    {60000,1296,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.02  BV=2.01
    {60000,1344,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.11  BV=1.91
    {60000,1488,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.22  BV=1.81
    {60000,1536,1064, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.32  BV=1.71
    {60000,1696,1032, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.42  BV=1.61
    {60000,1808,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.52  BV=1.51
    {60000,1952,1032, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.62  BV=1.41
    {60000,2048,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.72  BV=1.31
    {60000,2256,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.82  BV=1.21
    {60000,2416,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.92  BV=1.11
    {60000,2560,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.02  BV=1.01
    {60000,2768,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.11  BV=0.92
    {60000,2992,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.22  BV=0.80
    {60000,3200,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.32  BV=0.71
    {60000,3408,1032, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.42  BV=0.61
    {70000,3136,1032, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=6.30  BV=0.50
    {70000,3328,1040, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=6.40  BV=0.41
    {80000,3136,1040, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=6.32  BV=0.30
    {80000,3328,1048, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=6.41  BV=0.20
    {90000,3200,1040, 0, 0, 0},  //TV = 3.47(2250 lines)  AV=2.97  SV=6.34  BV=0.10
    {100000,3136,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.29  BV=0.00
    {100000,3328,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.39  BV=-0.10
    {100000,3600,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.49  BV=-0.20
    {100000,3856,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.59  BV=-0.30
    {100000,4096,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.70  BV=-0.41
    {100000,4384,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.80  BV=-0.51
    {110000,4304,1032, 0, 0, 0},  //TV = 3.18(2750 lines)  AV=2.97  SV=6.76  BV=-0.61
    {120000,4240,1032, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=6.74  BV=-0.71
    {120000,4528,1032, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=6.83  BV=-0.80
    {120000,4864,1024, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=6.93  BV=-0.90
    {120000,5152,1032, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.02  BV=-0.99
    {120000,5584,1024, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.13  BV=-1.10
    {120000,5968,1032, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.23  BV=-1.20
    {120000,6400,1032, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.33  BV=-1.30
    {120000,6912,1024, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.43  BV=-1.40
    {120000,7086,1072, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.53  BV=-1.51
    {130000,7086,1064, 0, 0, 0},  //TV = 2.94(3250 lines)  AV=2.97  SV=7.52  BV=-1.61
    {140000,7086,1056, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=7.51  BV=-1.71
    {150000,7086,1056, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=7.51  BV=-1.81
    {160000,7086,1064, 0, 0, 0},  //TV = 2.64(4000 lines)  AV=2.97  SV=7.52  BV=-1.91
    {170000,7086,1072, 0, 0, 0},  //TV = 2.56(4250 lines)  AV=2.97  SV=7.53  BV=-2.01
    {190000,7086,1024, 0, 0, 0},  //TV = 2.40(4750 lines)  AV=2.97  SV=7.47  BV=-2.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable1 =
{
    AETABLE_SCENE_INDEX1,    //eAETableID
    121,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    -21,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -10,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene1PLineTable_60Hz,
    sAEScene1PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene2PLineTable_60Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1136,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.88  BV=5.00
    {8320,1232,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1296,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1440,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.18  BV=4.70
    {8320,1536,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.27  BV=4.61
    {8320,1648,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1744,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.47  BV=4.41
    {8320,1856,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.57  BV=4.31
    {8320,2000,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2160,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.77  BV=4.11
    {16680,1136,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.87  BV=4.00
    {16680,1232,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1344,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.08  BV=3.79
    {16680,1440,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.18  BV=3.70
    {16680,1536,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.27  BV=3.60
    {16680,1648,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.38  BV=3.50
    {25000,1136,1064, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=4.88  BV=3.41
    {25000,1232,1056, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=4.99  BV=3.30
    {25000,1344,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.09  BV=3.20
    {25000,1440,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.18  BV=3.11
    {33320,1136,1056, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.87  BV=3.01
    {33320,1232,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.97  BV=2.91
    {33320,1296,1056, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.06  BV=2.82
    {33320,1392,1056, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.17  BV=2.71
    {33320,1536,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.27  BV=2.60
    {33320,1648,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.36  BV=2.51
    {33320,1744,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.47  BV=2.41
    {33320,1856,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.57  BV=2.31
    {33320,2000,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.68  BV=2.20
    {33320,2160,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.77  BV=2.11
    {33320,2304,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.87  BV=2.01
    {33320,2512,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.97  BV=1.91
    {33320,2688,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.07  BV=1.81
    {33320,2880,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.17  BV=1.71
    {33320,3024,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.26  BV=1.62
    {33320,3280,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.37  BV=1.51
    {33320,3552,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.47  BV=1.41
    {33320,3760,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.57  BV=1.31
    {33320,4048,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.67  BV=1.21
    {33320,4304,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.76  BV=1.12
    {33320,4688,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.87  BV=1.01
    {33320,4960,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=6.98  BV=0.90
    {33320,5360,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.07  BV=0.81
    {33320,5712,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.17  BV=0.71
    {33320,6096,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.27  BV=0.60
    {33320,6400,1056, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.37  BV=0.51
    {33320,6912,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=7.47  BV=0.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene2PLineTable_50Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1136,1040, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1136,1032, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1136,1032, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1184,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.91  BV=4.70
    {10000,1232,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.01  BV=4.60
    {10000,1344,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.50
    {10000,1440,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.21  BV=4.40
    {10000,1536,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.31  BV=4.31
    {10000,1648,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.41  BV=4.21
    {10000,1808,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1952,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.62  BV=3.99
    {10000,2048,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.71  BV=3.90
    {10000,2208,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.81  BV=3.81
    {20000,1184,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=4.91  BV=3.70
    {20000,1232,1072, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.01  BV=3.60
    {20000,1344,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.11  BV=3.50
    {20000,1440,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.21  BV=3.40
    {20000,1536,1064, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.32  BV=3.30
    {20000,1696,1032, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.42  BV=3.20
    {30000,1184,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=4.92  BV=3.11
    {30000,1296,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.02  BV=3.01
    {30000,1344,1056, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.11  BV=2.91
    {30000,1488,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.22  BV=2.81
    {30000,1536,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.32  BV=2.71
    {30000,1696,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.42  BV=2.61
    {30000,1808,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.52  BV=2.51
    {30000,1952,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.62  BV=2.41
    {30000,2048,1056, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.72  BV=2.31
    {30000,2256,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.82  BV=2.21
    {30000,2416,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.92  BV=2.11
    {30000,2560,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.02  BV=2.01
    {30000,2768,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.11  BV=1.92
    {30000,2992,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.22  BV=1.80
    {30000,3200,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.32  BV=1.71
    {30000,3408,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.41  BV=1.62
    {30000,3648,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.51  BV=1.52
    {30000,3920,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.63  BV=1.40
    {30000,4160,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.72  BV=1.31
    {30000,4448,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.82  BV=1.21
    {30000,4768,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.92  BV=1.11
    {30000,5152,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.01  BV=1.02
    {30000,5584,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.13  BV=0.90
    {30000,5968,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.22  BV=0.81
    {30000,6400,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.32  BV=0.71
    {30000,6720,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.41  BV=0.62
    {30000,7086,1056, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.51  BV=0.52
    {30000,7086,1136, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=7.62  BV=0.41
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable2 =
{
    AETABLE_SCENE_INDEX2,    //eAETableID
    96,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    4,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene2PLineTable_60Hz,
    sAEScene2PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene3PLineTable_60Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1136,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.88  BV=5.00
    {8320,1232,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1296,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1440,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.18  BV=4.70
    {8320,1536,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.27  BV=4.61
    {8320,1648,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1744,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1856,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.58  BV=4.30
    {8320,2000,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2160,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.78  BV=4.10
    {16680,1136,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.87  BV=4.00
    {16680,1232,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1296,1064, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.07  BV=3.80
    {16680,1392,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.17  BV=3.71
    {16680,1536,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.27  BV=3.60
    {16680,1648,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.38  BV=3.50
    {25000,1136,1064, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=4.88  BV=3.41
    {25000,1232,1064, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.00  BV=3.29
    {25000,1344,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.09  BV=3.20
    {25000,1440,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.18  BV=3.11
    {33320,1136,1056, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.87  BV=3.01
    {33320,1232,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.97  BV=2.91
    {33320,1296,1056, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.06  BV=2.82
    {33320,1392,1056, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.17  BV=2.71
    {33320,1536,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.27  BV=2.60
    {33320,1648,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.36  BV=2.51
    {33320,1744,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.47  BV=2.41
    {33320,1856,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.57  BV=2.31
    {33320,2000,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.68  BV=2.20
    {33320,2160,1032, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.77  BV=2.11
    {33320,2304,1048, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.88  BV=2.00
    {33320,2512,1024, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.97  BV=1.91
    {41680,2112,1048, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.76  BV=1.80
    {41680,2304,1024, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.85  BV=1.71
    {50000,2048,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.69  BV=1.60
    {50000,2208,1024, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.79  BV=1.51
    {50000,2368,1024, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.89  BV=1.41
    {58320,2160,1032, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=5.77  BV=1.30
    {58320,2304,1040, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=5.87  BV=1.20
    {66680,2160,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.77  BV=1.11
    {66680,2304,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.87  BV=1.01
    {66680,2448,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.96  BV=0.92
    {66680,2688,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.07  BV=0.81
    {66680,2880,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.17  BV=0.71
    {66680,3024,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.26  BV=0.61
    {66680,3280,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.36  BV=0.52
    {66680,3552,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.47  BV=0.40
    {66680,3760,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.57  BV=0.31
    {66680,4048,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.67  BV=0.21
    {66680,4304,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=6.77  BV=0.11
    {75000,4160,1032, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=6.71  BV=-0.00
    {75000,4448,1040, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=6.82  BV=-0.11
    {83320,4304,1032, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=6.76  BV=-0.20
    {91680,4160,1040, 0, 0, 0},  //TV = 3.45(2292 lines)  AV=2.97  SV=6.72  BV=-0.30
    {100000,4096,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.69  BV=-0.40
    {100000,4384,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.79  BV=-0.49
    {100000,4688,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.88  BV=-0.59
    {100000,5040,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.99  BV=-0.70
    {100000,5472,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.10  BV=-0.80
    {100000,5840,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100000,6096,1056, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.30  BV=-1.00
    {100000,6720,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.39  BV=-1.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene3PLineTable_50Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1136,1040, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1136,1032, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1136,1032, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1184,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.91  BV=4.70
    {10000,1232,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.01  BV=4.60
    {10000,1344,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.50
    {10000,1440,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.21  BV=4.40
    {10000,1536,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.32  BV=4.30
    {10000,1696,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.42  BV=4.20
    {10000,1808,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1920,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.71  BV=3.90
    {10000,2208,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.81  BV=3.81
    {20000,1184,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=4.91  BV=3.70
    {20000,1232,1072, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.01  BV=3.60
    {20000,1344,1064, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.13  BV=3.49
    {20000,1440,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.21  BV=3.40
    {20000,1536,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.31  BV=3.31
    {20000,1648,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.41  BV=3.21
    {30000,1184,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=4.92  BV=3.11
    {30000,1296,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.02  BV=3.01
    {30000,1344,1056, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.11  BV=2.91
    {30000,1488,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.22  BV=2.81
    {30000,1536,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.32  BV=2.71
    {30000,1696,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.42  BV=2.61
    {30000,1808,1040, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.52  BV=2.51
    {30000,1952,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.62  BV=2.41
    {30000,2048,1056, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.72  BV=2.31
    {30000,2256,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.82  BV=2.21
    {30000,2416,1024, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.92  BV=2.11
    {30000,2560,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=6.03  BV=2.00
    {40000,2048,1048, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.71  BV=1.90
    {40000,2208,1040, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.81  BV=1.81
    {40000,2368,1048, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.92  BV=1.69
    {50000,2048,1032, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.69  BV=1.60
    {50000,2208,1024, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.79  BV=1.51
    {50000,2368,1024, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.89  BV=1.41
    {60000,2112,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.72  BV=1.31
    {60000,2256,1032, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.83  BV=1.20
    {60000,2416,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.92  BV=1.11
    {60000,2560,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.02  BV=1.01
    {60000,2768,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.11  BV=0.92
    {60000,2992,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.22  BV=0.80
    {60000,3200,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.32  BV=0.71
    {60000,3408,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.41  BV=0.62
    {60000,3648,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.51  BV=0.52
    {60000,3920,1032, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.63  BV=0.40
    {60000,4160,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.72  BV=0.31
    {60000,4528,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=6.82  BV=0.21
    {70000,4096,1040, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=6.70  BV=0.11
    {70000,4448,1040, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=6.82  BV=-0.01
    {80000,4160,1040, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=6.72  BV=-0.11
    {80000,4448,1040, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=6.82  BV=-0.20
    {90000,4304,1024, 0, 0, 0},  //TV = 3.47(2250 lines)  AV=2.97  SV=6.75  BV=-0.30
    {100000,4096,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.69  BV=-0.40
    {100000,4384,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.79  BV=-0.49
    {100000,4688,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.88  BV=-0.59
    {100000,5040,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.99  BV=-0.70
    {100000,5472,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.10  BV=-0.80
    {100000,5840,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100000,6096,1056, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.30  BV=-1.00
    {100000,6720,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=7.39  BV=-1.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable3 =
{
    AETABLE_SCENE_INDEX3,    //eAETableID
    111,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    -11,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene3PLineTable_60Hz,
    sAEScene3PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene4PLineTable_60Hz =
{
{
    {250000,1696,1032, 0, 0, 0},  //TV = 2.00(6250 lines)  AV=2.97  SV=5.42  BV=-0.45
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene4PLineTable_50Hz =
{
{
    {250000,1696,1032, 0, 0, 0},  //TV = 2.00(6250 lines)  AV=2.97  SV=5.42  BV=-0.45
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable4 =
{
    AETABLE_SCENE_INDEX4,    //eAETableID
    1,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    -4,    //i4MaxBV
    -4,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene4PLineTable_60Hz,
    sAEScene4PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene5PLineTable_60Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8320,1136,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.88  BV=5.00
    {8320,1232,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=4.97  BV=4.91
    {8320,1296,1064, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.07  BV=4.81
    {8320,1440,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.18  BV=4.70
    {8320,1536,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.27  BV=4.61
    {8320,1648,1032, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.38  BV=4.50
    {8320,1744,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.48  BV=4.40
    {8320,1856,1056, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.58  BV=4.30
    {8320,2000,1048, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.68  BV=4.20
    {8320,2160,1040, 0, 0, 0},  //TV = 6.91(208 lines)  AV=2.97  SV=5.78  BV=4.10
    {16680,1136,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.87  BV=4.00
    {16680,1232,1040, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=4.97  BV=3.91
    {16680,1296,1064, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.07  BV=3.80
    {16680,1392,1056, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.17  BV=3.71
    {16680,1536,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.27  BV=3.60
    {16680,1648,1032, 0, 0, 0},  //TV = 5.91(417 lines)  AV=2.97  SV=5.38  BV=3.50
    {25000,1136,1064, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=4.88  BV=3.41
    {25000,1232,1064, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.00  BV=3.29
    {25000,1344,1040, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.09  BV=3.20
    {25000,1440,1032, 0, 0, 0},  //TV = 5.32(625 lines)  AV=2.97  SV=5.18  BV=3.11
    {33320,1136,1064, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.88  BV=3.00
    {33320,1232,1040, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=4.97  BV=2.91
    {33320,1296,1064, 0, 0, 0},  //TV = 4.91(833 lines)  AV=2.97  SV=5.07  BV=2.81
    {41680,1136,1040, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=4.85  BV=2.71
    {41680,1232,1032, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=4.96  BV=2.60
    {41680,1296,1048, 0, 0, 0},  //TV = 4.58(1042 lines)  AV=2.97  SV=5.05  BV=2.50
    {50000,1136,1064, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.88  BV=2.41
    {50000,1232,1056, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.99  BV=2.30
    {58320,1136,1056, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=4.87  BV=2.20
    {58320,1232,1040, 0, 0, 0},  //TV = 4.10(1458 lines)  AV=2.97  SV=4.97  BV=2.10
    {66680,1136,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=4.86  BV=2.02
    {66680,1232,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=4.97  BV=1.91
    {66680,1344,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.07  BV=1.81
    {66680,1392,1056, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.17  BV=1.71
    {66680,1536,1032, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.27  BV=1.60
    {66680,1648,1024, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.36  BV=1.51
    {66680,1744,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.47  BV=1.41
    {66680,1856,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.57  BV=1.31
    {66680,2000,1048, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.68  BV=1.20
    {66680,2160,1040, 0, 0, 0},  //TV = 3.91(1667 lines)  AV=2.97  SV=5.78  BV=1.10
    {75000,2048,1040, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=5.70  BV=1.01
    {75000,2208,1040, 0, 0, 0},  //TV = 3.74(1875 lines)  AV=2.97  SV=5.81  BV=0.90
    {83320,2112,1048, 0, 0, 0},  //TV = 3.59(2083 lines)  AV=2.97  SV=5.76  BV=0.80
    {91680,2048,1056, 0, 0, 0},  //TV = 3.45(2292 lines)  AV=2.97  SV=5.72  BV=0.70
    {100000,2048,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.69  BV=0.60
    {100000,2160,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.78  BV=0.52
    {100000,2368,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.89  BV=0.41
    {100000,2512,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.98  BV=0.31
    {100000,2704,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.08  BV=0.21
    {100000,2912,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.19  BV=0.11
    {100000,3136,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.29  BV=0.00
    {100000,3328,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.39  BV=-0.10
    {100000,3600,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.49  BV=-0.20
    {100000,3856,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.59  BV=-0.30
    {100000,4096,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.70  BV=-0.41
    {108320,4096,1032, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=6.69  BV=-0.51
    {108320,4384,1024, 0, 0, 0},  //TV = 3.21(2708 lines)  AV=2.97  SV=6.78  BV=-0.60
    {116680,4304,1040, 0, 0, 0},  //TV = 3.10(2917 lines)  AV=2.97  SV=6.77  BV=-0.70
    {125000,4304,1040, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=6.77  BV=-0.80
    {125000,4688,1024, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=6.87  BV=-0.90
    {125000,4960,1032, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=6.97  BV=-0.99
    {125000,5360,1024, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=7.07  BV=-1.10
    {125000,5712,1032, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=7.17  BV=-1.20
    {125000,6096,1040, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=7.27  BV=-1.30
    {125000,6400,1064, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=7.38  BV=-1.41
    {125000,7086,1032, 0, 0, 0},  //TV = 3.00(3125 lines)  AV=2.97  SV=7.48  BV=-1.51
    {133320,7086,1032, 0, 0, 0},  //TV = 2.91(3333 lines)  AV=2.97  SV=7.48  BV=-1.60
    {141680,7086,1048, 0, 0, 0},  //TV = 2.82(3542 lines)  AV=2.97  SV=7.50  BV=-1.71
    {150000,7086,1056, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=7.51  BV=-1.81
    {158320,7086,1072, 0, 0, 0},  //TV = 2.66(3958 lines)  AV=2.97  SV=7.53  BV=-1.90
    {175000,7086,1040, 0, 0, 0},  //TV = 2.51(4375 lines)  AV=2.97  SV=7.49  BV=-2.01
    {183320,7086,1064, 0, 0, 0},  //TV = 2.45(4583 lines)  AV=2.97  SV=7.52  BV=-2.11
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene5PLineTable_50Hz =
{
{
    {280,1136,1056, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.87  BV=9.90
    {280,1232,1040, 0, 0, 0},  //TV = 11.80(7 lines)  AV=2.97  SV=4.97  BV=9.81
    {320,1136,1064, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.88  BV=9.70
    {320,1232,1040, 0, 0, 0},  //TV = 11.61(8 lines)  AV=2.97  SV=4.97  BV=9.61
    {360,1184,1040, 0, 0, 0},  //TV = 11.44(9 lines)  AV=2.97  SV=4.91  BV=9.50
    {400,1136,1048, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.86  BV=9.40
    {400,1232,1040, 0, 0, 0},  //TV = 11.29(10 lines)  AV=2.97  SV=4.97  BV=9.29
    {440,1184,1048, 0, 0, 0},  //TV = 11.15(11 lines)  AV=2.97  SV=4.92  BV=9.20
    {480,1136,1064, 0, 0, 0},  //TV = 11.02(12 lines)  AV=2.97  SV=4.88  BV=9.11
    {520,1136,1064, 0, 0, 0},  //TV = 10.91(13 lines)  AV=2.97  SV=4.88  BV=9.00
    {560,1136,1056, 0, 0, 0},  //TV = 10.80(14 lines)  AV=2.97  SV=4.87  BV=8.90
    {600,1136,1056, 0, 0, 0},  //TV = 10.70(15 lines)  AV=2.97  SV=4.87  BV=8.80
    {640,1136,1064, 0, 0, 0},  //TV = 10.61(16 lines)  AV=2.97  SV=4.88  BV=8.70
    {680,1136,1064, 0, 0, 0},  //TV = 10.52(17 lines)  AV=2.97  SV=4.88  BV=8.61
    {720,1184,1040, 0, 0, 0},  //TV = 10.44(18 lines)  AV=2.97  SV=4.91  BV=8.50
    {800,1136,1048, 0, 0, 0},  //TV = 10.29(20 lines)  AV=2.97  SV=4.86  BV=8.40
    {840,1136,1064, 0, 0, 0},  //TV = 10.22(21 lines)  AV=2.97  SV=4.88  BV=8.31
    {920,1136,1040, 0, 0, 0},  //TV = 10.09(23 lines)  AV=2.97  SV=4.85  BV=8.21
    {960,1136,1064, 0, 0, 0},  //TV = 10.02(24 lines)  AV=2.97  SV=4.88  BV=8.11
    {1040,1136,1064, 0, 0, 0},  //TV = 9.91(26 lines)  AV=2.97  SV=4.88  BV=8.00
    {1120,1136,1056, 0, 0, 0},  //TV = 9.80(28 lines)  AV=2.97  SV=4.87  BV=7.90
    {1200,1136,1056, 0, 0, 0},  //TV = 9.70(30 lines)  AV=2.97  SV=4.87  BV=7.80
    {1280,1136,1064, 0, 0, 0},  //TV = 9.61(32 lines)  AV=2.97  SV=4.88  BV=7.70
    {1400,1136,1040, 0, 0, 0},  //TV = 9.48(35 lines)  AV=2.97  SV=4.85  BV=7.60
    {1480,1136,1056, 0, 0, 0},  //TV = 9.40(37 lines)  AV=2.97  SV=4.87  BV=7.50
    {1600,1136,1048, 0, 0, 0},  //TV = 9.29(40 lines)  AV=2.97  SV=4.86  BV=7.40
    {1720,1136,1040, 0, 0, 0},  //TV = 9.18(43 lines)  AV=2.97  SV=4.85  BV=7.30
    {1840,1136,1040, 0, 0, 0},  //TV = 9.09(46 lines)  AV=2.97  SV=4.85  BV=7.21
    {1960,1136,1048, 0, 0, 0},  //TV = 8.99(49 lines)  AV=2.97  SV=4.86  BV=7.10
    {2120,1136,1040, 0, 0, 0},  //TV = 8.88(53 lines)  AV=2.97  SV=4.85  BV=7.00
    {2280,1136,1040, 0, 0, 0},  //TV = 8.78(57 lines)  AV=2.97  SV=4.85  BV=6.90
    {2440,1136,1040, 0, 0, 0},  //TV = 8.68(61 lines)  AV=2.97  SV=4.85  BV=6.80
    {2600,1136,1048, 0, 0, 0},  //TV = 8.59(65 lines)  AV=2.97  SV=4.86  BV=6.70
    {2800,1136,1040, 0, 0, 0},  //TV = 8.48(70 lines)  AV=2.97  SV=4.85  BV=6.60
    {3000,1136,1040, 0, 0, 0},  //TV = 8.38(75 lines)  AV=2.97  SV=4.85  BV=6.50
    {3240,1136,1032, 0, 0, 0},  //TV = 8.27(81 lines)  AV=2.97  SV=4.84  BV=6.40
    {3440,1136,1040, 0, 0, 0},  //TV = 8.18(86 lines)  AV=2.97  SV=4.85  BV=6.30
    {3680,1136,1040, 0, 0, 0},  //TV = 8.09(92 lines)  AV=2.97  SV=4.85  BV=6.21
    {3960,1136,1040, 0, 0, 0},  //TV = 7.98(99 lines)  AV=2.97  SV=4.85  BV=6.10
    {4240,1136,1040, 0, 0, 0},  //TV = 7.88(106 lines)  AV=2.97  SV=4.85  BV=6.00
    {4560,1136,1032, 0, 0, 0},  //TV = 7.78(114 lines)  AV=2.97  SV=4.84  BV=5.91
    {4920,1136,1032, 0, 0, 0},  //TV = 7.67(123 lines)  AV=2.97  SV=4.84  BV=5.80
    {5240,1136,1040, 0, 0, 0},  //TV = 7.58(131 lines)  AV=2.97  SV=4.85  BV=5.70
    {5640,1136,1032, 0, 0, 0},  //TV = 7.47(141 lines)  AV=2.97  SV=4.84  BV=5.60
    {6040,1136,1032, 0, 0, 0},  //TV = 7.37(151 lines)  AV=2.97  SV=4.84  BV=5.50
    {6440,1136,1040, 0, 0, 0},  //TV = 7.28(161 lines)  AV=2.97  SV=4.85  BV=5.40
    {6920,1136,1032, 0, 0, 0},  //TV = 7.18(173 lines)  AV=2.97  SV=4.84  BV=5.31
    {7440,1136,1040, 0, 0, 0},  //TV = 7.07(186 lines)  AV=2.97  SV=4.85  BV=5.19
    {7920,1136,1040, 0, 0, 0},  //TV = 6.98(198 lines)  AV=2.97  SV=4.85  BV=5.10
    {8480,1136,1040, 0, 0, 0},  //TV = 6.88(212 lines)  AV=2.97  SV=4.85  BV=5.00
    {9120,1136,1032, 0, 0, 0},  //TV = 6.78(228 lines)  AV=2.97  SV=4.84  BV=4.91
    {9840,1136,1032, 0, 0, 0},  //TV = 6.67(246 lines)  AV=2.97  SV=4.84  BV=4.80
    {10000,1184,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=4.91  BV=4.70
    {10000,1232,1072, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.01  BV=4.60
    {10000,1344,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.11  BV=4.50
    {10000,1440,1056, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.21  BV=4.40
    {10000,1536,1064, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.32  BV=4.30
    {10000,1696,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.42  BV=4.20
    {10000,1808,1032, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.51  BV=4.11
    {10000,1920,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.61  BV=4.01
    {10000,2048,1048, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.71  BV=3.90
    {10000,2208,1040, 0, 0, 0},  //TV = 6.64(250 lines)  AV=2.97  SV=5.81  BV=3.81
    {20000,1184,1040, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=4.91  BV=3.70
    {20000,1232,1072, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.01  BV=3.60
    {20000,1344,1064, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.13  BV=3.49
    {20000,1440,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.21  BV=3.40
    {20000,1536,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.31  BV=3.31
    {20000,1648,1056, 0, 0, 0},  //TV = 5.64(500 lines)  AV=2.97  SV=5.41  BV=3.21
    {30000,1184,1048, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=4.92  BV=3.11
    {30000,1296,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.03  BV=3.00
    {30000,1344,1064, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.13  BV=2.90
    {30000,1488,1032, 0, 0, 0},  //TV = 5.06(750 lines)  AV=2.97  SV=5.23  BV=2.80
    {40000,1184,1040, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=4.91  BV=2.70
    {40000,1232,1080, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.02  BV=2.59
    {40000,1344,1056, 0, 0, 0},  //TV = 4.64(1000 lines)  AV=2.97  SV=5.11  BV=2.50
    {50000,1136,1064, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.88  BV=2.41
    {50000,1232,1056, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=4.99  BV=2.30
    {50000,1344,1040, 0, 0, 0},  //TV = 4.32(1250 lines)  AV=2.97  SV=5.09  BV=2.20
    {60000,1184,1048, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=4.92  BV=2.11
    {60000,1296,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.02  BV=2.01
    {60000,1344,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.11  BV=1.91
    {60000,1488,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.22  BV=1.81
    {60000,1536,1064, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.32  BV=1.71
    {60000,1696,1032, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.42  BV=1.61
    {60000,1808,1040, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.52  BV=1.51
    {60000,1952,1032, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.62  BV=1.41
    {60000,2048,1056, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.72  BV=1.31
    {60000,2256,1024, 0, 0, 0},  //TV = 4.06(1500 lines)  AV=2.97  SV=5.82  BV=1.21
    {70000,2048,1048, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=5.71  BV=1.10
    {70000,2208,1040, 0, 0, 0},  //TV = 3.84(1750 lines)  AV=2.97  SV=5.81  BV=1.00
    {80000,2048,1048, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=5.71  BV=0.90
    {80000,2208,1040, 0, 0, 0},  //TV = 3.64(2000 lines)  AV=2.97  SV=5.81  BV=0.81
    {90000,2112,1040, 0, 0, 0},  //TV = 3.47(2250 lines)  AV=2.97  SV=5.74  BV=0.70
    {100000,2048,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.69  BV=0.60
    {100000,2160,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.78  BV=0.52
    {100000,2368,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.89  BV=0.41
    {100000,2512,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=5.98  BV=0.31
    {100000,2704,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.08  BV=0.21
    {100000,2912,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.19  BV=0.11
    {100000,3136,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.29  BV=0.00
    {100000,3328,1032, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.39  BV=-0.10
    {100000,3600,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.49  BV=-0.20
    {100000,3856,1024, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.59  BV=-0.30
    {100000,4096,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.70  BV=-0.41
    {100000,4384,1040, 0, 0, 0},  //TV = 3.32(2500 lines)  AV=2.97  SV=6.80  BV=-0.51
    {110000,4304,1032, 0, 0, 0},  //TV = 3.18(2750 lines)  AV=2.97  SV=6.76  BV=-0.61
    {120000,4240,1032, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=6.74  BV=-0.71
    {120000,4528,1032, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=6.83  BV=-0.80
    {120000,4864,1024, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=6.93  BV=-0.90
    {120000,5152,1032, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.02  BV=-0.99
    {120000,5584,1024, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.13  BV=-1.10
    {120000,5968,1032, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.23  BV=-1.20
    {120000,6400,1032, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.33  BV=-1.30
    {120000,6912,1024, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.43  BV=-1.40
    {120000,7086,1072, 0, 0, 0},  //TV = 3.06(3000 lines)  AV=2.97  SV=7.53  BV=-1.51
    {130000,7086,1064, 0, 0, 0},  //TV = 2.94(3250 lines)  AV=2.97  SV=7.52  BV=-1.61
    {140000,7086,1056, 0, 0, 0},  //TV = 2.84(3500 lines)  AV=2.97  SV=7.51  BV=-1.71
    {150000,7086,1056, 0, 0, 0},  //TV = 2.74(3750 lines)  AV=2.97  SV=7.51  BV=-1.81
    {160000,7086,1064, 0, 0, 0},  //TV = 2.64(4000 lines)  AV=2.97  SV=7.52  BV=-1.91
    {170000,7086,1072, 0, 0, 0},  //TV = 2.56(4250 lines)  AV=2.97  SV=7.53  BV=-2.01
    {190000,7086,1024, 0, 0, 0},  //TV = 2.40(4750 lines)  AV=2.97  SV=7.47  BV=-2.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable5 =
{
    AETABLE_SCENE_INDEX5,    //eAETableID
    121,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    99,    //i4MaxBV
    -21,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -10,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene5PLineTable_60Hz,
    sAEScene5PLineTable_50Hz,
    NULL,
};

static strEvPline sAESceneReservePLineTable =
{
{
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};
static strAETable g_AE_ReserveSceneTable =
{
	AETABLE_SCENE_MAX,    //eAETableID
	0,    //u4TotalIndex
	20,    //u4StrobeTrigerBV
	0,    //i4MaxBV
	0,    //i4MinBV
	90,    //i4EffectiveMaxBV
	0,      //i4EffectiveMinBV
	LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
	sAESceneReservePLineTable,
	sAESceneReservePLineTable,
	NULL,
};
static strAESceneMapping g_AEScenePLineMapping = 
{
{
    {LIB3A_AE_SCENE_AUTO, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_AUTO, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX5}},
    {LIB3A_AE_SCENE_NIGHT, {AETABLE_SCENE_INDEX1, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_NIGHT, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_ACTION, {AETABLE_SCENE_INDEX2, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_BEACH, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_CANDLELIGHT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_FIREWORKS, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX4, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX4}},
    {LIB3A_AE_SCENE_LANDSCAPE, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_PORTRAIT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_NIGHT_PORTRAIT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_NIGHT, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_PARTY, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_SNOW, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_SPORTS, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_STEADYPHOTO, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_SUNSET, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_THEATRE, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_ISO_ANTI_SHAKE, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_ISO100, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO100, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO100}},
    {LIB3A_AE_SCENE_ISO200, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO200, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO200}},
    {LIB3A_AE_SCENE_ISO400, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO400, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO400}},
    {LIB3A_AE_SCENE_ISO800, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO800, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO800}},
    {LIB3A_AE_SCENE_ISO1600 , {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO1600, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO1600}},
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
},
};

static strAEPLineTable g_strAEPlineTable =
{
{
// PLINE Table
g_AE_PreviewAutoTable,
g_AE_CaptureAutoTable,
g_AE_VideoAutoTable,
g_AE_Video1AutoTable,
g_AE_Video2AutoTable,
g_AE_Custom1AutoTable,
g_AE_Custom2AutoTable,
g_AE_Custom3AutoTable,
g_AE_Custom4AutoTable,
g_AE_Custom5AutoTable,
g_AE_VideoNightTable,
g_AE_CaptureISO100Table,
g_AE_CaptureISO200Table,
g_AE_CaptureISO400Table,
g_AE_CaptureISO800Table,
g_AE_CaptureISO1600Table,
g_AE_StrobeTable,
g_AE_SceneTable1,
g_AE_SceneTable2,
g_AE_SceneTable3,
g_AE_SceneTable4,
g_AE_SceneTable5,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
},
};

static strAEPLineNumInfo g_strAEPreviewAutoPLineInfo =
{
    AETABLE_RPEVIEW_AUTO,
    90,
    -10,
    {
        {1,3500,30,1144,1144},
        {2,30,15,1144,1144},
        {3,15,15,1144,2048},
        {4,15,10,2048,2048},
        {5,10,10,2048,4096},
        {6,10,8,4096,4096},
        {7,8,8,4096,7086},
        {8,8,5,7086,7086},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureAutoPLineInfo =
{
    AETABLE_CAPTURE_AUTO,
    90,
    0,
    {
        {1,3500,30,1144,1144},
        {2,30,15,1144,1144},
        {3,15,15,1144,2048},
        {4,15,10,2048,2048},
        {5,10,10,2048,4096},
        {6,10,7,4096,4096},
        {7,7,7,4096,7086},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideoAutoPLineInfo =
{
    AETABLE_VIDEO_AUTO,
    90,
    0,
    {
        {1,3500,120,1144,1144},
        {2,120,120,1144,2048},
        {3,120,30,2048,2048},
        {4,30,30,2048,4096},
        {5,30,15,4096,4096},
        {6,15,15,4096,7086},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideo1AutoPLineInfo =
{
    AETABLE_VIDEO1_AUTO,
    90,
    0,
    {
        {1,3500,120,1144,1144},
        {2,120,120,1144,7086},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideo2AutoPLineInfo =
{
    AETABLE_VIDEO2_AUTO,
    90,
    0,
    {
        {1,3500,60,1144,1144},
        {2,60,60,1195,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,7086},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom1AutoPLineInfo =
{
    AETABLE_CUSTOM1_AUTO,
    90,
    0,
    {
        {1,3500,60,1144,1144},
        {2,60,60,1144,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,7086},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom2AutoPLineInfo =
{
    AETABLE_CUSTOM2_AUTO,
    90,
    0,
    {
        {1,3500,60,1144,1144},
        {2,60,60,1144,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,7086},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom3AutoPLineInfo =
{
    AETABLE_CUSTOM3_AUTO,
    90,
    0,
    {
        {1,3500,60,1144,1144},
        {2,60,60,1144,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,7086},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom4AutoPLineInfo =
{
    AETABLE_CUSTOM4_AUTO,
    90,
    0,
    {
        {1,3500,60,1144,1144},
        {2,60,60,1144,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,7086},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom5AutoPLineInfo =
{
    AETABLE_CUSTOM5_AUTO,
    90,
    0,
    {
        {1,3500,60,1144,1144},
        {2,60,60,1144,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,7086},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideoNightPLineInfo =
{
    AETABLE_VIDEO_NIGHT,
    90,
    -10,
    {
        {1,3500,60,1144,1144},
        {2,60,60,1144,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,7086},
        {5,30,10,7086,7086},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO100PLineInfo =
{
    AETABLE_CAPTURE_ISO100,
    90,
    0,
    {
        {1,3500,4,1144,1144},
        {2,0,0,0,0},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO200PLineInfo =
{
    AETABLE_CAPTURE_ISO200,
    90,
    0,
    {
        {1,3500,2000,1144,1144},
        {2,2000,2000,1144,2048},
        {3,2000,4,2048,2048},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO400PLineInfo =
{
    AETABLE_CAPTURE_ISO400,
    90,
    0,
    {
        {1,3500,2000,1144,1144},
        {2,2000,2000,1144,4096},
        {3,2000,4,4096,4096},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO800PLineInfo =
{
    AETABLE_CAPTURE_ISO800,
    90,
    0,
    {
        {1,3500,2000,1144,1144},
        {2,2000,2000,1144,7086},
        {3,2000,4,7086,7086},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO1600PLineInfo =
{
    AETABLE_CAPTURE_ISO1600,
    90,
    0,
    {
        {1,3500,2000,1144,1144},
        {2,2000,2000,1144,7086},
        {3,2000,4,7086,7086},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEStrobePLineInfo =
{
    AETABLE_STROBE,
    90,
    0,
    {
        {1,3500,15,1144,1144},
        {2,15,15,1144,4096},
        {3,15,10,4096,4096},
        {4,10,10,4096,7086},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene1PLineInfo =
{
    AETABLE_SCENE_INDEX1,
    90,
    -10,
    {
        {1,3500,30,1144,1144},
        {2,30,15,1144,1144},
        {3,15,15,1144,3072},
        {4,15,10,3072,3072},
        {5,10,10,3072,4096},
        {6,10,8,4096,4096},
        {7,8,8,4096,7086},
        {8,8,5,7086,7086},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene2PLineInfo =
{
    AETABLE_SCENE_INDEX2,
    90,
    0,
    {
        {1,3500,100,1144,1144},
        {2,100,30,1144,1144},
        {3,30,30,1144,7086},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene3PLineInfo =
{
    AETABLE_SCENE_INDEX3,
    90,
    0,
    {
        {1,3500,30,1144,1144},
        {2,30,30,1144,2048},
        {3,30,15,2048,2048},
        {4,15,15,2048,4096},
        {5,15,10,4096,4096},
        {6,10,10,4096,7086},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene4PLineInfo =
{
    AETABLE_SCENE_INDEX4,
    90,
    0,
    {
        {1,4,4,1706,1706},
        {2,0,0,0,0},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene5PLineInfo =
{
    AETABLE_SCENE_INDEX5,
    90,
    -10,
    {
        {1,3500,30,1144,1144},
        {2,30,15,1144,1144},
        {3,15,15,1144,2048},
        {4,15,10,2048,2048},
        {5,10,10,2048,4096},
        {6,10,8,4096,4096},
        {7,8,8,4096,7086},
        {8,8,5,7086,7086},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};





























static strAEPLineNumInfo g_strAENoScenePLineInfo =
{
    AETABLE_SCENE_MAX,
    90,
    0,
    {
        {1,0,0,0,0},
        {2,0,0,0,0},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};
static strAEPLineInfomation g_strAEPlineInfo =
{
MTRUE,   // FALSE mean the sampling
{
// PLINE Info
g_strAEPreviewAutoPLineInfo,
g_strAECaptureAutoPLineInfo,
g_strAEVideoAutoPLineInfo,
g_strAEVideo1AutoPLineInfo,
g_strAEVideo2AutoPLineInfo,
g_strAECustom1AutoPLineInfo,
g_strAECustom2AutoPLineInfo,
g_strAECustom3AutoPLineInfo,
g_strAECustom4AutoPLineInfo,
g_strAECustom5AutoPLineInfo,
g_strAEVideoNightPLineInfo,
g_strAECaptureISO100PLineInfo,
g_strAECaptureISO200PLineInfo,
g_strAECaptureISO400PLineInfo,
g_strAECaptureISO800PLineInfo,
g_strAECaptureISO1600PLineInfo,
g_strAEStrobePLineInfo,
g_strAEScene1PLineInfo,
g_strAEScene2PLineInfo,
g_strAEScene3PLineInfo,
g_strAEScene4PLineInfo,
g_strAEScene5PLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
},
};

static strAEPLineGainList g_strAEGainList =
{
97,
{
{1024,100},
{1088,100},
{1136,100},
{1184,100},
{1232,100},
{1296,100},
{1344,100},
{1392,100},
{1440,100},
{1488,100},
{1536,100},
{1600,100},
{1648,100},
{1696,100},
{1744,100},
{1808,100},
{1856,100},
{1920,100},
{1952,100},
{2000,100},
{2048,100},
{2112,100},
{2160,100},
{2208,100},
{2256,100},
{2304,100},
{2368,100},
{2416,100},
{2448,100},
{2512,100},
{2560,100},
{2624,100},
{2688,100},
{2704,100},
{2768,100},
{2816,100},
{2880,100},
{2912,100},
{2992,100},
{3024,100},
{3088,100},
{3136,100},
{3200,100},
{3248,100},
{3280,100},
{3328,100},
{3408,100},
{3456,100},
{3504,100},
{3552,100},
{3600,100},
{3648,100},
{3712,100},
{3760,100},
{3808,100},
{3856,100},
{3920,100},
{3984,100},
{4048,100},
{4096,100},
{4160,100},
{4240,100},
{4304,100},
{4384,100},
{4448,100},
{4528,100},
{4608,100},
{4688,100},
{4768,100},
{4864,100},
{4960,100},
{5040,100},
{5152,100},
{5248,100},
{5360,100},
{5472,100},
{5584,100},
{5712,100},
{5840,100},
{5968,100},
{6096,100},
{6400,100},
{6720,100},
{6912,100},
{7088,100},
{7488,100},
{7712,100},
{7952,100},
{8192,100},
{8464,100},
{8736,100},
{9056,100},
{9360,100},
{9712,100},
{10096,100},
{10496,100},
{10928,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
}
};

static AE_PLINETABLE_T g_PlineTableMapping =
{
g_AEScenePLineMapping,
g_strAEPlineTable,
g_strAEPlineInfo,
g_strAEGainList
};
#endif


#if 0 //Save the P-line info to file for debug
MinGain,1144 
MaxGain,7086 
MiniISOGain,80 
GainStepUnitInTotalRange,128 
PreviewExposureLineUnit,40000 
PreviewMaxFrameRate,30 
VideoExposureLineUnit,40000 
VideoMaxFrameRate,30 
VideoToPreviewSensitivityRatio,1024 
CaptureExposureLineUnit,40000 
CaptureMaxFrameRate,30 
CaptureToPreviewSensitivityRatio,1024 
Video1ExposureLineUnit,40000 
Video1MaxFrameRate,30 
Video1ToPreviewSensitivityRatio,1024 
Video2ExposureLineUnit,40000 
Video2MaxFrameRate,30 
Video2ToPreviewSensitivityRatio,1024 
Custom1ExposureLineUnit,40000 
Custom1MaxFrameRate,30 
Custom1ToPreviewSensitivityRatio,1024 
Custom2ExposureLineUnit,40000 
Custom2MaxFrameRate,30 
Custom2ToPreviewSensitivityRatio,1024 
Custom3ExposureLineUnit,40000 
Custom3MaxFrameRate,30 
Custom3ToPreviewSensitivityRatio,1024 
Custom4ExposureLineUnit,40000 
Custom4MaxFrameRate,30 
Custom4ToPreviewSensitivityRatio,1024 
Custom5ExposureLineUnit,40000 
Custom5MaxFrameRate,30 
Custom5ToPreviewSensitivityRatio,1024 
FocusLength,350 
Fno,28 

// Preview table -- Use preview sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_RPEVIEW_AUTO
90,-10
1,3500,30,1144,1144
2,30,15,1144,1144
3,15,15,1144,2048
4,15,10,2048,2048
5,10,10,2048,4096
6,10,8,4096,4096
7,8,8,4096,7086
8,8,5,7086,7086
AETABLE_END

// Capture table -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_AUTO
90,0
1,3500,30,1144,1144
2,30,15,1144,1144
3,15,15,1144,2048
4,15,10,2048,2048
5,10,10,2048,4096
6,10,7,4096,4096
7,7,7,4096,7086
AETABLE_END

// Video table -- Use video sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO_AUTO
90,0
1,3500,120,1144,1144
2,120,120,1144,2048
3,120,30,2048,2048
4,30,30,2048,4096
5,30,15,4096,4096
6,15,15,4096,7086
AETABLE_END

// Video1 table -- Use Video1 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO1_AUTO
90,0
1,3500,120,1144,1144
2,120,120,1144,7086
AETABLE_END

// Video2 table -- Use Video2 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO2_AUTO
90,0
1,3500,60,1144,1144
2,60,60,1195,3072
3,60,30,3072,3072
4,30,30,3072,7086
AETABLE_END

// Custom1 table -- Use Custom1 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM1_AUTO
90,0
1,3500,60,1144,1144
2,60,60,1144,3072
3,60,30,3072,3072
4,30,30,3072,7086
AETABLE_END

// Custom2 table -- Use Custom2 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM2_AUTO
90,0
1,3500,60,1144,1144
2,60,60,1144,3072
3,60,30,3072,3072
4,30,30,3072,7086
AETABLE_END

// Custom3 table -- Use Custom3 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM3_AUTO
90,0
1,3500,60,1144,1144
2,60,60,1144,3072
3,60,30,3072,3072
4,30,30,3072,7086
AETABLE_END

// Custom4 table -- Use Custom4 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM4_AUTO
90,0
1,3500,60,1144,1144
2,60,60,1144,3072
3,60,30,3072,3072
4,30,30,3072,7086
AETABLE_END

// Custom5 table -- Use Custom5 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM5_AUTO
90,0
1,3500,60,1144,1144
2,60,60,1144,3072
3,60,30,3072,3072
4,30,30,3072,7086
AETABLE_END

// Video Night table -- Use video sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO_NIGHT
90,-10
1,3500,60,1144,1144
2,60,60,1144,3072
3,60,30,3072,3072
4,30,30,3072,7086
5,30,10,7086,7086
AETABLE_END

// Capture ISO100 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO100
90,0
1,3500,4,1144,1144
AETABLE_END

// Capture ISO200 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO200
90,0
1,3500,2000,1144,1144
2,2000,2000,1144,2048
3,2000,4,2048,2048
AETABLE_END

// Capture ISO400 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO400
90,0
1,3500,2000,1144,1144
2,2000,2000,1144,4096
3,2000,4,4096,4096
AETABLE_END

// Capture ISO800 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO800
90,0
1,3500,2000,1144,1144
2,2000,2000,1144,7086
3,2000,4,7086,7086
AETABLE_END

// Capture ISO1600 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO1600
90,0
1,3500,2000,1144,1144
2,2000,2000,1144,7086
3,2000,4,7086,7086
AETABLE_END

// Strobe table -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_STROBE
90,0
1,3500,15,1144,1144
2,15,15,1144,4096
3,15,10,4096,4096
4,10,10,4096,7086
AETABLE_END


//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX1
90,-10
1,3500,30,1144,1144
2,30,15,1144,1144
3,15,15,1144,3072
4,15,10,3072,3072
5,10,10,3072,4096
6,10,8,4096,4096
7,8,8,4096,7086
8,8,5,7086,7086
AETABLE_END


//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX2
90,0
1,3500,100,1144,1144
2,100,30,1144,1144
3,30,30,1144,7086
AETABLE_END

// Table1 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX3
90,0
1,3500,30,1144,1144
2,30,30,1144,2048
3,30,15,2048,2048
4,15,15,2048,4096
5,15,10,4096,4096
6,10,10,4096,7086
AETABLE_END

// Table2 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX4
90,0
1,4,4,1706,1706
AETABLE_END

// Table3 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX5
90,-10
1,3500,30,1144,1144
2,30,15,1144,1144
3,15,15,1144,2048
4,15,10,2048,2048
5,10,10,2048,4096
6,10,8,4096,4096
7,8,8,4096,7086
8,8,5,7086,7086
AETABLE_END

// Table4 PLine -- Use capture sensor setting

// Table5 PLine -- Use capture sensor setting

// Table6 PLine -- Use capture sensor setting

// Table7 PLine -- Use capture sensor setting

// Table8 PLine -- Use capture sensor setting

// Table9 PLine -- Use capture sensor setting

// Table10 PLine -- Use capture sensor setting

// Table11 PLine -- Use capture sensor setting

// Table12 PLine -- Use capture sensor setting

// Table13 PLine -- Use capture sensor setting

// Table14 PLine -- Use capture sensor setting

// Table15 PLine -- Use capture sensor setting

// Table16 PLine -- Use capture sensor setting

// Table17 PLine -- Use capture sensor setting

// Table18 PLine -- Use capture sensor setting

// Table19 PLine -- Use capture sensor setting

// Table20 PLine -- Use capture sensor setting

// Table21 PLine -- Use capture sensor setting

// Table22 PLine -- Use capture sensor setting

// Table23 PLine -- Use capture sensor setting

// Table24 PLine -- Use capture sensor setting

// Table25 PLine -- Use capture sensor setting

// Table26 PLine -- Use capture sensor setting

// Table27 PLine -- Use capture sensor setting

// Table28 PLine -- Use capture sensor setting

// Table29 PLine -- Use capture sensor setting

// Table30 PLine -- Use capture sensor setting

// Table31 PLine -- Use capture sensor setting

AE_SCENE_AUTO,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX5
AE_SCENE_NIGHT,AETABLE_SCENE_INDEX1,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_NIGHT,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_ACTION,AETABLE_SCENE_INDEX2,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_BEACH,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX3
AE_SCENE_CANDLELIGHT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_FIREWORKS,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX4,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX4
AE_SCENE_LANDSCAPE,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX3
AE_SCENE_PORTRAIT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_NIGHT_PORTRAIT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_NIGHT,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_PARTY,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_SNOW,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX3
AE_SCENE_SPORTS,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_STEADYPHOTO,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_SUNSET,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX3
AE_SCENE_THEATRE,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_ISO_ANTI_SHAKE,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_ISO100,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO100,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_ISO100
AE_SCENE_ISO200,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO200,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_ISO200
AE_SCENE_ISO400,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO400,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_ISO400
AE_SCENE_ISO800,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO800,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_ISO800
AE_SCENE_ISO1600 ,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO1600,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_ISO1600
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
#endif
