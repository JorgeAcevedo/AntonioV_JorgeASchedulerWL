/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: filename.c $
 * $Revision: 1 $
 * $Author: Jos� Antonio $
 * $Date: 26/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \ReadPin.c
 * Functions to read PIN's value

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
/*Jorge Acevedo        |        1           | Functions to manage window emulation */
/*Antonio Vazquez      |        2           | Added functions nedded to use at the StateMachine */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: filename.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "WindowEmulation.h"


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




/* Exported functions */
/*============================================================================*/

void WindowEmulator(VariablesType *Variables) {
  if(START_TIME_COUNTER == Variables->luw_TimeCounterLEDBarChange){
    WindowSimulation(Variables);
    Variables->luw_TimeCounterLEDBarChange++;
  }
  else if(START_TIME_COUNTER < Variables->luw_TimeCounterLEDBarChange
     && CHANGE_WINDOW_STATE_TIME > Variables->luw_TimeCounterLEDBarChange){
    Variables->luw_TimeCounterLEDBarChange++;
  }
  else if(CHANGE_WINDOW_STATE_TIME == Variables->luw_TimeCounterLEDBarChange){
    Variables->luw_TimeCounterLEDBarChange=START_TIME_COUNTER;
  }
}

void WindowSimulation(VariablesType *Variables){
  switch (Variables->lub_MovementDirection) {
    case UP:
    	if(WINDOW_COMPLETELY_CLOSED != Variables->lub_LEDBarState){
    Variables->lub_LEDBarState++;
    WindowControl(Variables);}
    	else{
    		Variables->luw_TimeCounterLEDBarChange = START_TIME_COUNTER;
    		ClearOneTouchFlags(Variables);
        Variables->lub_MovementDirection = NONE;
    	}
    break;
    case DOWN:
    	if(WINDOW_COMPLETELY_OPEN != Variables->lub_LEDBarState){
    WindowControl(Variables);
    Variables->lub_LEDBarState--;}
    	else{
    		Variables->luw_TimeCounterLEDBarChange = START_TIME_COUNTER;
    		ClearOneTouchFlags(Variables);
        Variables->lub_MovementDirection = NONE;
    	}
    break;
  }
}

void TurnOnIndicator(VariablesType *Variables){
  switch (Variables->lub_MovementDirection) {
    case UP:
    Dio_PortClearPin(PORTCH_D, LEDUp);
    break;
    case DOWN:
    Dio_PortClearPin(PORTCH_D, LEDDown);
    break;
    case NONE:
    Dio_PortClearPin(PORTCH_D, LEDAntiPinch);
    break;
  }
}

void TurnOffIndicator(VariablesType *Variables){
    Dio_PortSetPin(PORTCH_D, LEDUp);
    Dio_PortSetPin(PORTCH_D, LEDDown);
    Dio_PortSetPin(PORTCH_D, LEDAntiPinch);
}

void WindowControl (VariablesType *Variables){
	switch (Variables->lub_LEDBarState){
		case 10:
			Dio_PortTooglePin (PORTCH_E,LED10);
			break;
		case 9:
			Dio_PortTooglePin (PORTCH_C,LED9);
			break;
		case 8:
			Dio_PortTooglePin (PORTCH_B,LED8);
			break;
		case 7:
			Dio_PortTooglePin (PORTCH_B,LED7);
			break;
		case 6:
			Dio_PortTooglePin (PORTCH_B,LED6);
			break;
		case 5:
			Dio_PortTooglePin (PORTCH_B,LED5);
			break;
		case 4:
			Dio_PortTooglePin (PORTCH_C,LED4);
			break;
		case 3:
			Dio_PortTooglePin (PORTCH_C,LED3);
			break;
		case 2:
			Dio_PortTooglePin (PORTCH_E,LED2);
			break;
		case 1:
			Dio_PortTooglePin (PORTCH_E,LED1);
			break;
		default:
			break;

		}
}

void WindowClosed (void){
	Dio_PortTooglePin (PORTCH_E,LED10);
	Dio_PortTooglePin (PORTCH_C,LED9);
	Dio_PortTooglePin (PORTCH_B,LED8);
	Dio_PortTooglePin (PORTCH_B,LED7);
	Dio_PortTooglePin (PORTCH_B,LED6);
	Dio_PortTooglePin (PORTCH_B,LED5);
	Dio_PortTooglePin (PORTCH_C,LED4);
	Dio_PortTooglePin (PORTCH_C,LED3);
	Dio_PortTooglePin (PORTCH_E,LED2);
	Dio_PortTooglePin (PORTCH_E,LED1);}




 /* Notice: the file ends with a blank new line to avoid compiler warnings */
