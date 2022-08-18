/*
 * RCC_int.h
 *
 *  Created on: Aug 18, 2022
 *      Author: Riad
 */

#ifndef MCAL_RCC_RCC_INT_H_
#define MCAL_RCC_RCC_INT_H_

#include "../../LIB/STD_TYPES.h"

#define GPIOB 1

void MRCC_vInit(void);
void MRCC_vEnableClock(u32 PeripheralId);
void MRCC_vDisableClock(/*???*/);


#endif /* MCAL_RCC_RCC_INT_H_ */
