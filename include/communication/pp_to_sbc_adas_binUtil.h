﻿
// this file were genereted by coderdbc.com web service
// any questions - mailto:coderdbc@gmail.com

#pragma once


#ifdef __cplusplus
extern "C" {
#endif

#include "pp_to_sbc_adas.h"

// @dbccodeconf.h file should be placed in inc folder. If the user wants
// to allocate big DBC struct inside the driver - appropriate define (__DEF_xxxxx__)
// should be placed in this file
//#include "dbccodeconf.h"

typedef struct
{
  SteeringColumnAssistant_t SteeringColumnAssistant;   // TX [Vector__XXX].RX [].
  BusLocation_t BusLocation;                           // TX [Vector__XXX].RX [Vector__XXX ].
} PP_to_SBC_ADAS_rx_t;

// There is no any message detected with tx direction.

uint32_t PP_to_SBC_ADAS_Receive(PP_to_SBC_ADAS_rx_t* _m, const uint8_t* _d, uint32_t _id, uint8_t dlc_);


// define @__DEF_PP_TO_SBC_ADAS__ in the @dbccodeconf.h file for allocation in utility source code.
#ifdef __DEF_PP_TO_SBC_ADAS__

extern PP_to_SBC_ADAS_rx_t PP_to_SBC_ADAS_rx;

#endif


#ifdef __cplusplus
}
#endif

