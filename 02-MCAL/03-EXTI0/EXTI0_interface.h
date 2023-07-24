/*******************************************************************************************/
/* Description : EXTINT0 interface                                                         */
/* Author      : Mona Safwat                                                               */
/* Version     : 0.1v                                                                      */
/* Date        : 18 July 2023                                                              */
/* History     : 0.1v initial creation                                                     */
/*******************************************************************************************/

#ifndef  EXTI0_INTERFACE_H
#define  EXTI0_INTERFACE_H

#define RISING_EDGE      3
#define FALLING_EDGE     2
#define LOW_LEVEL        0 
#define ON_CHANGE        1

void EXTI0_voidInit(void);
void EXTI0_voidEnableInterrupt(void);
void EXTI0_voidDisableInterrupt(void);
void EXTI0_voidChangeSense(u8 Copy_u8Sense);
void EXTI0_voidSetCallback(void (*Copy_ptr) (void));











#endif