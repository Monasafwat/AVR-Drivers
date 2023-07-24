/********************************************************************************************/
/* Description : SEV private                                                              */
/* Author      : Mona Safwat                                                                */
/* Version     : 0.1v                                                                       */
/* Date        : 12 July 2023                                                               */
/* History     : 0.1v initial creation                                                      */
/********************************************************************************************/

#ifndef  SEV_PRIVATE_H
#define  SEV_PRIVATE_H

#define COMMON_ANODE         0
#define COMMON_CATHODE       1

typedef struct {
	u8 SevPoints[7];
	u8 SevCommon;
	u8 SevMode;
} StrSevCfg;

extern StrSevCfg SEV_aStrSevCfg [SEV_MAX_NUM];
static void SEV_voidDisplayNum(u8 Copy_u8SevIndex,u8 Copy_u8Num);




#endif