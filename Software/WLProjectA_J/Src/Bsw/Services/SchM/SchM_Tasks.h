/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: SchM_Tasks.h $
 * $Revision: 1 $
 * $Author: Antonio Vazquez $
 * $Date: 17/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/*
    Declaration of the Pins
    Constant value of NumberOfCycles // This variable changes the execution 
                                        time of the taks
    Prototypes of each task function
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
/*Antonio Vazquez    |          1         |                                 */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: SchM_Tasks.h  $
  ============================================================================*/
#ifndef BSW_SERVICES_SCHM_SCHM_TASKS_H_
#define BSW_SERVICES_SCHM_SCHM_TASKS_H_

/* Includes */
/*============================================================================*/
#include "Std_Types.h"


/* Constants and types */
/*============================================================================*/
#define NumberOfCycles (uint32_t)3000   /*Constant value that change the time
                                          that last each one of the task.
                                          For knowing the time, the following 
                                          rule shall be followed;
                                          TimeMs= (NumberOfCycles*2800)/10000
                                        */

#define PINBKG      9
#define PIN3P125MS  7
#define PIN6P25MS   17
#define PIN12P5MS   14
#define PIN25MS     15
#define PIN50MS     16
#define PIN100MS    3
#define PINOVERLOAD 16

/* Exported Variables */
/*============================================================================*/
extern void SchM_3p125ms_Task  ( void );
extern void SchM_6p25ms_Task   ( void );
extern void SchM_12p5ms_Task   ( void );
extern void SchM_25ms_Task     ( void );
extern void SchM_50ms_Task     ( void );
extern void SchM_100ms_Task    ( void );

/* Exported functions prototypes */
/*============================================================================*/

#endif /* BSW_SERVICES_SCHM_SCHM_TASKS_H_ */
