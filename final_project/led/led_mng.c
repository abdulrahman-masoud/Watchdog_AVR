/*
 * led.c
 *
 *  Created on: Jun 23, 2024
 *      Author: DELL
 */
#include"led_mng.h"
#include"../gpio/gpio.h"
#include"util/delay.h"
void LED_init(uint8 LED_port,uint8 LED_pin){
	GPIO_Init(LED_port, LED_pin,OUTPUT);
}

void LED_manage(uint8 LED_port,uint8 LED_pin){
	GPIO_Write(LED_port, LED_pin,HIGH);

}
