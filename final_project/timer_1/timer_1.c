#include "timer_1_private.h"
#include "timer_1.h"

/*
 * Function:  timer_1_init
 * --------------------
 * Initialize the TIMER1 module.
 *
 * This function sets the initial value of the Timer/Counter Register (TCNT1) to 0.
 * It configures the Timer/Counter Control Register A (TCCR1A) to enable Clear Timer on Compare Match (CTC) mode and non-inverting mode.
 * It configures the Timer/Counter Control Register B (TCCR1B) to set the clock prescaler to 1024 and enable CTC mode.
 * It sets the Output Compare Register A (OCR1A) to 390, which will generate an interrupt every 50ms.
 * Finally, it enables the Output Compare Match A Interrupt by setting the OCIE1A bit in the Timer/Counter Interrupt Mask Register (TIMSK1).
 *
 *  returns: void
 */
void timer_1_init(void){
 TCNT1 = 0; /* Set timer1 initial count to zero */
 TCCR1A = (1<<COM1A1); /* Enable non-inverting mode */
 TCCR1B = (1<<WGM12) | (1<<CS12) | (1<<CS10); /* Enable CTC mode and set the clock prescaler to 1024 */
 OCR1A = 390; /* Set the Output Compare Register A to 390 to generate an interrupt every 50ms */
 TIMSK1 |= (1<<OCIE1A); /* Enable the Output Compare Match A Interrupt */
}