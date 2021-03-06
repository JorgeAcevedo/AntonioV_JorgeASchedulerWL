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
/*Jos� Antonio V.T     |         1          | Function to read button status */
/*Jos� Antonio V.T     |         2          | Added function to decide state */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: filename.h  $
  ============================================================================*/
#ifndef STATUS_H
#define STATUS_H

/* Includes */
/*============================================================================*/
#include "PortComm.h"
#include "SchM_Types.h"

/* Constants and types */
/*============================================================================*/
/*#define UP    (T_UBYTE)1
#define DOWN  (T_UBYTE)2
#define PINCH (T_UBYTE)3*/

/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/
T_UBYTE ButtonPress (T_UBYTE UPDOWNPINCH);
void ReadButtonStatus(VariablesType *Variables);
void StateDecision (VariablesType *Variables);


#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
