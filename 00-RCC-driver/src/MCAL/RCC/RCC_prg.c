/*
 * RCC_prg.c
 *
 *  Created on: Aug 18, 2022
 *      Author: Riad
 */

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "RCC_int.h"
#include "RCC_prv.h"
#include "RCC_cfg.h"



void MRCC_vInit(void)
{
	/*1- CSS ON\OFF*/
#if RCC_CSS_ENABLE==ENABLE
	SET_BIT(RCC->CR,CSSON);
#elif RCC_CSS_ENABLE==DISABLE
	CLR_BIT(RCC->CR,CSSON);
#endif

	/*2- HSE_BYP   */
#if RCC_HSE_BYPASS==BYPASS_WITH_EXT_CLOCK
	SET_BIT(RCC->CR,HSEBYP);
#elif RCC_HSE_BYPASS==NOT_BYPASS
	CLR_BIT(RCC->CR,HSEBYP);
#endif

	/*3- Select Clock Switch (HSI/HSE/PLL)*/


#if RCC_HSE_ENABLE==ENABLE
	SET_BIT(RCC->CR,HSEON);
	while(GET_BIT(RCC->CR,HSERDY)!=1);
#elif RCC_HSE_ENABLE==DISABLE
	CLR_BIT(RCC->CR,HSEON);
#endif

#if RCC_HSI_ENABLE==ENABLE
	SET_BIT(RCC->CR,HSION);
	while(GET_BIT(RCC->CR,HSIRDY)!=1);
#elif RCC_HSI_ENABLE==DISABLE
	CLR_BIT(RCC->CR,HSION);
#endif

#if RCC_PLL_ENABLE==ENABLE
	SET_BIT(RCC->CR,PLLON);
	while(GET_BIT(RCC->CR,PLLRDY)!=1);
#elif RCC_PLL_ENABLE==DISABLE
	CLR_BIT(RCC->CR,PLLON);
#endif

	/*4-Bus PRE scaler*/
	/*5- PLL configuration*/
		/*5- a- PLLI2S Enable*/
#if RCC_PLLI2S_ENABLE==ENABLE
		SET_BIT(RCC->CR,PLLI2S);
#elif RCC_PLLI2S_ENABLE==DISABLE
		CLR_BIT(RCC->CR,PLLI2S);
#endif
		//Disable HSI


	/*6- Enable The selected clock*/
//#if RCC_HSE_ENABLE == ENABLE
//#endif

}



void MRCC_vEnableClock(u32 BusId, u32 PeripheralId)
{
	switch(BusId)
	{
	case AHB1:
		switch(PeripheralId)
		{
		case GPIOA :
			SET_BIT(RCC->AHB1ENR,GPIOAEN);
			break;
		case GPIOB :
			SET_BIT(RCC->AHB1ENR,GPIOBEN);
			break;
		case GPIOC :
			SET_BIT(RCC->AHB1ENR,GPIOCEN);
			break;
		}
		break;
	case AHB2:

		break;
	case APB1:

		break;
	case APB2:

		break;
	}


}



void MRCC_vDisableClock(/*???*/)
{




}

