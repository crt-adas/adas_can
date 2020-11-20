
// this file were genereted by coderdbc.com web service
// any questions - mailto:coderdbc@gmail.com

#include <vfoma/communication/PCANEXT.h>

// --------------------------------------------------------------------------
uint32_t Unpack_Out_IO_PCANEXT(Out_IO_t* _m, const uint8_t* _d)
{
  _m->Dout_Set = (_d[0] & (0x01U));
  _m->GPS_SetPower = ((_d[0] >> 1) & (0x01U));
  _m->framecnt++;
  return Out_IO_CANID;
}

uint32_t Pack_Out_IO_PCANEXT(const Out_IO_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Out_IO_DLC; _d[i++] = 0);

  _d[0] |= (_m->Dout_Set & (0x01U)) | ((_m->GPS_SetPower & (0x01U)) << 1);
  *_len = 1; *_ide = 0;
  return Out_IO_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_Out_PowerOff_PCANEXT(Out_PowerOff_t* _m, const uint8_t* _d)
{
  _m->Device_PowerOff = (_d[0] & (0x01U));
  _m->framecnt++;
  return Out_PowerOff_CANID;
}

uint32_t Pack_Out_PowerOff_PCANEXT(const Out_PowerOff_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Out_PowerOff_DLC; _d[i++] = 0);

  _d[0] |= (_m->Device_PowerOff & (0x01U));
  *_len = 1; *_ide = 0;
  return Out_PowerOff_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_Out_Gyro_PCANEXT(Out_Gyro_t* _m, const uint8_t* _d)
{
  _m->Gyro_SetScale = (_d[0] & (0x03U));
  _m->framecnt++;
  return Out_Gyro_CANID;
}

uint32_t Pack_Out_Gyro_PCANEXT(const Out_Gyro_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Out_Gyro_DLC; _d[i++] = 0);

  _d[0] |= (_m->Gyro_SetScale & (0x03U));
  *_len = 1; *_ide = 0;
  return Out_Gyro_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_Out_BMC_AccScale_PCANEXT(Out_BMC_AccScale_t* _m, const uint8_t* _d)
{
  _m->Acc_SetScale = (_d[0] & (0x07U));
  _m->framecnt++;
  return Out_BMC_AccScale_CANID;
}

uint32_t Pack_Out_BMC_AccScale_PCANEXT(const Out_BMC_AccScale_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Out_BMC_AccScale_DLC; _d[i++] = 0);

  _d[0] |= (_m->Acc_SetScale & (0x07U));
  *_len = 1; *_ide = 0;
  return Out_BMC_AccScale_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_Out_SaveConfig_PCANEXT(Out_SaveConfig_t* _m, const uint8_t* _d)
{
  _m->Config_SaveToEEPROM = (_d[0] & (0x01U));
  _m->framecnt++;
  return Out_SaveConfig_CANID;
}

