/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: filename.c $
 * $Revision: 1 $
 * $Author: Jos� Antonio $
 * $Date: 26/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \ReadPin.c
 * Functions to read PIN's value

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
/*  AUTHOR             |        VERSION     | DESCRIPTION                     */
/*----------------------------------------------------------------------------*/
/*Jose Antonio        |              1      |StateMachine defined             */
/*Jorge Acevedo       |           2         |WindowControl used to States 4 and 5*/
/*Jose Antonio        |         3           |States 6 and 7 developed         */
/*Jorge Acevedo       |        4           |States 1 throught 3 developed    */ 
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: filename.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "WLSch.h"


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




/* Exported functions */
/*============================================================================*/

void StateMachine(VariablesType *Variables){
  switch (Variables->gub_State) {
  // Standby
    case State1:
    	TurnOffIndicator(Variables);
    break;
 //Signal Validation
    case State2:
    Variables->luw_TimeCounterValidation++;
    TurnOffIndicator(Variables);
    TurnOnIndicator(Variables);
    break;
 //Mode Decision
    case State3:
    if (VALIDATION_SIGNAL_TIME == Variables->luw_TimeCounterValidation){
      SetOneTouchFlag(Variables);
      Variables->luw_TimeCounterValidation++;
    }
    else if(VALIDATION_SIGNAL_TIME < Variables->luw_TimeCounterValidation){
      Variables->luw_TimeCounterValidation++;
    }
    break;
// OneTouch Function
    case State4:
    WindowEmulator(Variables);
    break;
//Manual Function
    case State5:
    if (MANUAL_FUNCTION_TIME==Variables->luw_TimeCounterValidation){
      ClearOneTouchFlags(Variables);
      Variables->luw_TimeCounterValidation++;
    }
    else if (MANUAL_FUNCTION_TIME<Variables->luw_TimeCounterValidation){
      WindowEmulator(Variables);
    }
    break;
//Anti Pinch
    case State6: //PINCH
    SetAntiPinchBlock(Variables);
    ClearOneTouchFlags(Variables);
    Variables->lub_MovementDirection=DOWN;
    break;
//Block state
    case State7:
    if (MODULE_BLOCKED_TIME>Variables->luw_TimeCounterAntiPinch){
      Variables->luw_TimeCounterAntiPinch++;
    }
    else if(MODULE_BLOCKED_TIME==Variables->luw_TimeCounterAntiPinch){
      ClearAntiPinchBlock(Variables);
      Variables->luw_TimeCounterAntiPinch=START_TIME_COUNTER;
    }
    break;
}}
 /* Notice: the file ends with a blank new line to avoid compiler warnings */
