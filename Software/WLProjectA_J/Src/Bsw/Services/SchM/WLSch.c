#include "WLSch.h"



void StateMachine(VariablesType *Variables){
  switch (Variables->gub_State) {
  // Standby
    case State1:
    	TurnOffIndicator(Variables);
    break;
 //Signal Validation
    case State2:
    Variables->luw_TimeCounterValidation++;
    TurnOffIndicator(Variables);
    TurnOnIndicator(Variables);
    break;
 //Mode Decision
    case State3:
    if (VALIDATION_SIGNAL_TIME == Variables->luw_TimeCounterValidation){
      SetOneTouchFlag(Variables);
      Variables->luw_TimeCounterValidation++;
    }
    else if(VALIDATION_SIGNAL_TIME < Variables->luw_TimeCounterValidation){
      Variables->luw_TimeCounterValidation++;
    }
    break;
// OneTouch Function
    case State4:
    WindowEmulator(Variables);
    break;
//Manual Function
    case State5:
    if (MANUAL_FUNCTION_TIME==Variables->luw_TimeCounterValidation){
      ClearOneTouchFlags(Variables);
      Variables->luw_TimeCounterValidation++;
    }
    else if (MANUAL_FUNCTION_TIME<Variables->luw_TimeCounterValidation){
      WindowEmulator(Variables);
    }
    break;
//Anti Pinch
    case State6: //PINCH
    SetAntiPinchBlock(Variables);
    ClearOneTouchFlags(Variables);
    Variables->lub_MovementDirection=DOWN;
    break;
//Block state
    case State7:
    if (MODULE_BLOCKED_TIME>Variables->luw_TimeCounterAntiPinch){
      Variables->luw_TimeCounterAntiPinch++;
    }
    else if(MODULE_BLOCKED_TIME==Variables->luw_TimeCounterAntiPinch){
      ClearAntiPinchBlock(Variables);
      Variables->luw_TimeCounterAntiPinch=START_TIME_COUNTER;
    }
    break;
}}
