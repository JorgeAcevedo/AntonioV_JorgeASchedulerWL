/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: Main.c $
 * $Revision: version 1 $
 * $Author: Jorge Acevedo $
 * $Date: 17/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/*
    Main executable code
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
/*Jorge Acevedo      |          1         |  Main Function                    */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: Main.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "Std_Types.h"
#include "Port.h"
#include "Wdog.h"
#include "Nvic.h"
#include "Mcu.h"
#include "SchM.h"

/* Constants and types  */
/*============================================================================*/



/* Variables */
/*============================================================================*/



/* Private functions prototypes */
/*============================================================================*/



/* Inline functions */
/*============================================================================*/




/* Private functions */
/*============================================================================*/
int main(void)
{
	WDOG_disable();
	PORT_init();             				/* Configure ports */
	SOSC_init_8MHz();        				/* Initialize system oscilator for 8 MHz xtal */
	SPLL_init_160MHz();      				/* Initialize SPLL to 160 MHz with 8 MHz SOSC */
	NormalRUNmode_80MHz();   				/* Init clocks: 80 MHz sysclk & core, 40 MHz bus, 20 MHz flash */
	NVIC_init_IRQs();        				/* Enable desired interrupts and priorities */
	SchM_Init(&SchedulerConfig);			/* Scheduler Services Initialization */
	SchM_Start();							/* Start Scheduler Services */

	/* Further code should not be reached */
	for(;;) {

	}

	return (0);
}



/* Exported functions */
/*============================================================================*/



 /* Notice: the file ends with a blank new line to avoid compiler warnings */




