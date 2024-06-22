/*
    Gpio.h 
    This file to handle Gpio for the ATmega328P

    Auther: Abdulrahman Masoud

*/

#ifndef GPIO_H
#define GPIO_H

#define OUTPUT 1
#define INPUT 0

#define HIGH 1
#define LOW 0

#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'



#include "Std_Types.h"


void GPIO_Init(uint8 port, uint8 pin,uint8 direction);
void GPIO_Write(uint8 port, uint8 pin, uint8 value);




#endif /* GPIO_H */