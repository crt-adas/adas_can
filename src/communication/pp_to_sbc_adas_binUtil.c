
// this file were genereted by coderdbc.com web service
// any questions - mailto:coderdbc@gmail.com

#include <vfoma/communication/pp_to_sbc_adas_binUtil.h>

#ifdef __DEF_PP_TO_SBC_ADAS__

PP_to_SBC_ADAS_rx_t PP_to_SBC_ADAS_rx;

#endif

uint32_t PP_to_SBC_ADAS_Receive(PP_to_SBC_ADAS_rx_t* _m, const uint8_t* _d, uint32_t _id, uint8_t dlc_)
{
 uint32_t recid = 0;
 if (_id == 0x18FF00D0U) {
  recid = Unpack_SteeringColumnAssistant_PP_to_SBC_ADAS(&(_m->SteeringColumnAssistant), _d, dlc_);
 } else if (_id == 0x18FF01D0U) {
  recid = Unpack_BusLocation_PP_to_SBC_ADAS(&(_m->BusLocation), _d, dlc_);
 }

 return recid;
}

