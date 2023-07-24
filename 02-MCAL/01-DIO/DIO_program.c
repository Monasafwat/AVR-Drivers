/*****************************************************************************/
/* Description : DIO program file                                            */
/* Author      : Mona Safwat                                                 */
/* Version     : 0.1v                                                        */
/* Date        :  6 July 2023                                                */
/* History     : 0.1v initial creation                                       */
/*****************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "DIO_config.h"
#include "DIO_private.h"

void DIO_voidInit(void)
{
	DDRA =conc(PIN_DIR_00,PIN_DIR_01,PIN_DIR_02,PIN_DIR_03,PIN_DIR_04,PIN_DIR_05,PIN_DIR_06,PIN_DIR_07);
	DDRB =conc(PIN_DIR_08,PIN_DIR_09,PIN_DIR_10,PIN_DIR_11,PIN_DIR_12,PIN_DIR_13,PIN_DIR_14,PIN_DIR_15);
	DDRC =conc(PIN_DIR_16,PIN_DIR_17,PIN_DIR_18,PIN_DIR_19,PIN_DIR_20,PIN_DIR_21,PIN_DIR_22,PIN_DIR_23);
	DDRD =conc(PIN_DIR_24,PIN_DIR_25,PIN_DIR_26,PIN_DIR_27,PIN_DIR_28,PIN_DIR_29,PIN_DIR_30,PIN_DIR_31);
}

u8 DIO_u8ReadPinStatus(u8 Copy_u8PinNum)
{
	u8 Local_Read=0;
	u8 Local_RealPin=Copy_u8PinNum%8;
	if(Copy_u8PinNum<=7)
	{
		Local_Read =GET_BIT(PINA,Local_RealPin);
	}
	else if(Copy_u8PinNum<=15)
	{
		Local_Read =GET_BIT(PINB,Local_RealPin);
	}
	else if(Copy_u8PinNum<=23)
	{
		Local_Read =GET_BIT(PINC,Local_RealPin);
	}
	else
	{
		Local_Read =GET_BIT(PIND,Local_RealPin);
	}
	return Local_Read;
}
void DIO_voidWritePin(u8 Copy_u8PinNum, u8 Copy_u8PinValue)
{
	u8 Local_RealPin=Copy_u8PinNum%8;
	if(Copy_u8PinNum<=7)
	{
		if(Copy_u8PinValue)
		{
		 SET_BIT(PINA,Local_RealPin);
        }
        else
		{		
		 CLR_BIT(PINA,Local_RealPin);
		}
	}
	else if(Copy_u8PinNum<=15)
	{
		if(Copy_u8PinValue)
		{
		 SET_BIT(PINB,Local_RealPin);
        }
        else
		{		
		 CLR_BIT(PINB,Local_RealPin);
		}
	}
	else if(Copy_u8PinNum<=23)
	{
		if(Copy_u8PinValue)
		{
		 SET_BIT(PINC,Local_RealPin);
        }
        else
		{		
		 CLR_BIT(PINC,Local_RealPin);
		}
	}
	else
	{
		if(Copy_u8PinValue)
		{
		 SET_BIT(PIND,Local_RealPin);
        }
        else
		{		
		 CLR_BIT(PIND,Local_RealPin);
		}
	}
	
}
void DIO_voidTogglePin(u8 Copy_u8PinNum)
{
	u8 Local_RealPin=Copy_u8PinNum%8;
	if(Copy_u8PinNum<=7)
	{

		 TOG_BIT(PINA,Local_RealPin);
	}
	else if(Copy_u8PinNum<=15)
	{
		 TOG_BIT(PINB,Local_RealPin);
	}
	else if(Copy_u8PinNum<=23)
	{
		 TOG_BIT(PINC,Local_RealPin);
	}
	else
	{
		 TOG_BIT(PIND,Local_RealPin);
	}
	
}
void DIO_voidPinPullUp(u8 Copy_u8PinNum, u8 Copy_u8State)
{
  DIO_voidWritePin( Copy_u8PinNum, Copy_u8State);	
}
u8* DIO_ptrReadPinGroupStatus(u8* Copy_pu8PinNum , u8 u8GroupSize)
{
  static u8 * Local_arr;
  u8   Local_Itr;
  for(Local_Itr=0 ; Local_Itr < u8GroupSize ; Local_Itr++)
  {
	 Local_arr[ Local_Itr]=DIO_u8ReadPinStatus(Copy_pu8PinNum[Local_Itr]);
  }
  return Local_arr;
}
void DIO_voidWritePinGroup(u8* Copy_pu8PinNum, u8* Copy_pu8PinValue, u8 u8GroupSize)
{
  u8   Local_Itr;
  for(Local_Itr=0 ; Local_Itr < u8GroupSize ; Local_Itr++)
  {
	 DIO_voidWritePin( Copy_pu8PinNum[Local_Itr], Copy_pu8PinValue[Local_Itr]);
  }
}

