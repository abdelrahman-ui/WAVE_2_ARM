/*======================================================================================
===========================   - GPIO_interface.h			 ===========================
===========================   - Created: /2021			     ===========================
===========================   - Author: Abdelrahman_Magdy    ===========================
===========================   - Version : _1_				 ===========================
===========================   - Note :
									  *-
									  *-
 ======================================================================================*/ 

/*=====================================================================================
		* What i sell To Customer
		*  The Archictect Give The API	
						- The Name Of Function 
						- What is The Input 
						- What Is The Output
						- Macro 
						 
======================================================================================*/ 

/*===================================================================================
===============     guard of file will call on time in .c		   ==================
=====================================================================================*/


#ifndef _GPIO_INTERFACE_H
#define _GPIO_INTERFACE_H
/*===========  Include  ===========*/
#include "STD_TYPES.h"
#include "GPIO_private.h"
#include "GPIO_config.h"


/*======== Macros Of Port ========*/
#define _GPIOA_PORT   		   0U
#define _GPIOB_PORT   		   1U
#define _GPIOC_PORT   		   2U
#define _GPIOD_PORT   		   3U
#define _GPIOE_PORT   		   4U
#define _GPIOH_PORT   		   5U
/*======== Macros Of Pins ========*/
#define _PIN_0        		   0U 
#define _PIN_1        		   1U 
#define _PIN_2        		   2U 
#define _PIN_3        		   3U 
#define _PIN_4        		   4U 
#define _PIN_5        		   5U
#define _PIN_6        		   6U
#define _PIN_7        		   7U
#define _PIN_8        		   8U
#define _PIN_9        		   9U
#define _PIN_10       		   10U
#define _PIN_11       		   11U
#define _PIN_12       		   12U
#define _PIN_13       		   13U
#define _PIN_14       		   14U
#define _PIN_15       		   15U
/*======== Macros Of Mode ========*/
#define _MODE_INPUT      	 (0b00)
#define _MODE_OUTPUT     	 (0b01)
#define _MODE_ALTF       	 (0b10)
#define _MODE_ANALOG     	 (0b11)
/*======== Macros Of Type ========*/
#define _OUTPUT_TYPE_PUSH_PULL    0U
#define _OUTPUT_TYPE_OPEN_DRAIN   1U
/*======== Macros Of Speed ========*/
#define _OUTPUT_SPEED_LOW       (0b00)
#define _OUTPUT_SPEED_MEDUIM    (0b01)
#define _OUTPUT_SPEED_HIGH      (0b10)
#define _OUTPUT_SPEED_VERY_HIGH (0b11)
/*======== Macros Of PULL  ========*/
#define _PULL_OFF              (0b00)
#define _PULL_UP               (0b01)
#define _PULL_DOWN             (0b10)
/*======== Macros Write Data  ========*/
#define _HIGH                     0U
#define _LOW	                     1U

/*===========================     Function Prototypes     ===========================*/

/*===============   1-Function Set The Mode Of Pin	 ===============*/
void MGPIO_vSetPinMode(u8 Copy_u8PortName ,u8 Copy_u8PinNum ,u8 Copy_u8Mode  );
/*===============   2-Function Set The Type Of OutPut (OpenDrain = 0 , PushPull = 1)  ===============*/
void MGPIO_vSetPinOutPutType(u8 Copy_u8PortName ,u8 Copy_u8PinNum ,u8 Copy_u8OutPutType  );
/*===============	3-Function Set The Speed Of output pin  (LOW , Meduim , High ,VeryHaigh	===============*/
void MGPIO_vSetPinOutSpeed(u8 Copy_u32PortName ,u32 Copy_u32PinNum ,u32 Copy_u32OutSpeed );
/*===============   4-Function Set The PULL ( Almost Input ) ( OFF , UP , DOWN )  ===============*/
void MGPIO_vSetPullType(u8 Copy_u32PortName ,u32 Copy_u32PinNum ,u32 Copy_u32PullType );
/*===============   5-Function To Read Data From IDR  ===============*/
u8 MGPIO_u8ReadData(u8 copy_u8PORT ,u8 copy_u8PIN);
/*===============   6-Function To Write Data At ODR	Value = HIGH , LOW  ===============*/
void MGPIO_vWriteData(u8 Copy_u32PortName ,u8 Copy_u8PinNum ,u8 Copy_u8State);

/*==========================================================================================================*/

#endif //_GPIO_INTERFACE_H
/*===================================================================================
===============     guard of file will call on time in .c		   ==================
=====================================================================================*/
