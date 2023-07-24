/*****************************************************************************/
/* Description : DIO interface file                                          */
/* Author      : Mona Safwat                                                 */
/* Version     : 0.1v                                                        */
/* Date        :  6 July 2023                                                */
/* History     : 0.1v initial creation                                       */
/*****************************************************************************/

#ifndef  DIO_INTERFACE_H
#define  DIO_INTERFACE_H

#define  LOW           0
#define  HIGH          1

#define  ACTIVATE      1
#define  DEACTIVATE    0

#define  PIN_00        0
#define  PIN_01        1
#define  PIN_02        2
#define  PIN_03        3
#define  PIN_04        4
#define  PIN_05        5
#define  PIN_06        6
#define  PIN_07        7
#define  PIN_08        8
#define  PIN_09        9
#define  PIN_10        10
#define  PIN_11        11
#define  PIN_12        12
#define  PIN_13        13
#define  PIN_14        14
#define  PIN_15        15
#define  PIN_16        16
#define  PIN_17        17
#define  PIN_18        18
#define  PIN_19        19
#define  PIN_20        20
#define  PIN_21        21
#define  PIN_22        22
#define  PIN_23        23
#define  PIN_24        24
#define  PIN_25        25
#define  PIN_26        26
#define  PIN_27        27
#define  PIN_28        28
#define  PIN_29        29
#define  PIN_30        30
#define  PIN_31        31


void DIO_voidInit(void);
u8 DIO_u8ReadPinStatus(u8 Copy_u8PinNum);
void DIO_voidWritePin(u8 Copy_u8PinNum, u8 Copy_u8PinValue);
void DIO_voidTogglePin(u8 Copy_u8PinNum);
void DIO_voidPinPullUp(u8 Copy_u8PinNum, u8 Copy_u8State);
u8* DIO_ptrReadPinGroupStatus(u8* Copy_pu8PinNum , u8 u8GroupSize);
void DIO_voidWritePinGroup(u8* Copy_pu8PinNum, u8* Copy_pu8PinValue, u8 u8GroupSize);




#endif