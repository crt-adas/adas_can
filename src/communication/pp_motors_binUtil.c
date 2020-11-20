
// this file were genereted by coderdbc.com web service
// any questions - mailto:coderdbc@gmail.com

#include <vfoma/communication/pp_motors_binUtil.h>

#ifdef __DEF_PP_MOTORS__

PP_MOTORS_rx_t PP_MOTORS_rx;

#endif

uint32_t PP_MOTORS_Receive(PP_MOTORS_rx_t* _m, const uint8_t* _d, uint32_t _id, uint8_t dlc_)
{
 uint32_t recid = 0;
 if (_id == 0x18F107EFU) {
  recid = Unpack_PropB_PS7_MotorsPower_Torque_PP_MOTORS(&(_m->PropB_PS7_MotorsPower_Torque), _d, dlc_);
 } else if (_id == 0x18F108EFU) {
  recid = Unpack_PropB_PS8_MotorsSpeed_PP_MOTORS(&(_m->PropB_PS8_MotorsSpeed), _d, dlc_);
 }

 return recid;
}

