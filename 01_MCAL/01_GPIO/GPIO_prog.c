/****************************** *********************************************************
 ***************************  - GPIO_program.c				 ****************************
***************************   - Created: 3/9/2021			 ****************************
***************************   - Author: Abdelrahman_Magdy     ***************************
***************************   - Version : _1_				 ****************************
***************************   - Note :
									*-
									*-
 **************************************************************************************/ 


/*=======================================================================================
============================   The Foundation Of Function   ============================= 
=========================================================================================*/

/*===========   INCLUDE LIB   ===========*/
		 #include "STD_TYPES.h"
		 #include "BIT_MATH.h"
/*======================================*/	 
/*===========  INCLUDE MCAL  ===========*/
		#include "GPIO_private.h"
		#include "GPIO_interface.h"
		#include "GPIO_config.h"
/*======================================*/	
/*===========  INCLUDE HAL   ===========*/
			

/*======================================*/	

/*===========  INCLUDEAPP   ===========*/

/*=====================================*/	




/*====================================================   Start_FUNCTION   ====================================================*/
/*	Function Set The Mode Of Pin Mode Take 2Bits	
*			1- MODE_INPUT 
*			2- MODE_OUTPUT
*			3- MODE_ALTF  
*			4- MODE_ANALOG
*/
void MGPIO_vSetPinMode(u8 Copy_u8PortName ,u8 Copy_u8PinNum ,u8 Copy_u8Mode  ){
	
	switch(Copy_u8PortName)
	{
	  case _GPIOA_PORT : MGPIOA->MODER |= (u32) ( Copy_u8Mode << ( 2U* Copy_u8PinNum )) ; break;
	  case _GPIOB_PORT : MGPIOB->MODER |= (u32) ( Copy_u8Mode << ( 2U* Copy_u8PinNum )) ; break;
	  case _GPIOC_PORT : MGPIOC->MODER |= (u32) ( Copy_u8Mode << ( 2U* Copy_u8PinNum )) ; break;
	  case _GPIOD_PORT : MGPIOD->MODER |= (u32) ( Copy_u8Mode << ( 2U* Copy_u8PinNum )) ; break;
	  case _GPIOE_PORT : MGPIOE->MODER |= (u32) ( Copy_u8Mode << ( 2U* Copy_u8PinNum )) ; break;
	  case _GPIOH_PORT : MGPIOH->MODER |= (u32) ( Copy_u8Mode << ( 2U* Copy_u8PinNum )) ; break;
	  default : /*ERROR*/ break ;
    }
}
/*====================================================   END_ FUNCTION   ====================================================*/
/*====================================================   Start_FUNCTION   ====================================================*/
/*	Function Set The Type Of OutPut (OpenDrain = 0 , PushPull = 1) :
*								                         - OUTPUT_TYPE_PUSH_PULL
*								                         - OUTPUT_TYPE_OPEN_DRAIN	
*/
void MGPIO_vSetPinOutPutType(u8 Copy_u8PortName ,u8 Copy_u8PinNum ,u8 Copy_u8OutPutType  ){
	
	switch(Copy_u8PortName)
	{
	  case _GPIOA_PORT : MGPIOA->OTYPER |= (u32) ( Copy_u8OutPutType << ( Copy_u8PinNum )) ; break;
	  case _GPIOB_PORT : MGPIOB->OTYPER |= (u32) ( Copy_u8OutPutType << ( Copy_u8PinNum )) ; break;
	  case _GPIOC_PORT : MGPIOC->OTYPER |= (u32) ( Copy_u8OutPutType << ( Copy_u8PinNum )) ; break;
	  case _GPIOD_PORT : MGPIOD->OTYPER |= (u32) ( Copy_u8OutPutType << ( Copy_u8PinNum )) ; break;
	  case _GPIOE_PORT : MGPIOE->OTYPER |= (u32) ( Copy_u8OutPutType << ( Copy_u8PinNum )) ; break;
	  case _GPIOH_PORT : MGPIOH->OTYPER |= (u32) ( Copy_u8OutPutType << ( Copy_u8PinNum )) ; break;
	  default : /*ERROR*/ break ;
     }
	
}
/*====================================================   END_ FUNCTION   ====================================================*/
/*====================================================   Start_FUNCTION   ====================================================*/
/* Function Set The Speed (LOW , Meduim , High ,VeryHaigh):		
*					                                 - OUTPUT_SPEED_LOW      
*					                                 - OUTPUT_SPEED_MEDUIM   
*					                                 - OUTPUT_SPEED_HIGH     
*					                                 - OUTPUT_SPEED_VERY_HIGH	
*/
void MGPIO_vSetPinOutSpeed(u8 Copy_u8PortName ,u32 Copy_u8PinNum ,u32 Copy_u8OutSpeed ){
	
	switch(Copy_u8PortName)
	{
	  case _GPIOA_PORT : MGPIOA->OSPEEDR |= (u32) ( Copy_u8OutSpeed << ( 2U* Copy_u8PinNum )) ; break;
	  case _GPIOB_PORT : MGPIOB->OSPEEDR |= (u32) ( Copy_u8OutSpeed << ( 2U* Copy_u8PinNum )) ; break;
	  case _GPIOC_PORT : MGPIOC->OSPEEDR |= (u32) ( Copy_u8OutSpeed << ( 2U* Copy_u8PinNum )) ; break;
	  case _GPIOD_PORT : MGPIOD->OSPEEDR |= (u32) ( Copy_u8OutSpeed << ( 2U* Copy_u8PinNum )) ; break;
	  case _GPIOE_PORT : MGPIOE->OSPEEDR |= (u32) ( Copy_u8OutSpeed << ( 2U* Copy_u8PinNum )) ; break;
	  case _GPIOH_PORT : MGPIOH->OSPEEDR |= (u32) ( Copy_u8OutSpeed << ( 2U* Copy_u8PinNum )) ; break;
	  default : /*ERROR*/ break ;
	}
}
/*====================================================   END_ FUNCTION   ====================================================*/
/*====================================================   Start_FUNCTION   ====================================================*/
/*	Function Set The PULL :			
*					      - PULL_OFF
*					      - PULL_UP
*					      - PULL_DOWN
*/
void MGPIO_vSetPullType(u8 Copy_u8PortName ,u32 Copy_u8PinNum ,u32 Copy_u8PullType )
{
	
		switch(Copy_u8PortName)
	{
	  case _GPIOA_PORT : MGPIOA->PUPDR   |= (u32) ( Copy_u8PullType << ( 2U* Copy_u8PinNum )) ; break;
	  case _GPIOB_PORT : MGPIOB->PUPDR   |= (u32) ( Copy_u8PullType << ( 2U* Copy_u8PinNum )) ; break;
	  case _GPIOC_PORT : MGPIOC->PUPDR   |= (u32) ( Copy_u8PullType << ( 2U* Copy_u8PinNum )) ; break;
	  case _GPIOD_PORT : MGPIOD->PUPDR   |= (u32) ( Copy_u8PullType << ( 2U* Copy_u8PinNum )) ; break;
	  case _GPIOE_PORT : MGPIOE->PUPDR   |= (u32) ( Copy_u8PullType << ( 2U* Copy_u8PinNum )) ; break;
	  case _GPIOH_PORT : MGPIOH->PUPDR   |= (u32) ( Copy_u8PullType << ( 2U* Copy_u8PinNum )) ; break;
	  default : /*ERROR*/ break ;
	}
	
}
/*====================================================   END_ FUNCTION   ====================================================*/
/*====================================================   Start_FUNCTION   ====================================================*/
/*		
 *Function To Read Data From IDR
 */

