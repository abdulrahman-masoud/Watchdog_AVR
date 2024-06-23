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
#include"../WDGM/WDGM.h"
#include"../WDGDrv/WDGDrv.h"
#include"../timer_1/timer_1.h"
#include"../led/led_mng.h"
#include<avr/interrupt.h>

//#define SREG REG8(0x5F)

ISR(TIMER0_COMPA_vect){
	tick++;
	WDGM_MainFunction();
}
ISR(TIMER1_COMPA_vect){
	WDGDrv_IsrNotification();
}

int main(void){


	SREG = (1<<7);
	WDGDrv_init();
	WDGM_Init();
	LEDM_init();
	timer_1_init();
	timer_0_init();

	while(1){

		LEDM_Manage();
		_delay_ms(10);

	}

		
	return 0;
}




