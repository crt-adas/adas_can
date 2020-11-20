
// this file were genereted by coderdbc.com web service
// any questions - mailto:coderdbc@gmail.com

#include <vfoma/communication/pp_motors.h>

// --------------------------------------------------------------------------
uint32_t Unpack_PropB_PS7_MotorsPower_Torque_PP_MOTORS(PropB_PS7_MotorsPower_Torque_t* _m, const uint8_t* _d, uint8_t dlc_)
{
  _m->TractionMotor1_ActualPower = (((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU))) - 32765;
  _m->TractionMotor2_ActualPower = (((_d[3] & (0xFFU)) << 8) | (_d[2] & (0xFFU))) - 32765;
  _m->TractionMotor1_ActualTorque = (((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU))) - 32766;
  _m->TractionMotor2_ActualTorque = (((_d[7] & (0xFFU)) << 8) | (_d[6] & (0xFFU))) - 32766;
  return PropB_PS7_MotorsPower_Torque_CANID;
}

uint32_t Pack_PropB_PS7_MotorsPower_Torque_PP_MOTORS(const PropB_PS7_MotorsPower_Torque_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < PropB_PS7_MotorsPower_Torque_DLC; _d[i++] = 0);

  _d[0] |= (_m->TractionMotor1_ActualPower & (0xFFU));
  _d[1] |= ((_m->TractionMotor1_ActualPower >> 8) & (0xFFU));
  _d[2] |= (_m->TractionMotor2_ActualPower & (0xFFU));
  _d[3] |= ((_m->TractionMotor2_ActualPower >> 8) & (0xFFU));
  _d[4] |= (_m->TractionMotor1_ActualTorque & (0xFFU));
  _d[5] |= ((_m->TractionMotor1_ActualTorque >> 8) & (0xFFU));
  _d[6] |= (_m->TractionMotor2_ActualTorque & (0xFFU));
  _d[7] |= ((_m->TractionMotor2_ActualTorque >> 8) & (0xFFU));
  *_len = 8; *_ide = 1;
  return PropB_PS7_MotorsPower_Torque_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_PropB_PS8_MotorsSpeed_PP_MOTORS(PropB_PS8_MotorsSpeed_t* _m, const uint8_t* _d, uint8_t dlc_)
{
  _m->TractionMotor1_ActualSpeed = (((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU))) - 32766;
  _m->TractionMotor2_ActualSpeed = (((_d[3] & (0xFFU)) << 8) | (_d[2] & (0xFFU))) - 32766;
  _m->TractionMotor1_Direction = (_d[4] & (0x03U));
  _m->TractionMotor2_Direction = ((_d[4] >> 2) & (0x03U));
  return PropB_PS8_MotorsSpeed_CANID;
}

uint32_t Pack_PropB_PS8_MotorsSpeed_PP_MOTORS(const PropB_PS8_MotorsSpeed_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < PropB_PS8_MotorsSpeed_DLC; _d[i++] = 0);

  _d[0] |= (_m->TractionMotor1_ActualSpeed & (0xFFU));
  _d[1] |= ((_m->TractionMotor1_ActualSpeed >> 8) & (0xFFU));
  _d[2] |= (_m->TractionMotor2_ActualSpeed & (0xFFU));
  _d[3] |= ((_m->TractionMotor2_ActualSpeed >> 8) & (0xFFU));
  _d[4] |= (_m->TractionMotor1_Direction & (0x03U)) | ((_m->TractionMotor2_Direction & (0x03U)) << 2);
  *_len = 8; *_ide = 1;
  return PropB_PS8_MotorsSpeed_CANID;
}

