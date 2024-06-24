

#ifndef GPIO_GPIO_H_
#define GPIO_GPIO_H_
#include "../lib/std_Types.h"

#define OUTPUT 1
#define INPUT 0

#define HIGH 1
#define LOW 0

#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'






void GPIO_Init();
void GPIO_Write(uint8 port, uint8 pin, uint8 value);


#endif /* GPIO_GPIO_H_ */
