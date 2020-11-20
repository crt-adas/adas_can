
// this file were genereted by coderdbc.com web service
// any questions - mailto:coderdbc@gmail.com

#include <vfoma/communication/AdasDbc.h>

// --------------------------------------------------------------------------
uint32_t Unpack_HRW_AdasDbc(HRW_t* _m, const uint8_t* _d)
{
  _m->FrontAxleLeftWheelSpeed = ((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU));
  _m->FrontAxleRightWheelSpeed = ((_d[3] & (0xFFU)) << 8) | (_d[2] & (0xFFU));
  _m->RearAxleLeftWheelSpeed = ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->RearAxleRightWheelSpeed = ((_d[7] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
  _m->framecnt++;
  return HRW_CANID;
}

uint32_t Pack_HRW_AdasDbc(const HRW_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < HRW_DLC; _d[i++] = 0);

  _d[0] |= (_m->FrontAxleLeftWheelSpeed & (0xFFU));
  _d[1] |= ((_m->FrontAxleLeftWheelSpeed >> 8) & (0xFFU));
  _d[2] |= (_m->FrontAxleRightWheelSpeed & (0xFFU));
  _d[3] |= ((_m->FrontAxleRightWheelSpeed >> 8) & (0xFFU));
  _d[4] |= (_m->RearAxleLeftWheelSpeed & (0xFFU));
  _d[5] |= ((_m->RearAxleLeftWheelSpeed >> 8) & (0xFFU));
  _d[6] |= (_m->RearAxleRightWheelSpeed & (0xFFU));
  _d[7] |= ((_m->RearAxleRightWheelSpeed >> 8) & (0xFFU));
  *_len = 8; *_ide = 1;
  return HRW_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_SRASI_AdasDbc(SRASI_t* _m, const uint8_t* _d)
{
  _m->StaticRollAngle = ((_d[0] & (0xFFU))) - 125;
  _m->StaticRollAngleStatus = (_d[1] & (0x07U));
  _m->framecnt++;
  return SRASI_CANID;
}

uint32_t Pack_SRASI_AdasDbc(const SRASI_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < SRASI_DLC; _d[i++] = 0);

  _d[0] |= (_m->StaticRollAngle & (0xFFU));
  _d[1] |= (_m->StaticRollAngleStatus & (0x07U));
  *_len = 8; *_ide = 1;
  return SRASI_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_ASC6_AdasDbc(ASC6_t* _m, const uint8_t* _d)
{
  _m->LevelPresetFrontAxleLeft = (((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU))) - 32000;
  _m->LevelPresetFrontAxleRight = (((_d[3] & (0xFFU)) << 8) | (_d[2] & (0xFFU))) - 32000;
  _m->LevelPresetRearAxleLeft = (((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU))) - 32000;
  _m->LevelPresetRearAxleRight = (((_d[7] & (0xFFU)) << 8) | (_d[6] & (0xFFU))) - 32000;
  _m->framecnt++;
  return ASC6_CANID;
}

uint32_t Pack_ASC6_AdasDbc(const ASC6_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < ASC6_DLC; _d[i++] = 0);

  _d[0] |= (_m->LevelPresetFrontAxleLeft & (0xFFU));
  _d[1] |= ((_m->LevelPresetFrontAxleLeft >> 8) & (0xFFU));
  _d[2] |= (_m->LevelPresetFrontAxleRight & (0xFFU));
  _d[3] |= ((_m->LevelPresetFrontAxleRight >> 8) & (0xFFU));
  _d[4] |= (_m->LevelPresetRearAxleLeft & (0xFFU));
  _d[5] |= ((_m->LevelPresetRearAxleLeft >> 8) & (0xFFU));
  _d[6] |= (_m->LevelPresetRearAxleRight & (0xFFU));
  _d[7] |= ((_m->LevelPresetRearAxleRight >> 8) & (0xFFU));
  *_len = 8; *_ide = 1;
  return ASC6_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_ASC2_AdasDbc(ASC2_t* _m, const uint8_t* _d)
{
  _m->AutomaticTractionHelp = (_d[0] & (0x03U));
  _m->KneelingRqLeftSide = ((_d[0] >> 2) & (0x03U));
  _m->KneelingRqRightSide = ((_d[0] >> 4) & (0x03U));
  _m->KneelingCtrlModeRq = ((_d[0] >> 6) & (0x03U));
  _m->NominalLevelRqFrontAxle = (_d[1] & (0x0FU));
  _m->NominalLevelRqRearAxle = ((_d[1] >> 4) & (0x0FU));
  _m->LevelCtrlModeRq = (_d[2] & (0x0FU));
  _m->LiftAxle1PosCmd = ((_d[2] >> 4) & (0x03U));
  _m->LiftAxle2PosCmd = ((_d[2] >> 6) & (0x03U));
  _m->DamperStiffnessRqFrontAxle = (_d[3] & (0xFFU));
  _m->DamperStiffnessRqRearAxle = (_d[4] & (0xFFU));
  _m->DamperStiffnessRqLift_TagAxle = (_d[5] & (0xFFU));
  _m->KneelingCmdFrontAxle = (_d[6] & (0x03U));
  _m->KneelingCmdRearAxle = ((_d[6] >> 2) & (0x03U));
  _m->ProhibitAirSuspensionCtrl = ((_d[6] >> 4) & (0x03U));
  _m->AllowLevelCtrlDuringBrakingCmd = ((_d[6] >> 6) & (0x03U));
  _m->SpeedDependentLevelCtrlRq = (_d[7] & (0x03U));
  _m->PrhbitAutomaticAirSuspensionCtrl = ((_d[7] >> 2) & (0x03U));
  _m->MemoryLevelRq = ((_d[7] >> 4) & (0x0FU));
  _m->framecnt++;
  return ASC2_CANID;
}

uint32_t Pack_ASC2_AdasDbc(const ASC2_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < ASC2_DLC; _d[i++] = 0);

  _d[0] |= (_m->AutomaticTractionHelp & (0x03U)) | ((_m->KneelingRqLeftSide & (0x03U)) << 2) | ((_m->KneelingRqRightSide & (0x03U)) << 4) | ((_m->KneelingCtrlModeRq & (0x03U)) << 6);
  _d[1] |= (_m->NominalLevelRqFrontAxle & (0x0FU)) | ((_m->NominalLevelRqRearAxle & (0x0FU)) << 4);
  _d[2] |= (_m->LevelCtrlModeRq & (0x0FU)) | ((_m->LiftAxle1PosCmd & (0x03U)) << 4) | ((_m->LiftAxle2PosCmd & (0x03U)) << 6);
  _d[3] |= (_m->DamperStiffnessRqFrontAxle & (0xFFU));
  _d[4] |= (_m->DamperStiffnessRqRearAxle & (0xFFU));
  _d[5] |= (_m->DamperStiffnessRqLift_TagAxle & (0xFFU));
  _d[6] |= (_m->KneelingCmdFrontAxle & (0x03U)) | ((_m->KneelingCmdRearAxle & (0x03U)) << 2) | ((_m->ProhibitAirSuspensionCtrl & (0x03U)) << 4) | ((_m->AllowLevelCtrlDuringBrakingCmd & (0x03U)) << 6);
  _d[7] |= (_m->SpeedDependentLevelCtrlRq & (0x03U)) | ((_m->PrhbitAutomaticAirSuspensionCtrl & (0x03U)) << 2) | ((_m->MemoryLevelRq & (0x0FU)) << 4);
  *_len = 8; *_ide = 1;
  return ASC2_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_SSI_AdasDbc(SSI_t* _m, const uint8_t* _d)
{
  _m->PitchAngle = (((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU))) - 32000;
  _m->RollAngle = (((_d[3] & (0xFFU)) << 8) | (_d[2] & (0xFFU))) - 32000;
  _m->PitchRate = (((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU))) - 32000;
  _m->PitchAngleFigureOfMerit = (_d[6] & (0x03U));
  _m->RollAngleFigureOfMerit = ((_d[6] >> 2) & (0x03U));
  _m->PitchRateFigureOfMerit = ((_d[6] >> 4) & (0x03U));
  _m->PitchAndRollCompensated = ((_d[6] >> 6) & (0x03U));
  _m->RollAndPitchMeasurementLatency = (_d[7] & (0xFFU));
  _m->framecnt++;
  return SSI_CANID;
}

uint32_t Pack_SSI_AdasDbc(const SSI_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < SSI_DLC; _d[i++] = 0);

  _d[0] |= (_m->PitchAngle & (0xFFU));
  _d[1] |= ((_m->PitchAngle >> 8) & (0xFFU));
  _d[2] |= (_m->RollAngle & (0xFFU));
  _d[3] |= ((_m->RollAngle >> 8) & (0xFFU));
  _d[4] |= (_m->PitchRate & (0xFFU));
  _d[5] |= ((_m->PitchRate >> 8) & (0xFFU));
  _d[6] |= (_m->PitchAngleFigureOfMerit & (0x03U)) | ((_m->RollAngleFigureOfMerit & (0x03U)) << 2) | ((_m->PitchRateFigureOfMerit & (0x03U)) << 4) | ((_m->PitchAndRollCompensated & (0x03U)) << 6);
  _d[7] |= (_m->RollAndPitchMeasurementLatency & (0xFFU));
  *_len = 8; *_ide = 1;
  return SSI_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_SSI2_AdasDbc(SSI2_t* _m, const uint8_t* _d)
{
  _m->PitchAngleExRange = (((_d[2] & (0xFFU)) << 16) | ((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU))) - 8192000;
  _m->RollAngleExRange = (((_d[5] & (0xFFU)) << 16) | ((_d[4] & (0xFFU)) << 8) | (_d[3] & (0xFFU))) - 8192000;
  _m->PitchAngleExRangeCompensation = (_d[6] & (0x03U));
  _m->PitchAngleExRangeFigureOfMerit = ((_d[6] >> 2) & (0x03U));
  _m->RollAngleExRangeCompensation = ((_d[6] >> 4) & (0x03U));
  _m->RollAngleExRangeFigureOfMerit = ((_d[6] >> 6) & (0x03U));
  _m->RllAndPtchExRngMasurementLatency = (_d[7] & (0xFFU));
  _m->framecnt++;
  return SSI2_CANID;
}

uint32_t Pack_SSI2_AdasDbc(const SSI2_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < SSI2_DLC; _d[i++] = 0);

  _d[0] |= (_m->PitchAngleExRange & (0xFFU));
  _d[1] |= ((_m->PitchAngleExRange >> 8) & (0xFFU));
  _d[2] |= ((_m->PitchAngleExRange >> 16) & (0xFFU));
  _d[3] |= (_m->RollAngleExRange & (0xFFU));
  _d[4] |= ((_m->RollAngleExRange >> 8) & (0xFFU));
  _d[5] |= ((_m->RollAngleExRange >> 16) & (0xFFU));
  _d[6] |= (_m->PitchAngleExRangeCompensation & (0x03U)) | ((_m->PitchAngleExRangeFigureOfMerit & (0x03U)) << 2) | ((_m->RollAngleExRangeCompensation & (0x03U)) << 4) | ((_m->RollAngleExRangeFigureOfMerit & (0x03U)) << 6);
  _d[7] |= (_m->RllAndPtchExRngMasurementLatency & (0xFFU));
  *_len = 8; *_ide = 1;
  return SSI2_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_ARI_AdasDbc(ARI_t* _m, const uint8_t* _d)
{
  _m->PitchRateExRange = (((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU))) - 32000;
  _m->RollRateExRange = (((_d[3] & (0xFFU)) << 8) | (_d[2] & (0xFFU))) - 32000;
  _m->YawRateExRange = (((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU))) - 32000;
  _m->PitchRateExRangeFigureOfMerit = (_d[6] & (0x03U));
  _m->RollRateExRangeFigureOfMerit = ((_d[6] >> 2) & (0x03U));
  _m->YawRateExRangeFigureOfMerit = ((_d[6] >> 4) & (0x03U));
  _m->AngularRateMeasurementLatency = (_d[7] & (0xFFU));
  _m->framecnt++;
  return ARI_CANID;
}

uint32_t Pack_ARI_AdasDbc(const ARI_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < ARI_DLC; _d[i++] = 0);

  _d[0] |= (_m->PitchRateExRange & (0xFFU));
  _d[1] |= ((_m->PitchRateExRange >> 8) & (0xFFU));
  _d[2] |= (_m->RollRateExRange & (0xFFU));
  _d[3] |= ((_m->RollRateExRange >> 8) & (0xFFU));
  _d[4] |= (_m->YawRateExRange & (0xFFU));
  _d[5] |= ((_m->YawRateExRange >> 8) & (0xFFU));
  _d[6] |= (_m->PitchRateExRangeFigureOfMerit & (0x03U)) | ((_m->RollRateExRangeFigureOfMerit & (0x03U)) << 2) | ((_m->YawRateExRangeFigureOfMerit & (0x03U)) << 4);
  _d[7] |= (_m->AngularRateMeasurementLatency & (0xFFU));
  *_len = 8; *_ide = 1;
  return ARI_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_ASC5_AdasDbc(ASC5_t* _m, const uint8_t* _d)
{
  _m->DamperStiffnessFrontAxle = (_d[0] & (0xFFU));
  _m->DamperStiffnessRearAxle = (_d[1] & (0xFFU));
  _m->DamperStiffnessLift_TagAxle = (_d[2] & (0xFFU));
  _m->ElctrncShckAbsrbrCtrlMdFrontAxle = (_d[3] & (0x03U));
  _m->ElctrncShckAbsrbrCtrlMdeRearAxle = ((_d[3] >> 2) & (0x03U));
  _m->ElctrncShckAbsrbrCtrlMdLft_TgAxl = ((_d[3] >> 4) & (0x03U));
  _m->framecnt++;
  return ASC5_CANID;
}

uint32_t Pack_ASC5_AdasDbc(const ASC5_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < ASC5_DLC; _d[i++] = 0);

  _d[0] |= (_m->DamperStiffnessFrontAxle & (0xFFU));
  _d[1] |= (_m->DamperStiffnessRearAxle & (0xFFU));
  _d[2] |= (_m->DamperStiffnessLift_TagAxle & (0xFFU));
  _d[3] |= (_m->ElctrncShckAbsrbrCtrlMdFrontAxle & (0x03U)) | ((_m->ElctrncShckAbsrbrCtrlMdeRearAxle & (0x03U)) << 2) | ((_m->ElctrncShckAbsrbrCtrlMdLft_TgAxl & (0x03U)) << 4);
  *_len = 8; *_ide = 1;
  return ASC5_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_ASC1_AdasDbc(ASC1_t* _m, const uint8_t* _d)
{
  _m->NominalLevelFrontAxle = (_d[0] & (0x0FU));
  _m->NominalLevelRearAxle = ((_d[0] >> 4) & (0x0FU));
  _m->BelowNominalLevelFrontAxle = (_d[1] & (0x03U));
  _m->BelowNominalLevelRearAxle = ((_d[1] >> 2) & (0x03U));
  _m->AboveNominalLevelFrontAxle = ((_d[1] >> 4) & (0x03U));
  _m->AboveNominalLevelRearAxle = ((_d[1] >> 6) & (0x03U));
  _m->LoweringCtrlModeFrontAxle = (_d[2] & (0x03U));
  _m->LoweringCtrlModeRearAxle = ((_d[2] >> 2) & (0x03U));
  _m->LiftingCtrlModeFrontAxle = ((_d[2] >> 4) & (0x03U));
  _m->LiftingCtrlModeRearAxle = ((_d[2] >> 6) & (0x03U));
  _m->KneelingInformation = (_d[3] & (0x0FU));
  _m->LevelCtrlMode = ((_d[3] >> 4) & (0x0FU));
  _m->SecurityDevice = (_d[4] & (0x03U));
  _m->VehicleMotionInhibit = ((_d[4] >> 2) & (0x03U));
  _m->DoorRelease = ((_d[4] >> 4) & (0x03U));
  _m->LiftAxle1Pos = ((_d[4] >> 6) & (0x03U));
  _m->FrontAxleInBumperRange = (_d[5] & (0x03U));
  _m->RearAxleInBumperRange = ((_d[5] >> 2) & (0x03U));
  _m->LiftAxle2Pos = ((_d[5] >> 6) & (0x03U));
  _m->SuspensionRemoteCtrl1 = (_d[6] & (0x03U));
  _m->SuspensionRemoteCtrl2 = ((_d[6] >> 2) & (0x03U));
  _m->AllwLevelCtrlDuringBrakingStatus = ((_d[6] >> 4) & (0x03U));
  _m->SpeedDependantLevelCtrlStatus = ((_d[6] >> 6) & (0x03U));
  _m->SuspensionCtrlRefusalInformation = (_d[7] & (0x0FU));
  _m->MemoryLevel = ((_d[7] >> 4) & (0x0FU));
  _m->framecnt++;
  return ASC1_CANID;
}

uint32_t Pack_ASC1_AdasDbc(const ASC1_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < ASC1_DLC; _d[i++] = 0);

  _d[0] |= (_m->NominalLevelFrontAxle & (0x0FU)) | ((_m->NominalLevelRearAxle & (0x0FU)) << 4);
  _d[1] |= (_m->BelowNominalLevelFrontAxle & (0x03U)) | ((_m->BelowNominalLevelRearAxle & (0x03U)) << 2) | ((_m->AboveNominalLevelFrontAxle & (0x03U)) << 4) | ((_m->AboveNominalLevelRearAxle & (0x03U)) << 6);
  _d[2] |= (_m->LoweringCtrlModeFrontAxle & (0x03U)) | ((_m->LoweringCtrlModeRearAxle & (0x03U)) << 2) | ((_m->LiftingCtrlModeFrontAxle & (0x03U)) << 4) | ((_m->LiftingCtrlModeRearAxle & (0x03U)) << 6);
  _d[3] |= (_m->KneelingInformation & (0x0FU)) | ((_m->LevelCtrlMode & (0x0FU)) << 4);
  _d[4] |= (_m->SecurityDevice & (0x03U)) | ((_m->VehicleMotionInhibit & (0x03U)) << 2) | ((_m->DoorRelease & (0x03U)) << 4) | ((_m->LiftAxle1Pos & (0x03U)) << 6);
  _d[5] |= (_m->FrontAxleInBumperRange & (0x03U)) | ((_m->RearAxleInBumperRange & (0x03U)) << 2) | ((_m->LiftAxle2Pos & (0x03U)) << 6);
  _d[6] |= (_m->SuspensionRemoteCtrl1 & (0x03U)) | ((_m->SuspensionRemoteCtrl2 & (0x03U)) << 2) | ((_m->AllwLevelCtrlDuringBrakingStatus & (0x03U)) << 4) | ((_m->SpeedDependantLevelCtrlStatus & (0x03U)) << 6);
  _d[7] |= (_m->SuspensionCtrlRefusalInformation & (0x0FU)) | ((_m->MemoryLevel & (0x0FU)) << 4);
  *_len = 8; *_ide = 1;
  return ASC1_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_AGW_AdasDbc(AGW_t* _m, const uint8_t* _d)
{
  _m->AxleGroupLocation = (_d[0] & (0x0FU));
  _m->AxleGroupWeight = ((_d[2] & (0xFFU)) << 8) | (_d[1] & (0xFFU));
  _m->framecnt++;
  return AGW_CANID;
}

uint32_t Pack_AGW_AdasDbc(const AGW_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < AGW_DLC; _d[i++] = 0);

  _d[0] |= (_m->AxleGroupLocation & (0x0FU));
  _d[1] |= (_m->AxleGroupWeight & (0xFFU));
  _d[2] |= ((_m->AxleGroupWeight >> 8) & (0xFFU));
  *_len = 8; *_ide = 1;
  return AGW_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_VDC2_AdasDbc(VDC2_t* _m, const uint8_t* _d)
{
  _m->SteerWheelAngle = (((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU))) - 32126;
  _m->SteerWheelTurnCounter = ((_d[2] & (0x3FU))) - 32;
  _m->SteerWheelAngleSensorType = ((_d[2] >> 6) & (0x03U));
  _m->YawRate = (((_d[4] & (0xFFU)) << 8) | (_d[3] & (0xFFU))) - 32112;
  _m->LateralAcceleration = (((_d[6] & (0xFFU)) << 8) | (_d[5] & (0xFFU))) - 32126;
  _m->LongitudinalAcceleration = ((_d[7] & (0xFFU))) - 125;
  _m->framecnt++;
  return VDC2_CANID;
}

uint32_t Pack_VDC2_AdasDbc(const VDC2_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < VDC2_DLC; _d[i++] = 0);

  _d[0] |= (_m->SteerWheelAngle & (0xFFU));
  _d[1] |= ((_m->SteerWheelAngle >> 8) & (0xFFU));
  _d[2] |= (_m->SteerWheelTurnCounter & (0x3FU)) | ((_m->SteerWheelAngleSensorType & (0x03U)) << 6);
  _d[3] |= (_m->YawRate & (0xFFU));
  _d[4] |= ((_m->YawRate >> 8) & (0xFFU));
  _d[5] |= (_m->LateralAcceleration & (0xFFU));
  _d[6] |= ((_m->LateralAcceleration >> 8) & (0xFFU));
  _d[7] |= (_m->LongitudinalAcceleration & (0xFFU));
  *_len = 8; *_ide = 1;
  return VDC2_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_SAS_AdasDbc(SAS_t* _m, const uint8_t* _d)
{
  _m->SteerWheelAngle = (((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU))) - 32126;
  _m->SteerWheelAngleRangeCounter = ((_d[2] & (0x3FU))) - 32;
  _m->SteerWheelAngleRangeCounterType = ((_d[2] >> 6) & (0x03U));
  _m->SteerWheelAngleRange = (((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU))) - 32126;
  _m->SteerAngleSensorActiveMode = (_d[6] & (0x03U));
  _m->SteerAngleSensorCalibrated = ((_d[6] >> 2) & (0x03U));
  _m->MessageCounter = (_d[7] & (0x0FU));
  _m->MessageChecksum = ((_d[7] >> 4) & (0x0FU));
  _m->framecnt++;
  return SAS_CANID;
}

uint32_t Pack_SAS_AdasDbc(const SAS_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < SAS_DLC; _d[i++] = 0);

  _d[0] |= (_m->SteerWheelAngle & (0xFFU));
  _d[1] |= ((_m->SteerWheelAngle >> 8) & (0xFFU));
  _d[2] |= (_m->SteerWheelAngleRangeCounter & (0x3FU)) | ((_m->SteerWheelAngleRangeCounterType & (0x03U)) << 6);
  _d[4] |= (_m->SteerWheelAngleRange & (0xFFU));
  _d[5] |= ((_m->SteerWheelAngleRange >> 8) & (0xFFU));
  _d[6] |= (_m->SteerAngleSensorActiveMode & (0x03U)) | ((_m->SteerAngleSensorCalibrated & (0x03U)) << 2);
  _d[7] |= (_m->MessageCounter & (0x0FU)) | ((_m->MessageChecksum & (0x0FU)) << 4);
  *_len = 8; *_ide = 1;
  return SAS_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_ASC4_AdasDbc(ASC4_t* _m, const uint8_t* _d)
{
  _m->BellowPressFrontAxleLeft = ((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU));
  _m->BellowPressFrontAxleRight = ((_d[3] & (0xFFU)) << 8) | (_d[2] & (0xFFU));
  _m->BellowPressRearAxleLeft = ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->BellowPressRearAxleRight = ((_d[7] & (0xFFU)) << 8) | (_d[6] & (0xFFU));
  _m->framecnt++;
  return ASC4_CANID;
}

uint32_t Pack_ASC4_AdasDbc(const ASC4_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < ASC4_DLC; _d[i++] = 0);

  _d[0] |= (_m->BellowPressFrontAxleLeft & (0xFFU));
  _d[1] |= ((_m->BellowPressFrontAxleLeft >> 8) & (0xFFU));
  _d[2] |= (_m->BellowPressFrontAxleRight & (0xFFU));
  _d[3] |= ((_m->BellowPressFrontAxleRight >> 8) & (0xFFU));
  _d[4] |= (_m->BellowPressRearAxleLeft & (0xFFU));
  _d[5] |= ((_m->BellowPressRearAxleLeft >> 8) & (0xFFU));
  _d[6] |= (_m->BellowPressRearAxleRight & (0xFFU));
  _d[7] |= ((_m->BellowPressRearAxleRight >> 8) & (0xFFU));
  *_len = 8; *_ide = 1;
  return ASC4_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_ASC3_AdasDbc(ASC3_t* _m, const uint8_t* _d)
{
  _m->RelativeLevelFrontAxleLeft = (((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU))) - 32000;
  _m->RelativeLevelFrontAxleRight = (((_d[3] & (0xFFU)) << 8) | (_d[2] & (0xFFU))) - 32000;
  _m->RelativeLevelRearAxleLeft = (((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU))) - 32000;
  _m->RelativeLevelRearAxleRight = (((_d[7] & (0xFFU)) << 8) | (_d[6] & (0xFFU))) - 32000;
  _m->framecnt++;
  return ASC3_CANID;
}

uint32_t Pack_ASC3_AdasDbc(const ASC3_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < ASC3_DLC; _d[i++] = 0);

  _d[0] |= (_m->RelativeLevelFrontAxleLeft & (0xFFU));
  _d[1] |= ((_m->RelativeLevelFrontAxleLeft >> 8) & (0xFFU));
  _d[2] |= (_m->RelativeLevelFrontAxleRight & (0xFFU));
  _d[3] |= ((_m->RelativeLevelFrontAxleRight >> 8) & (0xFFU));
  _d[4] |= (_m->RelativeLevelRearAxleLeft & (0xFFU));
  _d[5] |= ((_m->RelativeLevelRearAxleLeft >> 8) & (0xFFU));
  _d[6] |= (_m->RelativeLevelRearAxleRight & (0xFFU));
  _d[7] |= ((_m->RelativeLevelRearAxleRight >> 8) & (0xFFU));
  *_len = 8; *_ide = 1;
  return ASC3_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_RGE22_AdasDbc(RGE22_t* _m, const uint8_t* _d)
{
  _m->RelVehBodyLevelFrontAxle = (((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU))) - 32000;
  _m->RelVehBodyLevelRearAxle = ((_d[3] & (0xFFU)) << 8) | (_d[2] & (0xFFU));
  _m->framecnt++;
  return RGE22_CANID;
}

uint32_t Pack_RGE22_AdasDbc(const RGE22_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < RGE22_DLC; _d[i++] = 0);

  _d[0] |= (_m->RelVehBodyLevelFrontAxle & (0xFFU));
  _d[1] |= ((_m->RelVehBodyLevelFrontAxle >> 8) & (0xFFU));
  _d[2] |= (_m->RelVehBodyLevelRearAxle & (0xFFU));
  _d[3] |= ((_m->RelVehBodyLevelRearAxle >> 8) & (0xFFU));
  *_len = 8; *_ide = 1;
  return RGE22_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_GPM16_AdasDbc(GPM16_t* _m, const uint8_t* _d)
{
  _m->AmbientAirTemperature = (((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU))) - 8736;
  _m->framecnt++;
  return GPM16_CANID;
}

uint32_t Pack_GPM16_AdasDbc(const GPM16_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < GPM16_DLC; _d[i++] = 0);

  _d[0] |= (_m->AmbientAirTemperature & (0xFFU));
  _d[1] |= ((_m->AmbientAirTemperature >> 8) & (0xFFU));
  *_len = 8; *_ide = 1;
  return GPM16_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_VDHR_AdasDbc(VDHR_t* _m, const uint8_t* _d)
{
  _m->HghRsolutionTotalVehicleDistance = ((_d[3] & (0xFFU)) << 24) | ((_d[2] & (0xFFU)) << 16) | ((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU));
  _m->HighResolutionTripDistance = ((_d[7] & (0xFFU)) << 24) | ((_d[6] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->framecnt++;
  return VDHR_CANID;
}

uint32_t Pack_VDHR_AdasDbc(const VDHR_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < VDHR_DLC; _d[i++] = 0);

  _d[0] |= (_m->HghRsolutionTotalVehicleDistance & (0xFFU));
  _d[1] |= ((_m->HghRsolutionTotalVehicleDistance >> 8) & (0xFFU));
  _d[2] |= ((_m->HghRsolutionTotalVehicleDistance >> 16) & (0xFFU));
  _d[3] |= ((_m->HghRsolutionTotalVehicleDistance >> 24) & (0xFFU));
  _d[4] |= (_m->HighResolutionTripDistance & (0xFFU));
  _d[5] |= ((_m->HighResolutionTripDistance >> 8) & (0xFFU));
  _d[6] |= ((_m->HighResolutionTripDistance >> 16) & (0xFFU));
  _d[7] |= ((_m->HighResolutionTripDistance >> 24) & (0xFFU));
  *_len = 8; *_ide = 1;
  return VDHR_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_VD_AdasDbc(VD_t* _m, const uint8_t* _d)
{
  _m->TripDistance = ((_d[3] & (0xFFU)) << 24) | ((_d[2] & (0xFFU)) << 16) | ((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU));
  _m->TotalVehicleDistance = ((_d[7] & (0xFFU)) << 24) | ((_d[6] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->framecnt++;
  return VD_CANID;
}

uint32_t Pack_VD_AdasDbc(const VD_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < VD_DLC; _d[i++] = 0);

  _d[0] |= (_m->TripDistance & (0xFFU));
  _d[1] |= ((_m->TripDistance >> 8) & (0xFFU));
  _d[2] |= ((_m->TripDistance >> 16) & (0xFFU));
  _d[3] |= ((_m->TripDistance >> 24) & (0xFFU));
  _d[4] |= (_m->TotalVehicleDistance & (0xFFU));
  _d[5] |= ((_m->TotalVehicleDistance >> 8) & (0xFFU));
  _d[6] |= ((_m->TotalVehicleDistance >> 16) & (0xFFU));
  _d[7] |= ((_m->TotalVehicleDistance >> 24) & (0xFFU));
  *_len = 8; *_ide = 1;
  return VD_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_VP_AdasDbc(VP_t* _m, const uint8_t* _d)
{
  _m->Latitude = (((_d[3] & (0xFFU)) << 24) | ((_d[2] & (0xFFU)) << 16) | ((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU))) - 2100000000;
  _m->Longitude = (((_d[7] & (0xFFU)) << 24) | ((_d[6] & (0xFFU)) << 16) | ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU))) - 2100000000;
  _m->framecnt++;
  return VP_CANID;
}

uint32_t Pack_VP_AdasDbc(const VP_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < VP_DLC; _d[i++] = 0);

  _d[0] |= (_m->Latitude & (0xFFU));
  _d[1] |= ((_m->Latitude >> 8) & (0xFFU));
  _d[2] |= ((_m->Latitude >> 16) & (0xFFU));
  _d[3] |= ((_m->Latitude >> 24) & (0xFFU));
  _d[4] |= (_m->Longitude & (0xFFU));
  _d[5] |= ((_m->Longitude >> 8) & (0xFFU));
  _d[6] |= ((_m->Longitude >> 16) & (0xFFU));
  _d[7] |= ((_m->Longitude >> 24) & (0xFFU));
  *_len = 8; *_ide = 1;
  return VP_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_AGCW_AdasDbc(AGCW_t* _m, const uint8_t* _d)
{
  _m->AxleGroupLocation = (_d[0] & (0x0FU));
  _m->AxleGroupEmptyWeightCalib = ((_d[2] & (0xFFU)) << 8) | (_d[1] & (0xFFU));
  _m->AxleGroupFullWeightCalib = ((_d[4] & (0xFFU)) << 8) | (_d[3] & (0xFFU));
  _m->framecnt++;
  return AGCW_CANID;
}

uint32_t Pack_AGCW_AdasDbc(const AGCW_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < AGCW_DLC; _d[i++] = 0);

  _d[0] |= (_m->AxleGroupLocation & (0x0FU));
  _d[1] |= (_m->AxleGroupEmptyWeightCalib & (0xFFU));
  _d[2] |= ((_m->AxleGroupEmptyWeightCalib >> 8) & (0xFFU));
  _d[3] |= (_m->AxleGroupFullWeightCalib & (0xFFU));
  _d[4] |= ((_m->AxleGroupFullWeightCalib >> 8) & (0xFFU));
  *_len = 8; *_ide = 1;
  return AGCW_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_TP1_AdasDbc(TP1_t* _m, const uint8_t* _d)
{
  _m->TirePressCheckInterval = (_d[0] & (0xFFU));
  _m->SteerChannelMode = (_d[1] & (0x0FU));
  _m->Trailer_tagChannelMode = (_d[2] & (0x0FU));
  _m->DriveChannelMode = ((_d[2] >> 4) & (0x0FU));
  _m->PCUDriveSolenoidStatus = (_d[3] & (0x03U));
  _m->PCUSteerSolenoidStatus = ((_d[3] >> 2) & (0x03U));
  _m->TirePressSupplySwitchStatus = ((_d[3] >> 4) & (0x03U));
  _m->PCUDeflateSolenoidStatus = (_d[4] & (0x03U));
  _m->PCUCtrlSolenoidStatus = ((_d[4] >> 2) & (0x03U));
  _m->PCUSupplySolenoidStatus = ((_d[4] >> 4) & (0x03U));
  _m->PCUTrilerTagOrPushSolenoidStatus = ((_d[4] >> 6) & (0x03U));
  _m->framecnt++;
  return TP1_CANID;
}

uint32_t Pack_TP1_AdasDbc(const TP1_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < TP1_DLC; _d[i++] = 0);

  _d[0] |= (_m->TirePressCheckInterval & (0xFFU));
  _d[1] |= (_m->SteerChannelMode & (0x0FU));
  _d[2] |= (_m->Trailer_tagChannelMode & (0x0FU)) | ((_m->DriveChannelMode & (0x0FU)) << 4);
  _d[3] |= (_m->PCUDriveSolenoidStatus & (0x03U)) | ((_m->PCUSteerSolenoidStatus & (0x03U)) << 2) | ((_m->TirePressSupplySwitchStatus & (0x03U)) << 4);
  _d[4] |= (_m->PCUDeflateSolenoidStatus & (0x03U)) | ((_m->PCUCtrlSolenoidStatus & (0x03U)) << 2) | ((_m->PCUSupplySolenoidStatus & (0x03U)) << 4) | ((_m->PCUTrilerTagOrPushSolenoidStatus & (0x03U)) << 6);
  *_len = 8; *_ide = 1;
  return TP1_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_TP2_AdasDbc(TP2_t* _m, const uint8_t* _d)
{
  _m->TrlrTgOrPshChnnelTirePressTarget = ((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU));
  _m->DriveChannelTirePressTarget = ((_d[3] & (0xFFU)) << 8) | (_d[2] & (0xFFU));
  _m->SteerChannelTirePressTarget = ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->framecnt++;
  return TP2_CANID;
}

uint32_t Pack_TP2_AdasDbc(const TP2_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < TP2_DLC; _d[i++] = 0);

  _d[0] |= (_m->TrlrTgOrPshChnnelTirePressTarget & (0xFFU));
  _d[1] |= ((_m->TrlrTgOrPshChnnelTirePressTarget >> 8) & (0xFFU));
  _d[2] |= (_m->DriveChannelTirePressTarget & (0xFFU));
  _d[3] |= ((_m->DriveChannelTirePressTarget >> 8) & (0xFFU));
  _d[4] |= (_m->SteerChannelTirePressTarget & (0xFFU));
  _d[5] |= ((_m->SteerChannelTirePressTarget >> 8) & (0xFFU));
  *_len = 8; *_ide = 1;
  return TP2_CANID;
}

// --------------------------------------------------------------------------
uint32_t Unpack_TP3_AdasDbc(TP3_t* _m, const uint8_t* _d)
{
  _m->TrailerTagOrPushChannelTirePress = ((_d[1] & (0xFFU)) << 8) | (_d[0] & (0xFFU));
  _m->DriveChannelTirePress = ((_d[3] & (0xFFU)) << 8) | (_d[2] & (0xFFU));
  _m->SteerChannelTirePress = ((_d[5] & (0xFFU)) << 8) | (_d[4] & (0xFFU));
  _m->framecnt++;
  return TP3_CANID;
}

uint32_t Pack_TP3_AdasDbc(const TP3_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide)
{
  uint8_t i; for (i = 0; i < TP3_DLC; _d[i++] = 0);

  _d[0] |= (_m->TrailerTagOrPushChannelTirePress & (0xFFU));
  _d[1] |= ((_m->TrailerTagOrPushChannelTirePress >> 8) & (0xFFU));
  _d[2] |= (_m->DriveChannelTirePress & (0xFFU));
  _d[3] |= ((_m->DriveChannelTirePress >> 8) & (0xFFU));
  _d[4] |= (_m->SteerChannelTirePress & (0xFFU));
  _d[5] |= ((_m->SteerChannelTirePress >> 8) & (0xFFU));
  *_len = 8; *_ide = 1;
  return TP3_CANID;
}

