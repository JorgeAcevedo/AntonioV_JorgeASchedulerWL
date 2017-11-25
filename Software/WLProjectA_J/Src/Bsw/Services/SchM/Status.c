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
/*Jos� Antonio V.T     |         1          | Function to read button status */
/*Jos� Antonio V.T     |         2          | Added function to decide state */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: filename.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "Status.h"


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

T_UBYTE ButtonPress (T_UBYTE UPDOWNPINCH){
	if(UPDOWNPINCH==UP){
		return (T_UBYTE)Dio_PortGetPin(PORTCH_C,UpButton);
		}
	if(UPDOWNPINCH==PINCH){
			return (T_UBYTE)Dio_PortGetPin(PORTCH_E,AntiPinchButton);
		}
	if(UPDOWNPINCH==DOWN){
		return (T_UBYTE)Dio_PortGetPin(PORTCH_C,DownButton);
	}
	else{return (T_UBYTE)0;}
}


void ReadButtonStatus(VariablesType *Variables){
  if(ButtonPress(DOWN)){
Variables->lub_MovementDirection = DOWN;
Variables->lub_Status = MOVEMENT;
  }
  else if(ButtonPress(PINCH)){
Variables->lub_Status = PINCH;
  }
  else if(ButtonPress(UP)){
Variables->lub_MovementDirection = UP;
Variables->lub_Status = MOVEMENT;
  }
  else {Variables->lub_Status = NONE;}
}



void StateDecision (VariablesType *Variables){
  if(NONE != Variables->lub_Status && VALIDATION_SIGNAL_TIME>Variables->luw_TimeCounterValidation){
    Variables->gub_State	=	State2;
  }
  else if (NONE!=Variables->lub_Status && VALIDATION_SIGNAL_TIME<=Variables->luw_TimeCounterValidation){
    switch(Variables->lub_Status){
      case MOVEMENT:
      if(VALIDATION_SIGNAL_TIME<=Variables->luw_TimeCounterValidation&&MANUAL_FUNCTION_TIME>Variables->luw_TimeCounterValidation){
        Variables->gub_State	=	State3;
      }
      else if(MANUAL_FUNCTION_TIME<=Variables->luw_TimeCounterValidation){
        Variables->gub_State	=	State5;
      }
      break;
      case PINCH:
      Variables->gub_State	=	State6;
      break;
    }
  }
else if(NONE==Variables->lub_Status){
     Variables->luw_TimeCounterValidation=START_TIME_COUNTER;
       if(ACTIVATED==Variables->lub_FlagOneTouchUp||ACTIVATED==Variables->lub_FlagOneTouchDown){
      Variables->gub_State=State4;
    }
         else{Variables->gub_State=State1;}
    }
}



 /* Notice: the file ends with a blank new line to avoid compiler warnings */
