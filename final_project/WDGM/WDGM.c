
#include "WDGM.h"

/*
	* Description: This file contains the implementation of the Watchdog Manager
*/


/*
	* Description: This function is responsible for initializing the Watchdog Manager
	
*/
void WDGM_Init(void){
	counter = 0 ;
	status = OK;
	tick = 0;
	not_stuck = NOK;
}

/*
	* Description: This function is responsible for the main functionality of the Watchdog Manager
	it is called every 20ms and updates the status of the Watchdog Manager every 100ms
*/
void WDGM_MainFunction(void){
	not_stuck = NOK;
	tick++;
	if(tick >= 5){
		tick = 0 ;
		if(counter>=8 && counter<=12){
			status = OK;
		}else{
			status = NOK;
		}
		counter = 0;
	}
	not_stuck = OK;

}


/*
	* Description: This function is responsible for providing the status of the Watchdog Manager
	* return WDGM_StatusType: the status of the Watchdog Manager
*/
WDGM_StatusType WDGM_PovideSuppervisionStatus(void){
	return status;
}


/*
	* Description: This function is responsible for indicating the aliveness of the Watchdog Manager
	* it is called every 10ms with led_mng
*/
void WDGM_AlivenessIndication(void){
	counter++;
}
