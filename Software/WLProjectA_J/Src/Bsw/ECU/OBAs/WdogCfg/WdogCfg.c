/*
 * Wdog.c
 *
 *  Created on: 15/11/2017
 *      Author: uid87753
 */
        /* include peripheral declarations */
#include "WdogCfg.h"

void WDOG_disable (void){
  WDOG->CNT=0xD928C520; 	/*Unlock watchdog*/
  WDOG->TOVAL=0x0000FFFF;	/*Maximum timeout value*/
  WDOG->CS = 0x00002100;    /*Disable watchdog*/
}
