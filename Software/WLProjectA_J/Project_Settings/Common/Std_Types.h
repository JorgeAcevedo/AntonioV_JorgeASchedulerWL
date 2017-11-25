/*
 * Std_Types.h
 *
 *  Created on: 15/11/2017
 *      Author: uid87753
 */

#ifndef COMMON_STD_TYPES_H_
#define COMMON_STD_TYPES_H_

#include "stdint.h"

/*type used for callback function*/
typedef void  ( * tCallbackFunction )( void  );

#ifndef NULL
	#define    NULL    ( ( void * ) 0 )
#endif


typedef volatile unsigned char T_UBYTE;
typedef volatile unsigned short T_UWORD;
typedef volatile unsigned int T_ULONG;

typedef volatile signed char T_SBYTE;
typedef volatile signed short T_SWORD;
typedef volatile signed int T_SLONG;

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;

typedef signed char sint8_t;
typedef signed short sint16_t;
typedef signed int sint32_t;

#define LED10            9	//E
#define LED9             7	//C
#define LED8            17	//B
#define LED7  	        14	//B
#define LED6            15	//B
#define LED5            16	//B
#define LED4            14	//C
#define LED3          	 3	//C
#define LED2         	16	//E
#define LED1         	15	//E

#define LEDUp			 0	//D
#define LEDDown			16	//D

#define AntiPinchButton   0	//E
#define UpButton		 13	//C
#define DownButton		 12	//C

#endif /* COMMON_STD_TYPES_H_ */
