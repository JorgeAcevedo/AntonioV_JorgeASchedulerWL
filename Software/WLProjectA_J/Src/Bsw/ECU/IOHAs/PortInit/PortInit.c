/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: Port.c $
 * $Revision: 1 $
 * $Author: Antonio Vazquez $
 * $Date: date 17/11/2017$
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/*
    Code for initializinf the Ports and Pins that are going to be used by the
    tasks. These Pins re going to be used also as inidcators fo overflow and
    CPU ussage (BKG function)
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
/*Antonio Vazquez    |          1         | Initialization of all the PORTS
                     |                    | and PINs that are going to be used*/
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: Port.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
/* include peripheral declarations */
#include "PortInit.h"


/* Constants and types  */
/*============================================================================*/



/* Variables */
/*============================================================================*/



/* Private functions prototypes */
/*============================================================================*/



/* Inline functions */
/*============================================================================*/




/* Private functions */
/*============================================================================*/
void PORT_init (void) {
  //------------------PORTB----------------------------------------------------
  //OUTPUTS********************************************************************
  PCC-> PCCn[PCC_PORTB_INDEX] = PCC_PCCn_CGC_MASK; /* Enable clock for PORT B */
  //Initialize LED8
  PTB->PDDR |= 1<<LED8; /* Port D0: Data Direction= output */
  PORTB->PCR[LED8] = 0x00000100; /* Port D0: MUX = ALT1, GPIO (to blue LED on EVB) */
  PTB->PSOR |= 1<<LED8; /* Clear pin*/
  //Initialize LED7
  PTB->PDDR |= 1<<LED7; /* Port D0: Data Direction= output */
  PORTB->PCR[LED7] = 0x00000100; /* Port D0: MUX = ALT1, GPIO (to blue LED on EVB) */
  PTB->PSOR |= 1<<LED7; /* Clear pin*/
  //Initialize LED6
  PTB->PDDR |= 1<<LED6; /* Port D0: Data Direction= output */
  PORTB->PCR[LED6] = 0x00000100; /* Port D0: MUX = ALT1, GPIO (to blue LED on EVB) */
  PTB->PSOR |= 1<<LED6; /* Clear pin*/
  //Initialize LED5
  PTB->PDDR |= 1<<LED5; /* Port D0: Data Direction= output */
  PORTB->PCR[LED5] = 0x00000100; /* Port D0: MUX = ALT1, GPIO (to blue LED on EVB) */
  PTB->PSOR |= 1<<LED5; /* Clear pin*/

  //------------------PORTC------------------------------------------------------
  //OUTPUTS********************************************************************
	PCC-> PCCn[PCC_PORTC_INDEX] = PCC_PCCn_CGC_MASK; /* Enable clock for PORT D */
  //Initialize LED9
  PTC->PDDR |= 1<<LED9; /* Port D0: Data Direction= output */
  PORTC->PCR[LED9] = 0x00000100; /* Port D0: MUX = ALT1, GPIO (to blue LED on EVB) */
  PTC->PSOR |= 1<<LED9; /* Clear pin*/
  //Initialize LED4
  PTC->PDDR |= 1<<LED4; /* Port D0: Data Direction= output */
  PORTC->PCR[LED4] = 0x00000100; /* Port D0: MUX = ALT1, GPIO (to blue LED on EVB) */
  PTC->PSOR |= 1<<LED4; /* Clear pin*/
  //Initialize LED3
  PTC->PDDR |= 1<<LED3; /* Port D0: Data Direction= output */
  PORTC->PCR[LED3] = 0x00000100; /* Port D0: MUX = ALT1, GPIO (to blue LED on EVB) */
  PTC->PSOR |= 1<<LED3; /* Clear pin*/
  //Initializate ButtonUp
  PTC->PDDR &= ~(1<<UpButton); /* Port D0: Data Direction= input */
  PORTC->PCR[UpButton] = 0x00000100; /* Port D0: MUX = ALT1, GPIO (to blue LED on EVB) */
  PORTC->PCR[UpButton] |= 0x00000010u; /*Enable filter*/
  //Initializate DownButton
  PTC->PDDR &= ~(1<<DownButton); /* Port D0: Data Direction= input */
  PORTC->PCR[DownButton] = 0x00000100; /* Port D0: MUX = ALT1, GPIO (to blue LED on EVB) */
  PORTC->PCR[DownButton] |= 0x00000010u; /*Enable filter*/
  //------------------PORTD------------------------------------------------------
  PCC-> PCCn[PCC_PORTD_INDEX] = PCC_PCCn_CGC_MASK;
  //Initializate LEDUp
  PTD->PDDR |= 1<<LEDUp; /* Port D0: Data Direction= output */
  PORTD->PCR[LEDUp] = 0x00000100; /* Port D0: MUX = ALT1, GPIO (to blue LED on EVB) */
  PTD->PSOR |= 1<<LEDUp; /* Clear pin*/
  //Initializate LEDDown
  PTD->PDDR |= 1<<LEDDown; /* Port D0: Data Direction= output */
  PORTD->PCR[LEDDown] = 0x00000100; /* Port D0: MUX = ALT1, GPIO (to blue LED on EVB) */
  PTD->PSOR |= 1<<LEDDown; /* Clear pin*/


  //------------------PORTE------------------------------------------------------
  //OUTPUTS********************************************************************
  PCC-> PCCn[PCC_PORTE_INDEX] = PCC_PCCn_CGC_MASK; /* Enable clock for PORT D */
  //Initialize LED10
  PTE->PDDR |= 1<<LED10; /* Port D0: Data Direction= output */
  PORTE->PCR[LED10] = 0x00000100; /* Port D0: MUX = ALT1, GPIO (to blue LED on EVB) */
  PTE->PSOR |= 1<<LED10; /* Clear pin*/
  //Initialize LED2
  PTE->PDDR |= 1<<LED2; /* Port D0: Data Direction= output */
  PORTE->PCR[LED2] = 0x00000100; /* Port D0: MUX = ALT1, GPIO (to blue LED on EVB) */
  PTE->PSOR |= 1<<LED2; /* Clear pin*/
  //Initialize LED1
  PTE->PDDR |= 1<<LED1; /* Port D0: Data Direction= output */
  PORTE->PCR[LED1] = 0x00000100; /* Port D0: MUX = ALT1, GPIO (to blue LED on EVB) */
  PTE->PSOR |= 1<<LED1; /* Clear pin*/

}




/* Exported functions */
/*============================================================================*/



 /* Notice: the file ends with a blank new line to avoid compiler warnings */
