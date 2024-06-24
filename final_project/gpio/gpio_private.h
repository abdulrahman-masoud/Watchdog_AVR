/*
 * gpio_private.h
 *
 *  Created on: Jun 23, 2024
 *      Author: DELL
 *
 *  This header file contains the private definitions for the GPIO (General Purpose Input/Output) module.
 *  It includes the register addresses for the ATmega328P microcontroller.
 */

#ifndef GPIO_GPIO_PRIVATE_H_
#define GPIO_GPIO_PRIVATE_H_

#include "../lib/utils.h"  // Include utility library

// Define register addresses for ATmega328P

#define PORTB REG8(0x25)  // Data Register B
#define DDRB  REG8(0x24)  // Data Direction Register B
#define PINB  REG8(0x23)  // Input Pins Register B

#define PORTC REG8(0x28)  // Data Register C
#define DDRC  REG8(0x27)  // Data Direction Register C
#define PINC  REG8(0x26)  // Input Pins Register C

#define PORTD REG8(0x2B)  // Data Register D
#define DDRD  REG8(0x2A)  // Data Direction Register D
#define PIND  REG8(0x29)  // Input Pins Register D

#endif /* GPIO_GPIO_PRIVATE_H_ */