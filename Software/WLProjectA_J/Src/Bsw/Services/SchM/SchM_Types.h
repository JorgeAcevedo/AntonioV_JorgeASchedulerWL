/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: SchM_Types.h $
 * $Revision: 1 $
 * $Author: Jorge Acevedo $
 * $Date: 17/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/*
	Declaration of the Pins
	SchM_TaskStateType
	SchM_SchedulerStateType
	SchM_TaskControlBlockType
	SchM_SchedulerStatusType
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
/*Jorge Acevedo      |          1         |                                   */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: SchM_Types.h  $
  ============================================================================*/
#ifndef BSW_SERVICES_SCHM_SCHM_TYPES_H_
#define BSW_SERVICES_SCHM_SCHM_TYPES_H_
/* Includes */
/*============================================================================*/
#include "Std_Types.h"

#define LED10         9
#define LED9          7
#define LED8         17
#define LED7  	     14
#define LED6         15
#define LED5         16
#define LED4         14
#define LED3          3
#define LED2         16
#define LED1         15

/* Constants and types */
/*============================================================================*/
typedef enum
{
	SCHM_TASK_STATE_SUSPENDED,
	SCHM_TASK_STATE_READY,
	SCHM_TASK_STATE_RUNNING
}SchM_TaskStateType;

typedef enum
{
	SCHM_UNINIT,
	SCHM_INIT,
	SCHM_IDLE,
	SCHM_RUNNING,
	SCHM_OVERLOAD,
	SCHM_HALTED
}SchM_SchedulerStateType;

typedef struct
{
	SchM_TaskStateType SchM_TaskState;
}SchM_TaskControlBlockType;

typedef struct
{
	uint16_t	OsTickCounter;
	SchM_SchedulerStateType SchM_SchedulerState;
}SchM_SchedulerStatusType;

/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/
#endif /* BSW_SERVICES_SCHM_SCHM_TYPES_H_ */
