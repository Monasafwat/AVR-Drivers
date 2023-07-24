/*****************************************************************************/
/* Description : LED program file                                            */
/* Author      : Mona Safwat                                                 */
/* Version     : 0.1v                                                        */
/* Date        : 11 July 2023                                                */
/* History     : 0.1v initial creation                                       */
/*****************************************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"


#include "LED_interface.h"
#include "DIO_interface.h"
#include "LED_config.h"

void LED_voidTurnOn(u8 Copy_u8LedNum)
{
	DIO_voidWritePin(Copy_u8LedNum,HIGH);
}
void LED_voidTurnOff(u8 Copy_u8LedNum)
{
    DIO_voidWritePin(Copy_u8LedNum,LOW);
}
void LED_voidToggle(u8 Copy_u8LedNum)
{
	DIO_voidTogglePin(Copy_u8LedNum);
}