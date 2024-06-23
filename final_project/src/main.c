/*
 * main.c
 *
 *  Created on: Jun 23, 2024
 *      Author: DELL
 */


#include"../gpio/gpio.h"
#include"../timer_0/timer_0.h"
#include"../lib/std_Types.h"


#define F_CPU 8000000UL
#include <util/delay.h>

int main(void){



	GPIO_Init(PORT_B, 0,OUTPUT);

	while(1){
		LED_Manage();
		_delay_ms(10);
	}

		
	return 0;
}


ISR(TIMER0_COMPA_vect){
	led_timer += 20;
}



