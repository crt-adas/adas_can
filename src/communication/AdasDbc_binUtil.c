
// this file were genereted by coderdbc.com web service
// any questions - mailto:coderdbc@gmail.com

#include <vfoma/communication/AdasDbc_binUtil.h>

#ifdef __DEF_ADASDBC__

AdasDbc_rx_t AdasDbc_rx;

#endif

uint32_t AdasDbc_Receive(AdasDbc_rx_t* _m, const uint8_t* _d, uint32_t _id)
{
 uint32_t recid = 0;
 if (_id >= 0x8FE6EFEU && _id < 0x18F01DFEU) {
  if (_id >= 0x8FE6EFEU && _id < 0xCF029FEU) {
   if (_id >= 0x8FE6EFEU && _id < 0xCD1FEFEU) {
    if (_id == 0x8FE6EFEU) {
     recid = Unpack_HRW_AdasDbc(&(_m->HRW), _d);
    } else if (_id == 0xC09FEFEU) {
     recid = Unpack_SRASI_AdasDbc(&(_m->SRASI), _d);
    }
   } else {
    if (_id == 0xCD1FEFEU) {
     recid = Unpack_ASC6_AdasDbc(&(_m->ASC6), _d);
    } else {
     if (_id == 0xCD2FEFEU) {
      recid = Unpack_ASC2_AdasDbc(&(_m->ASC2), _d);
     } else if (_id == 0xCF013FEU) {
      recid = Unpack_SSI_AdasDbc(&(_m->SSI), _d);
     }
    }
   }
  } else {
   if (_id >= 0xCF029FEU && _id < 0xCFE5AFEU) {
    if (_id == 0xCF029FEU) {
     recid = Unpack_SSI2_AdasDbc(&(_m->SSI2), _d);
    } else {
     if (_id == 0xCF02AFEU) {
      recid = Unpack_ARI_AdasDbc(&(_m->ARI), _d);
     } else if (_id == 0xCFE57FEU) {
      recid = Unpack_ASC5_AdasDbc(&(_m->ASC5), _d);
     }
    }
   } else {
    if (_id == 0xCFE5AFEU) {
     recid = Unpack_ASC1_AdasDbc(&(_m->ASC1), _d);
    } else {
     if (_id == 0x14FD6AFEU) {
      recid = Unpack_AGW_AdasDbc(&(_m->AGW), _d);
     } else if (_id == 0x18F009FEU) {
      recid = Unpack_VDC2_AdasDbc(&(_m->VDC2), _d);
     }
    }
   }
  }
 } else {
  if (_id >= 0x18F01DFEU && _id < 0x18FEE0FEU) {
   if (_id >= 0x18F01DFEU && _id < 0x18FE5CFEU) {
    if (_id == 0x18F01DFEU) {
     recid = Unpack_SAS_AdasDbc(&(_m->SAS), _d);
    } else {
     if (_id == 0x18FE58FEU) {
      recid = Unpack_ASC4_AdasDbc(&(_m->ASC4), _d);
     } else if (_id == 0x18FE59FEU) {
      recid = Unpack_ASC3_AdasDbc(&(_m->ASC3), _d);
     }
    }
   } else {
    if (_id == 0x18FE5CFEU) {
     recid = Unpack_RGE22_AdasDbc(&(_m->RGE22), _d);
    } else {
     if (_id == 0x18FE65FEU) {
      recid = Unpack_GPM16_AdasDbc(&(_m->GPM16), _d);
     } else if (_id == 0x18FEC1FEU) {
      recid = Unpack_VDHR_AdasDbc(&(_m->VDHR), _d);
     }
    }
   }
  } else {
   if (_id >= 0x18FEE0FEU && _id < 0x1CFE78FEU) {
    if (_id == 0x18FEE0FEU) {
     recid = Unpack_VD_AdasDbc(&(_m->VD), _d);
    } else {
     if (_id == 0x18FEF3FEU) {
      recid = Unpack_VP_AdasDbc(&(_m->VP), _d);
     } else if (_id == 0x1CFD69FEU) {
      recid = Unpack_AGCW_AdasDbc(&(_m->AGCW), _d);
     }
    }
   } else {
    if (_id == 0x1CFE78FEU) {
     recid = Unpack_TP1_AdasDbc(&(_m->TP1), _d);
    } else {
     if (_id == 0x1CFE79FEU) {
      recid = Unpack_TP2_AdasDbc(&(_m->TP2), _d);
     } else if (_id == 0x1CFE7AFEU) {
      recid = Unpack_TP3_AdasDbc(&(_m->TP3), _d);
     }
    }
   }
  }
 }

 return recid;
}

