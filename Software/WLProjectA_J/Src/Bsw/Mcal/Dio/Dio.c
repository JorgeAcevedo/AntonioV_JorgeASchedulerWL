/*
 * Dio.c
 *
 *  Created on: 15/11/2017
 *      Author: uid87753
 */

#include "General.h"
#include "Dio.h"

GPIO_Type *Port[]= {PTA, PTB, PTC, PTD, PTE};

void Dio_PortSetPin(DioPortType DioPort, uint32_t DioPin)
{
	Port[DioPort]->PSOR |= (1<<DioPin);
}

void Dio_PortClearPin(DioPortType DioPort, uint32_t DioPin)
{
	Port[DioPort]->PCOR |= (1<<DioPin);
}

void Dio_PortTooglePin(DioPortType DioPort, uint32_t DioPin)
{
	Port[DioPort]->PTOR |= (1<<DioPin);
}

uint8_t Dio_PortGetPin(DioPortType DioPort, uint32_t DioPin)
{
	 uint8_t Flag = 0;

	switch (DioPort){
	case PORTCH_A:
		if(PTA->PDIR & (1<<DioPin))
		{
			Flag=1;
		}
		break;
	case PORTCH_B:
		if(PTB->PDIR & (1<<DioPin))
		{
			Flag=1;
		}
		break;
	case PORTCH_C:
		if(PTC->PDIR & (1<<DioPin))
		{
			Flag=1;
		}
		break;
	case PORTCH_D:
		if(PTD->PDIR & (1<<DioPin))
		{
			Flag=1;
		}
		break;
	case PORTCH_E:
		if(PTE->PDIR & (1<<DioPin))
		{
			Flag=1;
		}
		break;
	default:
		Flag=0;
	}
	return Flag;
}
