/********************************************************************************************/
/* Description : SEV interface                                                              */
/* Author      : Mona Safwat                                                                */
/* Version     : 0.1v                                                                       */
/* Date        : 12 July 2023                                                               */
/* History     : 0.1v initial creation                                                      */
/********************************************************************************************/

#ifndef  SEV_INTERFACE_H
#define  SEV_INTERFACE_H


void SEV_voidWriteNum(u8 Copy_u8Num,u8 Copy_u8SevIndex);
void SEV_voidTurnOn(u8 Copy_u8SevIndex);
void SEV_voidTurnOff(u8 Copy_u8SevIndex);



#endif