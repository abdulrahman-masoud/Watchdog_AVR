/*
 * led_mng.c
 *
 *  Created on: Jun 23, 2024
 *      Author: DELL
 *
 *  This source file contains the implementation of the LED management module.
 *  It includes the definitions of the LEDM_init and LEDM_Manage functions.
 */

#include"led_mng.h"
#include"../gpio/gpio.h"
#include"util/delay.h"
#include"../WDGM/WDGM.h"
#include "../gpio/Gpio_private.h"
#include"../lib/Bit_Operations.h"

// Define the timer for the LED. This variable is used to control the blinking frequency of the LED.
uint32 led_timer=10;

// Define the initial state for the LED. This variable is used to control the current state of the LED (ON or OFF).
uint8 led_state = LED_OFF;

/*
 * Function:  LEDM_init
 * --------------------
 * Initialize the LED management module by setting the initial state of the LEDs.
 *
 * This function initializes the GPIO module and sets all the LED pins to LOW (OFF state).
 * It calls the GPIO_Init function to initialize the GPIO module.
 * Then it calls the GPIO_Write function to set each LED pin to LOW.
 *
 *  returns: void
 */
void LEDM_init(void){
 GPIO_Init();

 GPIO_Write(PORT_B,0,LOW);
 GPIO_Write(PORT_D,0,LOW);
 GPIO_Write(PORT_D,1,LOW);
 GPIO_Write(PORT_D,2,LOW);
 GPIO_Write(PORT_D,3,LOW);
 GPIO_Write(PORT_D,5,LOW);
 GPIO_Write(PORT_C,0,LOW);
 GPIO_Write(PORT_C,1,LOW);

}


/*
 * Function:  LEDM_Manage
 * --------------------
 * Manage the LED states based on the system state.
 * This function toggles the state of the LED every 500ms (controlled by the led_timer variable).
 * It also calls the WDGM_AlivenessIndication function to indicate that the system is alive.
 *
 * This function toggles the state of PORTD pin 0.
 * Then it checks if the led_timer has reached the LED_BLINK_PERIOD (500ms). If it has, it toggles the state of the LED and resets the led_timer.
 * It then increments the led_timer by 10ms.
 * Finally, it calls the WDGM_AlivenessIndication function to indicate that the system is alive.
 *
 *  returns: void
 */
void LEDM_Manage(void){
 TOGGLE_BIT(PORTD,0);
 if (led_timer >= LED_BLINK_PERIOD){
  if (led_state == LED_ON){

   GPIO_Write(LED_PORT, LED_PIN, LOW);
   led_state = LED_OFF;
  }
  else{
   GPIO_Write(LED_PORT, LED_PIN, HIGH);

   led_state = LED_ON;
  }
  led_timer = 0;
 }
 led_timer += 10;
 WDGM_AlivenessIndication();

}
