
// this file were genereted by coderdbc.com web service
// any questions - mailto:coderdbc@gmail.com

#pragma once


#ifdef __cplusplus
extern "C" {
#endif

#include "AdasDbc.h"

// @dbccodeconf.h file should be placed in inc folder. If the user wants
// to allocate big DBC struct inside the driver - appropriate define (__DEF_xxxxx__)
// should be placed in this file

typedef struct
{
  HRW_t HRW;                      // TX [Vector__XXX].RX [Vector__XXX ].
  SRASI_t SRASI;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ASC6_t ASC6;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ASC2_t ASC2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  SSI_t SSI;                      // TX [Vector__XXX].RX [].
  SSI2_t SSI2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ARI_t ARI;                      // TX [Vector__XXX].RX [Vector__XXX ].
  ASC5_t ASC5;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ASC1_t ASC1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AGW_t AGW;                      // TX [Vector__XXX].RX [Vector__XXX ].
  VDC2_t VDC2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  SAS_t SAS;                      // TX [Vector__XXX].RX [Vector__XXX ].
  ASC4_t ASC4;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ASC3_t ASC3;                    // TX [Vector__XXX].RX [Vector__XXX ].
  RGE22_t RGE22;                  // TX [Vector__XXX].RX [Vector__XXX ].
  GPM16_t GPM16;                  // TX [Vector__XXX].RX [Vector__XXX ].
  VDHR_t VDHR;                    // TX [Vector__XXX].RX [Vector__XXX ].
  VD_t VD;                        // TX [Vector__XXX].RX [Vector__XXX ].
  VP_t VP;                        // TX [Vector__XXX].RX [Vector__XXX ].
  AGCW_t AGCW;                    // TX [Vector__XXX].RX [Vector__XXX ].
  TP1_t TP1;                      // TX [Vector__XXX].RX [Vector__XXX ].
  TP2_t TP2;                      // TX [Vector__XXX].RX [Vector__XXX ].
  TP3_t TP3;                      // TX [Vector__XXX].RX [Vector__XXX ].
} AdasDbc_rx_t;

// There is no any message detected with tx direction.

uint32_t AdasDbc_Receive(AdasDbc_rx_t* _m, const uint8_t* _d, uint32_t _id);


// define @__DEF_ADASDBC__ in the @dbccodeconf.h file for allocation in utility source code.
#ifdef __DEF_ADASDBC__

extern AdasDbc_rx_t AdasDbc_rx;

#endif


#ifdef __cplusplus
}
#endif

