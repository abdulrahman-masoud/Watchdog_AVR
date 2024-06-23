/*
 * WDGM.h
 *
 *  Created on: Jun 23, 2024
 *      Author: Kimo Store
 */

#ifndef WDGM_H
#define WDGM_H
#include"../lib/std_Types.h"

typedef enum {OK = 0, NOK = 1}WDGM_StatusType;
WDGM_StatusType not_stuck;
WDGM_StatusType status;
uint8 counter;
uint8 tick;
void WDGM_Init(void);

void WDGM_MainFunction(void);

WDGM_StatusType WDGM_PovideSuppervisionStatus(void);

void  WDGM_AlivenessIndication(void);

#endif /* WDGM_H_ */
