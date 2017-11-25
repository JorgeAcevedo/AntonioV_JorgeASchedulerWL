/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: WindowControl.h $
 * $Revision: 1 $
 * $Author: Jos� Antonio $
 * $Date: 26/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    File to control the behaviour of the peripherials.

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
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: filename.h  $
  ============================================================================*/
#ifndef LEDON_H
#define LEDON_H

/* Includes */
/*============================================================================*/
#include "WLSch.h"

/* Constants and types */
/*============================================================================*/




/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/

void WindowControl (VariablesType *Variables);
void WindowClosed (void);
void WindowEmulator(VariablesType *Variables);
void WindowSimulation(VariablesType *Variables);
void TurnOnIndicator(VariablesType *Variables);
void TurnOffIndicator(VariablesType *Variables);

#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