u8 MGPIO_u8ReadData(u8 Copy_u8PORT ,u8 Copy_u8PIN)
{
	u8 L_u8Data = 0 ;
	switch(Copy_u8PORT)
	{ 
	  case _GPIOA_PORT :L_u8Data= GET_BIT(MGPIOA->IDR,Copy_u8PIN ) ; break;
	  
	  case _GPIOB_PORT :L_u8Data= GET_BIT(MGPIOB->IDR,Copy_u8PIN ) ; break;
	  
	  case _GPIOC_PORT :L_u8Data= GET_BIT(MGPIOC->IDR,Copy_u8PIN ) ; break;
	  
	  case _GPIOD_PORT :L_u8Data= GET_BIT(MGPIOD->IDR,Copy_u8PIN) ; break;
	  
	  case _GPIOE_PORT :L_u8Data= GET_BIT(MGPIOE->IDR,Copy_u8PIN) ; break;
	  
	  case _GPIOH_PORT :L_u8Data= GET_BIT(MGPIOH->IDR,Copy_u8PIN) ; break;
	  default : /*ERROR*/ break ;
		
	}
	return L_u8Data;
	
}
/*====================================================   END_ FUNCTION   ====================================================*/
/*====================================================   Start_FUNCTION   ====================================================*/
/*		
* Function To Write Data At ODR	Value :
*									  - HIGH  
*									  - LOW	
*/
void MGPIO_vWriteData(u8 Copy_u8PortName ,u8 Copy_u8PinNum ,u8 Copy_u8State)
{
	if(Copy_u8State==HIGH)
	{
		switch(Copy_u8PortName)
		{
		case _GPIOA_PORT :  SET_BIT(MGPIOA ->ODR,Copy_u8PinNum); break;
		
		case _GPIOB_PORT :  SET_BIT(MGPIOB ->ODR,Copy_u8PinNum); break;
		
		case _GPIOC_PORT :  SET_BIT(MGPIOC ->ODR,Copy_u8PinNum); break;
		
		case _GPIOD_PORT :  SET_BIT(MGPIOD ->ODR,Copy_u8PinNum); break;
		
		case _GPIOE_PORT :  SET_BIT(MGPIOE ->ODR,Copy_u8PinNum); break;
		
		case _GPIOH_PORT :  SET_BIT(MGPIOH ->ODR,Copy_u8PinNum); break;
		
		default : /*ERROR*/ break ;
		}
		
	}
	else{
		switch(Copy_u8PortName)
		{
		case _GPIOA_PORT :  CLR_BIT(MGPIOA ->ODR,Copy_u8PinNum); break;
		
		case _GPIOB_PORT :  CLR_BIT(MGPIOB ->ODR,Copy_u8PinNum); break;
		
		case _GPIOC_PORT :  CLR_BIT(MGPIOC ->ODR,Copy_u8PinNum); break;
		
		case _GPIOD_PORT :  CLR_BIT(MGPIOD ->ODR,Copy_u8PinNum); break;
		
		case _GPIOE_PORT :  CLR_BIT(MGPIOE ->ODR,Copy_u8PinNum); break;
		
		case _GPIOH_PORT :  CLR_BIT(MGPIOH ->ODR,Copy_u8PinNum); break;
		
		default : /*ERROR*/ break ;
		}
	}
}
/*====================================================   END_ FUNCTION   ====================================================*/

