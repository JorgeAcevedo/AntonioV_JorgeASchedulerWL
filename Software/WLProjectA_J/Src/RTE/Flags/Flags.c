/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: Flags.c $
 * $Revision: 1 $
 * $Author: Jorge Acevedo $
 * $Date: 23/11/2017$
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/*
    Definition of the TaskDescriptor and SchedulerConfig
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
/*Jorge Acevedo      |          1         |Flags defined                      */
/*Jose Antonio       |        2           |Block functions defined            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: SchM_Cfg.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "Flags.h"

/* Constants and types  */
/*============================================================================*/



/* Variables */
/*============================================================================*/



/* Private functions prototypes */
/*============================================================================*/



/* Inline functions */
/*============================================================================*/
void SetOneTouchFlag(VariablesType *Variables){
  switch (Variables->lub_MovementDirection) {
    case UP:
    Variables->lub_FlagOneTouchUp=ACTIVATED;
    case DOWN:
    Variables->lub_FlagOneTouchDown=ACTIVATED;
  }
}

void ClearOneTouchFlags(VariablesType *Variables){
  Variables->lub_FlagOneTouchUp=DESACTIVATED;
  Variables->lub_FlagOneTouchDown=DESACTIVATED;
}

void SetAntiPinchBlock(VariablesType *Variables){
  Variables->lub_AntiPinchBlock=ACTIVATED;
}

void ClearAntiPinchBlock(VariablesType *Variables){
  Variables->lub_AntiPinchBlock=DESACTIVATED;
}




/* Private functions */
/*============================================================================*/




/* Exported functions */
/*============================================================================*/



 /* Notice: the file ends with a blank new line to avoid compiler warnings */
