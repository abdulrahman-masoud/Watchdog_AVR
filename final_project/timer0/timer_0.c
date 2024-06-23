/*
 * timer_0.c
 *
 *  Created on: Jun 23, 2024
 *      Author: DELL
 */


#include "timer_0.h"
#include "timer_0_private.h"
#include "../lib/Bit_Operations.h"

void timer_0_init(void)
{
    TCNT0 = 0;

    TCCR0A = (1 << WGM01);
//    TCCR0B = (1 << FOC0A) | (1 << FOC0B);
    TCCR0B = (1 << CS02) | (1 << CS00); // pre-scaler = 1024

    OCR0A = 155; // Interrupt Every 20ms
    TIMSK0 |= (1 << OCIE0A); // Enable CTCA interrupt
}
