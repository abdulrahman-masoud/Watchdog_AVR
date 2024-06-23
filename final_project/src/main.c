/*
 * main.c
 *
 *  Created on: Jun 23, 2024
 *      Author: DELL
 */


#include "../gpio/gpio.h"
#include "../timer0/timer_0.h"
#include "../lib/std_Types.h"
#include "../lib/utils.h"
#include <util/delay.h>


#define SREG REG8(0x5F)


int main(void){


	SREG = (1<<7);

	GPIO_Init(PORT_B, 0,OUTPUT);
//	timer_1_init();
	timer_0_init();

	while(1){
		LED_Manage();
		_delay_ms(10);
	}

		
	return 0;
}


ISR(TIMER0_COMPA_vect){
	GPIO_Write(PORT_B,0,LOW);
	
}
//ISR(TIMER1_COMPA_vect){
//	GPIO_Write(PORT_B,0,LOW);
//}
//

