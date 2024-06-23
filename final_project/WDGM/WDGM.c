/*
 * WDGM.c
 *
 *  Created on: Jun 23, 2024
 *      Author: Kimo Store
 */
#include "WDGM.h"

void WDGM_Init(void){
	counter = 0 ;
	status = NOK;
	tick = 0;
	not_stuck = NOK;
}

void WDGM_MainFunction(void){
	not_stuck = NOK;
	if(tick >= 5){
		tick = 0 ;
		if(counter>=8 && counter<=12){
			status = OK;
		}else{
			status = NOK;
		}
	}
	not_stuck = OK;
}

WDGM_StatusType WDGM_PovideSuppervisionStatus(void){
	return status;
}

void WDGM_AlivenessIndication(void){
	counter++;
}
