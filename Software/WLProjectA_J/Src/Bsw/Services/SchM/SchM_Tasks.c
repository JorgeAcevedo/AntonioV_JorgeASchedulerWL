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
/*Antonio Vazquez    |          1         |                                 */
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



/* Variables */
/*============================================================================*/



/* Private functions prototypes */
/*============================================================================*/
void SchM_3p125ms_Task ( void )
{
	Dio_PortTooglePin(PORTCH_C, PIN3P125MS);
	static int counter;
	for(counter=0;counter <= NumberOfCycles; counter++){}

}
void SchM_6p25ms_Task ( void )
{
	Dio_PortTooglePin(PORTCH_B, PIN6P25MS);
	static int counter;
	for(counter=0;counter <= NumberOfCycles; counter++){}
}
extern void SchM_12p5ms_Task   ( void ){
	Dio_PortTooglePin(PORTCH_B, PIN12P5MS);
	static int counter;
	for(counter=0;counter <= NumberOfCycles; counter++){}
}
extern void SchM_25ms_Task     ( void ){
	Dio_PortTooglePin(PORTCH_B, PIN25MS);
	static int counter;
	for(counter=0;counter <= NumberOfCycles; counter++){}
}
extern void SchM_50ms_Task     ( void ){
	Dio_PortTooglePin(PORTCH_B, PIN50MS);
	static int counter;
	for(counter=0;counter <= NumberOfCycles; counter++){}
}
extern void SchM_100ms_Task    ( void ){
	Dio_PortTooglePin(PORTCH_C, PIN100MS);
	static int counter;
	for(counter=0;counter <= NumberOfCycles; counter++){}
}


/* Inline functions */
/*============================================================================*/




/* Private functions */
/*============================================================================*/




/* Exported functions */
/*============================================================================*/



 /* Notice: the file ends with a blank new line to avoid compiler warnings */






