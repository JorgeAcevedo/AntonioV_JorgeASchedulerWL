/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: SchM.c $
 * $Revision: 1 $
 * $Author: Jorge Acevedo $
 * $Date: 17/11/2017$
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/*
	Definition of the functions:
	SchM_OsTick
	SchM_Background
	SchM_Init
	SchM_Start
	SchM_Stop
	TurnOnOverloadPin
	TurnOnBackgroundPin
	TurnOffBackgroundPin
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
/*Jorge Acevedo      |          1         |Modification for showing overflow  */
/*                   |                    |and proving all tasks              */
/*----------------------------------------------------------------------------*/
/*Jorge Acevedo      |          2         |Modification for just executing the*/
/*                   |                    |one ms task and disable the        */
/*                   |                    |overload LED indicator             */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: SchM.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "SchM.h"



/* Constants and types  */
/*============================================================================*/
#define NUM_OF_TASKS (0x6)

const SchM_ConfigType *GlbSchMConfig;



/* Variables */
/*============================================================================*/
SchM_TaskControlBlockType SchM_TaskControlBlock[NUM_OF_TASKS];
SchM_SchedulerStatusType SchM_SchedulerStatus;
Flags FlagsScheduler={
	0,0
};
uint32_t OsTickCounter = 0; /* Remove this line */
/* Private functions prototypes */
/*============================================================================*/



/* Inline functions */
/*============================================================================*/




/* Private functions */
/*============================================================================*/
void SchM_OsTick( void )
{
	uint8_t LocTaskIdx;

	SchM_SchedulerStatus.OsTickCounter++;

	//Set Ready the Task if mask match the Counter
	for(LocTaskIdx = 0; LocTaskIdx < GlbSchMConfig->NumOfTasks; LocTaskIdx++){

		if((SchM_SchedulerStatus.OsTickCounter & GlbSchMConfig->TaskConfig[LocTaskIdx].TaskMask) == GlbSchMConfig->TaskConfig[LocTaskIdx].TaskOffset){  //if((Counter & Mask) == Offset)
				if(FlagsScheduler.FlagTaskState == 1){		//Review if there is any Task in Running or Start State before activating other task
					FlagsScheduler.FlagOverLoad = 1;		//Set the OverLoad Flag
					/*Encender LED VERDE de la tarjeta para mostrar un overload*/
				}
					SchM_TaskControlBlock[LocTaskIdx].SchM_TaskState=SCHM_TASK_STATE_READY;
					FlagsScheduler.FlagTaskState = 1;		//Set the Flag that indicates the activation of a Task
			}
	}
}

void SchM_Background( void )
{

	uint8_t LocTaskIdx;
	for(;;)
	{
		for(LocTaskIdx = 0; LocTaskIdx < GlbSchMConfig->NumOfTasks; LocTaskIdx++)
		{
			if ( SCHM_TASK_STATE_READY == SchM_TaskControlBlock[LocTaskIdx].SchM_TaskState )
			{
				SchM_TaskControlBlock[LocTaskIdx].SchM_TaskState = SCHM_TASK_STATE_RUNNING;
				SchM_SchedulerStatus.SchM_SchedulerState = SCHM_RUNNING;
				GlbSchMConfig->TaskConfig[LocTaskIdx].TaskCallback();
				SchM_TaskControlBlock[LocTaskIdx].SchM_TaskState = SCHM_TASK_STATE_SUSPENDED;
				//Clear the Flag that indicates that there is one Task Activated.
				FlagsScheduler.FlagTaskState = 0 ;
				SchM_SchedulerStatus.SchM_SchedulerState = SCHM_IDLE;
			}
		}
	}
}

void SchM_Init( const SchM_ConfigType *SchMConfig )
{
	GlbSchMConfig = SchMConfig;
	uint8_t LocTaskIdx;
	SchM_SchedulerStatus.SchM_SchedulerState = SCHM_UNINIT;

	for(LocTaskIdx = 0; LocTaskIdx < GlbSchMConfig->NumOfTasks; LocTaskIdx++)
	{
		SchM_TaskControlBlock[LocTaskIdx].SchM_TaskState = SCHM_TASK_STATE_SUSPENDED;
	}

	LPIT0_init(SchM_OsTick);            /* Initialize PIT0 for 500 micro-seconds timeout & Callback Install */

	SchM_SchedulerStatus.SchM_SchedulerState = SCHM_INIT;
}

void SchM_Start( void )
{
	LPIT0_Start();
	SchM_Background();
}

void SchM_Stop( void )
{
	LPIT0_Stop();
}




/* Exported functions */
/*============================================================================*/



 /* Notice: the file ends with a blank new line to avoid compiler warnings */
