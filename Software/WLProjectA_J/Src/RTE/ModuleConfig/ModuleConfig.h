/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: ModuleConfig.h $
 * $Revision: 1 $
 * $Author: Jorge Acevedo $
 * $Date: 23/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/*
	
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
 * $Log: filename.h  $
  ============================================================================*/
  #ifndef RTE_MODULECONFIG_MODULECONFIG_H_
  #define RTE_MODULECONFIG_MODULECONFIG_H_

/* Includes */
/*============================================================================*/
#include "Nvic.h"
#include "WdogCfg.h"
#include "PortInit.h"
#include "RunMode.h"
#include "SchM.h"
#include "SchM_Tasks.h"

/* Constants and types */
/*============================================================================*/
void NormalModeModuleInit (void);

void EnableInterruptions (void);

void SchedulerInit (void);

void WindowLifterApp (void);

/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/

#endif /* BSW_SERVICES_SCHM_SCHM_CFG_H_ */
