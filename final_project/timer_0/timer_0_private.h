#ifndef TIMER_0_PRIVATE_H_
#define TIMER_0_PRIVATE_H_

#include "../lib/utils.h"

#define TCCR0A REG8(0x44)
#define COM0A1 7
#define COM0A0 6
#define COM0B1 5
#define COM0B0 4
#define WGM01  1
#define WGM00  0

#define TCCR0B REG8(0x45)
#define FOC0A 7
#define FOC0B 6
#define WGM02 3
#define CS02  2
#define CS01  1
#define CS00  0

#define TCNT0 REG8(0x46)
#define TIMSK0 REG8(0x6E)
#define OCIE0A  1
#define OCIE0B  2
#define TOIE0   0

#define TIFR0 REG8(0x35)
#define OCF0A  1
#define OCF0B  2
#define TOV0   0

#define OCR0A REG8(0x47)
#define OCR0B REG8(0x48)


#endif /* TIMER_0_PRIVATE_H_ */