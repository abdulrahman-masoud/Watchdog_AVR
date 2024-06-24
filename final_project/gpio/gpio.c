/*
 * gpio.c
 *
 *  Created on: Jun 23, 2024
 *      Author: DELL
 *
 *  This source file contains the implementation of the GPIO (General Purpose Input/Output) module.
 *  It includes the definitions of the GPIO_Init and GPIO_Write functions.
 */

#include "Gpio.h"
#include "Gpio_private.h"
#include "../lib/Bit_Operations.h"

/*
 * Function:  GPIO_Init
 * --------------------
 * Initialize the GPIO module by setting the direction of specific GPIO pins as output.
 *
 *  returns: void
 */
void GPIO_Init(void)
{
 SET_BIT(DDRB,0);
 SET_BIT(DDRD,0);
 SET_BIT(DDRD,1);
 SET_BIT(DDRD,2);
 SET_BIT(DDRD,3);
 SET_BIT(DDRD,5);
 SET_BIT(DDRC,0);
 SET_BIT(DDRC,1);
}

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