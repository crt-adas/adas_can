
// this file were genereted by coderdbc.com web service
// any questions - mailto:coderdbc@gmail.com

#pragma once


#ifdef __cplusplus
extern "C" {
#endif

#include "PCANEXT.h"

// @dbccodeconf.h file should be placed in inc folder. If the user wants
// to allocate big DBC struct inside the driver - appropriate define (__DEF_xxxxx__)
// should be placed in this file

typedef struct
{
  Out_IO_t Out_IO;                                           // TX [Vector__XXX].RX [Vector__XXX ].
  Out_PowerOff_t Out_PowerOff;                               // TX [Vector__XXX].RX [Vector__XXX ].
  Out_Gyro_t Out_Gyro;                                       // TX [Vector__XXX].RX [Vector__XXX ].
  Out_BMC_AccScale_t Out_BMC_AccScale;                       // TX [Vector__XXX].RX [Vector__XXX ].
  Out_SaveConfig_t Out_SaveConfig;                           // TX [Vector__XXX].RX [Vector__XXX ].
  Out_RTC_SetTime_t Out_RTC_SetTime;                         // TX [Vector__XXX].RX [Vector__XXX ].
  Out_RTC_TimeFromGPS_t Out_RTC_TimeFromGPS;                 // TX [Vector__XXX].RX [Vector__XXX ].
  Out_Acc_FastCalibration_t Out_Acc_FastCalibration;         // TX [Vector__XXX].RX [].
  Arrive_And_Go_Position_t Arrive_And_Go_Position;           // TX [Vector__XXX].RX [Vector__XXX ].
  Arrive_And_Go_Verification_t Arrive_And_Go_Verification;   // TX [Vector__XXX].RX [Vector__XXX ].
  BMC_Acceleration_t BMC_Acceleration;                       // TX [Vector__XXX].RX [Vector__XXX ].
  BMC_MagneticField_t BMC_MagneticField;                     // TX [Vector__XXX].RX [Vector__XXX ].
  L3GD20_Rotation_A_t L3GD20_Rotation_A;                     // TX [Vector__XXX].RX [Vector__XXX ].
  L3GD20_Rotation_B_t L3GD20_Rotation_B;                     // TX [Vector__XXX].RX [Vector__XXX ].
  GPS_Status_t GPS_Status;                                   // TX [Vector__XXX].RX [Vector__XXX ].
  GPS_CourseSpeed_t GPS_CourseSpeed;                         // TX [Vector__XXX].RX [Vector__XXX ].
  GPS_PositionLongitude_t GPS_PositionLongitude;             // TX [Vector__XXX].RX [Vector__XXX ].
  GPS_PositionLatitude_t GPS_PositionLatitude;               // TX [Vector__XXX].RX [Vector__XXX ].
  GPS_PositionAltitude_t GPS_PositionAltitude;               // TX [Vector__XXX].RX [Vector__XXX ].
  GPS_Delusions_A_t GPS_Delusions_A;                         // TX [Vector__XXX].RX [Vector__XXX ].
  GPS_Delusions_B_t GPS_Delusions_B;                         // TX [Vector__XXX].RX [Vector__XXX ].
  GPS_DateTime_t GPS_DateTime;                               // TX [Vector__XXX].RX [Vector__XXX ].
  IO_t IO;                                                   // TX [Vector__XXX].RX [Vector__XXX ].
  RTC_DateTime_t RTC_DateTime;                               // TX [Vector__XXX].RX [Vector__XXX ].
  Arrive_And_Go_BusStop1_t Arrive_And_Go_BusStop1;           // TX [Vector__XXX].RX [Vector__XXX ].
  Arrive_And_Go_BusStop2_t Arrive_And_Go_BusStop2;           // TX [Vector__XXX].RX [Vector__XXX ].
  Arrive_And_Go_BusStop3_t Arrive_And_Go_BusStop3;           // TX [Vector__XXX].RX [Vector__XXX ].
  Arrive_And_Go_BusStop4_t Arrive_And_Go_BusStop4;           // TX [Vector__XXX].RX [Vector__XXX ].
  Arrive_And_Go_BusStop5_t Arrive_And_Go_BusStop5;           // TX [Vector__XXX].RX [Vector__XXX ].
  Arrive_And_Go_BusStop6_t Arrive_And_Go_BusStop6;           // TX [Vector__XXX].RX [Vector__XXX ].
  Arrive_And_Go_BusStop7_t Arrive_And_Go_BusStop7;           // TX [Vector__XXX].RX [Vector__XXX ].
  Arrive_And_Go_BusStop8_t Arrive_And_Go_BusStop8;           // TX [Vector__XXX].RX [Vector__XXX ].
  Arrive_And_Go_BusStop9_t Arrive_And_Go_BusStop9;           // TX [Vector__XXX].RX [Vector__XXX ].
  Arrive_And_Go_BusStop10_t Arrive_And_Go_BusStop10;         // TX [Vector__XXX].RX [Vector__XXX ].
  Arrive_And_Go_BusStop11_t Arrive_And_Go_BusStop11;         // TX [Vector__XXX].RX [Vector__XXX ].
  Arrive_And_Go_BusStop12_t Arrive_And_Go_BusStop12;         // TX [Vector__XXX].RX [Vector__XXX ].
  Arrive_And_Go_BusStop13_t Arrive_And_Go_BusStop13;         // TX [Vector__XXX].RX [Vector__XXX ].
  Arrive_And_Go_BusStop14_t Arrive_And_Go_BusStop14;         // TX [Vector__XXX].RX [Vector__XXX ].
  Arrive_And_Go_BusStop15_t Arrive_And_Go_BusStop15;         // TX [Vector__XXX].RX [Vector__XXX ].
  Arrive_And_Go_BusStop16_t Arrive_And_Go_BusStop16;         // TX [Vector__XXX].RX [Vector__XXX ].
} PCANEXT_rx_t;

// There is no any message detected with tx direction.

uint32_t PCANEXT_Receive(PCANEXT_rx_t* _m, const uint8_t* _d, uint32_t _id);


// define @__DEF_PCANEXT__ in the @dbccodeconf.h file for allocation in utility source code.
#ifdef __DEF_PCANEXT__

extern PCANEXT_rx_t PCANEXT_rx;

#endif


#ifdef __cplusplus
}
#endif

