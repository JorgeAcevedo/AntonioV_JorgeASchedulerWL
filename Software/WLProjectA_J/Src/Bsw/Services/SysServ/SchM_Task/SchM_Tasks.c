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
/*Antonio Vazquez    |          3         |Modification of the 1ms task       */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: SchM_Tasks.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "SchM_Tasks.h"



/* Constants and types  */
/*============================================================================*/




/* Variables */
/*============================================================================*/
VariablesType VariablesStruct;

VariablesType *Variables = &VariablesStruct;

/* Private functions prototypes */
/*============================================================================*/
void StartConditions (void){
			Variables->luw_TimeCounterValidation = START_TIME_COUNTER;
			Variables->luw_TimeCounterLEDBarChange = START_TIME_COUNTER;
			Variables->lub_LEDBarState = WINDOW_COMPLETELY_CLOSED;
			Variables->lub_AntiPinchBlock = DESACTIVATED;
			Variables->lub_FlagOneTouchUp = DESACTIVATED;
			Variables->lub_FlagOneTouchDown = DESACTIVATED;
			Variables->luw_TimeCounterAntiPinch = START_TIME_COUNTER;
			Variables->lub_MovementDirection = NONE;
			Variables->gub_State = State3;
			Variables->lub_Status = NONE;
            }

void SchM_1ms_Task ( void ){

	if (DESACTIVATED == Variables->lub_AntiPinchBlock){
	  ReadButtonStatus(Variables);
	  StateDecision(Variables);

	  }
	else if(ACTIVATED==Variables->lub_AntiPinchBlock){
	    if(WINDOW_COMPLETELY_OPEN != Variables->lub_LEDBarState){
	    Variables->gub_State=State4;}
	    else if(WINDOW_COMPLETELY_OPEN == Variables->lub_LEDBarState){
	    Variables->gub_State=State7;
	    }
	}

 StateMachine(Variables);

	/*ADD HERE THE WINDOW LIFTER CODE*/
}



/* Inline functions */
/*============================================================================*/




/* Private functions */
/*============================================================================*/




/* Exported functions */
/*============================================================================*/





 /* Notice: the file ends with a blank new line to avoid compiler warnings */
