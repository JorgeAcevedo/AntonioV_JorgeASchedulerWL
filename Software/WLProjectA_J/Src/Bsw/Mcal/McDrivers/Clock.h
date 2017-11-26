/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: SCG.c $
 * $Revision: version $
 * $Author: Jorge Acevedo $
 * $Date: 26/10/17 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    Mapping of the system clock generator.

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
/* JORGE ACEVEDO J.   |  1                 | MAPPING OF THE SCG               */
/*                     |                    |                                 */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log:      SCG.h  $
  ============================================================================*/
#ifndef SCG_H_
#define SCG_H_

/* Includes */
/*============================================================================*/
#include "Std_Types.h"

/* Constants and types */
/*============================================================================*/
typedef struct {
    T_ULONG VERID;                             /**< Version ID Register, offset: 0x0 */
    T_ULONG PARAM;                             /**< Parameter Register, offset: 0x4 */
       T_UBYTE RESERVED_0[8];
    T_ULONG CSR;                               /**< Clock Status Register, offset: 0x10 */
    T_ULONG RCCR;                              /**< Run Clock Control Register, offset: 0x14 */
    T_ULONG VCCR;                              /**< VLPR Clock Control Register, offset: 0x18 */
    T_ULONG HCCR;                              /**< HSRUN Clock Control Register, offset: 0x1C */
    T_ULONG CLKOUTCNFG;                        /**< SCG CLKOUT Configuration Register, offset: 0x20 */
       T_UBYTE RESERVED_1[220];
    T_ULONG SOSCCSR;                           /**< System OSC Control Status Register, offset: 0x100 */
    T_ULONG SOSCDIV;                           /**< System OSC Divide Register, offset: 0x104 */
    T_ULONG SOSCCFG;                           /**< System Oscillator Configuration Register, offset: 0x108 */
    T_UBYTE RESERVED_2[244];
    T_ULONG SIRCCSR;                           /**< Slow IRC Control Status Register, offset: 0x200 */
    T_ULONG SIRCDIV;                           /**< Slow IRC Divide Register, offset: 0x204 */
    T_ULONG SIRCCFG;                           /**< Slow IRC Configuration Register, offset: 0x208 */
       T_UBYTE RESERVED_3[244];
   T_ULONG FIRCCSR;                           /**< Fast IRC Control Status Register, offset: 0x300 */
   T_ULONG FIRCDIV;                           /**< Fast IRC Divide Register, offset: 0x304 */
   T_ULONG FIRCCFG;                           /**< Fast IRC Configuration Register, offset: 0x308 */
       T_UBYTE RESERVED_4[756];
   T_ULONG SPLLCSR;                           /**< System PLL Control Status Register, offset: 0x600 */
   T_ULONG SPLLDIV;                           /**< System PLL Divide Register, offset: 0x604 */
   T_ULONG SPLLCFG;                           /**< System PLL Configuration Register, offset: 0x608 */
} S_SCG;

#define SCG_BASE_ADDRESS 			0x40064000u
#define SCG						((S_SCG *)SCG_BASE_ADDRESS)

#define SCG_CSR_SCS_MASK                         0xF000000u
#define SCG_CSR_SCS_SHIFT                        24u
#define SCG_SOSCCSR_LK_MASK                      0x800000u
#define SCG_SOSCCSR_SOSCVLD_MASK                 0x1000000u
#define SCG_SPLLCSR_LK_MASK                      0x800000u
#define SCG_SPLLCSR_SPLLVLD_MASK                 0x1000000u
#define SCG_RCCR_SCS_MASK                        0xF000000u
#define SCG_RCCR_SCS_SHIFT                       24u
#define SCG_RCCR_SCS_WIDTH                       4u
#define SCG_RCCR_SCS(x)                          (((uint32_t)(((uint32_t)(x))<<SCG_RCCR_SCS_SHIFT))&SCG_RCCR_SCS_MASK)
#define SCG_RCCR_DIVSLOW_MASK                    0xFu
#define SCG_RCCR_DIVSLOW_SHIFT                   0u
#define SCG_RCCR_DIVSLOW_WIDTH                   4u
#define SCG_RCCR_DIVSLOW(x)                      (((uint32_t)(((uint32_t)(x))<<SCG_RCCR_DIVSLOW_SHIFT))&SCG_RCCR_DIVSLOW_MASK)
#define SCG_RCCR_DIVBUS_MASK                     0xF0u
#define SCG_RCCR_DIVBUS_SHIFT                    4u
#define SCG_RCCR_DIVBUS_WIDTH                    4u
#define SCG_RCCR_DIVBUS(x)                       (((uint32_t)(((uint32_t)(x))<<SCG_RCCR_DIVBUS_SHIFT))&SCG_RCCR_DIVBUS_MASK)
#define SCG_RCCR_DIVCORE_MASK                    0xF0000u
#define SCG_RCCR_DIVCORE_SHIFT                   16u
#define SCG_RCCR_DIVCORE_WIDTH                   4u
#define SCG_RCCR_DIVCORE(x)                      (((uint32_t)(((uint32_t)(x))<<SCG_RCCR_DIVCORE_SHIFT))&SCG_RCCR_DIVCORE_MASK)

/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/


#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
