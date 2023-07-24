/********************************************************************************************/
/* Description : SEV config.c                                                             */
/* Author      : Mona Safwat                                                                */
/* Version     : 0.1v                                                                       */
/* Date        : 12 July 2023                                                               */
/* History     : 0.1v initial creation                                                      */
/********************************************************************************************/


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "SEV_private.h"

StrSevCfg SEV_aStrSevCfg [SEV_MAX_NUM]=
{
	{{PIN_00,PIN_01,PIN_02,PIN_03,PIN_04,DIO_05,DIO_06},PIN_29, COMMON_ANODE},
	{{PIN_07,PIN_08,PIN_09,PIN_10,PIN_11,DIO_12,DIO_13},PIN_30, COMMON_ANODE}
};

