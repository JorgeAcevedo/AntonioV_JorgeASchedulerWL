/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: ReadPin.h $
 * $Revision: 1 $
 * $Author: Jos� Antonio $
 * $Date: 26/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    Read the PIN's value.

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
/*  AUTHOR             |        VERSION     |  DESCRIPTION                    */
/*----------------------------------------------------------------------------*/
/*Jose Antonio        |              1      |StateMachine defined             */
/*Jorge Acevedo       |           2         |WindowControl used to States 4 and 5*/
/*Jose Antonio        |         3           |States 6 and 7 developed         */
/*Jorge Acevedo       |        4           |States 1 throught 3 developed    */ 
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: filename.h  $
  ============================================================================*/
  #ifndef BSW_SERVICES_SCHM_WLSCH_H_
  #define BSW_SERVICES_SCHM_WLSCH_H_

/* Includes */
/*============================================================================*/
#include "Status.h"

/* Constants and types */
/*============================================================================*/
/*#define UP    (T_UBYTE)1
#define DOWN  (T_UBYTE)2
#define PINCH (T_UBYTE)3*/

/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/
void StateMachine(VariablesType *Variables);


#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
