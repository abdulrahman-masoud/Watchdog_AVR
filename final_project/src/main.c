/*
 * main.c
 *
 *  Created on: Jun 23, 2024
 *      Author: DELL
 */


#include"../gpio/gpio.h"
#include"../timer0/timer_0.h"
#include"../lib/std_Types.h"
//#include <avr/io.h>
#include <avr/interrupt.h>

#define F_CPU 8000000UL
#include <util/delay.h>
extern uint32 led_timer;
int main(void){


	SREG |= (1<<7);
	GPIO_Init(PORT_B, 0,OUTPUT);
	timer_1_init();
	timer_0_init();

	while(1){
//		LED_Manage();
//		_delay_ms(10);
	}

		
	return 0;
}


ISR(TIMER0_COMPA_vect){
	GPIO_Write(PORT_B,0,LOW);
//	led_timer += 20;
}
//ISR(TIMER1_COMPA_vect){
//	GPIO_Write(PORT_B,0,LOW);
//}
//

