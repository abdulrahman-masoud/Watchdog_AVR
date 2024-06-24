/*
 * WDGDrv.c
 *
 *  Created on: Jun 23, 2024
 *      Author: Kimo Store
 *
 *  This source file contains the implementation of the Watchdog Driver (WDGDrv) module.
 *  It includes the definitions of the WDGDrv_init and WDGDrv_IsrNotification functions.
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

/*
 * Function:  WDGDrv_init
 * --------------------
 * Initialize the Watchdog Driver (WDGDrv) module.
 *
 * This function configures the Watchdog Timer Control and Status Register (WDTCSR) to enable the Watchdog Timer and set the prescaler to 1024.
 * It first sets the WDCE (Watchdog Change Enable) and WDE (Watchdog Enable) bits to enable changes to the prescaler.
 * Then it sets the WDE bit and the WDP1 bit to set the prescaler to 1024.
 *
 *  returns: void
 */
void WDGDrv_init(void){
 WDTCSR = (1<<WDCE) | (1<<WDE) | (1<<WDP1);  // Enable changes to the prescaler and enable the Watchdog Timer
 WDTCSR = (1<<WDE) | (1<<WDP1);  // Set the prescaler to 64ms time-out period and enable the Watchdog Timer
}

/*
 * Function:  WDGDrv_IsrNotification
 * --------------------
 * This function is called when the Watchdog Timer generates an interrupt.
 * It checks the status of the system and the Watchdog Manager (WDGM) module.
 * If the system is not stuck and the WDGM status is OK, it toggles the state of PORTC pin 1 and resets the Watchdog Timer.
 * If the system is stuck or the WDGM status is not OK, it toggles the state of PORTC pin 0 and enables the Watchdog Timer with a timeout of 15ms.
 *
 *  returns: void
 */
void WDGDrv_IsrNotification(void){
 WDGM_StatusType status = WDGM_PovideSuppervisionStatus();  // Get the status of the WDGM module

 if(not_stuck == OK && status == OK){  // If the system is not stuck and the WDGM status is OK
  TOGGLE_BIT(PORTC, 1);  // Toggle the state of PORTC pin 1
  wdt_reset();  // Reset the Watchdog Timer
 }else{  // If the system is stuck or the WDGM status is not OK
  TOGGLE_BIT(PORTC, 0);  // Toggle the state of PORTC pin 0
  wdt_enable(WDTO_15MS);  // Enable the Watchdog Timer with a timeout of 15ms
 }
}
