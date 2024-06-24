#include "WDGM.h"

/*
 * WDGM.c
 *
 *  Created on: Jun 23, 2024
 *      Author: Kimo Store
 *
 *  This source file contains the implementation of the Watchdog Manager (WDGM) module.
 *  It includes the definitions of the WDGM_Init, WDGM_MainFunction, WDGM_PovideSuppervisionStatus, and WDGM_AlivenessIndication functions.
 */

/*
 * Function:  WDGM_Init
 * --------------------
 * Initialize the Watchdog Manager (WDGM) module.
 *
 * This function initializes the counter, status, tick, and not_stuck variables.
 *
 *  returns: void
 */
void WDGM_Init(void){
 counter = 0 ;  // Initialize the counter to 0
 status = OK;  // Initialize the status to OK
 tick = 0;  // Initialize the tick to 0
 not_stuck = NOK;  // Initialize not_stuck to NOK
}

/*
 * Function:  WDGM_MainFunction
 * --------------------
 * This function is the main function of the WDGM module. It is called periodically to update the status of the WDGM module.
 *
 * This function is called every 20ms and updates the status of the WDGM module every 100ms.
 * It increments the tick variable every 20ms. When the tick reaches 5 (which is equivalent to 100ms), it resets the tick to 0 and updates the status of the WDGM module based on the value of the counter.
 * If the counter is between 8 and 12 (inclusive), it sets the status to OK. Otherwise, it sets the status to NOK.
 * It then resets the counter to 0.
 * Finally, it sets not_stuck to OK to indicate that the system is not stuck.
 *
 *  returns: void
 */
void WDGM_MainFunction(void){
 not_stuck = NOK;  // Indicate that the system is stuck
 tick++;  // Increment the tick
 if(tick >= 5){  // If the tick reaches 5 (100ms has passed)
  tick = 0 ;  // Reset the tick to 0
  if(counter>=8 && counter<=12){  // If the counter is between 8 and 12 (inclusive)
   status = OK;  // Set the status to OK
  }else{  // If the counter is not between 8 and 12
   status = NOK;  // Set the status to NOK
  }
  counter = 0;  // Reset the counter to 0
 }
 not_stuck = OK;  // Indicate that the system is not stuck
}

/*
 * Function:  WDGM_PovideSuppervisionStatus
 * --------------------
 * Provide the supervision status of the WDGM module.
 *
 *  returns: The supervision status of the WDGM module.
 */
WDGM_StatusType WDGM_PovideSuppervisionStatus(void){
 return status;  // Return the status of the WDGM module
}

/*
 * Function:  WDGM_AlivenessIndication
 * --------------------
 * Indicate the aliveness of the WDGM module. This function is called to indicate that the WDGM module is still running and the system is not stuck.
 *
 * This function increments the counter every 10ms. It is called in conjunction with the LEDM_Manage function.
 *
 *  returns: void
 */
void WDGM_AlivenessIndication(void){
 counter++;  // Increment the counter
}