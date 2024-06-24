#include "timer_0.h"
#include "timer_0_private.h"
#include "../lib/Bit_Operations.h"

/*
 * Function:  timer_0_init
 * --------------------
 * Initialize the TIMER0 module.
 *
 * This function sets the initial value of the Timer/Counter Register (TCNT0) to 0.
 * It configures the Timer/Counter Control Register A (TCCR0A) to enable Clear Timer on Compare Match (CTC) mode and non-inverting mode.
 * It configures the Timer/Counter Control Register B (TCCR0B) to set the clock prescaler to 1024.
 * It sets the Output Compare Register A (OCR0A) to 155, which will generate an interrupt every 20ms.
 * Finally, it enables the Output Compare Match A Interrupt by setting the OCIE0A bit in the Timer/Counter Interrupt Mask Register (TIMSK0).
 *
 *  returns: void
 */
void timer_0_init(void)
{
    TCNT0 = 0;  // Set the initial value of the Timer/Counter Register to 0

    TCCR0A |= (1 << WGM01) | (1<<COM0A1);  // Enable CTC mode and non-inverting mode
    TCCR0B = (1 << CS02) | (1 << CS00);  // Set the clock prescaler to 1024
    OCR0A = 155;  // Set the Output Compare Register A to 155 for interrupt every 20ms

    TIMSK0 |= (1 << OCIE0A);  // Enable the Output Compare Match A Interrupt
}
