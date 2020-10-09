/****************************************************************/
/*  				LED Driver                                  */
/*                                                              */
/*                                                              */
/*                                                              */
/*	Author 	: Khaled talaat El-Zeiny                             */
/*  version	: V01                                               */
/*  date   	: 16 August 2020                                    */
/****************************************************************/
#ifndef LED_interface_H
#define LED_interface_H
			/*Pin Definitions */

#define LED1 1

#define LED2 2

#define LED3 3

#define LED4 4

#define LED5 5

#define LED6 6

#define LED7 7

#define LED8 8





			/* Functions Prototypes  */

void LED_voidInitLed(void);
void LED_voidTurnOnLed(u8 Led_Number);
void LED_voidTurnOffLed(u8 Led_Number);
void LED_voidTurnOnALL(void);
void LED_voidTurnOffALL(void);
void LED_InOut(void);
void LED_Flashing(void);
void LED_PingPong(void);

			/*Ports Definitions */

//#define GPIOA 0
//#define GPIOB 1









#endif
