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
#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/wdt.h>
#include "../gpio/gpio.h"


void WDGDrv_init(void){
	WDTCSR = (1<<WDCE) | (1<<WDE) | (1<<WDP1);
	WDTCSR = (1<<WDE) | (1<<WDP1);
}

void WDGDrv_IsrNotification(void){
	WDGM_StatusType status = WDGM_PovideSuppervisionStatus();
	if(not_stuck == OK && status == NOK){
		TOGGLE_BIT(PORTC, 0);
	}
	if(not_stuck == OK && status == OK){
		TOGGLE_BIT(PORTC, 1);
	}
		wdt_reset();
}
