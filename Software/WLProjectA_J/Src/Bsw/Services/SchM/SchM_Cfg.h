/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: SchM_Cfg.h $
 * $Revision: 1 $
 * $Author: Jorge Acevedo $
 * $Date: 17/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/*
	Definition of SchM_TaskMaskType
	SchM_TaskIDType
	SchM_TaskOffsetType
	SchM_ConfigType
	const SchM_ConfigType SchedulerConfig

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
/*Jorge Acevedo      |          1         |                                   */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: filename.h  $
  ============================================================================*/
#ifndef BSW_SERVICES_SCHM_SCHM_CFG_H_
#define BSW_SERVICES_SCHM_SCHM_CFG_H_

/* Includes */
/*============================================================================*/
#include "Std_Types.h"

/* Constants and types */
/*============================================================================*/
typedef enum{
	SCHM_MASK_3P125MS = (T_UBYTE) 0x03u,
	SCHM_MASK_6P25MS  = (T_UBYTE) 0x07u,
	SCHM_MASK_12P5MS  = (T_UBYTE) 0x0Fu,
	SCHM_MASK_25MS    = (T_UBYTE) 0x1Fu,
	SCHM_MASK_50MS    = (T_UBYTE) 0x3Fu,
	SCHM_MASK_100MS   = (T_UBYTE) 0x7Fu
}SchM_TaskMaskType;

typedef enum{
	SCHM_TASKID_BKG,
	SCHM_TASKID_3P125MS,
	SCHM_TASKID_6P25MS,
	SCHM_TASKID_12P5MS,
	SCHM_TASKID_25MS,
	SCHM_TASKID_50MS,
	SCHM_TASKID_100MS
}SchM_TaskIDType;

typedef enum{
	SCHM_OFFSET_3P125MS = (T_UBYTE) 0x00u,
	SCHM_OFFSET_6P25MS  = (T_UBYTE) 0x01u,
	SCHM_OFFSET_12P5MS  = (T_UBYTE) 0x02u,
	SCHM_OFFSET_25MS    = (T_UBYTE) 0x03u,
	SCHM_OFFSET_50MS    = (T_UBYTE) 0x05u,
	SCHM_OFFSET_100MS   = (T_UBYTE) 0x06u
} SchM_TaskOffsetType;

typedef struct{
	SchM_TaskIDType 	TaskID;
	SchM_TaskMaskType 	TaskMask;
	SchM_TaskOffsetType TaskOffset;
	tCallbackFunction TaskCallback;
}SchM_TaskConfigType;


typedef struct {
	uint8_t NumOfTasks;
	const SchM_TaskConfigType *TaskConfig;
}SchM_ConfigType;

const SchM_ConfigType SchedulerConfig;

/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/

#endif /* BSW_SERVICES_SCHM_SCHM_CFG_H_ */
