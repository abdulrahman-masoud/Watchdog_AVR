

#include "Gpio.h"
#include "Gpio_private.h"
#include "../lib/Bit_Operations.h"


void GPIO_Init(){

	SET_BIT(DDRB,0);
	SET_BIT(DDRD,0);
	SET_BIT(DDRD,1);
	SET_BIT(DDRD,2);
	SET_BIT(DDRD,3);

	SET_BIT(DDRD,5);
	// SET_BIT(PORTD,5);
	SET_BIT(DDRC,0);
	// SET_BIT(PORTC,0);
	SET_BIT(DDRC,1);
	// SET_BIT(PORTC,1);
}

// void GPIO_Init_Pin(uint8 port, uint8 pin,uint8 direction)
// {
// 	switch(port)
// 	{
// 	case PORT_B:
// 		if(direction == OUTPUT)
// 		{
// 			SET_BIT(DDRB,pin);
// 			SET_BIT(PORTB,pin);
// 		}
// 		else
// 		{
// 			CLEAR_BIT(DDRB,pin);
// 			SET_BIT(PORTB,pin);
// 		}
// 		break;
// 	case PORT_C:
// 		if(direction == OUTPUT)
// 		{
// 			SET_BIT(DDRC,pin);
// 			SET_BIT(PORTB,pin);
// 		}
// 		else
// 		{
// 			CLEAR_BIT(DDRC,pin);
// 			SET_BIT(PORTC,pin);
// 		}
// 		break;
// 	case PORT_D:
// 		if(direction == OUTPUT)
// 		{
// 			SET_BIT(DDRD,pin);
// 			SET_BIT(PORTB,pin);
// 		}
// 		else
// 		{
// 			CLEAR_BIT(DDRD,pin);
// 			SET_BIT(PORTD,pin);
// 		}
// 		break;
// 	default:
// 		break;
// 	}
// }

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
