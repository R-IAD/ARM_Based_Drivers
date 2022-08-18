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
	SET_BIT(RCC->CR,CSSON);
	/*2- HSE_BYP   */
	CLR_BIT(RCC->CR,HSEBYP);
	SET_BIT(RCC->CR,HSEON);
	while(GET_BIT(RCC->CR,HSERDY)!=1);
	/*3- Select Clock Switch (HSI/HSE/PLL)*/
	/*4-Bus PRE scaler*/
	/*5- PLL configuration*/
	CLR_BIT(RCC->CR,PLLON);
		/*5- a- PLLI2S Enable*/
		CLR_BIT(RCC->CR,PLLI2S);

		//Disable HSI
		CLR_BIT(RCC->CR,HSION);

	/*6- Enable The selected clock*/
//#if RCC_HSE_ENABLE == ENABLE
//#endif

}



void MRCC_vEnableClock(/*u32 BusId,*/ u32 PeripheralId)
{

	switch(PeripheralId)
	{
	case GPIOB :
		SET_BIT(RCC->AHB1ENR,GPIOBEN);
		break;
	}



}



void MRCC_vDisableClock(/*???*/)
{




}

