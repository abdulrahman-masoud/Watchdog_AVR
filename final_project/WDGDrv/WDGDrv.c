/*
 * WDGDrv.c
 *
 *  Created on: Jun 23, 2024
 *      Author: Kimo Store
 */

#include "WDGDrv.h"
#include "WDGDrv_private.h"
#include "../lib/Bit_Operations.h"
#include"../WDGM/WDGM.h"
#include"avr/wdt.h"

void WDGDrv_init(void){
	 WDTCSR = (1<<WDCE) | (1<<WDE) | (1<<WDP1);
}
void WDGDrv_IsrNotification(void){
	WDGM_StatusType status = WDGM_PovideSuppervisionStatus();
	if(not_stuck == OK && status == OK){
		wdt_reset();
	}
}
