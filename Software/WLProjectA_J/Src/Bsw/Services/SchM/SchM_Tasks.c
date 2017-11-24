/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: SchM_Tasks.c $
 * $Revision: 1 $
 * $Author: Antonio Vazquez $
 * $Date: 17/11/2017$
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/*
    Declaration of each one of the tasks functions
*/
/*============================================================================*/
/* COPYRIGHT (C) CONTINENTAL AUTOMOTIVE 2014                                  */
/* AUTOMOTIVE GROUP, Interior Division, Body and Security                     */
/* ALL RIGHTS RESERVED                                                        */
/*                                                                            */
/* The reproduction, transmission, or use of this document or its content is  */
/* not permitted without express written authority. Offenders will be liable  */
/* for damages.                                                               */
/* All rights, including rights created by patent grant or registration of a  */
/* utility model or design, are reserved.                                     */
/*                                                                            */
/*============================================================================*/
/*============================================================================*/
/*                    REUSE HISTORY - taken over from                         */
/*============================================================================*/
/*  AUTHOR           |       VERSION      |          DESCRIPTION              */
/*----------------------------------------------------------------------------*/
/*Antonio Vazquez    |          1         |Creation of the tasks functions    */
/*----------------------------------------------------------------------------*/
/*Jorge Acevedo      |          2         |Replacement of the tasks with the  */
/*                   |                    |1ms taks.                          */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: SchM_Tasks.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "SchM_Tasks.h"
#include "Dio.h"


/* Constants and types  */
/*============================================================================*/
int counter = 0;
int var1=0;
int var2=0;
int var3=0;

/* Variables */
/*============================================================================*/



/* Private functions prototypes */
/*============================================================================*/

void SchM_1ms_Task ( void ){
var1 = Dio_PortGetPin(PORTCH_C,DownButton);
var2 = Dio_PortGetPin(PORTCH_C,UpButton);
var3 = Dio_PortGetPin(PORTCH_E,AntiPinchButton);

	if(Dio_PortGetPin(PORTCH_C,DownButton)||Dio_PortGetPin(PORTCH_C,UpButton)||Dio_PortGetPin(PORTCH_E,AntiPinchButton)){
		Dio_PortSetPin(PORTCH_E,LED10);
		Dio_PortSetPin(PORTCH_C,LED9);
		Dio_PortSetPin(PORTCH_B,LED8);
		Dio_PortSetPin(PORTCH_B,LED7);
		Dio_PortSetPin(PORTCH_B,LED6);
		Dio_PortSetPin(PORTCH_B,LED5);
		Dio_PortSetPin(PORTCH_C,LED4);
		Dio_PortSetPin(PORTCH_C,LED3);
		Dio_PortSetPin(PORTCH_E,LED2);
		Dio_PortSetPin(PORTCH_E,LED1);
		Dio_PortClearPin(PORTCH_D,LEDUp);
		Dio_PortClearPin(PORTCH_D,LEDDown);
	}else
	{
	Dio_PortClearPin(PORTCH_E,LED10);
	Dio_PortClearPin(PORTCH_C,LED9);
	Dio_PortClearPin(PORTCH_B,LED8);
	Dio_PortClearPin(PORTCH_B,LED7);
	Dio_PortClearPin(PORTCH_B,LED6);
	Dio_PortClearPin(PORTCH_B,LED5);
	Dio_PortClearPin(PORTCH_C,LED4);
	Dio_PortClearPin(PORTCH_C,LED3);
	Dio_PortClearPin(PORTCH_E,LED2);
	Dio_PortClearPin(PORTCH_E,LED1);
	Dio_PortSetPin(PORTCH_D,LEDUp);
	Dio_PortSetPin(PORTCH_D,LEDDown);
	}



	/*ADD HERE THE WINDOW LIFTER CODE*/
}



/* Inline functions */
/*============================================================================*/




/* Private functions */
/*============================================================================*/




/* Exported functions */
/*============================================================================*/





 /* Notice: the file ends with a blank new line to avoid compiler warnings */






