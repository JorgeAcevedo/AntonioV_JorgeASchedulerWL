
#include "Status.h"


void ReadButtonStatus(VariablesType *Variables){
  if(ButtonPress(DOWN)){
Variables->lub_MovementDirection = DOWN;
Variables->lub_Status = MOVEMENT;
  }
  else if(ButtonPress(PINCH)){
Variables->lub_Status = PINCH;
  }
  else if(ButtonPress(UP)){
Variables->lub_MovementDirection = UP;
Variables->lub_Status = MOVEMENT;
  }
  else {Variables->lub_Status = NONE;}
}



void StateDecision (VariablesType *Variables){
  if(NONE != Variables->lub_Status && VALIDATION_SIGNAL_TIME>Variables->luw_TimeCounterValidation){
    Variables->gub_State	=	State2;
  }
  else if (NONE!=Variables->lub_Status && VALIDATION_SIGNAL_TIME<=Variables->luw_TimeCounterValidation){
    switch(Variables->lub_Status){
      case MOVEMENT:
      if(VALIDATION_SIGNAL_TIME<=Variables->luw_TimeCounterValidation&&MANUAL_FUNCTION_TIME>Variables->luw_TimeCounterValidation){
        Variables->gub_State	=	State3;
      }
      else if(MANUAL_FUNCTION_TIME<=Variables->luw_TimeCounterValidation){
        Variables->gub_State	=	State5;
      }
      break;
      case PINCH:
      Variables->gub_State	=	State6;
      break;
    }
  }
else if(NONE==Variables->lub_Status){
     Variables->luw_TimeCounterValidation=START_TIME_COUNTER;
       if(ACTIVATED==Variables->lub_FlagOneTouchUp||ACTIVATED==Variables->lub_FlagOneTouchDown){
      Variables->gub_State=State4;
    }
         else{Variables->gub_State=State1;}
    }
}
