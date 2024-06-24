


#include "timer_0.h"
#include "timer_0_private.h"
#include "../lib/Bit_Operations.h"


/*
    * Description: This function is responsible for initializing Timer 0
*/
void timer_0_init(void)
{
    TCNT0 = 0;

    TCCR0A |= (1 << WGM01) | (1<<COM0A1);
    TCCR0B = (1 << CS02) | (1 << CS00); // pre-scaler = 1024
    OCR0A = 155; // Interrupt Every 20ms

    TIMSK0 |= (1 << OCIE0A); // Enable CTCA interrupt
}
