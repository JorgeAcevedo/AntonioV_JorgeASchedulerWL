#include "Flags.h"



void SetOneTouchFlag(VariablesType *Variables){
  switch (Variables->lub_MovementDirection) {
    case UP:
    Variables->lub_FlagOneTouchUp=ACTIVATED;
    case DOWN:
    Variables->lub_FlagOneTouchDown=ACTIVATED;
  }
}

void ClearOneTouchFlags(VariablesType *Variables){
  Variables->lub_FlagOneTouchUp=DESACTIVATED;
  Variables->lub_FlagOneTouchDown=DESACTIVATED;
}

void SetAntiPinchBlock(VariablesType *Variables){
  Variables->lub_AntiPinchBlock=ACTIVATED;
}

void ClearAntiPinchBlock(VariablesType *Variables){
  Variables->lub_AntiPinchBlock=DESACTIVATED;
}
