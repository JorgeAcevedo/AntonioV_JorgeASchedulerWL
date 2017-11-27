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
/*Jose Antonio      |          1         |Configuration to start the module main functions*/
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: SchM_Cfg.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "ModuleConfig.h"

/* Constants and types  */
/*============================================================================*/



/* Variables */
/*============================================================================*/



/* Private functions prototypes */
/*============================================================================*/



/* Inline functions */
/*============================================================================*/
void NormalModeModuleInit (void){
  WDOG_disable();
  PORT_init();             				/* Configure ports */
  SOSC_init_8MHz();        				/* Initialize system oscilator for 8 MHz xtal */
  SPLL_init_160MHz();      				/* Initialize SPLL to 160 MHz with 8 MHz SOSC */
  NormalRUNmode_80MHz();
}

void EnableInterruptions (void){

  NVIC_init_IRQs();}

void SchedulerInit (void){
  SchM_Init(&SchedulerConfig);
  StartConditions();
}

void WindowLifterApp (void){
SchM_Start();
}




/* Private functions */
/*============================================================================*/




/* Exported functions */
/*============================================================================*/



 /* Notice: the file ends with a blank new line to avoid compiler warnings */
