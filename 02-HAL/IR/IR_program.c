/*
			IR Driver 
			
Name 	: Khaled Talaat El-Zeiny
Version : V02

*/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "EXTI0_interface.h"
#include "NVIC_interface.h"
#include "STK_interface.h"

#include "IR_interface.h"
#include"IR_private.h"
#include"IR_interface.h"

volatile u8   u8StartFlag       = 0;
volatile u32  u32FrameData[50]  = {0};
volatile u8   u8EdgeCounter     = 0;
volatile u8   u8Data            = 0;

#define NULL (void* )0

static void (*IR_CallBack) (u8 Data) = NULL;


void IR_voidInit(void)
{
	GPIO_voidSetPinDirection(RECIEVER_OUTPUT,INPUT_FLOATING);
	
}

/*
This Function is used for converting the signal into data to be used for Actions 

*/
void voidTakeAction(void)
{
	u8 i;
	u8Data = 0;

	if ( (u32FrameData[0] >= 10000) && (u32FrameData[0] <= 14000) )
	{
		for (i=0;i<8;i++)
		{
			if (  (u32FrameData[17+i] >= 2000) && (u32FrameData[17+i] <=2300) )
			{
				SET_BIT(u8Data,i);
			}

			else
			{
				CLR_BIT(u8Data,i);
			}
		}
		IR_CallBack(u8Data);
	}

	else
	{
		/* Invalid Frame */
	}

	u8StartFlag     = 0;
	u32FrameData[0]  = 0;
	u8EdgeCounter    = 0;

}
/*This function Save the Signal recieved to be translated in the Function (TakeAction)

*/
void voidGetFrame(void)
{

	if (u8StartFlag == 0)//The Program Will enter this condition in the Start bit ONLY 
	{
		/* Start Timer */
		MSTK_voidSetIntervalSingle(1000000,voidTakeAction);
		u8StartFlag = 1;
	}

	else
	{
		u32FrameData[u8EdgeCounter] = MSTK_u32GetElapsedTime();// To calculate the time between the falling edges to indicate the bit is 1 or 0
		MSTK_voidSetIntervalSingle(1000000,voidTakeAction);
		u8EdgeCounter++;
	}
}
void IR_voidSetCallBack(void (*Copy_u8Ptr)(u8 Data))
{
	IR_CallBack = Copy_u8Ptr;
	
}


