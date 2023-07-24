/**************************************************************************/
/* Description : KEYPAD config.c file                                     */
/* Author      : Mona Safwat                                              */
/* Version     : 0.1v                                                     */
/* Date        : 13 July 2023                                             */
/* History     : 0.1v initial creation                                    */
/**************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"

#include "KEYPAD_config.h"
#include "KEYPAD_private.h"


StrKeypadCfg aStrKeypadCfg_Configration[KEYPAD_MAX_NUM]
{
	{PIN_00,PIN_01,PIN_02,PIN_03},
	{PIN_04,PIN_05,PIN_06,PIN_07},
	4,
	4
};
u8 u8_KeypadMap[KEYPAD_MAX_INPUT_NUM ][KEYPAD_MAX_OPUT_NUM]
{
		{'7' ,'8' ,'9' ,'/' },
		{'4' ,'5' ,'6' ,'X' },
		{'1' ,'2' ,'3' ,'-' },
		{'.' ,'0' ,'=' ,'+' }
};