/*
 * WDGDrv.c
 *
 *  Created on: Jun 23, 2024
 *      Author: Kimo Store
 */

#include "WDGDrv.h"
#include "WDGDrv_private.h"
#include "../lib/Bit_Operations.h"

void WDGDrv_init(void){
	 WDTCSR = (1<<WDCE) | (1<<WDE) | (1<<WDP1);
}