uint32_t Pack_Out_SaveConfig_PCANEXT(const Out_SaveConfig_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Out_SaveConfig_DLC; _d[i++] = 0);

  _d[0] |= (_m->Config_SaveToEEPROM & (0x01U));
  *_len = 1; *_ide = 0;
  return Out_SaveConfig_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_Out_RTC_SetTime_PCANEXT(Out_RTC_SetTime_t* _m, const uint8_t* _d)
{
  _m->RTC_SetSec = (_d[0] & (0xFFU));
  _m->RTC_SetMin = (_d[1] & (0xFFU));
  _m->RTC_SetHour = (_d[2] & (0xFFU));
  _m->RTC_SetDayOfWeek = (_d[3] & (0xFFU));
  _m->RTC_SetDayOfMonth = (_d[4] & (0xFFU));
  _m->RTC_SetMonth = (_d[5] & (0xFFU));
  _m->RTC_SetYear = ((_d[7] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
  _m->framecnt++;
  return Out_RTC_SetTime_CANID;
}

uint32_t Pack_Out_RTC_SetTime_PCANEXT(const Out_RTC_SetTime_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Out_RTC_SetTime_DLC; _d[i++] = 0);

  _d[0] |= (_m->RTC_SetSec & (0xFFU));
  _d[1] |= (_m->RTC_SetMin & (0xFFU));
  _d[2] |= (_m->RTC_SetHour & (0xFFU));
  _d[3] |= (_m->RTC_SetDayOfWeek & (0xFFU));
  _d[4] |= (_m->RTC_SetDayOfMonth & (0xFFU));
  _d[5] |= (_m->RTC_SetMonth & (0xFFU));
  _d[6] |= (_m->RTC_SetYear & (0xFFU));
  _d[7] |= ((_m->RTC_SetYear >> 8) & (0xFFU));
  *_len = 8; *_ide = 0;
  return Out_RTC_SetTime_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_Out_RTC_TimeFromGPS_PCANEXT(Out_RTC_TimeFromGPS_t* _m, const uint8_t* _d)
{
  _m->RTC_SetTimeFromGPS = (_d[0] & (0x01U));
  _m->framecnt++;
  return Out_RTC_TimeFromGPS_CANID;
}

uint32_t Pack_Out_RTC_TimeFromGPS_PCANEXT(const Out_RTC_TimeFromGPS_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Out_RTC_TimeFromGPS_DLC; _d[i++] = 0);

  _d[0] |= (_m->RTC_SetTimeFromGPS & (0x01U));
  *_len = 1; *_ide = 0;
  return Out_RTC_TimeFromGPS_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_Out_Acc_FastCalibration_PCANEXT(Out_Acc_FastCalibration_t* _m, const uint8_t* _d)
{
  _m->Acc_SetCalibTarget_X = (_d[0] & (0x03U));
  _m->Acc_SetCalibTarget_Y = (_d[1] & (0x03U));
  _m->Acc_SetCalibTarget_Z = (_d[2] & (0x03U));
  _m->Acc_StartFastCalib = (_d[3] & (0x01U));
  _m->framecnt++;
  return Out_Acc_FastCalibration_CANID;
}

uint32_t Pack_Out_Acc_FastCalibration_PCANEXT(const Out_Acc_FastCalibration_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Out_Acc_FastCalibration_DLC; _d[i++] = 0);

  _d[0] |= (_m->Acc_SetCalibTarget_X & (0x03U));
  _d[1] |= (_m->Acc_SetCalibTarget_Y & (0x03U));
  _d[2] |= (_m->Acc_SetCalibTarget_Z & (0x03U));
  _d[3] |= (_m->Acc_StartFastCalib & (0x01U));
  *_len = 4; *_ide = 0;
  return Out_Acc_FastCalibration_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_Arrive_And_Go_Position_PCANEXT(Arrive_And_Go_Position_t* _m, const uint8_t* _d)
{
  _m->AAG_Longitude = ((_d[3] & (0xFFU)) << 24) | ((_d[2] & (0xFFU)) << 16) | ((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU));
  _m->AAG_Latitude = ((_d[7] & (0xFFU)) << 24) | ((_d[6] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->framecnt++;
  return Arrive_And_Go_Position_CANID;
}

uint32_t Pack_Arrive_And_Go_Position_PCANEXT(const Arrive_And_Go_Position_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Arrive_And_Go_Position_DLC; _d[i++] = 0);

  _d[0] |= (_m->AAG_Longitude & (0xFFU));
  _d[1] |= ((_m->AAG_Longitude >> 8) & (0xFFU));
  _d[2] |= ((_m->AAG_Longitude >> 16) & (0xFFU));
  _d[3] |= ((_m->AAG_Longitude >> 24) & (0xFFU));
  _d[4] |= (_m->AAG_Latitude & (0xFFU));
  _d[5] |= ((_m->AAG_Latitude >> 8) & (0xFFU));
  _d[6] |= ((_m->AAG_Latitude >> 16) & (0xFFU));
  _d[7] |= ((_m->AAG_Latitude >> 24) & (0xFFU));
  *_len = 8; *_ide = 1;
  return Arrive_And_Go_Position_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_Arrive_And_Go_Verification_PCANEXT(Arrive_And_Go_Verification_t* _m, const uint8_t* _d)
{
  _m->AAG_StartStop_Demand = (_d[0] & (0x01U));
  _m->AAG_SS_BusStopNo_Demanding = (_d[1] & (0xFFU));
  _m->AAG_SuperCapsCharge_Demand = (_d[2] & (0x01U));
  _m->AAG_SC_BusStopNo_Demanding = (_d[3] & (0xFFU));
  _m->framecnt++;
  return Arrive_And_Go_Verification_CANID;
}

uint32_t Pack_Arrive_And_Go_Verification_PCANEXT(const Arrive_And_Go_Verification_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Arrive_And_Go_Verification_DLC; _d[i++] = 0);

  _d[0] |= (_m->AAG_StartStop_Demand & (0x01U));
  _d[1] |= (_m->AAG_SS_BusStopNo_Demanding & (0xFFU));
  _d[2] |= (_m->AAG_SuperCapsCharge_Demand & (0x01U));
  _d[3] |= (_m->AAG_SC_BusStopNo_Demanding & (0xFFU));
  *_len = 4; *_ide = 1;
  return Arrive_And_Go_Verification_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_BMC_Acceleration_PCANEXT(BMC_Acceleration_t* _m, const uint8_t* _d)
{
  _m->Acceleration_X = ((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU));
  _m->Acceleration_Y = ((_d[3] & (0xFFU)) << 8) | (_d[2] & (0xFFU));
  _m->Acceleration_Z = ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->Temperature = ((_d[6] & (0xFFU))) + 48;
  _m->VerticalAxis = (_d[7] & (0x03U));
  _m->Orientation = ((_d[7] >> 2) & (0x07U));
  _m->framecnt++;
  return BMC_Acceleration_CANID;
}

uint32_t Pack_BMC_Acceleration_PCANEXT(const BMC_Acceleration_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < BMC_Acceleration_DLC; _d[i++] = 0);

  _d[0] |= (_m->Acceleration_X & (0xFFU));
  _d[1] |= ((_m->Acceleration_X >> 8) & (0xFFU));
  _d[2] |= (_m->Acceleration_Y & (0xFFU));
  _d[3] |= ((_m->Acceleration_Y >> 8) & (0xFFU));
  _d[4] |= (_m->Acceleration_Z & (0xFFU));
  _d[5] |= ((_m->Acceleration_Z >> 8) & (0xFFU));
  _d[6] |= (_m->Temperature & (0xFFU));
  _d[7] |= (_m->VerticalAxis & (0x03U)) | ((_m->Orientation & (0x07U)) << 2);
  *_len = 8; *_ide = 1;
  return BMC_Acceleration_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_BMC_MagneticField_PCANEXT(BMC_MagneticField_t* _m, const uint8_t* _d)
{
  _m->MagneticField_X = ((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU));
  _m->MagneticField_Y = ((_d[3] & (0xFFU)) << 8) | (_d[2] & (0xFFU));
  _m->MagneticField_Z = ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->framecnt++;
  return BMC_MagneticField_CANID;
}

uint32_t Pack_BMC_MagneticField_PCANEXT(const BMC_MagneticField_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < BMC_MagneticField_DLC; _d[i++] = 0);

  _d[0] |= (_m->MagneticField_X & (0xFFU));
  _d[1] |= ((_m->MagneticField_X >> 8) & (0xFFU));
  _d[2] |= (_m->MagneticField_Y & (0xFFU));
  _d[3] |= ((_m->MagneticField_Y >> 8) & (0xFFU));
  _d[4] |= (_m->MagneticField_Z & (0xFFU));
  _d[5] |= ((_m->MagneticField_Z >> 8) & (0xFFU));
  *_len = 6; *_ide = 1;
  return BMC_MagneticField_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_L3GD20_Rotation_A_PCANEXT(L3GD20_Rotation_A_t* _m, const uint8_t* _d)
{
  _m->Rotation_X = ((_d[3] & (0xFFU)) << 24) | ((_d[2] & (0xFFU)) << 16) | ((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU));
  _m->Rotation_Y = ((_d[7] & (0xFFU)) << 24) | ((_d[6] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->framecnt++;
  return L3GD20_Rotation_A_CANID;
}

uint32_t Pack_L3GD20_Rotation_A_PCANEXT(const L3GD20_Rotation_A_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < L3GD20_Rotation_A_DLC; _d[i++] = 0);

  _d[0] |= (_m->Rotation_X & (0xFFU));
  _d[1] |= ((_m->Rotation_X >> 8) & (0xFFU));
  _d[2] |= ((_m->Rotation_X >> 16) & (0xFFU));
  _d[3] |= ((_m->Rotation_X >> 24) & (0xFFU));
  _d[4] |= (_m->Rotation_Y & (0xFFU));
  _d[5] |= ((_m->Rotation_Y >> 8) & (0xFFU));
  _d[6] |= ((_m->Rotation_Y >> 16) & (0xFFU));
  _d[7] |= ((_m->Rotation_Y >> 24) & (0xFFU));
  *_len = 8; *_ide = 1;
  return L3GD20_Rotation_A_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_L3GD20_Rotation_B_PCANEXT(L3GD20_Rotation_B_t* _m, const uint8_t* _d)
{
  _m->Rotation_Z = ((_d[3] & (0xFFU)) << 24) | ((_d[2] & (0xFFU)) << 16) | ((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU));
  _m->framecnt++;
  return L3GD20_Rotation_B_CANID;
}

uint32_t Pack_L3GD20_Rotation_B_PCANEXT(const L3GD20_Rotation_B_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < L3GD20_Rotation_B_DLC; _d[i++] = 0);

  _d[0] |= (_m->Rotation_Z & (0xFFU));
  _d[1] |= ((_m->Rotation_Z >> 8) & (0xFFU));
  _d[2] |= ((_m->Rotation_Z >> 16) & (0xFFU));
  _d[3] |= ((_m->Rotation_Z >> 24) & (0xFFU));
  *_len = 4; *_ide = 1;
  return L3GD20_Rotation_B_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_GPS_Status_PCANEXT(GPS_Status_t* _m, const uint8_t* _d)
{
  _m->GPS_AntennaStatus = (_d[0] & (0xFFU));
  _m->GPS_NumSatellites = (_d[1] & (0xFFU));
  _m->GPS_NavigationMethod = (_d[2] & (0xFFU));
  _m->framecnt++;
  return GPS_Status_CANID;
}

uint32_t Pack_GPS_Status_PCANEXT(const GPS_Status_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < GPS_Status_DLC; _d[i++] = 0);

  _d[0] |= (_m->GPS_AntennaStatus & (0xFFU));
  _d[1] |= (_m->GPS_NumSatellites & (0xFFU));
  _d[2] |= (_m->GPS_NavigationMethod & (0xFFU));
  *_len = 3; *_ide = 1;
  return GPS_Status_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_GPS_CourseSpeed_PCANEXT(GPS_CourseSpeed_t* _m, const uint8_t* _d)
{
  _m->GPS_Course = ((_d[3] & (0xFFU)) << 24) | ((_d[2] & (0xFFU)) << 16) | ((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU));
  _m->GPS_Speed = ((_d[7] & (0xFFU)) << 24) | ((_d[6] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->framecnt++;
  return GPS_CourseSpeed_CANID;
}

uint32_t Pack_GPS_CourseSpeed_PCANEXT(const GPS_CourseSpeed_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < GPS_CourseSpeed_DLC; _d[i++] = 0);

  _d[0] |= (_m->GPS_Course & (0xFFU));
  _d[1] |= ((_m->GPS_Course >> 8) & (0xFFU));
  _d[2] |= ((_m->GPS_Course >> 16) & (0xFFU));
  _d[3] |= ((_m->GPS_Course >> 24) & (0xFFU));
  _d[4] |= (_m->GPS_Speed & (0xFFU));
  _d[5] |= ((_m->GPS_Speed >> 8) & (0xFFU));
  _d[6] |= ((_m->GPS_Speed >> 16) & (0xFFU));
  _d[7] |= ((_m->GPS_Speed >> 24) & (0xFFU));
  *_len = 8; *_ide = 1;
  return GPS_CourseSpeed_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_GPS_PositionLongitude_PCANEXT(GPS_PositionLongitude_t* _m, const uint8_t* _d)
{
  _m->GPS_Longitude_Minutes = ((_d[3] & (0xFFU)) << 24) | ((_d[2] & (0xFFU)) << 16) | ((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU));
  _m->GPS_Longitude_Degree = ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->GPS_IndicatorEW = (_d[6] & (0xFFU));
  _m->framecnt++;
  return GPS_PositionLongitude_CANID;
}

uint32_t Pack_GPS_PositionLongitude_PCANEXT(const GPS_PositionLongitude_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < GPS_PositionLongitude_DLC; _d[i++] = 0);

  _d[0] |= (_m->GPS_Longitude_Minutes & (0xFFU));
  _d[1] |= ((_m->GPS_Longitude_Minutes >> 8) & (0xFFU));
  _d[2] |= ((_m->GPS_Longitude_Minutes >> 16) & (0xFFU));
  _d[3] |= ((_m->GPS_Longitude_Minutes >> 24) & (0xFFU));
  _d[4] |= (_m->GPS_Longitude_Degree & (0xFFU));
  _d[5] |= ((_m->GPS_Longitude_Degree >> 8) & (0xFFU));
  _d[6] |= (_m->GPS_IndicatorEW & (0xFFU));
  *_len = 7; *_ide = 1;
  return GPS_PositionLongitude_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_GPS_PositionLatitude_PCANEXT(GPS_PositionLatitude_t* _m, const uint8_t* _d)
{
  _m->GPS_Latitude_Minutes = ((_d[3] & (0xFFU)) << 24) | ((_d[2] & (0xFFU)) << 16) | ((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU));
  _m->GPS_Latitude_Degree = ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->GPS_IndicatorNS = (_d[6] & (0xFFU));
  _m->framecnt++;
  return GPS_PositionLatitude_CANID;
}

uint32_t Pack_GPS_PositionLatitude_PCANEXT(const GPS_PositionLatitude_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < GPS_PositionLatitude_DLC; _d[i++] = 0);

  _d[0] |= (_m->GPS_Latitude_Minutes & (0xFFU));
  _d[1] |= ((_m->GPS_Latitude_Minutes >> 8) & (0xFFU));
  _d[2] |= ((_m->GPS_Latitude_Minutes >> 16) & (0xFFU));
  _d[3] |= ((_m->GPS_Latitude_Minutes >> 24) & (0xFFU));
  _d[4] |= (_m->GPS_Latitude_Degree & (0xFFU));
  _d[5] |= ((_m->GPS_Latitude_Degree >> 8) & (0xFFU));
  _d[6] |= (_m->GPS_IndicatorNS & (0xFFU));
  *_len = 7; *_ide = 1;
  return GPS_PositionLatitude_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_GPS_PositionAltitude_PCANEXT(GPS_PositionAltitude_t* _m, const uint8_t* _d)
{
  _m->GPS_Altitude = ((_d[3] & (0xFFU)) << 24) | ((_d[2] & (0xFFU)) << 16) | ((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU));
  _m->framecnt++;
  return GPS_PositionAltitude_CANID;
}

uint32_t Pack_GPS_PositionAltitude_PCANEXT(const GPS_PositionAltitude_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < GPS_PositionAltitude_DLC; _d[i++] = 0);

  _d[0] |= (_m->GPS_Altitude & (0xFFU));
  _d[1] |= ((_m->GPS_Altitude >> 8) & (0xFFU));
  _d[2] |= ((_m->GPS_Altitude >> 16) & (0xFFU));
  _d[3] |= ((_m->GPS_Altitude >> 24) & (0xFFU));
  *_len = 4; *_ide = 1;
  return GPS_PositionAltitude_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_GPS_Delusions_A_PCANEXT(GPS_Delusions_A_t* _m, const uint8_t* _d)
{
  _m->GPS_PDOP = ((_d[3] & (0xFFU)) << 24) | ((_d[2] & (0xFFU)) << 16) | ((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU));
  _m->GPS_HDOP = ((_d[7] & (0xFFU)) << 24) | ((_d[6] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->framecnt++;
  return GPS_Delusions_A_CANID;
}

uint32_t Pack_GPS_Delusions_A_PCANEXT(const GPS_Delusions_A_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < GPS_Delusions_A_DLC; _d[i++] = 0);

  _d[0] |= (_m->GPS_PDOP & (0xFFU));
  _d[1] |= ((_m->GPS_PDOP >> 8) & (0xFFU));
  _d[2] |= ((_m->GPS_PDOP >> 16) & (0xFFU));
  _d[3] |= ((_m->GPS_PDOP >> 24) & (0xFFU));
  _d[4] |= (_m->GPS_HDOP & (0xFFU));
  _d[5] |= ((_m->GPS_HDOP >> 8) & (0xFFU));
  _d[6] |= ((_m->GPS_HDOP >> 16) & (0xFFU));
  _d[7] |= ((_m->GPS_HDOP >> 24) & (0xFFU));
  *_len = 8; *_ide = 1;
  return GPS_Delusions_A_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_GPS_Delusions_B_PCANEXT(GPS_Delusions_B_t* _m, const uint8_t* _d)
{
  _m->GPS_VDOP = ((_d[3] & (0xFFU)) << 24) | ((_d[2] & (0xFFU)) << 16) | ((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU));
  _m->framecnt++;
  return GPS_Delusions_B_CANID;
}

uint32_t Pack_GPS_Delusions_B_PCANEXT(const GPS_Delusions_B_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < GPS_Delusions_B_DLC; _d[i++] = 0);

  _d[0] |= (_m->GPS_VDOP & (0xFFU));
  _d[1] |= ((_m->GPS_VDOP >> 8) & (0xFFU));
  _d[2] |= ((_m->GPS_VDOP >> 16) & (0xFFU));
  _d[3] |= ((_m->GPS_VDOP >> 24) & (0xFFU));
  *_len = 4; *_ide = 1;
  return GPS_Delusions_B_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_GPS_DateTime_PCANEXT(GPS_DateTime_t* _m, const uint8_t* _d)
{
  _m->UTC_Year = (_d[0] & (0xFFU));
  _m->UTC_Month = (_d[1] & (0xFFU));
  _m->UTC_DayOfMonth = (_d[2] & (0xFFU));
  _m->UTC_Hour = (_d[3] & (0xFFU));
  _m->UTC_Minute = (_d[4] & (0xFFU));
  _m->UTC_Second = (_d[5] & (0xFFU));
  _m->framecnt++;
  return GPS_DateTime_CANID;
}

uint32_t Pack_GPS_DateTime_PCANEXT(const GPS_DateTime_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < GPS_DateTime_DLC; _d[i++] = 0);

  _d[0] |= (_m->UTC_Year & (0xFFU));
  _d[1] |= (_m->UTC_Month & (0xFFU));
  _d[2] |= (_m->UTC_DayOfMonth & (0xFFU));
  _d[3] |= (_m->UTC_Hour & (0xFFU));
  _d[4] |= (_m->UTC_Minute & (0xFFU));
  _d[5] |= (_m->UTC_Second & (0xFFU));
  *_len = 6; *_ide = 1;
  return GPS_DateTime_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_IO_PCANEXT(IO_t* _m, const uint8_t* _d)
{
  _m->Din1_Status = (_d[0] & (0x01U));
  _m->Din2_Status = ((_d[0] >> 1) & (0x01U));
  _m->Dout_Status = ((_d[0] >> 2) & (0x01U));
  _m->SD_Present = ((_d[0] >> 3) & (0x01U));
  _m->GPS_PowerStatus = ((_d[0] >> 4) & (0x01U));
  _m->Device_ID = ((_d[0] >> 5) & (0x07U));
  _m->framecnt++;
  return IO_CANID;
}

uint32_t Pack_IO_PCANEXT(const IO_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < IO_DLC; _d[i++] = 0);

  _d[0] |= (_m->Din1_Status & (0x01U)) | ((_m->Din2_Status & (0x01U)) << 1) | ((_m->Dout_Status & (0x01U)) << 2) | ((_m->SD_Present & (0x01U)) << 3) | ((_m->GPS_PowerStatus & (0x01U)) << 4) | ((_m->Device_ID & (0x07U)) << 5);
  *_len = 1; *_ide = 1;
  return IO_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_RTC_DateTime_PCANEXT(RTC_DateTime_t* _m, const uint8_t* _d)
{
  _m->RTC_Sec = (_d[0] & (0xFFU));
  _m->RTC_Min = (_d[1] & (0xFFU));
  _m->RTC_Hour = (_d[2] & (0xFFU));
  _m->RTC_DayOfWeek = (_d[3] & (0xFFU));
  _m->RTC_DayOfMonth = (_d[4] & (0xFFU));
  _m->RTC_Month = (_d[5] & (0xFFU));
  _m->RTC_Year = ((_d[7] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
  _m->framecnt++;
  return RTC_DateTime_CANID;
}

uint32_t Pack_RTC_DateTime_PCANEXT(const RTC_DateTime_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < RTC_DateTime_DLC; _d[i++] = 0);

  _d[0] |= (_m->RTC_Sec & (0xFFU));
  _d[1] |= (_m->RTC_Min & (0xFFU));
  _d[2] |= (_m->RTC_Hour & (0xFFU));
  _d[3] |= (_m->RTC_DayOfWeek & (0xFFU));
  _d[4] |= (_m->RTC_DayOfMonth & (0xFFU));
  _d[5] |= (_m->RTC_Month & (0xFFU));
  _d[6] |= (_m->RTC_Year & (0xFFU));
  _d[7] |= ((_m->RTC_Year >> 8) & (0xFFU));
  *_len = 8; *_ide = 1;
  return RTC_DateTime_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_Arrive_And_Go_BusStop1_PCANEXT(Arrive_And_Go_BusStop1_t* _m, const uint8_t* _d)
{
  _m->AAG_StartStop_ApproachOK = (_d[0] & (0x01U));
  _m->AAG_SuperCaps_ApproachOK = ((_d[0] >> 1) & (0x01U));
  _m->AAG_SuperCapsChargeDemand = (_d[1] & (0x01U));
  _m->AAG_StartStopDemand = (_d[2] & (0x01U));
  _m->AAG_BusStopNo = (_d[3] & (0xFFU));
  _m->AAG_DistanceToBusStop = ((_d[7] & (0xFFU)) << 24) | ((_d[6] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->framecnt++;
  return Arrive_And_Go_BusStop1_CANID;
}

uint32_t Pack_Arrive_And_Go_BusStop1_PCANEXT(const Arrive_And_Go_BusStop1_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Arrive_And_Go_BusStop1_DLC; _d[i++] = 0);

  _d[0] |= (_m->AAG_StartStop_ApproachOK & (0x01U)) | ((_m->AAG_SuperCaps_ApproachOK & (0x01U)) << 1);
  _d[1] |= (_m->AAG_SuperCapsChargeDemand & (0x01U));
  _d[2] |= (_m->AAG_StartStopDemand & (0x01U));
  _d[3] |= (_m->AAG_BusStopNo & (0xFFU));
  _d[4] |= (_m->AAG_DistanceToBusStop & (0xFFU));
  _d[5] |= ((_m->AAG_DistanceToBusStop >> 8) & (0xFFU));
  _d[6] |= ((_m->AAG_DistanceToBusStop >> 16) & (0xFFU));
  _d[7] |= ((_m->AAG_DistanceToBusStop >> 24) & (0xFFU));
  *_len = 8; *_ide = 1;
  return Arrive_And_Go_BusStop1_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_Arrive_And_Go_BusStop2_PCANEXT(Arrive_And_Go_BusStop2_t* _m, const uint8_t* _d)
{
  _m->AAG_StartStop_ApproachOK = (_d[0] & (0x01U));
  _m->AAG_SuperCaps_ApproachOK = ((_d[0] >> 1) & (0x01U));
  _m->AAG_SuperCapsChargeDemand = (_d[1] & (0x01U));
  _m->AAG_StartStopDemand = (_d[2] & (0x01U));
  _m->AAG_BusStopNo = (_d[3] & (0xFFU));
  _m->AAG_DistanceToBusStop = ((_d[7] & (0xFFU)) << 24) | ((_d[6] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->framecnt++;
  return Arrive_And_Go_BusStop2_CANID;
}

uint32_t Pack_Arrive_And_Go_BusStop2_PCANEXT(const Arrive_And_Go_BusStop2_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Arrive_And_Go_BusStop2_DLC; _d[i++] = 0);

  _d[0] |= (_m->AAG_StartStop_ApproachOK & (0x01U)) | ((_m->AAG_SuperCaps_ApproachOK & (0x01U)) << 1);
  _d[1] |= (_m->AAG_SuperCapsChargeDemand & (0x01U));
  _d[2] |= (_m->AAG_StartStopDemand & (0x01U));
  _d[3] |= (_m->AAG_BusStopNo & (0xFFU));
  _d[4] |= (_m->AAG_DistanceToBusStop & (0xFFU));
  _d[5] |= ((_m->AAG_DistanceToBusStop >> 8) & (0xFFU));
  _d[6] |= ((_m->AAG_DistanceToBusStop >> 16) & (0xFFU));
  _d[7] |= ((_m->AAG_DistanceToBusStop >> 24) & (0xFFU));
  *_len = 8; *_ide = 1;
  return Arrive_And_Go_BusStop2_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_Arrive_And_Go_BusStop3_PCANEXT(Arrive_And_Go_BusStop3_t* _m, const uint8_t* _d)
{
  _m->AAG_StartStop_ApproachOK = (_d[0] & (0x01U));
  _m->AAG_SuperCaps_ApproachOK = ((_d[0] >> 1) & (0x01U));
  _m->AAG_SuperCapsChargeDemand = (_d[1] & (0x01U));
  _m->AAG_StartStopDemand = (_d[2] & (0x01U));
  _m->AAG_BusStopNo = (_d[3] & (0xFFU));
  _m->AAG_DistanceToBusStop = ((_d[7] & (0xFFU)) << 24) | ((_d[6] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->framecnt++;
  return Arrive_And_Go_BusStop3_CANID;
}

uint32_t Pack_Arrive_And_Go_BusStop3_PCANEXT(const Arrive_And_Go_BusStop3_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Arrive_And_Go_BusStop3_DLC; _d[i++] = 0);

  _d[0] |= (_m->AAG_StartStop_ApproachOK & (0x01U)) | ((_m->AAG_SuperCaps_ApproachOK & (0x01U)) << 1);
  _d[1] |= (_m->AAG_SuperCapsChargeDemand & (0x01U));
  _d[2] |= (_m->AAG_StartStopDemand & (0x01U));
  _d[3] |= (_m->AAG_BusStopNo & (0xFFU));
  _d[4] |= (_m->AAG_DistanceToBusStop & (0xFFU));
  _d[5] |= ((_m->AAG_DistanceToBusStop >> 8) & (0xFFU));
  _d[6] |= ((_m->AAG_DistanceToBusStop >> 16) & (0xFFU));
  _d[7] |= ((_m->AAG_DistanceToBusStop >> 24) & (0xFFU));
  *_len = 8; *_ide = 1;
  return Arrive_And_Go_BusStop3_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_Arrive_And_Go_BusStop4_PCANEXT(Arrive_And_Go_BusStop4_t* _m, const uint8_t* _d)
{
  _m->AAG_StartStop_ApproachOK = (_d[0] & (0x01U));
  _m->AAG_SuperCaps_ApproachOK = ((_d[0] >> 1) & (0x01U));
  _m->AAG_SuperCapsChargeDemand = (_d[1] & (0x01U));
  _m->AAG_StartStopDemand = (_d[2] & (0x01U));
  _m->AAG_BusStopNo = (_d[3] & (0xFFU));
  _m->AAG_DistanceToBusStop = ((_d[7] & (0xFFU)) << 24) | ((_d[6] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->framecnt++;
  return Arrive_And_Go_BusStop4_CANID;
}

uint32_t Pack_Arrive_And_Go_BusStop4_PCANEXT(const Arrive_And_Go_BusStop4_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Arrive_And_Go_BusStop4_DLC; _d[i++] = 0);

  _d[0] |= (_m->AAG_StartStop_ApproachOK & (0x01U)) | ((_m->AAG_SuperCaps_ApproachOK & (0x01U)) << 1);
  _d[1] |= (_m->AAG_SuperCapsChargeDemand & (0x01U));
  _d[2] |= (_m->AAG_StartStopDemand & (0x01U));
  _d[3] |= (_m->AAG_BusStopNo & (0xFFU));
  _d[4] |= (_m->AAG_DistanceToBusStop & (0xFFU));
  _d[5] |= ((_m->AAG_DistanceToBusStop >> 8) & (0xFFU));
  _d[6] |= ((_m->AAG_DistanceToBusStop >> 16) & (0xFFU));
  _d[7] |= ((_m->AAG_DistanceToBusStop >> 24) & (0xFFU));
  *_len = 8; *_ide = 1;
  return Arrive_And_Go_BusStop4_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_Arrive_And_Go_BusStop5_PCANEXT(Arrive_And_Go_BusStop5_t* _m, const uint8_t* _d)
{
  _m->AAG_StartStop_ApproachOK = (_d[0] & (0x01U));
  _m->AAG_SuperCaps_ApproachOK = ((_d[0] >> 1) & (0x01U));
  _m->AAG_SuperCapsChargeDemand = (_d[1] & (0x01U));
  _m->AAG_StartStopDemand = (_d[2] & (0x01U));
  _m->AAG_BusStopNo = (_d[3] & (0xFFU));
  _m->AAG_DistanceToBusStop = ((_d[7] & (0xFFU)) << 24) | ((_d[6] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->framecnt++;
  return Arrive_And_Go_BusStop5_CANID;
}

uint32_t Pack_Arrive_And_Go_BusStop5_PCANEXT(const Arrive_And_Go_BusStop5_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Arrive_And_Go_BusStop5_DLC; _d[i++] = 0);

  _d[0] |= (_m->AAG_StartStop_ApproachOK & (0x01U)) | ((_m->AAG_SuperCaps_ApproachOK & (0x01U)) << 1);
  _d[1] |= (_m->AAG_SuperCapsChargeDemand & (0x01U));
  _d[2] |= (_m->AAG_StartStopDemand & (0x01U));
  _d[3] |= (_m->AAG_BusStopNo & (0xFFU));
  _d[4] |= (_m->AAG_DistanceToBusStop & (0xFFU));
  _d[5] |= ((_m->AAG_DistanceToBusStop >> 8) & (0xFFU));
  _d[6] |= ((_m->AAG_DistanceToBusStop >> 16) & (0xFFU));
  _d[7] |= ((_m->AAG_DistanceToBusStop >> 24) & (0xFFU));
  *_len = 8; *_ide = 1;
  return Arrive_And_Go_BusStop5_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_Arrive_And_Go_BusStop6_PCANEXT(Arrive_And_Go_BusStop6_t* _m, const uint8_t* _d)
{
  _m->AAG_StartStop_ApproachOK = (_d[0] & (0x01U));
  _m->AAG_SuperCaps_ApproachOK = ((_d[0] >> 1) & (0x01U));
  _m->AAG_SuperCapsChargeDemand = (_d[1] & (0x01U));
  _m->AAG_StartStopDemand = (_d[2] & (0x01U));
  _m->AAG_BusStopNo = (_d[3] & (0xFFU));
  _m->AAG_DistanceToBusStop = ((_d[7] & (0xFFU)) << 24) | ((_d[6] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->framecnt++;
  return Arrive_And_Go_BusStop6_CANID;
}

uint32_t Pack_Arrive_And_Go_BusStop6_PCANEXT(const Arrive_And_Go_BusStop6_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Arrive_And_Go_BusStop6_DLC; _d[i++] = 0);

  _d[0] |= (_m->AAG_StartStop_ApproachOK & (0x01U)) | ((_m->AAG_SuperCaps_ApproachOK & (0x01U)) << 1);
  _d[1] |= (_m->AAG_SuperCapsChargeDemand & (0x01U));
  _d[2] |= (_m->AAG_StartStopDemand & (0x01U));
  _d[3] |= (_m->AAG_BusStopNo & (0xFFU));
  _d[4] |= (_m->AAG_DistanceToBusStop & (0xFFU));
  _d[5] |= ((_m->AAG_DistanceToBusStop >> 8) & (0xFFU));
  _d[6] |= ((_m->AAG_DistanceToBusStop >> 16) & (0xFFU));
  _d[7] |= ((_m->AAG_DistanceToBusStop >> 24) & (0xFFU));
  *_len = 8; *_ide = 1;
  return Arrive_And_Go_BusStop6_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_Arrive_And_Go_BusStop7_PCANEXT(Arrive_And_Go_BusStop7_t* _m, const uint8_t* _d)
{
  _m->AAG_StartStop_ApproachOK = (_d[0] & (0x01U));
  _m->AAG_SuperCaps_ApproachOK = ((_d[0] >> 1) & (0x01U));
  _m->AAG_SuperCapsChargeDemand = (_d[1] & (0x01U));
  _m->AAG_StartStopDemand = (_d[2] & (0x01U));
  _m->AAG_BusStopNo = (_d[3] & (0xFFU));
  _m->AAG_DistanceToBusStop = ((_d[7] & (0xFFU)) << 24) | ((_d[6] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->framecnt++;
  return Arrive_And_Go_BusStop7_CANID;
}

uint32_t Pack_Arrive_And_Go_BusStop7_PCANEXT(const Arrive_And_Go_BusStop7_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Arrive_And_Go_BusStop7_DLC; _d[i++] = 0);

  _d[0] |= (_m->AAG_StartStop_ApproachOK & (0x01U)) | ((_m->AAG_SuperCaps_ApproachOK & (0x01U)) << 1);
  _d[1] |= (_m->AAG_SuperCapsChargeDemand & (0x01U));
  _d[2] |= (_m->AAG_StartStopDemand & (0x01U));
  _d[3] |= (_m->AAG_BusStopNo & (0xFFU));
  _d[4] |= (_m->AAG_DistanceToBusStop & (0xFFU));
  _d[5] |= ((_m->AAG_DistanceToBusStop >> 8) & (0xFFU));
  _d[6] |= ((_m->AAG_DistanceToBusStop >> 16) & (0xFFU));
  _d[7] |= ((_m->AAG_DistanceToBusStop >> 24) & (0xFFU));
  *_len = 8; *_ide = 1;
  return Arrive_And_Go_BusStop7_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_Arrive_And_Go_BusStop8_PCANEXT(Arrive_And_Go_BusStop8_t* _m, const uint8_t* _d)
{
  _m->AAG_StartStop_ApproachOK = (_d[0] & (0x01U));
  _m->AAG_SuperCaps_ApproachOK = ((_d[0] >> 1) & (0x01U));
  _m->AAG_SuperCapsChargeDemand = (_d[1] & (0x01U));
  _m->AAG_StartStopDemand = (_d[2] & (0x01U));
  _m->AAG_BusStopNo = (_d[3] & (0xFFU));
  _m->AAG_DistanceToBusStop = ((_d[7] & (0xFFU)) << 24) | ((_d[6] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->framecnt++;
  return Arrive_And_Go_BusStop8_CANID;
}

uint32_t Pack_Arrive_And_Go_BusStop8_PCANEXT(const Arrive_And_Go_BusStop8_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Arrive_And_Go_BusStop8_DLC; _d[i++] = 0);

  _d[0] |= (_m->AAG_StartStop_ApproachOK & (0x01U)) | ((_m->AAG_SuperCaps_ApproachOK & (0x01U)) << 1);
  _d[1] |= (_m->AAG_SuperCapsChargeDemand & (0x01U));
  _d[2] |= (_m->AAG_StartStopDemand & (0x01U));
  _d[3] |= (_m->AAG_BusStopNo & (0xFFU));
  _d[4] |= (_m->AAG_DistanceToBusStop & (0xFFU));
  _d[5] |= ((_m->AAG_DistanceToBusStop >> 8) & (0xFFU));
  _d[6] |= ((_m->AAG_DistanceToBusStop >> 16) & (0xFFU));
  _d[7] |= ((_m->AAG_DistanceToBusStop >> 24) & (0xFFU));
  *_len = 8; *_ide = 1;
  return Arrive_And_Go_BusStop8_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_Arrive_And_Go_BusStop9_PCANEXT(Arrive_And_Go_BusStop9_t* _m, const uint8_t* _d)
{
  _m->AAG_StartStop_ApproachOK = (_d[0] & (0x01U));
  _m->AAG_SuperCaps_ApproachOK = ((_d[0] >> 1) & (0x01U));
  _m->AAG_SuperCapsChargeDemand = (_d[1] & (0x01U));
  _m->AAG_StartStopDemand = (_d[2] & (0x01U));
  _m->AAG_BusStopNo = (_d[3] & (0xFFU));
  _m->AAG_DistanceToBusStop = ((_d[7] & (0xFFU)) << 24) | ((_d[6] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->framecnt++;
  return Arrive_And_Go_BusStop9_CANID;
}

uint32_t Pack_Arrive_And_Go_BusStop9_PCANEXT(const Arrive_And_Go_BusStop9_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Arrive_And_Go_BusStop9_DLC; _d[i++] = 0);

  _d[0] |= (_m->AAG_StartStop_ApproachOK & (0x01U)) | ((_m->AAG_SuperCaps_ApproachOK & (0x01U)) << 1);
  _d[1] |= (_m->AAG_SuperCapsChargeDemand & (0x01U));
  _d[2] |= (_m->AAG_StartStopDemand & (0x01U));
  _d[3] |= (_m->AAG_BusStopNo & (0xFFU));
  _d[4] |= (_m->AAG_DistanceToBusStop & (0xFFU));
  _d[5] |= ((_m->AAG_DistanceToBusStop >> 8) & (0xFFU));
  _d[6] |= ((_m->AAG_DistanceToBusStop >> 16) & (0xFFU));
  _d[7] |= ((_m->AAG_DistanceToBusStop >> 24) & (0xFFU));
  *_len = 8; *_ide = 1;
  return Arrive_And_Go_BusStop9_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_Arrive_And_Go_BusStop10_PCANEXT(Arrive_And_Go_BusStop10_t* _m, const uint8_t* _d)
{
  _m->AAG_StartStop_ApproachOK = (_d[0] & (0x01U));
  _m->AAG_SuperCaps_ApproachOK = ((_d[0] >> 1) & (0x01U));
  _m->AAG_SuperCapsChargeDemand = (_d[1] & (0x01U));
  _m->AAG_StartStopDemand = (_d[2] & (0x01U));
  _m->AAG_BusStopNo = (_d[3] & (0xFFU));
  _m->AAG_DistanceToBusStop = ((_d[7] & (0xFFU)) << 24) | ((_d[6] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->framecnt++;
  return Arrive_And_Go_BusStop10_CANID;
}

uint32_t Pack_Arrive_And_Go_BusStop10_PCANEXT(const Arrive_And_Go_BusStop10_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Arrive_And_Go_BusStop10_DLC; _d[i++] = 0);

  _d[0] |= (_m->AAG_StartStop_ApproachOK & (0x01U)) | ((_m->AAG_SuperCaps_ApproachOK & (0x01U)) << 1);
  _d[1] |= (_m->AAG_SuperCapsChargeDemand & (0x01U));
  _d[2] |= (_m->AAG_StartStopDemand & (0x01U));
  _d[3] |= (_m->AAG_BusStopNo & (0xFFU));
  _d[4] |= (_m->AAG_DistanceToBusStop & (0xFFU));
  _d[5] |= ((_m->AAG_DistanceToBusStop >> 8) & (0xFFU));
  _d[6] |= ((_m->AAG_DistanceToBusStop >> 16) & (0xFFU));
  _d[7] |= ((_m->AAG_DistanceToBusStop >> 24) & (0xFFU));
  *_len = 8; *_ide = 1;
  return Arrive_And_Go_BusStop10_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_Arrive_And_Go_BusStop11_PCANEXT(Arrive_And_Go_BusStop11_t* _m, const uint8_t* _d)
{
  _m->AAG_StartStop_ApproachOK = (_d[0] & (0x01U));
  _m->AAG_SuperCaps_ApproachOK = ((_d[0] >> 1) & (0x01U));
  _m->AAG_SuperCapsChargeDemand = (_d[1] & (0x01U));
  _m->AAG_StartStopDemand = (_d[2] & (0x01U));
  _m->AAG_BusStopNo = (_d[3] & (0xFFU));
  _m->AAG_DistanceToBusStop = ((_d[7] & (0xFFU)) << 24) | ((_d[6] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->framecnt++;
  return Arrive_And_Go_BusStop11_CANID;
}

uint32_t Pack_Arrive_And_Go_BusStop11_PCANEXT(const Arrive_And_Go_BusStop11_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Arrive_And_Go_BusStop11_DLC; _d[i++] = 0);

  _d[0] |= (_m->AAG_StartStop_ApproachOK & (0x01U)) | ((_m->AAG_SuperCaps_ApproachOK & (0x01U)) << 1);
  _d[1] |= (_m->AAG_SuperCapsChargeDemand & (0x01U));
  _d[2] |= (_m->AAG_StartStopDemand & (0x01U));
  _d[3] |= (_m->AAG_BusStopNo & (0xFFU));
  _d[4] |= (_m->AAG_DistanceToBusStop & (0xFFU));
  _d[5] |= ((_m->AAG_DistanceToBusStop >> 8) & (0xFFU));
  _d[6] |= ((_m->AAG_DistanceToBusStop >> 16) & (0xFFU));
  _d[7] |= ((_m->AAG_DistanceToBusStop >> 24) & (0xFFU));
  *_len = 8; *_ide = 1;
  return Arrive_And_Go_BusStop11_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_Arrive_And_Go_BusStop12_PCANEXT(Arrive_And_Go_BusStop12_t* _m, const uint8_t* _d)
{
  _m->AAG_StartStop_ApproachOK = (_d[0] & (0x01U));
  _m->AAG_SuperCaps_ApproachOK = ((_d[0] >> 1) & (0x01U));
  _m->AAG_SuperCapsChargeDemand = (_d[1] & (0x01U));
  _m->AAG_StartStopDemand = (_d[2] & (0x01U));
  _m->AAG_BusStopNo = (_d[3] & (0xFFU));
  _m->AAG_DistanceToBusStop = ((_d[7] & (0xFFU)) << 24) | ((_d[6] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->framecnt++;
  return Arrive_And_Go_BusStop12_CANID;
}

uint32_t Pack_Arrive_And_Go_BusStop12_PCANEXT(const Arrive_And_Go_BusStop12_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Arrive_And_Go_BusStop12_DLC; _d[i++] = 0);

  _d[0] |= (_m->AAG_StartStop_ApproachOK & (0x01U)) | ((_m->AAG_SuperCaps_ApproachOK & (0x01U)) << 1);
  _d[1] |= (_m->AAG_SuperCapsChargeDemand & (0x01U));
  _d[2] |= (_m->AAG_StartStopDemand & (0x01U));
  _d[3] |= (_m->AAG_BusStopNo & (0xFFU));
  _d[4] |= (_m->AAG_DistanceToBusStop & (0xFFU));
  _d[5] |= ((_m->AAG_DistanceToBusStop >> 8) & (0xFFU));
  _d[6] |= ((_m->AAG_DistanceToBusStop >> 16) & (0xFFU));
  _d[7] |= ((_m->AAG_DistanceToBusStop >> 24) & (0xFFU));
  *_len = 8; *_ide = 1;
  return Arrive_And_Go_BusStop12_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_Arrive_And_Go_BusStop13_PCANEXT(Arrive_And_Go_BusStop13_t* _m, const uint8_t* _d)
{
  _m->AAG_StartStop_ApproachOK = (_d[0] & (0x01U));
  _m->AAG_SuperCaps_ApproachOK = ((_d[0] >> 1) & (0x01U));
  _m->AAG_SuperCapsChargeDemand = (_d[1] & (0x01U));
  _m->AAG_StartStopDemand = (_d[2] & (0x01U));
  _m->AAG_BusStopNo = (_d[3] & (0xFFU));
  _m->AAG_DistanceToBusStop = ((_d[7] & (0xFFU)) << 24) | ((_d[6] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->framecnt++;
  return Arrive_And_Go_BusStop13_CANID;
}

uint32_t Pack_Arrive_And_Go_BusStop13_PCANEXT(const Arrive_And_Go_BusStop13_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Arrive_And_Go_BusStop13_DLC; _d[i++] = 0);

  _d[0] |= (_m->AAG_StartStop_ApproachOK & (0x01U)) | ((_m->AAG_SuperCaps_ApproachOK & (0x01U)) << 1);
  _d[1] |= (_m->AAG_SuperCapsChargeDemand & (0x01U));
  _d[2] |= (_m->AAG_StartStopDemand & (0x01U));
  _d[3] |= (_m->AAG_BusStopNo & (0xFFU));
  _d[4] |= (_m->AAG_DistanceToBusStop & (0xFFU));
  _d[5] |= ((_m->AAG_DistanceToBusStop >> 8) & (0xFFU));
  _d[6] |= ((_m->AAG_DistanceToBusStop >> 16) & (0xFFU));
  _d[7] |= ((_m->AAG_DistanceToBusStop >> 24) & (0xFFU));
  *_len = 8; *_ide = 1;
  return Arrive_And_Go_BusStop13_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_Arrive_And_Go_BusStop14_PCANEXT(Arrive_And_Go_BusStop14_t* _m, const uint8_t* _d)
{
  _m->AAG_StartStop_ApproachOK = (_d[0] & (0x01U));
  _m->AAG_SuperCaps_ApproachOK = ((_d[0] >> 1) & (0x01U));
  _m->AAG_SuperCapsChargeDemand = (_d[1] & (0x01U));
  _m->AAG_StartStopDemand = (_d[2] & (0x01U));
  _m->AAG_BusStopNo = (_d[3] & (0xFFU));
  _m->AAG_DistanceToBusStop = ((_d[7] & (0xFFU)) << 24) | ((_d[6] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->framecnt++;
  return Arrive_And_Go_BusStop14_CANID;
}

uint32_t Pack_Arrive_And_Go_BusStop14_PCANEXT(const Arrive_And_Go_BusStop14_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Arrive_And_Go_BusStop14_DLC; _d[i++] = 0);

  _d[0] |= (_m->AAG_StartStop_ApproachOK & (0x01U)) | ((_m->AAG_SuperCaps_ApproachOK & (0x01U)) << 1);
  _d[1] |= (_m->AAG_SuperCapsChargeDemand & (0x01U));
  _d[2] |= (_m->AAG_StartStopDemand & (0x01U));
  _d[3] |= (_m->AAG_BusStopNo & (0xFFU));
  _d[4] |= (_m->AAG_DistanceToBusStop & (0xFFU));
  _d[5] |= ((_m->AAG_DistanceToBusStop >> 8) & (0xFFU));
  _d[6] |= ((_m->AAG_DistanceToBusStop >> 16) & (0xFFU));
  _d[7] |= ((_m->AAG_DistanceToBusStop >> 24) & (0xFFU));
  *_len = 8; *_ide = 1;
  return Arrive_And_Go_BusStop14_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_Arrive_And_Go_BusStop15_PCANEXT(Arrive_And_Go_BusStop15_t* _m, const uint8_t* _d)
{
  _m->AAG_StartStop_ApproachOK = (_d[0] & (0x01U));
  _m->AAG_SuperCaps_ApproachOK = ((_d[0] >> 1) & (0x01U));
  _m->AAG_SuperCapsChargeDemand = (_d[1] & (0x01U));
  _m->AAG_StartStopDemand = (_d[2] & (0x01U));
  _m->AAG_BusStopNo = (_d[3] & (0xFFU));
  _m->AAG_DistanceToBusStop = ((_d[7] & (0xFFU)) << 24) | ((_d[6] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->framecnt++;
  return Arrive_And_Go_BusStop15_CANID;
}

uint32_t Pack_Arrive_And_Go_BusStop15_PCANEXT(const Arrive_And_Go_BusStop15_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Arrive_And_Go_BusStop15_DLC; _d[i++] = 0);

  _d[0] |= (_m->AAG_StartStop_ApproachOK & (0x01U)) | ((_m->AAG_SuperCaps_ApproachOK & (0x01U)) << 1);
  _d[1] |= (_m->AAG_SuperCapsChargeDemand & (0x01U));
  _d[2] |= (_m->AAG_StartStopDemand & (0x01U));
  _d[3] |= (_m->AAG_BusStopNo & (0xFFU));
  _d[4] |= (_m->AAG_DistanceToBusStop & (0xFFU));
  _d[5] |= ((_m->AAG_DistanceToBusStop >> 8) & (0xFFU));
  _d[6] |= ((_m->AAG_DistanceToBusStop >> 16) & (0xFFU));
  _d[7] |= ((_m->AAG_DistanceToBusStop >> 24) & (0xFFU));
  *_len = 8; *_ide = 1;
  return Arrive_And_Go_BusStop15_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_Arrive_And_Go_BusStop16_PCANEXT(Arrive_And_Go_BusStop16_t* _m, const uint8_t* _d)
{
  _m->AAG_StartStop_ApproachOK = (_d[0] & (0x01U));
  _m->AAG_SuperCaps_ApproachOK = ((_d[0] >> 1) & (0x01U));
  _m->AAG_SuperCapsChargeDemand = (_d[1] & (0x01U));
  _m->AAG_StartStopDemand = (_d[2] & (0x01U));
  _m->AAG_BusStopNo = (_d[3] & (0xFFU));
  _m->AAG_DistanceToBusStop = ((_d[7] & (0xFFU)) << 24) | ((_d[6] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->framecnt++;
  return Arrive_And_Go_BusStop16_CANID;
}

uint32_t Pack_Arrive_And_Go_BusStop16_PCANEXT(const Arrive_And_Go_BusStop16_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < Arrive_And_Go_BusStop16_DLC; _d[i++] = 0);

  _d[0] |= (_m->AAG_StartStop_ApproachOK & (0x01U)) | ((_m->AAG_SuperCaps_ApproachOK & (0x01U)) << 1);
  _d[1] |= (_m->AAG_SuperCapsChargeDemand & (0x01U));
  _d[2] |= (_m->AAG_StartStopDemand & (0x01U));
  _d[3] |= (_m->AAG_BusStopNo & (0xFFU));
  _d[4] |= (_m->AAG_DistanceToBusStop & (0xFFU));
  _d[5] |= ((_m->AAG_DistanceToBusStop >> 8) & (0xFFU));
  _d[6] |= ((_m->AAG_DistanceToBusStop >> 16) & (0xFFU));
  _d[7] |= ((_m->AAG_DistanceToBusStop >> 24) & (0xFFU));
  *_len = 8; *_ide = 1;
  return Arrive_And_Go_BusStop16_CANID;
}

