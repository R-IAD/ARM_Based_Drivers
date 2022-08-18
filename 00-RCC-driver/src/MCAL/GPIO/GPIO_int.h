/*
 * GPIO_int.h
 *
 *  Created on: Aug 18, 2022
 *      Author: Riad
 */

#ifndef MCAL_GPIO_GPIO_INT_H_
#define MCAL_GPIO_GPIO_INT_H_


#define GPIO_PORTA  0
#define GPIO_PORTB  1
#define GPIO_PORTC  2

#define GPIO_PIN0   0
#define GPIO_PIN1   1
#define GPIO_PIN2   2
#define GPIO_PIN3   3
#define GPIO_PIN4   4
#define GPIO_PIN5   5
#define GPIO_PIN6   6
#define GPIO_PIN7   7
#define GPIO_PIN8   8
#define GPIO_PIN9   9
#define GPIO_PIN10  10
#define GPIO_PIN11  11
#define GPIO_PIN12  12
#define GPIO_PIN13  13
#define GPIO_PIN14  14
#define GPIO_PIN15  15

#define GPIO_INPUT  0
#define GPIO_OUTPUT 1
#define GPIO_AFMODE 2
#define GPIO_ANALOG 3

#define GPIO_PushPull   0
#define GPIO_OpenDrain  1

#define GPIO_LOW_SPEED  0
#define GPIO_MED_SPEED  1
#define GPIO_FAST_SPEED 2
#define GPIO_HIGH_SPEED 3

#define GPIO_SET 1



void MGPIO_vSetGPIODirection(u32 GPIOId , u32 PINId , u32 GPIODir );
void MGPIO_vSETPortOutType  (u32 GPIOId , u32 PINId , u32 OutType );
void MGPIO_vSetOutSpeed (u32 GPIOId , u32 PINId , u32 OutSpeed );
void MGPIO_VOutResetSetPin(u32 GPIOId , u32 PINId , u32 Set_Reset );



#endif /* MCAL_GPIO_GPIO_INT_H_ */
