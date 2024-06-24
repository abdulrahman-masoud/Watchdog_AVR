/*
 * main.c
 *
 *  Created on: Jun 23, 2024
 *      Author: DELL
 *
 *  This is the main source file for the project.
 *  It includes the initialization of various modules and the main loop of the program.
 *  It also includes the definitions of the interrupt service routines for TIMER0 and TIMER1.
 */

#include <util/delay.h>
#include<avr/interrupt.h>

#include "../gpio/gpio.h"
#include "../timer0/timer_0.h"
#include "../lib/std_Types.h"
#include "../lib/utils.h"
#include"../WDGM/WDGM.h"
#include"../WDGDrv/WDGDrv.h"
#include"../timer_1/timer_1.h"
#include"../led/led_mng.h"
#include"../lib/Bit_Operations.h"
#include "../gpio/Gpio_private.h"

// Interrupt Service Routine for TIMER0 COMPA interrupt.
// This ISR toggles the state of PORTD pin 1 and calls the WDGM_MainFunction.
ISR(TIMER0_COMPA_vect){
 TOGGLE_BIT(PORTD,1);
 WDGM_MainFunction();
}

// Interrupt Service Routine for TIMER1 COMPA interrupt.
// This ISR toggles the state of PORTD pin 2 and calls the WDGDrv_IsrNotification.
ISR(TIMER1_COMPA_vect){
 TOGGLE_BIT(PORTD,2);
 WDGDrv_IsrNotification();
}

// Main function of the program.
// This function initializes the various modules, enables global interrupts, and enters the main loop.
// In the main loop, it calls the LEDM_Manage function every 10ms.
int main(void){
 SREG = (1<<7);  // Enable global interrupts
 WDGDrv_init();  // Initialize the Watchdog Driver module
 WDGM_Init();    // Initialize the Watchdog Manager module
 LEDM_init();    // Initialize the LED Manager module
 timer_1_init(); // Initialize the TIMER1 module
 timer_0_init(); // Initialize the TIMER0 module

 GPIO_Write(PORT_D, 5, HIGH);  // Set PORTD pin 5 to HIGH

 // Main loop
 while(1){
  LEDM_Manage();  // Manage the LEDs
  _delay_ms(10);  // Delay for 10ms
 }

 return 0;
}