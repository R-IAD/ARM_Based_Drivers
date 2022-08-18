/*
 * GPIO_prg.c
 *
 *  Created on: Aug 18, 2022
 *      Author: Riad
 */

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "GPIO_int.h"
#include "GPIO_prv.h"
#include "GPIO_cfg.h"


void MGPIO_vSetGPIODirection(void/*,u32 GPIOId , u32 ModerId*/)
{
	GPIOB->MODER= 0x00000281 ;

	GPIOB->OTYPER= 0x0000ffff ;

	GPIOB->OSPEEDR = 0x000000c1 ;

	GPIOB->PUPDR = 0x00000100 ;

	GPIOB->BSRR= 0x00000001 ;
}


