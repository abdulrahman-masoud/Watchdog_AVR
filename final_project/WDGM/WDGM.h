/*
 * WDGM.h
 *
 *  Created on: Jun 23, 2024
 *      Author: Kimo Store
 *
 *  This header file contains the public definitions and function prototypes for the Watchdog Manager (WDGM) module.
 *  It includes the definitions for the WDGM_Init, WDGM_MainFunction, WDGM_PovideSuppervisionStatus, and WDGM_AlivenessIndication functions.
 *  It also includes the definitions of the WDGM_StatusType enum and several global variables.
 */

#ifndef WDGM_H
#define WDGM_H

#include"../lib/std_Types.h"  // Include the standard types definitions

// Define the WDGM_StatusType enum. This enum is used to represent the status of the WDGM module.
typedef enum {OK = 0, NOK = 1}WDGM_StatusType;

// Define several global variables
WDGM_StatusType not_stuck;  // This variable is used to indicate whether the system is stuck or not.
WDGM_StatusType status;  // This variable is used to store the status of the WDGM module.
uint8 counter;  // This variable is used as a counter in the WDGM module.
uint8 tick;  // This variable is used as a tick timer in the WDGM module.

/*
 * Function:  WDGM_Init
 * --------------------
 * Initialize the Watchdog Manager (WDGM) module.
 *
 *  returns: void
 */
void WDGM_Init(void);

/*
 * Function:  WDGM_MainFunction
 * --------------------
 * This function is the main function of the WDGM module. It is called periodically to update the status of the WDGM module.
 *
 *  returns: void
 */
void WDGM_MainFunction(void);

/*
 * Function:  WDGM_PovideSuppervisionStatus
 * --------------------
 * Provide the supervision status of the WDGM module.
 *
 *  returns: The supervision status of the WDGM module.
 */
WDGM_StatusType WDGM_PovideSuppervisionStatus(void);

/*
 * Function:  WDGM_AlivenessIndication
 * --------------------
 * Indicate the aliveness of the WDGM module. This function is called to indicate that the WDGM module is still running and the system is not stuck.
 *
 *  returns: void
 */
void  WDGM_AlivenessIndication(void);

#endif /* WDGM_H_ */