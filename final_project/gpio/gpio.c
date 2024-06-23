/*
 * gpio.c
 *
 *  Created on: Jun 23, 2024
 *      Author: DELL
 */


#include "Gpio.h"
#include "Gpio_private.h"
#include "../lib/Bit_Operations.h"

void GPIO_Init(uint8 port, uint8 pin,uint8 direction)
{
    switch(port)
    {
        case PORT_B:
            if(direction == OUTPUT)
            {
                SET_BIT(DDRB,pin);
                SET_BIT(PORTB,pin);
            }
            else
            {
                CLEAR_BIT(DDRB,pin);
                SET_BIT(PORTB,pin);
            }
            break;
        case PORT_C:
            if(direction == OUTPUT)
            {
                SET_BIT(DDRC,pin);
                SET_BIT(PORTB,pin);
            }
            else
            {
                CLEAR_BIT(DDRC,pin);
                SET_BIT(PORTC,pin);
            }
            break;
        case PORT_D:
            if(direction == OUTPUT)
            {
                SET_BIT(DDRD,pin);
                SET_BIT(PORTB,pin);
            }
            else
            {
                CLEAR_BIT(DDRD,pin);
                SET_BIT(PORTD,pin);
            }
            break;
        default:
            break;
    }
}

void GPIO_Write(uint8 port, uint8 pin, uint8 value)
{
    switch(port)
    {
        case PORT_B:
            if(value == HIGH)
            {
                SET_BIT(PORTB,pin);
            }
            else
            {
                CLEAR_BIT(PORTB,pin);
            }
            break;
        case PORT_C:
            if(value == HIGH)
            {
                SET_BIT(PORTC,pin);
            }
            else
            {
                CLEAR_BIT(PORTC,pin);
            }
            break;
        case PORT_D:
            if(value == HIGH)
            {
                SET_BIT(PORTD,pin);
            }
            else
            {
                CLEAR_BIT(PORTD,pin);
            }
            break;
        default:
            break;
    }
}
