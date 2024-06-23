/*
 * timer_1_private.h
 *
 *  Created on: Jun 23, 2024
 *      Author: Kimo Store
 */

#ifndef TIMER_1_PRIVATE_H_
#define TIMER_1_PRIVATE_H_

#include "../lib/utils.h"

#define TCCR1A REG8(0x80)
#define COM1A1 7
#define COM1A0 6
#define COM1B1 5
#define COM1B0 4
#define WGM11  1
#define WGM10  0

#define TCCR1B REG8(0x81)
#define ICNC1 7
#define ICES1 6
#define WGM13 4
#define WGM12 3
#define CS12  2
#define CS11  1
#define CS10  0

#define TCCR1C REG8(0x82)
#define FOC1A 7
#define FOC1B 6

#define TCNT1H REG8(0x85)
#define TCNT1L REG8(0x84)
#define TCNT1 REG16(0x84)

#define OCR1AH REG8(0x89)
#define OCR1AL REG8(0x88)
#define OCR1A REG16(0x88)

#define TIMSK1 REG8(0x6F)
#define OCIE1A  1



#endif /* TIMER_1_PRIVATE_H_ */
