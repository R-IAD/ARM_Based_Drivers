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


void MGPIO_vSetGPIODirection(u32 GPIOId , u32 PINId , u32 GPIODir )
{
	switch(GPIOId)
	{
	case GPIO_PORTA :
		switch(PINId)
		{
		case GPIO_PIN0 :
			GPIOA->MODER = 0x0c000000 | (GPIODir<<(PINId*2)) ;
			break;
		case GPIO_PIN1 :
			GPIOA->MODER = 0x0c000000 | (GPIODir<<(PINId*2)) ;

			break;
		case GPIO_PIN2 :
			GPIOA->MODER = 0x0c000000 | (GPIODir<<(PINId*2)) ;

			break;
		case GPIO_PIN3 :
			GPIOA->MODER = 0x0c000000 | (GPIODir<<(PINId*2)) ;

			break;
		case GPIO_PIN4 :
			GPIOA->MODER = 0x0c000000 | (GPIODir<<(PINId*2)) ;

			break;
		case GPIO_PIN5 :
			GPIOA->MODER = 0x0c000000 | (GPIODir<<(PINId*2)) ;

			break;
		case GPIO_PIN6 :
			GPIOA->MODER = 0x0c000000 | (GPIODir<<(PINId*2)) ;

			break;
		case GPIO_PIN7 :
			GPIOA->MODER = 0x0c000000 | (GPIODir<<(PINId*2)) ;

			break;
		case GPIO_PIN8 :
			GPIOA->MODER = 0x0c000000 | (GPIODir<<(PINId*2)) ;

			break;
		case GPIO_PIN9 :
			GPIOA->MODER = 0x0c000000 | (GPIODir<<(PINId*2)) ;

			break;
		case GPIO_PIN10 :
			GPIOA->MODER = 0x0c000000 | (GPIODir<<(PINId*2)) ;

			break;
		case GPIO_PIN11 :
			GPIOA->MODER = 0x0c000000 | (GPIODir<<(PINId*2)) ;

			break;
		case GPIO_PIN12 :
			GPIOA->MODER = 0x0c000000 | (GPIODir<<(PINId*2)) ;

			break;
		case GPIO_PIN13 :
			GPIOA->MODER = 0x0c000000 | (GPIODir<<(PINId*2)) ;

			break;
		case GPIO_PIN14 :
			GPIOA->MODER = 0x0c000000 | (GPIODir<<(PINId*2)) ;

			break;
		case GPIO_PIN15 :
			GPIOA->MODER = 0x0c000000 | (GPIODir<<(PINId*2)) ;

			break;
		}
		break;


		case GPIO_PORTB :
			switch(PINId)
			{
			case GPIO_PIN0 :
				GPIOB->MODER = 0x00000280 | (GPIODir<<(PINId*2)) ;
				break;
			case GPIO_PIN1 :
				GPIOB->MODER = 0x00000280 | (GPIODir<<(PINId*2)) ;

				break;
			case GPIO_PIN2 :
				GPIOB->MODER = 0x00000280 | (GPIODir<<(PINId*2)) ;

				break;
			case GPIO_PIN3 :
				GPIOB->MODER = 0x00000280 | (GPIODir<<(PINId*2)) ;

				break;
			case GPIO_PIN4 :
				GPIOB->MODER = 0x00000280 | (GPIODir<<(PINId*2)) ;

				break;
			case GPIO_PIN5 :
				GPIOB->MODER = 0x00000280 | (GPIODir<<(PINId*2)) ;

				break;
			case GPIO_PIN6 :
				GPIOB->MODER = 0x00000280 | (GPIODir<<(PINId*2)) ;

				break;
			case GPIO_PIN7 :
				GPIOB->MODER = 0x00000280 | (GPIODir<<(PINId*2)) ;

				break;
			case GPIO_PIN8 :
				GPIOB->MODER = 0x00000280 | (GPIODir<<(PINId*2)) ;

				break;
			case GPIO_PIN9 :
				GPIOB->MODER = 0x00000280 | (GPIODir<<(PINId*2)) ;

				break;
			case GPIO_PIN10 :
				GPIOB->MODER = 0x00000280 | (GPIODir<<(PINId*2)) ;

				break;
			case GPIO_PIN11 :
				GPIOB->MODER = 0x00000280 | (GPIODir<<(PINId*2)) ;

				break;
			case GPIO_PIN12 :
				GPIOB->MODER = 0x00000280 | (GPIODir<<(PINId*2)) ;

				break;
			case GPIO_PIN13 :
				GPIOB->MODER = 0x00000280 | (GPIODir<<(PINId*2)) ;

				break;
			case GPIO_PIN14 :
				GPIOB->MODER = 0x00000280 | (GPIODir<<(PINId*2)) ;

				break;
			case GPIO_PIN15 :
				GPIOB->MODER = 0x00000280 | (GPIODir<<(PINId*2)) ;

				break;
			}
			break;



			case GPIO_PORTC :
				switch(PINId)
				{

				case GPIO_PIN13 :
					GPIOC->MODER =  (GPIODir<<(PINId*2)) ;

					break;
				case GPIO_PIN14 :
					GPIOC->MODER =  (GPIODir<<(PINId*2)) ;

					break;
				case GPIO_PIN15 :
					GPIOC->MODER =  (GPIODir<<(PINId*2)) ;

					break;
				}
				break;
	}
}


