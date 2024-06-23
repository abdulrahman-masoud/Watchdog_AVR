/*
 * main.c
 *
 *  Created on: Jun 23, 2024
 *      Author: DELL
 */


#include"../gpio/gpio.h"
#include"../lib/std_Types.h"

int main(void){



	GPIO_Init(PORT_B, 0,OUTPUT);

	while(1){
		GPIO_Write(PORT_B,0,LOW);
	}
	return 0;
}
