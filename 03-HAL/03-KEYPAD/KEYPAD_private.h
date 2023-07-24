/**************************************************************************/
/* Description : KEYPAD private file                                     */
/* Author      : Mona Safwat                                              */
/* Version     : 0.1v                                                     */
/* Date        : 13 July 2023                                             */
/* History     : 0.1v initial creation                                    */
/**************************************************************************/

#ifndef  KEYPAD_PRIVATE_H
#define  KEYPAD_PRIVATE_H


typedef struct {
	 u8 au8_InputNum[KEYPAD_MAX_INPUT_NUM];
	 u8 au8_OutputNum[KEYPAD_MAX_OPUT_NUM];
	 u8 u8_InputNum;
	 u8 u8_OutputNum;
	 
}StrKeypadCfg;

extern StrKeypadCfg aStrKeypadCfg_Configration[KEYPAD_MAX_NUM];
extern u8 u8_KeypadMap[KEYPAD_MAX_INPUT_NUM ][KEYPAD_MAX_OPUT_NUM];

static void voidWriteFirtSeq(u8 Copy_u8KeypadIndex,u8 Local_u8OutputIndx);
static u8 u8ReadInput(u8 Copy_u8KeypadIndex);
static u8 u8PressedKey(u8 Copy_u8KeypadIndex,u8 Copy_u8OutputIndx,u8 Local_u8KeypadReadInput);




#endif