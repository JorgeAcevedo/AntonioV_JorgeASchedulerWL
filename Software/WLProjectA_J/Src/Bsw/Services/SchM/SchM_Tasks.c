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

/* Variables */
/*============================================================================*/



/* Private functions prototypes */
/*============================================================================*/

void SchM_1ms_Task ( void ){

	counter++;
	if(counter == 1000){

		Dio_PortTooglePin(PORTCH_E,LED10);
		Dio_PortTooglePin(PORTCH_C,LED9);
		Dio_PortTooglePin(PORTCH_B,LED8);
		Dio_PortTooglePin(PORTCH_B,LED7);
		Dio_PortTooglePin(PORTCH_B,LED6);
		Dio_PortTooglePin(PORTCH_B,LED5);
		Dio_PortTooglePin(PORTCH_C,LED4);
		Dio_PortTooglePin(PORTCH_C,LED3);
		Dio_PortTooglePin(PORTCH_E,LED2);
		Dio_PortTooglePin(PORTCH_E,LED1);

		counter=0;
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