void MGPIO_vSETPortOutType  (u32 GPIOId , u32 PINId , u32 OutType )
{
	switch(GPIOId)
	{
	case GPIO_PORTA :
		switch(PINId)
		{
		case GPIO_PIN0 :
						GPIOA->OTYPER=  (OutType<<PINId) ;
			break;
		case GPIO_PIN1 :
						GPIOA->OTYPER =  (OutType<<PINId) ;

			break;
		case GPIO_PIN2 :
						GPIOA->OTYPER =  (OutType<<PINId) ;

			break;
		case GPIO_PIN3 :
						GPIOA->OTYPER =  (OutType<<PINId) ;

			break;
		case GPIO_PIN4 :
						GPIOA->OTYPER =  (OutType<<PINId) ;

			break;
		case GPIO_PIN5 :
						GPIOA->OTYPER =  (OutType<<PINId) ;

			break;
		case GPIO_PIN6 :
						GPIOA->OTYPER =  (OutType<<PINId) ;

			break;
		case GPIO_PIN7 :
						GPIOA->OTYPER =  (OutType<<PINId) ;

			break;
		case GPIO_PIN8 :
						GPIOA->OTYPER =  (OutType<<PINId) ;

			break;
		case GPIO_PIN9 :
						GPIOA->OTYPER =  (OutType<<PINId) ;

			break;
		case GPIO_PIN10 :
						GPIOA->OTYPER =  (OutType<<PINId) ;

			break;
		case GPIO_PIN11 :
						GPIOA->OTYPER =  (OutType<<PINId) ;

			break;
		case GPIO_PIN12 :
						GPIOA->OTYPER =  (OutType<<PINId) ;

			break;
		case GPIO_PIN13 :
						GPIOA->OTYPER =  (OutType<<PINId) ;

			break;
		case GPIO_PIN14 :
						GPIOA->OTYPER =  (OutType<<PINId) ;

			break;
		case GPIO_PIN15 :
						GPIOA->OTYPER =  (OutType<<PINId) ;

			break;
		}
		break;


		case GPIO_PORTB :
			switch(PINId)
			{
			case GPIO_PIN0 :
							GPIOB->OTYPER =  (OutType<<PINId) ;
				break;
			case GPIO_PIN1 :
							GPIOB->OTYPER =  (OutType<<PINId) ;

				break;
			case GPIO_PIN2 :
							GPIOB->OTYPER =  (OutType<<PINId) ;

				break;
			case GPIO_PIN3 :
							GPIOB->OTYPER =  (OutType<<PINId) ;

				break;
			case GPIO_PIN4 :
							GPIOB->OTYPER =  (OutType<<PINId) ;

				break;
			case GPIO_PIN5 :
							GPIOB->OTYPER =  (OutType<<PINId) ;

				break;
			case GPIO_PIN6 :
							GPIOB->OTYPER =  (OutType<<PINId) ;

				break;
			case GPIO_PIN7 :
							GPIOB->OTYPER =  (OutType<<PINId) ;

				break;
			case GPIO_PIN8 :
							GPIOB->OTYPER =  (OutType<<PINId) ;

				break;
			case GPIO_PIN9 :
							GPIOB->OTYPER =  (OutType<<PINId) ;

				break;
			case GPIO_PIN10 :
							GPIOB->OTYPER =  (OutType<<PINId) ;

				break;
			case GPIO_PIN11 :
							GPIOB->OTYPER =  (OutType<<PINId) ;

				break;
			case GPIO_PIN12 :
							GPIOB->OTYPER =  (OutType<<PINId) ;

				break;
			case GPIO_PIN13 :
							GPIOB->OTYPER =  (OutType<<PINId) ;

				break;
			case GPIO_PIN14 :
							GPIOB->OTYPER =  (OutType<<PINId) ;

				break;
			case GPIO_PIN15 :
							GPIOB->OTYPER =  (OutType<<PINId) ;

				break;
			}
			break;



			case GPIO_PORTC :
				switch(PINId)
				{

				case GPIO_PIN13 :
					            GPIOC->OTYPER =  (OutType<<PINId) ;

					break;
				case GPIO_PIN14 :
								GPIOC->OTYPER =  (OutType<<PINId) ;

					break;
				case GPIO_PIN15 :
								GPIOC->OTYPER =  (OutType<<PINId) ;

					break;
				}
				break;
	}

}



