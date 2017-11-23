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
/*Antonio Vazquez    |          1         |Modification of all tasks          */
/*============================================================================*/
/*Jorge Acevedo      |          2         |replacement of al task for 1ms task*/
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

/* Exported Variables */
/*============================================================================*/

extern void SchM_1ms_Task    ( void );

/* Exported functions prototypes */
/*============================================================================*/

#endif /* BSW_SERVICES_SCHM_SCHM_TASKS_H_ */
