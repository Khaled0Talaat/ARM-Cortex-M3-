/***************************************************************/
/* 						RCC Driver 							   */
/*                                                             */ 
/*	Author : Khaled Talaat El-Zeiny                            */
/*  version: V01                                               */
/*  date   : 8 August 2020                                     */
/***************************************************************/
#include"STD_TYPES.h"
#include"BIT_MATH.h"

#include"RCC_interface.h"
#include"RCC_private.h"
#include"RCC_config.h"

void RCC_voidInitSysClock(void)
{
	#if 	RCC_CLOCK_TYPE == RCC_HSE_CRYSTAL        /* Enable HSE With No Bypass */
	RCC_CFGR= 0x00000001 ;
	RCC_CR = 0x00010000 ; 
		
	#elif 	RCC_CLOCK_TYPE == RCC_HSE_RC			/* Enable HSE With Bypass */
                                               
	RCC_CFGR  = 0x00000001;
	RCC_CR    = 0x00050000; 
	#elif 	RCC_CLOCK_TYPE == RCC_HSI
	                                                /* Enable HSI + Trimming=0 */
	RCC_CFGR  = 0x00000000;
	RCC_CR    = 0x00000081;
	#elif 	RCC_CLOCK_TYPE == RCC_PLL
	
		 #if RCC_PLL_INPUT == RCC_HSI_DIV_2
			
			RCC_CFGR=0x00000002;
			RCC_CFGR&= ~((0b1111)<<18);
			RCC_CFGR|=(RCC_PLL_MUL_VAL<<18)
			RCC_CR=0x01000081;
				
		#elif RCC_PLL_INPUT == RCC_HSE_DIV_2
			RCC_CFGR=0x00030002;
			RCC_CFGR&= ~((0b1111)<<18);
			RCC_CFGR|=(RCC_PLL_MUL_VAL<<18)
			RCC_CR=0x01010000;
				
		#elif RCC_PLL_INPUT == RCC_HSE
			RCC_CFGR=0x00010002;
			RCC_CFGR&= ~((0b1111)<<18);
			RCC_CFGR|=(RCC_PLL_MUL_VAL<<18)
			RCC_CR=0x01010000;
				
		
		
		
		#endif 
	
	#else 
		#error("You Chosed Wrong Clock Type")
	
	#endif
	
}

void RCC_voidEnableClock(u8 Copy_u8BusId, u8 Copy_u8PerId)
{
	if(Copy_u8PerId<=31)
	{
		switch (Copy_u8BusId)
		{
		case RCC_AHB : SET_BIT(RCC_AHBENR,Copy_u8PerId);  break;
		case RCC_APB1: SET_BIT(RCC_APB1ENR,Copy_u8PerId); break;
		case RCC_APB2: SET_BIT(RCC_APB2ENR,Copy_u8PerId); break;
	
		}
	
	}
	else
	{
	/* Return Error */	
		
	}
}
void RCC_voidDisableClock(u8 Copy_u8BusId, u8 Copy_u8PerId)
{
	if(Copy_u8PerId<=31)
	{
		switch (Copy_u8BusId)
		{
			case RCC_AHB : CLR_BIT(RCC_AHBENR,Copy_u8PerId);  break;
			case RCC_APB1: CLR_BIT(RCC_APB1ENR,Copy_u8PerId); break;
			case RCC_APB2: CLR_BIT(RCC_APB2ENR,Copy_u8PerId); break;
	
		}
	
	}
	else
	{
	/* Return Error */	
		
	}
	
}
