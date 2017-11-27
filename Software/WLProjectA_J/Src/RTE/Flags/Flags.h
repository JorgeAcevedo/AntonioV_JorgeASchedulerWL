/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: Flags.h $
 * $Revision: 1 $
 * $Author: Jorge Acevedo $
 * $Date: 23/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/*
	

	This are user configurable variables that will be present for the user
	modification.
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
/*Jose Antonio       |        2           |Block functions declared           */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: filename.h  $
  ============================================================================*/
  #ifndef FLAGS_H
  #define FLAGS_H

/* Includes */
/*============================================================================*/
#include "SchM_Types.h"

/* Constants and types */
/*============================================================================*/
void SetOneTouchFlag(VariablesType *Variables);
void ClearOneTouchFlags(VariablesType *Variables);

void SetAntiPinchBlock(VariablesType *Variables);
void ClearAntiPinchBlock(VariablesType *Variables);

/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/

#endif /* BSW_SERVICES_SCHM_SCHM_CFG_H_ */
