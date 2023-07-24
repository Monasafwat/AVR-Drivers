/********************************************************************************************/
/* Description : SEV program                                                              */
/* Author      : Mona Safwat                                                                */
/* Version     : 0.1v                                                                       */
/* Date        : 12 July 2023                                                               */
/* History     : 0.1v initial creation                                                      */
/********************************************************************************************/

#include "STD_TYPES"
#include "BIT_MATH"

#include "DIO_interface.h"

#include "SEV_interface.h"
#include "SEV_config.h"
#include "SEV_private.h"

void SEV_voidWriteNum(u8 Copy_u8Num,u8 Copy_u8SevIndex)
{
 u8 Local_au8SevCodeNum={ 0xC0 ,0xF9 ,0xA4 ,0xB0 ,0x99 ,0x92 ,0x82 ,0xF8 ,0x80 ,0x90 };
 if( SEV_astrSevConfig[Copy_u8SevIndex].SevMode==COMMON_ANODE)
 {
	 SEV_voidDisplayNum( Copy_u8SevIndex, Local_au8SevCodeNum[Copy_u8Num]);
 }
 else
 {
		 SEV_voidDisplayNum( Copy_u8SevIndex, ~Local_au8SevCodeNum[Copy_u8Num]);
 } 
}
void SEV_voidTurnOn(u8 Copy_u8SevIndex)
{
 if( SEV_astrSevConfig[Copy_u8SevIndex].SevMode==COMMON_ANODE)
 {
	 DIO_voidWritePin(SEV_astrSevConfig[Copy_u8SevIndex].SevCommon, HIGH);
 }
 else
 {
	 DIO_voidWritePin(SEV_astrSevConfig[Copy_u8SevIndex].SevCommon, LOW);
 } 
}
void SEV_voidTurnOff(u8 Copy_u8SevIndex)
{
 if( SEV_astrSevConfig[Copy_u8SevIndex].SevMode==COMMON_ANODE)
 {
	 DIO_voidWritePin(SEV_astrSevConfig[Copy_u8SevIndex].SevCommon, LOW);
 }
 else
 {
	 DIO_voidWritePin(SEV_astrSevConfig[Copy_u8SevIndex].SevCommon, HIGH);
 } 
}
static void SEV_voidDisplayNum(u8 Copy_u8SevIndex,u8 Copy_u8Num)
{
	u8 Local_u8Itr;
	u8 Local_au8Group[7]={};
	for(Local_u8Itr=0;Local_u8Itr<7;Local_u8Itr++)
	{
		Local_au8Group[Local_u8Itr]=GET_BIT(Copy_u8Num,Local_u8Itr);
	}
	DIO_voidWritePinGroup(SEV_astrSevConfig[Copy_u8SevIndex].SevPoints, Local_au8Group, 7);
}