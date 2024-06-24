/*
 * gpio.h
 *
 *  Created on: Jun 23, 2024
 *      Author: DELL
 *
 *  This header file contains the public definitions and function prototypes for the GPIO (General Purpose Input/Output) module.
 *  It includes the definitions for the GPIO pin states and port names for the ATmega328P microcontroller.
 */

#ifndef GPIO_GPIO_H_
#define GPIO_GPIO_H_

#include "../lib/std_Types.h"  // Include standard types library

// Define GPIO pin states
#define OUTPUT 1  // GPIO pin is set as output
#define INPUT 0   // GPIO pin is set as input

#define HIGH 1    // GPIO pin state is high
#define LOW 0     // GPIO pin state is low

// Define GPIO port names
#define PORT_B 'B'  // GPIO port B
#define PORT_C 'C'  // GPIO port C
#define PORT_D 'D'  // GPIO port D

/*
 * Function:  GPIO_Init
 * --------------------
 * Initialize the GPIO module.
 *
 *  returns: void
 */
void GPIO_Init(void);

/*
 * Function:  GPIO_Write
 * --------------------
 * Write a value to a specific GPIO pin.
 *
 *  port: The port of the GPIO pin.
 *  pin: The number of the GPIO pin.
 *  value: The value to be written to the GPIO pin.
 *
 *  returns: void
 */
void GPIO_Write(uint8 port, uint8 pin, uint8 value);

#endif /* GPIO_GPIO_H_ */