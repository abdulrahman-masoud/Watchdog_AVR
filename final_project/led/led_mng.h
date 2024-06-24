/*
 * led_mng.h
 *
 *  Created on: Jun 23, 2024
 *      Author: DELL
 *
 *  This header file contains the public definitions and function prototypes for the LED management module.
 *  It includes the definitions for the LEDM_init and LEDM_Manage functions.
 */

#ifndef LED_LED_MNG_H_
#define LED_LED_MNG_H_

#define LED_PORT 'B'  // Define the port for the LED
#define LED_PIN  0    // Define the pin for the LED
#define LED_ON 1      // Define the state for the LED to be on
#define LED_OFF 0     // Define the state for the LED to be off

#define LED_BLINK_PERIOD 500  // Define the period for the LED to blink

/*
 * Function:  LEDM_init
 * --------------------
 * Initialize the LED management module.
 *
 *  returns: void
 */
void LEDM_init(void);

/*
 * Function:  LEDM_Manage
 * --------------------
 * Manage the LED states based on the system state.
 *
 *  returns: void
 */
void LEDM_Manage(void);

#endif /* LED_LED_MNG_H_ */
