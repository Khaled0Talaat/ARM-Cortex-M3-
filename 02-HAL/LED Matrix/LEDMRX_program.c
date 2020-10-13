/*****************************************/
/*         LED Matrix Driver             */
/*                                       */
/* Author  :  Khaled Talaat El-Zeiny     */
/* Version :  V01                        */
/* Date    :  26 August 2020             */
/*****************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include"DIO_interface.h"
#include"STK_interface.h"

#include"LEDMRX_interface.h"
#include"LEDMRX_Config.h"
#include"LEDMRX_private.h"



void HLEDMRX_voidInit(void)
{
	GPIO_voidSetPinDirection(LEDMRX_ROW0_PIN,OUTPUT_SPEED_2MHZ_PP );
	GPIO_voidSetPinDirection(LEDMRX_ROW1_PIN,OUTPUT_SPEED_2MHZ_PP );
	GPIO_voidSetPinDirection(LEDMRX_ROW2_PIN,OUTPUT_SPEED_2MHZ_PP );
	GPIO_voidSetPinDirection(LEDMRX_ROW3_PIN,OUTPUT_SPEED_2MHZ_PP );
	GPIO_voidSetPinDirection(LEDMRX_ROW4_PIN,OUTPUT_SPEED_2MHZ_PP );
	GPIO_voidSetPinDirection(LEDMRX_ROW5_PIN,OUTPUT_SPEED_2MHZ_PP );
	GPIO_voidSetPinDirection(LEDMRX_ROW6_PIN,OUTPUT_SPEED_2MHZ_PP );
	GPIO_voidSetPinDirection(LEDMRX_ROW7_PIN,OUTPUT_SPEED_2MHZ_PP );

	GPIO_voidSetPinDirection(LEDMRX_COL0_PIN,OUTPUT_SPEED_2MHZ_PP );
	GPIO_voidSetPinDirection(LEDMRX_COL1_PIN,OUTPUT_SPEED_2MHZ_PP );
	GPIO_voidSetPinDirection(LEDMRX_COL2_PIN,OUTPUT_SPEED_2MHZ_PP );
	GPIO_voidSetPinDirection(LEDMRX_COL3_PIN,OUTPUT_SPEED_2MHZ_PP );
	GPIO_voidSetPinDirection(LEDMRX_COL4_PIN,OUTPUT_SPEED_2MHZ_PP );
	GPIO_voidSetPinDirection(LEDMRX_COL5_PIN,OUTPUT_SPEED_2MHZ_PP );
	GPIO_voidSetPinDirection(LEDMRX_COL6_PIN,OUTPUT_SPEED_2MHZ_PP );
	GPIO_voidSetPinDirection(LEDMRX_COL7_PIN,OUTPUT_SPEED_2MHZ_PP );
}
void HLEDMRX_voidDisplay(u8*Copy_u8Data)
{
	//	while(1)
	//{
	u32 x;

	for(x=0;x<30;x++)
	{
		DisableAllCols();
		SetRowValues(Copy_u8Data[0]);
		/*Enable Coloumn 0*/
		GPIO_voidSetPinValue(LEDMRX_COL0_PIN,GPIO_LOW);
		MSTK_voidSetBusyWait(2500);

		DisableAllCols();
		SetRowValues(Copy_u8Data[1]);
		/*Enable Coloumn 1*/
		GPIO_voidSetPinValue(LEDMRX_COL1_PIN,GPIO_LOW);
		MSTK_voidSetBusyWait(2500);


		DisableAllCols();
		SetRowValues(Copy_u8Data[2]);
		/*Enable Coloumn 2*/
		GPIO_voidSetPinValue(LEDMRX_COL2_PIN,GPIO_LOW);
		MSTK_voidSetBusyWait(2500);

		DisableAllCols();

		SetRowValues(Copy_u8Data[3]);
		/*Enable Coloumn 3*/
		GPIO_voidSetPinValue(LEDMRX_COL3_PIN,GPIO_LOW);
		MSTK_voidSetBusyWait(2500);

		DisableAllCols();
		SetRowValues(Copy_u8Data[4]);
		/*Enable Coloumn 4*/
		GPIO_voidSetPinValue(LEDMRX_COL4_PIN,GPIO_LOW);
		MSTK_voidSetBusyWait(2500);

		DisableAllCols();
		SetRowValues(Copy_u8Data[5]);
		/*Enable Coloumn 5*/
		GPIO_voidSetPinValue(LEDMRX_COL5_PIN,GPIO_LOW);
		MSTK_voidSetBusyWait(2500);

		DisableAllCols();
		SetRowValues(Copy_u8Data[6]);
		/*Enable Coloumn 6*/
		GPIO_voidSetPinValue(LEDMRX_COL6_PIN,GPIO_LOW);
		MSTK_voidSetBusyWait(2500);

		DisableAllCols();
		SetRowValues(Copy_u8Data[7]);
		/*Enable Coloumn 7*/
		GPIO_voidSetPinValue(LEDMRX_COL7_PIN,GPIO_LOW);
		MSTK_voidSetBusyWait(2500);

		//}
	}
	DisableAllCols();
}
static void DisableAllCols(void)
{
	GPIO_voidSetPinValue(LEDMRX_COL0_PIN,GPIO_HIGH);
	GPIO_voidSetPinValue(LEDMRX_COL1_PIN,GPIO_HIGH);
	GPIO_voidSetPinValue(LEDMRX_COL2_PIN,GPIO_HIGH);
	GPIO_voidSetPinValue(LEDMRX_COL3_PIN,GPIO_HIGH);
	GPIO_voidSetPinValue(LEDMRX_COL4_PIN,GPIO_HIGH);
	GPIO_voidSetPinValue(LEDMRX_COL5_PIN,GPIO_HIGH);
	GPIO_voidSetPinValue(LEDMRX_COL6_PIN,GPIO_HIGH);
	GPIO_voidSetPinValue(LEDMRX_COL7_PIN,GPIO_HIGH);


}
static void SetRowValues(u8 Copy_u8Value)
{
	u8 LOC_u8Result;

	LOC_u8Result= GET_BIT(Copy_u8Value,0);
	GPIO_voidSetPinValue(LEDMRX_ROW0_PIN,LOC_u8Result);

	LOC_u8Result= GET_BIT(Copy_u8Value,1);
	GPIO_voidSetPinValue(LEDMRX_ROW1_PIN,LOC_u8Result);	

	LOC_u8Result= GET_BIT(Copy_u8Value,2);
	GPIO_voidSetPinValue(LEDMRX_ROW2_PIN,LOC_u8Result);

	LOC_u8Result= GET_BIT(Copy_u8Value,3);
	GPIO_voidSetPinValue(LEDMRX_ROW3_PIN,LOC_u8Result);

	LOC_u8Result= GET_BIT(Copy_u8Value,4);
	GPIO_voidSetPinValue(LEDMRX_ROW4_PIN,LOC_u8Result);

	LOC_u8Result= GET_BIT(Copy_u8Value,5);
	GPIO_voidSetPinValue(LEDMRX_ROW5_PIN,LOC_u8Result);

	LOC_u8Result= GET_BIT(Copy_u8Value,6);
	GPIO_voidSetPinValue(LEDMRX_ROW6_PIN,LOC_u8Result);

	LOC_u8Result= GET_BIT(Copy_u8Value,7);
	GPIO_voidSetPinValue(LEDMRX_ROW7_PIN,LOC_u8Result);



}
