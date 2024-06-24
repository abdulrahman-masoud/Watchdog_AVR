
#include "Gpio.h"
#include "Gpio_private.h"
#include "../lib/Bit_Operations.h"



/*
	* Description: This function is responsible for initializing the GPIO
	* The function will initialize the GPIO pins as output pins and default value is HIGH
*/
void GPIO_Init()
{
	SET_BIT(DDRB,0);
	SET_BIT(PORTB,0);

	SET_BIT(DDRC,0);
	SET_BIT(PORTC,0);
	SET_BIT(DDRC,1);
	SET_BIT(PORTC,1);
	SET_BIT(DDRC,2);
	SET_BIT(PORTC,2);

	SET_BIT(DDRD,0);
	SET_BIT(PORTD,0);
	SET_BIT(DDRD,1);
	SET_BIT(PORTD,1);
	SET_BIT(DDRD,2);
	SET_BIT(PORTD,2);
	SET_BIT(DDRD,5);
	SET_BIT(PORTD,5);
}


/*
	* Description: This function is responsible for writing a value to a specific pin in a specific port
	* The function will take the port name, pin number and the value to be written
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
