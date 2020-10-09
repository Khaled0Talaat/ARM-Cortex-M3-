/****************************************************************/
/*  				LED Driver                                  */
/*                                                              */
/*                                                              */
/*                                                              */
/*	Author 	: Khaled talaat El-Zeiny                            */
/*  version	: V01                                               */
/*  date   	: 16 August 2020                                    */
/****************************************************************/
#ifndef LED_CONFIG_H
#define LED_CONFIG_H



			         /*Pins configurations
LED_ENABLE      CHOOSE 1-ON
				       2-OFF
LED_NUMBER      Choose ------> LED_PORT,LED_PINNUMBER

			              OPTIONS for LED_PORT : 1- GPIOA
			                                     2- GPIOB
			                                     3- GPIOC
			                  OPTIONS for LED_PIN_NUMBER ---> PIN0->Pin15*/
			
/*LED1 Configurations */
#define LED1_ENABLE 		ON
#define LED_1   			GPIOA,PIN1

/*LED2 Configurations */
#define LED2_ENABLE 		ON
#define LED_2  				GPIOA,PIN2


/*LED3 Configurations */
#define LED3_ENABLE			 ON
#define LED_3  				 GPIOA,PIN3


/*LED4 Configurations */
#define LED4_ENABLE 		ON
#define LED_4   			GPIOA,PIN4


/*LED5 Configurations */
#define LED5_ENABLE			 ON
#define LED_5  				 GPIOA,PIN5

/*LED6 Configurations */
#define LED6_ENABLE 		ON
#define LED_6   			GPIOA,PIN6


/*LED7 Configurations */
#define LED7_ENABLE 		ON
#define LED_7   			GPIOA,PIN7


/*LED8 Configurations */
#define LED8_ENABLE 		ON
#define LED_8   			GPIOA,PIN8









			 














#endif
