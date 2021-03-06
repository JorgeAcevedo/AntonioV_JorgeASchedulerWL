/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: PCC.h $
 * $Revision: 1 $
 * $Author: Jorge Acevedo $
 * $Date: 26/Octubre/17 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** Map of the functions memory addresses and functions for selecting the
 * clock enable/disable peripherical needed.
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
/* Jorge Acevedo      |         1          |Mapping & Initilizing clock in   */
/*											peripherials					  */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: filename.h  $
  ============================================================================*/
#ifndef PCC_H_
#define PCC_H_

/* Includes */
/*============================================================================*/
#include "Std_Types.h"



/* Constants and types */
/*============================================================================*/

typedef struct {

	T_ULONG PCCn[125];
} S_PCC;

#define PCC_BASE_ADDRESS   0x40065000 //p�gina 573

#define PCC            ((S_PCC *)PCC_BASE_ADDRESS)

#define PCC_FTFC_INDEX                           (T_UBYTE)32
#define PCC_DMAMUX_INDEX                         (T_UBYTE)33
#define PCC_FlexCAN0_INDEX                       (T_UBYTE)36
#define PCC_FlexCAN1_INDEX                       (T_UBYTE)37
#define PCC_FTM3_INDEX                           (T_UBYTE)38
#define PCC_ADC1_INDEX                           (T_UBYTE)39
#define PCC_FlexCAN2_INDEX                       (T_UBYTE)43
#define PCC_LPSPI0_INDEX                         (T_UBYTE)44
#define PCC_LPSPI1_INDEX                         (T_UBYTE)45
#define PCC_LPSPI2_INDEX                         (T_UBYTE)46
#define PCC_PDB1_INDEX                           (T_UBYTE)49
#define PCC_CRC_INDEX                            (T_UBYTE)50
#define PCC_PDB0_INDEX                           (T_UBYTE)54
#define PCC_LPIT_INDEX                           (T_UBYTE)55
#define PCC_FTM0_INDEX                           (T_UBYTE)56
#define PCC_FTM1_INDEX                           (T_UBYTE)57
#define PCC_FTM2_INDEX                           (T_UBYTE)58
#define PCC_ADC0_INDEX                           (T_UBYTE)59
#define PCC_RTC_INDEX                            (T_UBYTE)61
#define PCC_LPTMR0_INDEX                         (T_UBYTE)64
#define PCC_PORTA_INDEX                          (T_UBYTE)73
#define PCC_PORTB_INDEX                          (T_UBYTE)74
#define PCC_PORTC_INDEX                          (T_UBYTE)75
#define PCC_PORTD_INDEX                          (T_UBYTE)76
#define PCC_PORTE_INDEX                          (T_UBYTE)77
#define PCC_SAI0_INDEX                           (T_UBYTE)87
#define PCC_SAI1_INDEX                           (T_UBYTE)88
#define PCC_FlexIO_INDEX                         (T_UBYTE)93
#define PCC_EWM_INDEX                            (T_UBYTE)100
#define PCC_LPI2C0_INDEX                         (T_UBYTE)105
#define PCC_LPI2C1_INDEX                         (T_UBYTE)106
#define PCC_LPUART0_INDEX                        (T_UBYTE)109
#define PCC_LPUART1_INDEX                        (T_UBYTE)110
#define PCC_LPUART2_INDEX                        (T_UBYTE)111
#define PCC_FTM4_INDEX                           (T_UBYTE)113
#define PCC_FTM5_INDEX                           (T_UBYTE)114
#define PCC_FTM6_INDEX                           (T_UBYTE)115
#define PCC_FTM7_INDEX                           (T_UBYTE)116
#define PCC_CMP0_INDEX                           (T_UBYTE)118
#define PCC_QSPI_INDEX                           (T_UBYTE)121
#define PCC_ENET_INDEX                           (T_UBYTE)124




#define PCC_PCCn_CGC_MASK                        0x40000000u
#define PCC_PCCn_PCS_MASK                        0x7000000u
#define PCC_PCCn_PCS_SHIFT                       24u
#define PCC_PCCn_PCS_WIDTH                       3u
#define PCC_PCCn_PCS(x)                          (((uint32_t)(((uint32_t)(x))<<PCC_PCCn_PCS_SHIFT))&PCC_PCCn_PCS_MASK)

/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/


#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
