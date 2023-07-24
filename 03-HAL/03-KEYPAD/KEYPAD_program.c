/**************************************************************************/
/* Description : KEYPAD program file                                      */
/* Author      : Mona Safwat                                              */
/* Version     : 0.1v                                                     */
/* Date        : 13 July 2023                                             */
/* History     : 0.1v initial creation                                    */
/**************************************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include<avr/delay.h>

#include "DIO_inerface.h"

#include "KEYPAD_interface.h"
#include "KEYPAD_config.h"
#include "KEYPAD_private.h"

void KEYPAD_VOIDInit()
{
	u8 Local_u8Itr1;
	u8 Local_u8Itr2;
	for(Local_u8Itr1=0;Local_u8Itr1<KEYPAD_MAX_NUM;Local_u8Itr1++)
	{
		for(Local_u8Itr2=0;Local_u8Itr2<StrKeypadCfg aStrKeypadCfg_Configration[Local_u8Itr1].u8_InputNum;Local_u8Itr2++)
		{
			DIO_voidPinPullUp(StrKeypadCfg aStrKeypadCfg_Configration[Local_u8Itr1].au8_InputNum[Local_u8Itr2], ACTIVATE);
		}
		for(Local_u8Itr2=0;Local_u8Itr2<StrKeypadCfg aStrKeypadCfg_Configration[Local_u8Itr1].u8_OutputNum;Local_u8Itr2++)
		{
			DIO_voidWritePin(StrKeypadCfg aStrKeypadCfg_Configration[Local_u8Itr1].au8_OutputNum[Local_u8Itr2], HIGH);
		}
	}
}
	
u8 KEYPAD_u8GetPressedKey(u8 Copy_u8Index)
{
	u8 Local_u8Itr;
	u8 Local_u8ReadInput=0xff;
	u8 LocalRealKey=0xff;
	for(Local_u8Itr=0;Local_u8Itr<StrKeypadCfg aStrKeypadCfg_Configration[Copy_u8Index].u8_OutputNum;Local_u8Itr++)
	{
		voidWriteFirtSeq(Copy_u8Index,Local_u8Itr);
		_delay_ms(50);
		Local_u8ReadInput=voidReadInput(Copy_u8Index);
		LocalRealKey=voidRealPressedKey(Copy_u8Index,Local_u8Itr,Local_u8ReadInput);	
		
		if(LocalRealKey!=0xff)
		{
			break;
		}
	}
	return LocalRealKey;
}

static void voidWriteFirtSeq(u8 Copy_u8KeypadIndex,u8 Local_u8OutputIndx)
{
	u8 Local_u8Itr;
	for(Local_u8Itr=0;Local_u8Itr<StrKeypadCfg aStrKeypadCfg_Configration[Copy_u8KeypadIndex].u8_OutputNumCopy_u8KeypadIndex;Local_u8Itr++)
	{
		if(Local_u8Itr==Local_u8OutputIndx)
		{
			DIO_voidWritePin(StrKeypadCfg aStrKeypadCfg_Configration[Local_u8Itr1].au8_OutputNum[Local_u8Itr2], LOW);
		}
		else
		{
			DIO_voidWritePin(StrKeypadCfg aStrKeypadCfg_Configration[Local_u8Itr1].au8_OutputNum[Local_u8Itr2], HIGH);
		}
	}
}
static u8 u8ReadInput(u8 Copy_u8KeypadIndex)
{
	u8 Local_u8Itr;
	u8 Local_u8ReadInput=0xff;
	for(Local_u8Itr=0;Local_u8Itr<StrKeypadCfg aStrKeypadCfg_Configration[Copy_u8KeypadIndex].u8_InputNumCopy_u8KeypadIndex;Local_u8Itr++)
	{
		if(DIO_u8ReadPinStatus(StrKeypadCfg aStrKeypadCfg_Configration[Copy_u8KeypadIndex].au8_InputNum[Local_u8Itr]))
		{
			CLR_BIT(Local_u8ReadInput,Local_u8Itr);
			break;
		}
	}	
	return Local_u8ReadInput;
}
static u8 u8PressedKey(u8 Copy_u8KeypadIndex,u8 Copy_u8OutputIndx,u8 Local_u8KeypadReadInput)
{
	u8 Local_u8RealPressedKey=0xff;
	if(Local_u8KeypadReadInput!=0xff)
	{
	  u8 Local_u8RealInputIndx;
	  u8 Local_u8Itr;
	  for(Local_u8Itr=0;Local_u8Itr<StrKeypadCfg aStrKeypadCfg_Configration[Copy_u8KeypadIndex].u8_InputNumCopy_u8KeypadIndex;Local_u8Itr++)
	  {
		if(GET_BIT(Local_u8KeypadReadInput,Local_u8Itr)==0)
		{
			break;
		}
		Local_u8RealPressedKey=u8_KeypadMap[Local_u8Itr ][Copy_u8OutputIndx];
	  }	
	  return Local_u8RealPressedKey;
}
