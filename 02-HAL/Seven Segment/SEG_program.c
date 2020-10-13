/*******************************************************/
/*             Seven Segment Driver                    */                          
/*                                                     */
/*   Author	: Khaled Talaat El-Zeiny                   */ 
/* Version	: V01                                      */ 
/* Datee 	: 14 August 2020                           */ 
/*******************************************************/


#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "RCC_interface.h"
#include "DIO_interface.h"


#include "SEG_interface.h"
#include "SEG_config.h"
#include "SEG_private.h"

	u8 ON,OFF;


void SEGMENT_voidInit(void)
{
	#if SEG_MODE == COMMON_CATHODE
	ON  = 1 ;
	OFF = 0 ;
	#elif SEG_MODE == COMMON_ANODE
	ON=0;
	OFF= 1;
	#endif

	/* Setting the pins of the 7 Segment as output and choosing the Pins Frequency    */
	
	GPIO_voidSetPinDirection(SEG_A , OUTPUT_SPEED_10MHZ_PP);
	GPIO_voidSetPinDirection(SEG_B , OUTPUT_SPEED_10MHZ_PP);
	GPIO_voidSetPinDirection(SEG_C , OUTPUT_SPEED_10MHZ_PP);
	GPIO_voidSetPinDirection(SEG_D , OUTPUT_SPEED_10MHZ_PP);
	GPIO_voidSetPinDirection(SEG_E , OUTPUT_SPEED_10MHZ_PP);
	GPIO_voidSetPinDirection(SEG_F , OUTPUT_SPEED_10MHZ_PP);
	GPIO_voidSetPinDirection(SEG_G , OUTPUT_SPEED_10MHZ_PP);

	
	
}
void SEGMENT_voidDisplay(u8 Copy_u8Number)
{

		switch (Copy_u8Number)
		{
			case 0:
			{
				GPIO_voidSetPinValue(SEG_A,ON);
				GPIO_voidSetPinValue(SEG_B,ON);
				GPIO_voidSetPinValue(SEG_C,ON);
				GPIO_voidSetPinValue(SEG_D,ON);
				GPIO_voidSetPinValue(SEG_E,ON);
				GPIO_voidSetPinValue(SEG_F,ON);
				GPIO_voidSetPinValue(SEG_G,OFF);

				break;
			}
			
			case 1:
			{
				GPIO_voidSetPinValue(SEG_A,OFF);
				GPIO_voidSetPinValue(SEG_B,ON);
				GPIO_voidSetPinValue(SEG_C,ON);
				GPIO_voidSetPinValue(SEG_D,OFF);
				GPIO_voidSetPinValue(SEG_E,OFF);
				GPIO_voidSetPinValue(SEG_F,OFF);
				GPIO_voidSetPinValue(SEG_G,OFF);
				break;
			}
			
			case 2:
			{
				GPIO_voidSetPinValue(SEG_A,ON);
				GPIO_voidSetPinValue(SEG_B,ON);
				GPIO_voidSetPinValue(SEG_C,OFF);
				GPIO_voidSetPinValue(SEG_D,ON);
				GPIO_voidSetPinValue(SEG_E,ON);
				GPIO_voidSetPinValue(SEG_F,OFF);
				GPIO_voidSetPinValue(SEG_G,ON);
				break;
			}
			case 3:
			{
				GPIO_voidSetPinValue(SEG_A,ON);
				GPIO_voidSetPinValue(SEG_B,ON);
				GPIO_voidSetPinValue(SEG_C,ON);
				GPIO_voidSetPinValue(SEG_D,ON);
				GPIO_voidSetPinValue(SEG_E,OFF);
				GPIO_voidSetPinValue(SEG_F,OFF);
				GPIO_voidSetPinValue(SEG_G,ON);
				break;
			}
			case 4:
			{
				GPIO_voidSetPinValue(SEG_A,OFF);
				GPIO_voidSetPinValue(SEG_B,ON);
				GPIO_voidSetPinValue(SEG_C,ON);
				GPIO_voidSetPinValue(SEG_D,OFF);
				GPIO_voidSetPinValue(SEG_E,OFF);
				GPIO_voidSetPinValue(SEG_F,ON);
				GPIO_voidSetPinValue(SEG_G,ON);
				break;
			}
			case 5:
			{
				GPIO_voidSetPinValue(SEG_A,ON);
				GPIO_voidSetPinValue(SEG_B,OFF);
				GPIO_voidSetPinValue(SEG_C,ON);
				GPIO_voidSetPinValue(SEG_D,ON);
				GPIO_voidSetPinValue(SEG_E,OFF);
				GPIO_voidSetPinValue(SEG_F,ON);
				GPIO_voidSetPinValue(SEG_G,ON);
				break;
			}
			case 6:
			{
				GPIO_voidSetPinValue(SEG_A,OFF);
				GPIO_voidSetPinValue(SEG_B,OFF);
				GPIO_voidSetPinValue(SEG_C,ON);
				GPIO_voidSetPinValue(SEG_D,ON);
				GPIO_voidSetPinValue(SEG_E,ON);
				GPIO_voidSetPinValue(SEG_F,ON);
				GPIO_voidSetPinValue(SEG_G,ON);
				break;
			}
			case 7:
			{
				GPIO_voidSetPinValue(SEG_A,ON);
				GPIO_voidSetPinValue(SEG_B,ON);
				GPIO_voidSetPinValue(SEG_C,ON);
				GPIO_voidSetPinValue(SEG_D,OFF);
				GPIO_voidSetPinValue(SEG_E,OFF);
				GPIO_voidSetPinValue(SEG_F,OFF);
				GPIO_voidSetPinValue(SEG_G,OFF);
				break;
			}
			case 8:
			{
				GPIO_voidSetPinValue(SEG_A,ON);
				GPIO_voidSetPinValue(SEG_B,ON);
				GPIO_voidSetPinValue(SEG_C,ON);
				GPIO_voidSetPinValue(SEG_D,ON);
				GPIO_voidSetPinValue(SEG_E,ON);
				GPIO_voidSetPinValue(SEG_F,ON);
				GPIO_voidSetPinValue(SEG_G,ON);
				break;
			}
			case 9:
			{
				GPIO_voidSetPinValue(SEG_A,ON);
				GPIO_voidSetPinValue(SEG_B,ON);
				GPIO_voidSetPinValue(SEG_C,ON);
				GPIO_voidSetPinValue(SEG_D,ON);
				GPIO_voidSetPinValue(SEG_E,OFF);
				GPIO_voidSetPinValue(SEG_F,ON);
				GPIO_voidSetPinValue(SEG_G,ON);
				break;
			}
																											
			
		}
		
}