void MGPIO_vSetOutSpeed (u32 GPIOId , u32 PINId , u32 OutSpeed )
{
	switch(GPIOId)
	{
	case GPIO_PORTA :
		switch(PINId)
		{
		case GPIO_PIN0 :
			GPIOA->OSPEEDR = 0x0c000000 | (OutSpeed<<PINId) ;
			break;
		case GPIO_PIN1 :
			GPIOA->OSPEEDR = 0x0c000000 | (OutSpeed<<PINId) ;

			break;
		case GPIO_PIN2 :
			GPIOA->OSPEEDR = 0x0c000000 | (OutSpeed<<PINId) ;

			break;
		case GPIO_PIN3 :
			GPIOA->OSPEEDR = 0x0c000000 | (OutSpeed<<PINId) ;

			break;
		case GPIO_PIN4 :
			GPIOA->OSPEEDR = 0x0c000000 | (OutSpeed<<PINId) ;

			break;
		case GPIO_PIN5 :
			GPIOA->OSPEEDR = 0x0c000000 | (OutSpeed<<PINId) ;

			break;
		case GPIO_PIN6 :
			GPIOA->OSPEEDR = 0x0c000000 | (OutSpeed<<PINId) ;

			break;
		case GPIO_PIN7 :
			GPIOA->OSPEEDR = 0x0c000000 | (OutSpeed<<PINId) ;

			break;
		case GPIO_PIN8 :
			GPIOA->OSPEEDR = 0x0c000000 | (OutSpeed<<PINId) ;

			break;
		case GPIO_PIN9 :
			GPIOA->OSPEEDR = 0x0c000000 | (OutSpeed<<PINId) ;

			break;
		case GPIO_PIN10 :
			GPIOA->OSPEEDR = 0x0c000000 | (OutSpeed<<PINId) ;

			break;
		case GPIO_PIN11 :
			GPIOA->OSPEEDR = 0x0c000000 | (OutSpeed<<PINId) ;

			break;
		case GPIO_PIN12 :
			GPIOA->OSPEEDR = 0x0c000000 | (OutSpeed<<PINId) ;

			break;
		case GPIO_PIN13 :
			GPIOA->OSPEEDR = 0x0c000000 | (OutSpeed<<PINId) ;

			break;
		case GPIO_PIN14 :
			GPIOA->OSPEEDR = 0x0c000000 | (OutSpeed<<PINId) ;

			break;
		case GPIO_PIN15 :
			GPIOA->OSPEEDR = 0x0c000000 | (OutSpeed<<PINId) ;

			break;
		}
		break;


		case GPIO_PORTB :
			switch(PINId)
			{
			case GPIO_PIN0 :
				GPIOB->OSPEEDR = 0x000000c0 | (OutSpeed<<(PINId*2)) ;
				break;
			case GPIO_PIN1 :
				GPIOB->OSPEEDR = 0x000000c0 | (OutSpeed<<(PINId*2)) ;

				break;
			case GPIO_PIN2 :
				GPIOB->OSPEEDR = 0x000000c0 | (OutSpeed<<(PINId*2)) ;

				break;
			case GPIO_PIN3 :
				GPIOB->OSPEEDR = 0x000000c0 | (OutSpeed<<(PINId*2)) ;

				break;
			case GPIO_PIN4 :
				GPIOB->OSPEEDR = 0x000000c0 | (OutSpeed<<(PINId*2)) ;

				break;
			case GPIO_PIN5 :
				GPIOB->OSPEEDR = 0x000000c0 | (OutSpeed<<(PINId*2)) ;

				break;
			case GPIO_PIN6 :
				GPIOB->OSPEEDR = 0x000000c0 | (OutSpeed<<(PINId*2)) ;

				break;
			case GPIO_PIN7 :
				GPIOB->OSPEEDR = 0x000000c0 | (OutSpeed<<(PINId*2)) ;

				break;
			case GPIO_PIN8 :
				GPIOB->OSPEEDR = 0x000000c0 | (OutSpeed<<(PINId*2)) ;

				break;
			case GPIO_PIN9 :
				GPIOB->OSPEEDR = 0x000000c0 | (OutSpeed<<(PINId*2)) ;

				break;
			case GPIO_PIN10 :
				GPIOB->OSPEEDR = 0x000000c0 | (OutSpeed<<(PINId*2)) ;

				break;
			case GPIO_PIN11 :
				GPIOB->OSPEEDR = 0x000000c0 | (OutSpeed<<(PINId*2)) ;

				break;
			case GPIO_PIN12 :
				GPIOB->OSPEEDR = 0x000000c0 | (OutSpeed<<(PINId*2)) ;

				break;
			case GPIO_PIN13 :
				GPIOB->OSPEEDR = 0x000000c0 | (OutSpeed<<(PINId*2)) ;

				break;
			case GPIO_PIN14 :
				GPIOB->OSPEEDR = 0x000000c0 | (OutSpeed<<(PINId*2)) ;

				break;
			case GPIO_PIN15 :
				GPIOB->OSPEEDR = 0x000000c0 | (OutSpeed<<(PINId*2)) ;

				break;
			}
			break;



			case GPIO_PORTC :
				switch(PINId)
				{

				case GPIO_PIN13 :
					GPIOC->OSPEEDR =  (OutSpeed<<(PINId*2)) ;

					break;
				case GPIO_PIN14 :
					GPIOC->OSPEEDR =  (OutSpeed<<(PINId*2)) ;

					break;
				case GPIO_PIN15 :
					GPIOC->OSPEEDR =  (OutSpeed<<(PINId*2)) ;

					break;
				}
				break;
	}

}



