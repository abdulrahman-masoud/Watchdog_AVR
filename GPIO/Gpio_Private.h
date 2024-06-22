/*
    Gpio_private.h
    This file to handle Gpio for the ATmega328P

    Auther: Abdulrahman Masoud
*/

#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H

#include "Lib/Utils.h"

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


#endif /* GPIO_PRIVATE_H */