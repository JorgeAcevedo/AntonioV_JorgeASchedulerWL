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
/*Jorge Acevedo      |          2         |Adition of variables and Constants */
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
#define LEDUp      		0
#define LEDDown 			16
#define AntiPinchButton 0
#define UpButton				13
#define DownButton 			12

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

typedef struct{
  T_UWORD luw_TimeCounterValidation;
  T_UWORD luw_TimeCounterLEDBarChange;
  T_UBYTE lub_LEDBarState;
  T_UBYTE lub_AntiPinchBlock;
  T_UBYTE lub_FlagOneTouchUp;
  T_UBYTE lub_FlagOneTouchDown;
  T_UWORD luw_TimeCounterAntiPinch;
  T_UBYTE lub_MovementDirection;
  T_UBYTE gub_State;
  T_UBYTE lub_Status;
}VariablesType;

enum{
  UP,
  DOWN,
  NONE,
  PINCH,
  MOVEMENT
}ButtonsandDirectionValues;

enum{
  State1,
  State2,
  State3,
  State4,
  State5,
  State6,
  State7
}States;


enum{
  ACTIVATED,
  DESACTIVATED,
  WINDOW_COMPLETELY_OPEN    =   (T_UBYTE) 0,
  WINDOW_COMPLETELY_CLOSED  =   (T_UBYTE) 10,
  START_TIME_COUNTER        =   (T_UBYTE) 0,
  VALIDATION_SIGNAL_TIME    =   (T_UBYTE) 10,
  MANUAL_FUNCTION_TIME      =   (T_UWORD) 500,
  MODULE_BLOCKED_TIME       =   (T_UWORD) 5000,
  CHANGE_WINDOW_STATE_TIME  =   (T_UWORD) 400
}Constantstype;


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/
#endif /* BSW_SERVICES_SCHM_SCHM_TYPES_H_ */
