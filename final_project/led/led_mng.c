/*
 * led.c
 *
 *  Created on: Jun 23, 2024
 *      Author: DELL
 */
#include"led_mng.h"
#include"../gpio/gpio.h"
#include"util/delay.h"

#define LED_PORT 'B'
#define LED_PIN  0
#define LED_ON 1
#define LED_OFF 0

#define LED_BLINK_PERIOD 20

uint32 led_timer ;
uint8 led_state = LED_ON;

void LED_init(uint8 LED_port,uint8 LED_pin){
	GPIO_Init(LED_port, LED_pin,OUTPUT);
}

void LED_Manage(void){
	
    if (led_timer >= LED_BLINK_PERIOD){
        if (led_state == LED_ON){
            GPIO_Write(LED_PORT, LED_PIN, LOW);
            led_state = LED_OFF;
        }
        else{
            GPIO_Write(LED_PORT, LED_PIN, HIGH);
            led_state = LED_ON;
        }
        led_timer = 0;
    }
}
