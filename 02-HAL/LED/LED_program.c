/****************************************************************/
/*  				LED Driver                                  */
/*                                                              */
/*                                                              */
/*                                                              */
/*	Author 	: Khaled talaat El-Zeiny                             */
/*  version	: V01                                               */
/*  date   	: 16 August 2020                                    */
/****************************************************************/
#include"STD_TYPES.h"
#include"BIT_MATH.h"

#include"DIO_interface.h"
#include"RCC_interface.h"

#include"LED_interface.h"
#include"LED_config.h"
#include"LED_private.h"

/*
This Function intialize the led pins according to the pins enabled 
in the Configuration File

*/

void LED_voidInitLed(void)
{
#if LED1_ENABLE == ON
	 GPIO_voidSetPinDirection(LED_1,OUTPUT_SPEED_2MHZ_PP);
#endif

#if LED2_ENABLE == ON
	 GPIO_voidSetPinDirection(LED_2,OUTPUT_SPEED_2MHZ_PP);
#endif

#if LED3_ENABLE == ON
	 GPIO_voidSetPinDirection(LED_3,OUTPUT_SPEED_2MHZ_PP);
#endif

#if LED4_ENABLE == ON
	 GPIO_voidSetPinDirection(LED_4,OUTPUT_SPEED_2MHZ_PP);
#endif
#if LED5_ENABLE == ON
	 GPIO_voidSetPinDirection(LED_5,OUTPUT_SPEED_2MHZ_PP);
#endif
#if LED6_ENABLE == ON
	 GPIO_voidSetPinDirection(LED_6,OUTPUT_SPEED_2MHZ_PP);
#endif
#if LED7_ENABLE == ON
	 GPIO_voidSetPinDirection(LED_7,OUTPUT_SPEED_2MHZ_PP);
#endif
#if LED8_ENABLE == ON
	 GPIO_voidSetPinDirection(LED_8,OUTPUT_SPEED_2MHZ_PP);
#endif

}
/*
This function turns ON Led by Sending its number 
*/
void LED_voidTurnOnLed(u8 Led_Number)
{

	switch(Led_Number)
	{

	case 1: GPIO_voidSetPinValue(LED_1,GPIO_HIGH); break;
	case 2: GPIO_voidSetPinValue(LED_2,GPIO_HIGH); break;
	case 3: GPIO_voidSetPinValue(LED_3,GPIO_HIGH); break;
	case 4: GPIO_voidSetPinValue(LED_4,GPIO_HIGH); break;
	case 5: GPIO_voidSetPinValue(LED_5,GPIO_HIGH); break;
	case 6: GPIO_voidSetPinValue(LED_6,GPIO_HIGH); break;
	case 7: GPIO_voidSetPinValue(LED_7,GPIO_HIGH); break;
	case 8: GPIO_voidSetPinValue(LED_8,GPIO_HIGH); break;


	}

}

/*
This function turns ON all Leds
*/
void LED_voidTurnOnALL(void)
{
	u8 i;
	for(i=1;i<=8;i++)
	{
		LED_voidTurnOnLed(i);
	}
}


/*
This function turns OFF Led by Sending its number 
*/
void LED_voidTurnOffLed(u8 Led_Number)
{

	switch(Led_Number)
	{

	case 1: GPIO_voidSetPinValue(LED_1,GPIO_LOW); break;
	case 2: GPIO_voidSetPinValue(LED_2,GPIO_LOW); break;
	case 3: GPIO_voidSetPinValue(LED_3,GPIO_LOW); break;
	case 4: GPIO_voidSetPinValue(LED_4,GPIO_LOW); break;
	case 5: GPIO_voidSetPinValue(LED_5,GPIO_LOW); break;
	case 6: GPIO_voidSetPinValue(LED_6,GPIO_LOW); break;
	case 7: GPIO_voidSetPinValue(LED_7,GPIO_LOW); break;
	case 8: GPIO_voidSetPinValue(LED_8,GPIO_LOW); break;


	}

}

/*
This function turns off all Leds
*/
void LED_voidTurnOffALL(void)
{
	u8 i;
	for(i=1;i<=8;i++)
	{
		LED_voidTurnOffLed(i);
	}
}
/*
This Function make the Leds move From Left to Right and vice versa 


*/
void LED_PingPong(void)
{
u8 i;
u8 x;
u8 z;
	for(i=0;i<4;i++)
	{
		for(x=1;x<9;x++)
		{
			LED_voidTurnOnLed(x);
			MSTK_voidSetBusyWait( 200000 );
			if(x!=8)
			{
			LED_voidTurnOffLed(x);
			}
		}
		for(z=x;z>0;z--)
		{
			LED_voidTurnOnLed(z);
			MSTK_voidSetBusyWait( 200000 );
			if(z!=1)
			{
			LED_voidTurnOffLed(z);
			}
		}
	}
}
/*This Function turns All Leds on and off for 0.5 Seconds (Flashing) */

void LED_Flashing(void)
{u8 i;
	for(i=0;i<8;i++)
		{
			LED_voidTurnOnLed(1);
			LED_voidTurnOnLed(2);
			LED_voidTurnOnLed(3);
			LED_voidTurnOnLed(4);
			LED_voidTurnOnLed(5);
			LED_voidTurnOnLed(6);
			LED_voidTurnOnLed(7);
			LED_voidTurnOnLed(8);
			MSTK_voidSetBusyWait( 500000 );
			LED_voidTurnOffLed(1);
			LED_voidTurnOffLed(2);
			LED_voidTurnOffLed(3);
			LED_voidTurnOffLed(4);
			LED_voidTurnOffLed(5);
			LED_voidTurnOffLed(6);
			LED_voidTurnOffLed(7);
			LED_voidTurnOffLed(8);
			MSTK_voidSetBusyWait( 500000 );
		}
}
/*This Function make the leds move from the left and right towards each other and returning back*/
void LED_InOut(void)
{
	u8 i,l;
	for(l=0;l<4;l++)
	{
		u8 x=7,z=1;
		for(i=1;i<5;i++)
		{
			LED_voidTurnOnLed(i);
			LED_voidTurnOnLed(i+x);
			x=x-2;
			MSTK_voidSetBusyWait( 200000 );

		}
		for(i=4;i>0;i--)
		{
			LED_voidTurnOffLed(i);
			LED_voidTurnOffLed(z+i);
			z=z+2;
			MSTK_voidSetBusyWait( 200000 );
		}
	}
}



