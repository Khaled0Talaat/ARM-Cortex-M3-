/***************************************************************/
/* 						RCC Driver 							   */
/*                                                             */ 
/*	Author : Khaled Talaat El-Zeiny                            */
/*  version: V01                                               */
/*  date   : 8 August 2020                                     */
/***************************************************************/

#ifndef RCC_CONFIG_H
#define RCC_CONFIG_H

/* Options : 	RCC_HSE_CRYSTAL
				RCC_HSE_RC
				RCC_HSI              
				RCC_PLL

*/
#define RCC_CLOCK_TYPE        RCC_HSE_CRYSTAL


/*Options : RCC_HSI_DIV_2 
			RCC_HSE_DIV_2
			RCC_HSE
 */

/* NOTE: Select value if only you have PLL as input Clock Source */
#if CLOCK_TYPE == RCC_PLL

#define RCC_PLL_INPUT 	RCC_HSI_DIV_2

#endif

/* Options : RCC_PLL_MUL_2 
             RCC_PLL_MUL_3 
             RCC_PLL_MUL_4 
             RCC_PLL_MUL_5 
             RCC_PLL_MUL_6 
             RCC_PLL_MUL_7 
             RCC_PLL_MUL_8 
             RCC_PLL_MUL_9 
             RCC_PLL_MUL_10
             RCC_PLL_MUL_11
             RCC_PLL_MUL_12
             RCC_PLL_MUL_13
             RCC_PLL_MUL_14
             RCC_PLL_MUL_15
             RCC_PLL_MUL_16
 
			
			 */
#if RCC_CLOCK_TYPE == RCC_PLL

#define RCC_PLL_MUL_VAL 	RCC_PLL_MUL_4
    
#endif


#endif
