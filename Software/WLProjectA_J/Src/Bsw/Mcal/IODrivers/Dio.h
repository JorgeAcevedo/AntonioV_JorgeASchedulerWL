/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: GPIO.h $
 * $Revision: 1 $
 * $Author: Jos� Antonio $
 * $Date: 26/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    GPIO mapping

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
/*  AUTHOR             |        VERSION     | DESCRIPTION                     */
/*----------------------------------------------------------------------------*/
/* JOS� ANTONIO V.T.   |          1         | GPIO mapping and definitions    */
/*----------------------------------------------------------------------------*/
/* JOS� ANTONIO V.T.   |          2         | Functions to read pin's values  */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: filename.h  $
  ============================================================================*/
#ifndef GPIO_H
#define GPIO_H

/* Includes */
/*============================================================================*/
#include "Std_Types.h"

/* Constants and types */
/*============================================================================*/
typedef struct {
	T_ULONG PDOR;
	T_ULONG PSOR;
	T_ULONG PCOR;
	T_ULONG PTOR;
	T_ULONG PDIR;
	T_ULONG PDDR;
	T_ULONG PIDR;
}GPIO_Type;

#define GPIO_PORTA_BASE_ADDRESS      0x400FF000
#define GPIO_PORTB_BASE_ADDRESS      0x400FF040
#define GPIO_PORTC_BASE_ADDRESS      0x400FF080
#define GPIO_PORTD_BASE_ADDRESS      0x400FF0C0
#define GPIO_PORTE_BASE_ADDRESS      0x400FF100


#define PTA           ((GPIO_Type *)GPIO_PORTA_BASE_ADDRESS)
#define PTB           ((GPIO_Type *)GPIO_PORTB_BASE_ADDRESS)
#define PTC           ((GPIO_Type *)GPIO_PORTC_BASE_ADDRESS)
#define PTD           ((GPIO_Type *)GPIO_PORTD_BASE_ADDRESS)
#define PTE           ((GPIO_Type *)GPIO_PORTE_BASE_ADDRESS)

/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/




#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