void MGPIO_VOutResetSetPin(u32 GPIOId , u32 PINId , u32 Set_Reset )
{
	switch(Set_Reset)
	{
	case GPIO_SET :
		switch(GPIOId)
		{
		case GPIO_PORTA :
			switch(PINId)
			{
			case GPIO_PIN0 :
				GPIOA->BSRR|=   (GPIO_SET<<PINId) ;
				break;
			case GPIO_PIN1 :
				GPIOA->BSRR |=  (GPIO_SET<<PINId) ;

				break;
			case GPIO_PIN2 :
				GPIOA->BSRR |=  (GPIO_SET<<PINId) ;

				break;
			case GPIO_PIN3 :
				GPIOA->BSRR |=  (GPIO_SET<<PINId) ;

				break;
			case GPIO_PIN4 :
				GPIOA->BSRR |=  (GPIO_SET<<PINId) ;

				break;
			case GPIO_PIN5 :
				GPIOA->BSRR |=  (GPIO_SET<<PINId) ;

				break;
			case GPIO_PIN6 :
				GPIOA->BSRR |=  (GPIO_SET<<PINId) ;

				break;
			case GPIO_PIN7 :
				GPIOA->BSRR |=  (GPIO_SET<<PINId) ;

				break;
			case GPIO_PIN8 :
				GPIOA->BSRR |=  (GPIO_SET<<PINId) ;

				break;
			case GPIO_PIN9 :
				GPIOA->BSRR |=  (GPIO_SET<<PINId) ;

				break;
			case GPIO_PIN10 :
				GPIOA->BSRR |=  (GPIO_SET<<PINId) ;

				break;
			case GPIO_PIN11 :
				GPIOA->BSRR |=  (GPIO_SET<<PINId) ;

				break;
			case GPIO_PIN12 :
				GPIOA->BSRR |=  (GPIO_SET<<PINId) ;

				break;
			case GPIO_PIN13 :
				GPIOA->BSRR |=  (GPIO_SET<<PINId) ;

				break;
			case GPIO_PIN14 :
				GPIOA->BSRR |=  (GPIO_SET<<PINId) ;

				break;
			case GPIO_PIN15 :
				GPIOA->BSRR |=  (GPIO_SET<<PINId) ;

				break;
			}
			break;


			case GPIO_PORTB :
				switch(PINId)
				{
				case GPIO_PIN0 :
					GPIOB->BSRR |=  (GPIO_SET<<PINId) ;
					break;
				case GPIO_PIN1 :
					GPIOB->BSRR |=  (GPIO_SET<<PINId) ;

					break;
				case GPIO_PIN2 :
					GPIOB->BSRR |=  (GPIO_SET<<PINId) ;

					break;
				case GPIO_PIN3 :
					GPIOB->BSRR |=  (GPIO_SET<<PINId) ;

					break;
				case GPIO_PIN4 :
					GPIOB->BSRR |=  (GPIO_SET<<PINId) ;

					break;
				case GPIO_PIN5 :
					GPIOB->BSRR |=  (GPIO_SET<<PINId) ;

					break;
				case GPIO_PIN6 :
					GPIOB->BSRR |=  (GPIO_SET<<PINId) ;

					break;
				case GPIO_PIN7 :
					GPIOB->BSRR |=  (GPIO_SET<<PINId) ;

					break;
				case GPIO_PIN8 :
					GPIOB->BSRR |=  (GPIO_SET<<PINId) ;

					break;
				case GPIO_PIN9 :
					GPIOB->BSRR |=  (GPIO_SET<<PINId) ;

					break;
				case GPIO_PIN10 :
					GPIOB->BSRR |=  (GPIO_SET<<PINId) ;

					break;
				case GPIO_PIN11 :
					GPIOB->BSRR |=  (GPIO_SET<<PINId) ;

					break;
				case GPIO_PIN12 :
					GPIOB->BSRR |=  (GPIO_SET<<PINId) ;

					break;
				case GPIO_PIN13 :
					GPIOB->BSRR |=  (GPIO_SET<<PINId) ;

					break;
				case GPIO_PIN14 :
					GPIOB->BSRR |=  (GPIO_SET<<PINId) ;

					break;
				case GPIO_PIN15 :
					GPIOB->BSRR |=  (GPIO_SET<<PINId) ;

					break;
				}
				break;



				case GPIO_PORTC :
					switch(PINId)
					{

					case GPIO_PIN13 :
						GPIOC->BSRR |=  (GPIO_SET<<PINId) ;

						break;
					case GPIO_PIN14 :
						GPIOC->BSRR |=  (GPIO_SET<<PINId) ;

						break;
					case GPIO_PIN15 :
						GPIOC->BSRR |=  (GPIO_SET<<PINId) ;

						break;
					}
					break;
		}
		break;
//		case GPIO_SET :
//			switch(GPIOId)
//			{
//			case GPIO_PORTA :
//				switch(PINId)
//				{
//				case GPIO_PIN0 :
//					GPIOA->BSRR|=   (GPIO_SET<<PINId) ;
//					break;
//				case GPIO_PIN1 :
//					GPIOA->BSRR |=  (GPIO_SET<<PINId) ;
//
//					break;
//				case GPIO_PIN2 :
//					GPIOA->BSRR |=  (GPIO_SET<<PINId) ;
//
//					break;
//				case GPIO_PIN3 :
//					GPIOA->BSRR |=  (GPIO_SET<<PINId) ;
//
//					break;
//				case GPIO_PIN4 :
//					GPIOA->BSRR |=  (GPIO_SET<<PINId) ;
//
//					break;
//				case GPIO_PIN5 :
//					GPIOA->BSRR |=  (GPIO_SET<<PINId) ;
//
//					break;
//				case GPIO_PIN6 :
//					GPIOA->BSRR |=  (GPIO_SET<<PINId) ;
//
//					break;
//				case GPIO_PIN7 :
//					GPIOA->BSRR |=  (GPIO_SET<<PINId) ;
//
//					break;
//				case GPIO_PIN8 :
//					GPIOA->BSRR |=  (GPIO_SET<<PINId) ;
//
//					break;
//				case GPIO_PIN9 :
//					GPIOA->BSRR |=  (GPIO_SET<<PINId) ;
//
//					break;
//				case GPIO_PIN10 :
//					GPIOA->BSRR |=  (GPIO_SET<<PINId) ;
//
//					break;
//				case GPIO_PIN11 :
//					GPIOA->BSRR |=  (GPIO_SET<<PINId) ;
//
//					break;
//				case GPIO_PIN12 :
//					GPIOA->BSRR |=  (GPIO_SET<<PINId) ;
//
//					break;
//				case GPIO_PIN13 :
//					GPIOA->BSRR |=  (GPIO_SET<<PINId) ;
//
//					break;
//				case GPIO_PIN14 :
//					GPIOA->BSRR |=  (GPIO_SET<<PINId) ;
//
//					break;
//				case GPIO_PIN15 :
//					GPIOA->BSRR |=  (GPIO_SET<<PINId) ;
//
//					break;
//				}
//				break;
//
//
//				case GPIO_PORTB :
//					switch(PINId)
//					{
//					case GPIO_PIN0 :
//						GPIOB->BSRR |=  (GPIO_SET<<PINId) ;
//						break;
//					case GPIO_PIN1 :
//						GPIOB->BSRR |=  (GPIO_SET<<PINId) ;
//
//						break;
//					case GPIO_PIN2 :
//						GPIOB->BSRR |=  (GPIO_SET<<PINId) ;
//
//						break;
//					case GPIO_PIN3 :
//						GPIOB->BSRR |=  (GPIO_SET<<PINId) ;
//
//						break;
//					case GPIO_PIN4 :
//						GPIOB->BSRR |=  (GPIO_SET<<PINId) ;
//
//						break;
//					case GPIO_PIN5 :
//						GPIOB->BSRR |=  (GPIO_SET<<PINId) ;
//
//						break;
//					case GPIO_PIN6 :
//						GPIOB->BSRR |=  (GPIO_SET<<PINId) ;
//
//						break;
//					case GPIO_PIN7 :
//						GPIOB->BSRR |=  (GPIO_SET<<PINId) ;
//
//						break;
//					case GPIO_PIN8 :
//						GPIOB->BSRR |=  (GPIO_SET<<PINId) ;
//
//						break;
//					case GPIO_PIN9 :
//						GPIOB->BSRR |=  (GPIO_SET<<PINId) ;
//
//						break;
//					case GPIO_PIN10 :
//						GPIOB->BSRR |=  (GPIO_SET<<PINId) ;
//
//						break;
//					case GPIO_PIN11 :
//						GPIOB->BSRR |=  (GPIO_SET<<PINId) ;
//
//						break;
//					case GPIO_PIN12 :
//						GPIOB->BSRR |=  (GPIO_SET<<PINId) ;
//
//						break;
//					case GPIO_PIN13 :
//						GPIOB->BSRR |=  (GPIO_SET<<PINId) ;
//
//						break;
//					case GPIO_PIN14 :
//						GPIOB->BSRR |=  (GPIO_SET<<PINId) ;
//
//						break;
//					case GPIO_PIN15 :
//						GPIOB->BSRR |=  (GPIO_SET<<PINId) ;
//
//						break;
//					}
//					break;
//
//
//
//					case GPIO_PORTC :
//						switch(PINId)
//						{
//
//						case GPIO_PIN13 :
//							GPIOC->BSRR |=  (GPIO_SET<<PINId) ;
//
//							break;
//						case GPIO_PIN14 :
//							GPIOC->BSRR |=  (GPIO_SET<<PINId) ;
//
//							break;
//						case GPIO_PIN15 :
//							GPIOC->BSRR |=  (GPIO_SET<<PINId) ;
//
//							break;
//						}
//						break;
//			}
//			break;
	}

}


//	GPIOB->MODER= 0x00000281 ;
//
//	GPIOB->OTYPER= 0x0000ffff ;
//
//	GPIOB->OSPEEDR = 0x000000c1 ;
//
//	GPIOB->PUPDR = 0x00000100 ;
//
//	GPIOB->BSRR= 0x00000001 ;
