
#include "ModuleConfig.h"
void NormalModeModuleInit (void){
  WDOG_disable();
  PORT_init();             				/* Configure ports */
  SOSC_init_8MHz();        				/* Initialize system oscilator for 8 MHz xtal */
  SPLL_init_160MHz();      				/* Initialize SPLL to 160 MHz with 8 MHz SOSC */
  NormalRUNmode_80MHz();
}

void EnableInterruptions (void){

  NVIC_init_IRQs();}

void SchedulerInit (void){
  SchM_Init(&SchedulerConfig);
  StartConditions();
}

void WindowLifterApp (void){
SchM_Start();
}
