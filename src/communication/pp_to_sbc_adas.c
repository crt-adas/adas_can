
// this file were genereted by coderdbc.com web service
// any questions - mailto:coderdbc@gmail.com

#include <vfoma/communication/pp_to_sbc_adas.h>

// --------------------------------------------------------------------------
uint32_t Unpack_SteeringColumnAssistant_PP_to_SBC_ADAS(SteeringColumnAssistant_t* _m, const uint8_t* _d, uint8_t dlc_)
{
  _m->CurrentSteeringWheelPosition = ((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU));
  _m->RequiredSteeringWheelPosition1 = ((_d[3] & (0xFFU)) << 8) | (_d[2] & (0xFFU));
  _m->RequiredSteeringWheelPosition2 = ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->PredictedSteeringWheelPosition = ((_d[7] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
  return SteeringColumnAssistant_CANID;
}

uint32_t Pack_SteeringColumnAssistant_PP_to_SBC_ADAS(const SteeringColumnAssistant_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < SteeringColumnAssistant_DLC; _d[i++] = 0);

  _d[0] |= (_m->CurrentSteeringWheelPosition & (0xFFU));
  _d[1] |= ((_m->CurrentSteeringWheelPosition >> 8) & (0xFFU));
  _d[2] |= (_m->RequiredSteeringWheelPosition1 & (0xFFU));
  _d[3] |= ((_m->RequiredSteeringWheelPosition1 >> 8) & (0xFFU));
  _d[4] |= (_m->RequiredSteeringWheelPosition2 & (0xFFU));
  _d[5] |= ((_m->RequiredSteeringWheelPosition2 >> 8) & (0xFFU));
  _d[6] |= (_m->PredictedSteeringWheelPosition & (0xFFU));
  _d[7] |= ((_m->PredictedSteeringWheelPosition >> 8) & (0xFFU));
  *_len = 8; *_ide = 1;
  return SteeringColumnAssistant_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_BusLocation_PP_to_SBC_ADAS(BusLocation_t* _m, const uint8_t* _d, uint8_t dlc_)
{
  _m->DiagVehicle = (_d[0] & (0x01U));
  _m->DiagLocation = ((_d[0] >> 1) & (0x01U));
  _m->DiagModel = ((_d[0] >> 2) & (0x01U));
  _m->LocalPosBusX = (_d[1] & (0xFFU));
  _m->LocalPosBusY = (_d[2] & (0xFFU));
  _m->CurrentVehicleSpeed = (_d[3] & (0xFFU));
  _m->RequiredVehicleSpeed = (_d[4] & (0xFFU));
  _m->CurrentSWAngularVelocity = (_d[5] & (0xFFU));
  _m->RequiredSWAngularVelocity = (_d[6] & (0xFFU));
  _m->CurrentVehicleOrientation = (_d[7] & (0xFFU));
  return BusLocation_CANID;
}

uint32_t Pack_BusLocation_PP_to_SBC_ADAS(const BusLocation_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < BusLocation_DLC; _d[i++] = 0);

  _d[0] |= (_m->DiagVehicle & (0x01U)) | ((_m->DiagLocation & (0x01U)) << 1) | ((_m->DiagModel & (0x01U)) << 2);
  _d[1] |= (_m->LocalPosBusX & (0xFFU));
  _d[2] |= (_m->LocalPosBusY & (0xFFU));
  _d[3] |= (_m->CurrentVehicleSpeed & (0xFFU));
  _d[4] |= (_m->RequiredVehicleSpeed & (0xFFU));
  _d[5] |= (_m->CurrentSWAngularVelocity & (0xFFU));
  _d[6] |= (_m->RequiredSWAngularVelocity & (0xFFU));
  _d[7] |= (_m->CurrentVehicleOrientation & (0xFFU));
  *_len = 8; *_ide = 1;
  return BusLocation_CANID;
}

