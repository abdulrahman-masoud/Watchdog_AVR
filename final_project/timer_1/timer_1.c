
#include "timer_1_private.h"
#include "timer_1.h"


/*
	* Description: This function is responsible for initializing Timer 1
	* Timer 1 is 16-bit timer
*/
void timer_1_init(void){
	TCNT1 = 0; /* Set timer1 initial count to zero */
	TCCR1A = (1<<COM1A1); /* CTC mode*/
	TCCR1B = (1<<WGM12) | (1<<CS12) | (1<<CS10); /* pre-scaler = 1024 */
	OCR1A = 390; /* Interrupt Every 50ms*/
	TIMSK1 |= (1<<OCIE1A); /* Enable CTCA interrupt */
}
