/*
 * Mcu.h
 *
 *  Created on: 15/11/2017
 *      Author: uid87753
 */

#ifndef BSW_MCAL_MCU_MCU_H_
#define BSW_MCAL_MCU_MCU_H_

#include "MCDrivers_Clock.h"

void SOSC_init_8MHz (void);
void SPLL_init_160MHz (void);
void NormalRUNmode_80MHz (void);

#endif /* BSW_MCAL_MCU_MCU_H_ */
