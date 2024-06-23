/*
 * gpio_private.h
 *
 *  Created on: Jun 23, 2024
 *      Author: DELL
 */

#ifndef GPIO_GPIO_PRIVATE_H_
#define GPIO_GPIO_PRIVATE_H_
#include "../lib/utils.h"

// Define register addresses for ATmega328P

#define PORTB REG8(0x25)
#define DDRB  REG8(0x24)
#define PINB  REG8(0x23)

#define PORTC REG8(0x28)
#define DDRC  REG8(0x27)
#define PINC  REG8(0x26)

#define PORTD REG8(0x2B)
#define DDRD  REG8(0x2A)
#define PIND  REG8(0x29)


#endif /* GPIO_GPIO_PRIVATE_H_ */
