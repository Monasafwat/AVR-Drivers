/*******************************************************************************************/
/* Description : EXTINT0 program                                                           */
/* Author      : Mona Safwat                                                               */
/* Version     : 0.1v                                                                      */
/* Date        : 18 July 2023                                                              */
/* History     : 0.1v initial creation                                                     */
/*******************************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "EXTI0_interface.h"
#include "EXTI0_config.h"
#include "EXTI0_private"

void EXTI0_voidInit(void)
{
	SET_BIT(
}
void EXTI0_voidEnableInterrupt(void);
void EXTI0_voidDisableInterrupt(void);
void EXTI0_voidChangeSense(u8 Copy_u8Sense);
void EXTI0_voidSetCallback(void (*Copy_ptr) (void));