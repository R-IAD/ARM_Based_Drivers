/*
 * RCC_prv.h
 *
 *  Created on: Aug 18, 2022
 *      Author: Riad
 */

#ifndef MCAL_RCC_RCC_PRV_H_
#define MCAL_RCC_RCC_PRV_H_

#define RCC_BASE_ADDRESS  0x40023800

typedef struct
{
	u32 CR       ;
	u32 PLLCFGR  ;
	u32 CFGR     ;
	u32 CIR      ;
	u32 AHB1RSTR ;
	u32 AHB2RSTR ;
	u32 reserved1;
	u32 reserved2;
	u32 APB1RSTR ;
	u32 APB2RSTR ;
	u32 reserved3;
	u32 reserved4;
	u32 AHB1ENR  ;
	u32 AHB2ENR  ;
	u32 reserved5;
	u32 reserved6;
	u32 APB1ENR  ;
	u32 APB2ENR  ;

}RCC_MemMap_t;

#define RCC   ((volatile RCC_MemMap_t*)(RCC_BASE_ADDRESS))


#define CSSON  19
#define HSEBYP 18
#define HSEON  16
#define HSERDY 17
#define PLLON  24
#define PLLI2S 26
#define HSION  0

#define GPIOBEN 1


#endif /* MCAL_RCC_RCC_PRV_H_ */
