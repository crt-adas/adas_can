
// this file were genereted by coderdbc.com web service
// any questions - mailto:coderdbc@gmail.com

#pragma once


#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

// def @Out_IO CAN Message (1616)
#define Out_IO_IDE (0U)
#define Out_IO_DLC (1U)
#define Out_IO_CANID (0x650U)
typedef struct
{

  // 0 - "Off" 
  // 1 - "On" 

  uint8_t Dout_Set;                      //      Bits=01.  [ 0     , 1      ]  Unit:''     

  // 0 - "Off" 
  // 1 - "On" 

  uint8_t GPS_SetPower;                  //      Bits=01.  [ 0     , 1      ]  Unit:''     
  uint32_t framecnt;
} Out_IO_t;

// def @Out_PowerOff CAN Message (1617)
#define Out_PowerOff_IDE (0U)
#define Out_PowerOff_DLC (1U)
#define Out_PowerOff_CANID (0x651U)
typedef struct
{

  // 0 - "False" 
  // 1 - "True" 

  uint8_t Device_PowerOff;               //      Bits=01.  [ 0     , 1      ]  Unit:''     
  uint32_t framecnt;
} Out_PowerOff_t;

// def @Out_Gyro CAN Message (1618)
#define Out_Gyro_IDE (0U)
#define Out_Gyro_DLC (1U)
#define Out_Gyro_CANID (0x652U)
typedef struct
{

  // 0 - "?250 ?/s" 
  // 1 - "?500 ?/s" 
  // 2 - "?2000 ?/s" 
  // 3 - "?2000 ?/s" 

  uint8_t Gyro_SetScale;                 //      Bits=02.  [ 0     , 3      ]  Unit:'?/s'  
  uint32_t framecnt;
} Out_Gyro_t;

// def @Out_BMC_AccScale CAN Message (1619)
#define Out_BMC_AccScale_IDE (0U)
#define Out_BMC_AccScale_DLC (1U)
#define Out_BMC_AccScale_CANID (0x653U)
typedef struct
{

  // 1 - "?2 G" 
  // 2 - "?4 G" 
  // 3 - "?8 G" 
  // 4 - "?16 G" 

  uint8_t Acc_SetScale;                  //      Bits=03.  [ 0     , 7      ]  Unit:''     
  uint32_t framecnt;
} Out_BMC_AccScale_t;

// def @Out_SaveConfig CAN Message (1620)
#define Out_SaveConfig_IDE (0U)
#define Out_SaveConfig_DLC (1U)
#define Out_SaveConfig_CANID (0x654U)
typedef struct
{

  // Saves sensor ranges and calibration targets to EERPOM to restore them after startup
  // 0 - "False" 
  // 1 - "True" 

  uint8_t Config_SaveToEEPROM;           //      Bits=01.  [ 0     , 1      ]  Unit:''     
  uint32_t framecnt;
} Out_SaveConfig_t;

// def @Out_RTC_SetTime CAN Message (1621)
#define Out_RTC_SetTime_IDE (0U)
#define Out_RTC_SetTime_DLC (8U)
#define Out_RTC_SetTime_CANID (0x655U)
typedef struct
{

  uint8_t RTC_SetSec;                    //      Bits=08.  [ 0     , 59     ]  Unit:''     

  uint8_t RTC_SetMin;                    //      Bits=08.  [ 0     , 59     ]  Unit:''     

  uint8_t RTC_SetHour;                   //      Bits=08.  [ 0     , 23     ]  Unit:''     

  // 0 - "Monday" 
  // 1 - "Tuesday" 
  // 2 - "Wednesday" 
  // 3 - "Thursday" 
  // 4 - "Friday" 
  // 5 - "Saturday" 
  // 6 - "Sunday" 

  uint8_t RTC_SetDayOfWeek;              //      Bits=08.  [ 0     , 6      ]  Unit:''     

  uint8_t RTC_SetDayOfMonth;             //      Bits=08.  [ 1     , 31     ]  Unit:''     

  // 1 - "January" 
  // 2 - "February" 
  // 3 - "March" 
  // 4 - "April" 
  // 5 - "May" 
  // 6 - "June" 
  // 7 - "July" 
  // 8 - "August" 
  // 9 - "September" 
  // 10 - "October" 
  // 11 - "November" 
  // 12 - "December" 

  uint8_t RTC_SetMonth;                  //      Bits=08.  [ 1     , 12     ]  Unit:''     

  uint16_t RTC_SetYear;                  //      Bits=16.  [ 1900  , 2099   ]  Unit:''     
  uint32_t framecnt;
} Out_RTC_SetTime_t;

// def @Out_RTC_TimeFromGPS CAN Message (1622)
#define Out_RTC_TimeFromGPS_IDE (0U)
#define Out_RTC_TimeFromGPS_DLC (1U)
#define Out_RTC_TimeFromGPS_CANID (0x656U)
typedef struct
{

  // Note: GPS time does not know the day of week!
  // 0 - "False" 
  // 1 - "True" 

  uint8_t RTC_SetTimeFromGPS;            //      Bits=01.  [ 0     , 1      ]  Unit:''     
  uint32_t framecnt;
} Out_RTC_TimeFromGPS_t;

// def @Out_Acc_FastCalibration CAN Message (1623)
#define Out_Acc_FastCalibration_IDE (0U)
#define Out_Acc_FastCalibration_DLC (4U)
#define Out_Acc_FastCalibration_CANID (0x657U)
typedef struct
{

  uint8_t Acc_SetCalibTarget_X;          //      Bits=02.  [ 0     , 3      ]  Unit:''     

  uint8_t Acc_SetCalibTarget_Y;          //      Bits=02.  [ 0     , 3      ]  Unit:''     

  uint8_t Acc_SetCalibTarget_Z;          //      Bits=02.  [ 0     , 3      ]  Unit:''     

  uint8_t Acc_StartFastCalib;            //      Bits=01.  [ 0     , 1      ]  Unit:''     
  uint32_t framecnt;
} Out_Acc_FastCalibration_t;

// def @Arrive_And_Go_Position CAN Message (419361790)
#define Arrive_And_Go_Position_IDE (1U)
#define Arrive_And_Go_Position_DLC (8U)
#define Arrive_And_Go_Position_CANID (0x18FEF3FEU)
typedef struct
{

  uint32_t AAG_Longitude;                //      Bits=32.  [ 0     , 0      ]  Unit:''     

  uint32_t AAG_Latitude;                 //      Bits=32.  [ 0     , 0      ]  Unit:''     
  uint32_t framecnt;
} Arrive_And_Go_Position_t;

// def @Arrive_And_Go_Verification CAN Message (419362302)
#define Arrive_And_Go_Verification_IDE (1U)
#define Arrive_And_Go_Verification_DLC (4U)
#define Arrive_And_Go_Verification_CANID (0x18FEF5FEU)
typedef struct
{

  uint8_t AAG_StartStop_Demand;          //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SS_BusStopNo_Demanding;    //      Bits=08.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCapsCharge_Demand;    //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SC_BusStopNo_Demanding;    //      Bits=08.  [ 0     , 0      ]  Unit:''     
  uint32_t framecnt;
} Arrive_And_Go_Verification_t;

// def @BMC_Acceleration CAN Message (419409948)
#define BMC_Acceleration_IDE (1U)
#define BMC_Acceleration_DLC (8U)
#define BMC_Acceleration_CANID (0x18FFB01CU)
// signal: @Acceleration_X
#define Acceleration_X_CovFactor 3.91
#define Acceleration_X_CovS(x) ((int16_t)((x / 3.91)))
// signal: @Acceleration_Y
#define Acceleration_Y_CovFactor 3.91
#define Acceleration_Y_CovS(x) ((int16_t)((x / 3.91)))
// signal: @Acceleration_Z
#define Acceleration_Z_CovFactor 3.91
#define Acceleration_Z_CovS(x) ((int16_t)((x / 3.91)))
// signal: @Temperature
#define Temperature_CovFactor 0.5
#define Temperature_CovS(x) ((int8_t)((x / 0.5) - 48))
typedef struct
{

  int16_t Acceleration_X;                //  [-] Bits=16.  [ -20000, 20000  ]  Unit:'mG'    Factor= 3.91  

  int16_t Acceleration_Y;                //  [-] Bits=16.  [ -20000, 20000  ]  Unit:'mG'    Factor= 3.91  

  int16_t Acceleration_Z;                //  [-] Bits=16.  [ -20000, 20000  ]  Unit:'mG'    Factor= 3.91  

  int8_t Temperature;                    //  [-] Bits=08.  [ -40   , 87.5   ]  Unit:'?C'    Offset= 24        Factor= 0.5   

  // 0 - "undefined" 
  // 1 - "X Axis" 
  // 2 - "Y Axis" 
  // 3 - "Z Axis" 

  uint8_t VerticalAxis;                  //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // 0 - "flat" 
  // 1 - "flat upside down" 
  // 2 - "landscape left" 
  // 3 - "landscape right" 
  // 4 - "portrait" 
  // 5 - "portrait upside down" 

  uint8_t Orientation;                   //      Bits=03.  [ 0     , 7      ]  Unit:''     
  uint32_t framecnt;
} BMC_Acceleration_t;

// def @BMC_MagneticField CAN Message (419410204)
#define BMC_MagneticField_IDE (1U)
#define BMC_MagneticField_DLC (6U)
#define BMC_MagneticField_CANID (0x18FFB11CU)
// signal: @MagneticField_X
#define MagneticField_X_CovFactor 0.3
#define MagneticField_X_CovS(x) ((int16_t)((x / 0.3)))
// signal: @MagneticField_Y
#define MagneticField_Y_CovFactor 0.3
#define MagneticField_Y_CovS(x) ((int16_t)((x / 0.3)))
// signal: @MagneticField_Z
#define MagneticField_Z_CovFactor 0.3
#define MagneticField_Z_CovS(x) ((int16_t)((x / 0.3)))
typedef struct
{

  int16_t MagneticField_X;               //  [-] Bits=16.  [ -9830.4, 9830.1 ]  Unit:'?T'    Factor= 0.3   

  int16_t MagneticField_Y;               //  [-] Bits=16.  [ -9830.4, 9830.1 ]  Unit:'?T'    Factor= 0.3   

  int16_t MagneticField_Z;               //  [-] Bits=16.  [ -9830.4, 9830.1 ]  Unit:'?T'    Factor= 0.3   
  uint32_t framecnt;
} BMC_MagneticField_t;

// def @L3GD20_Rotation_A CAN Message (419410460)
#define L3GD20_Rotation_A_IDE (1U)
#define L3GD20_Rotation_A_DLC (8U)
#define L3GD20_Rotation_A_CANID (0x18FFB21CU)
typedef struct
{

  int32_t Rotation_X;                    //  [-] Bits=32.  [ -4000 , 4000   ]  Unit:'?/s'  

  int32_t Rotation_Y;                    //  [-] Bits=32.  [ -4000 , 4000   ]  Unit:'?/s'  
  uint32_t framecnt;
} L3GD20_Rotation_A_t;

// def @L3GD20_Rotation_B CAN Message (419410716)
#define L3GD20_Rotation_B_IDE (1U)
#define L3GD20_Rotation_B_DLC (4U)
#define L3GD20_Rotation_B_CANID (0x18FFB31CU)
typedef struct
{

  int32_t Rotation_Z;                    //  [-] Bits=32.  [ -4000 , 4000   ]  Unit:'?/s'  
  uint32_t framecnt;
} L3GD20_Rotation_B_t;

// def @GPS_Status CAN Message (419410972)
#define GPS_Status_IDE (1U)
#define GPS_Status_DLC (3U)
#define GPS_Status_CANID (0x18FFB41CU)
typedef struct
{

  // 0 - "INIT" 
  // 1 - "DONTKNOW" 
  // 2 - "OK" 
  // 3 - "SHORT" 
  // 4 - "OPEN" 

  uint8_t GPS_AntennaStatus;             //      Bits=08.  [ 0     , 255    ]  Unit:''     

  uint8_t GPS_NumSatellites;             //      Bits=08.  [ 0     , 255    ]  Unit:''     

  // 0 - "INIT" 
  // 1 - "NONE" 
  // 2 - "2D" 
  // 3 - "3D" 

  uint8_t GPS_NavigationMethod;          //      Bits=08.  [ 0     , 255    ]  Unit:''     
  uint32_t framecnt;
} GPS_Status_t;

// def @GPS_CourseSpeed CAN Message (419411228)
#define GPS_CourseSpeed_IDE (1U)
#define GPS_CourseSpeed_DLC (8U)
#define GPS_CourseSpeed_CANID (0x18FFB51CU)
typedef struct
{

  int32_t GPS_Course;                    //  [-] Bits=32.  [ -340000000000000000000000000000000000000, 340000000000000000000000000000000000000 ]  Unit:'?'    

  int32_t GPS_Speed;                     //  [-] Bits=32.  [ -340000000000000000000000000000000000000, 340000000000000000000000000000000000000 ]  Unit:'km/h' 
  uint32_t framecnt;
} GPS_CourseSpeed_t;

// def @GPS_PositionLongitude CAN Message (419411484)
#define GPS_PositionLongitude_IDE (1U)
#define GPS_PositionLongitude_DLC (7U)
#define GPS_PositionLongitude_CANID (0x18FFB61CU)
typedef struct
{

  int32_t GPS_Longitude_Minutes;         //  [-] Bits=32.  [ -340000000000000000000000000000000000000, 340000000000000000000000000000000000000 ]  Unit:'''    

  uint16_t GPS_Longitude_Degree;         //      Bits=16.  [ 0     , 359    ]  Unit:'?'    

  // 0 - "INIT" 
  // 69 - "East" 
  // 78 - "North" 
  // 83 - "South" 
  // 87 - "West" 

  uint8_t GPS_IndicatorEW;               //      Bits=08.  [ 0     , 255    ]  Unit:''     
  uint32_t framecnt;
} GPS_PositionLongitude_t;

// def @GPS_PositionLatitude CAN Message (419411740)
#define GPS_PositionLatitude_IDE (1U)
#define GPS_PositionLatitude_DLC (7U)
#define GPS_PositionLatitude_CANID (0x18FFB71CU)
typedef struct
{

  int32_t GPS_Latitude_Minutes;          //  [-] Bits=32.  [ -340000000000000000000000000000000000000, 340000000000000000000000000000000000000 ]  Unit:'''    

  uint16_t GPS_Latitude_Degree;          //      Bits=16.  [ 0     , 359    ]  Unit:'?'    

  // 0 - "INIT" 
  // 69 - "East" 
  // 78 - "North" 
  // 83 - "South" 
  // 87 - "West" 

  uint8_t GPS_IndicatorNS;               //      Bits=08.  [ 0     , 255    ]  Unit:''     
  uint32_t framecnt;
} GPS_PositionLatitude_t;

// def @GPS_PositionAltitude CAN Message (419411996)
#define GPS_PositionAltitude_IDE (1U)
#define GPS_PositionAltitude_DLC (4U)
#define GPS_PositionAltitude_CANID (0x18FFB81CU)
typedef struct
{

  int32_t GPS_Altitude;                  //  [-] Bits=32.  [ -340000000000000000000000000000000000000, 340000000000000000000000000000000000000 ]  Unit:'m'    
  uint32_t framecnt;
} GPS_PositionAltitude_t;

// def @GPS_Delusions_A CAN Message (419412252)
#define GPS_Delusions_A_IDE (1U)
#define GPS_Delusions_A_DLC (8U)
#define GPS_Delusions_A_CANID (0x18FFB91CU)
typedef struct
{

  int32_t GPS_PDOP;                      //  [-] Bits=32.  [ -340000000000000000000000000000000000000, 340000000000000000000000000000000000000 ]  Unit:''     

  int32_t GPS_HDOP;                      //  [-] Bits=32.  [ -340000000000000000000000000000000000000, 340000000000000000000000000000000000000 ]  Unit:''     
  uint32_t framecnt;
} GPS_Delusions_A_t;

// def @GPS_Delusions_B CAN Message (419412508)
#define GPS_Delusions_B_IDE (1U)
#define GPS_Delusions_B_DLC (4U)
#define GPS_Delusions_B_CANID (0x18FFBA1CU)
typedef struct
{

  int32_t GPS_VDOP;                      //  [-] Bits=32.  [ -340000000000000000000000000000000000000, 340000000000000000000000000000000000000 ]  Unit:''     
  uint32_t framecnt;
} GPS_Delusions_B_t;

// def @GPS_DateTime CAN Message (419412764)
#define GPS_DateTime_IDE (1U)
#define GPS_DateTime_DLC (6U)
#define GPS_DateTime_CANID (0x18FFBB1CU)
typedef struct
{

  uint8_t UTC_Year;                      //      Bits=08.  [ 0     , 255    ]  Unit:''     

  uint8_t UTC_Month;                     //      Bits=08.  [ 0     , 255    ]  Unit:''     

  uint8_t UTC_DayOfMonth;                //      Bits=08.  [ 0     , 255    ]  Unit:''     

  uint8_t UTC_Hour;                      //      Bits=08.  [ 0     , 255    ]  Unit:''     

  uint8_t UTC_Minute;                    //      Bits=08.  [ 0     , 255    ]  Unit:''     

  uint8_t UTC_Second;                    //      Bits=08.  [ 0     , 255    ]  Unit:''     
  uint32_t framecnt;
} GPS_DateTime_t;

// def @IO CAN Message (419413020)
#define IO_IDE (1U)
#define IO_DLC (1U)
#define IO_CANID (0x18FFBC1CU)
typedef struct
{

  // 0 - "Off" 
  // 1 - "On" 

  uint8_t Din1_Status;                   //      Bits=01.  [ 0     , 1      ]  Unit:''     

  // 0 - "Off" 
  // 1 - "On" 

  uint8_t Din2_Status;                   //      Bits=01.  [ 0     , 1      ]  Unit:''     

  // 0 - "Off" 
  // 1 - "On" 

  uint8_t Dout_Status;                   //      Bits=01.  [ 0     , 1      ]  Unit:''     

  // 0 - "False" 
  // 1 - "True" 

  uint8_t SD_Present;                    //      Bits=01.  [ 0     , 1      ]  Unit:''     

  // 0 - "Off" 
  // 1 - "On" 

  uint8_t GPS_PowerStatus;               //      Bits=01.  [ 0     , 1      ]  Unit:''     

  uint8_t Device_ID;                     //      Bits=03.  [ 0     , 7      ]  Unit:''     
  uint32_t framecnt;
} IO_t;

// def @RTC_DateTime CAN Message (419413276)
#define RTC_DateTime_IDE (1U)
#define RTC_DateTime_DLC (8U)
#define RTC_DateTime_CANID (0x18FFBD1CU)
typedef struct
{

  uint8_t RTC_Sec;                       //      Bits=08.  [ 0     , 255    ]  Unit:''     

  uint8_t RTC_Min;                       //      Bits=08.  [ 0     , 255    ]  Unit:''     

  uint8_t RTC_Hour;                      //      Bits=08.  [ 0     , 255    ]  Unit:''     

  // 0 - "Monday" 
  // 1 - "Tuesday" 
  // 2 - "Wednesday" 
  // 3 - "Thursday" 
  // 4 - "Friday" 
  // 5 - "Saturday" 
  // 6 - "Sunday" 

  uint8_t RTC_DayOfWeek;                 //      Bits=08.  [ 0     , 255    ]  Unit:''     

  uint8_t RTC_DayOfMonth;                //      Bits=08.  [ 0     , 255    ]  Unit:''     

  uint8_t RTC_Month;                     //      Bits=08.  [ 0     , 255    ]  Unit:''     

  uint16_t RTC_Year;                     //      Bits=16.  [ 0     , 65535  ]  Unit:''     
  uint32_t framecnt;
} RTC_DateTime_t;

// def @Arrive_And_Go_BusStop1 CAN Message (419414044)
#define Arrive_And_Go_BusStop1_IDE (1U)
#define Arrive_And_Go_BusStop1_DLC (8U)
#define Arrive_And_Go_BusStop1_CANID (0x18FFC01CU)
typedef struct
{

  uint8_t AAG_StartStop_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCaps_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCapsChargeDemand;     //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_StartStopDemand;           //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_BusStopNo;                 //      Bits=08.  [ 0     , 0      ]  Unit:''     

  uint32_t AAG_DistanceToBusStop;        //      Bits=32.  [ 0     , 0      ]  Unit:''     
  uint32_t framecnt;
} Arrive_And_Go_BusStop1_t;

// def @Arrive_And_Go_BusStop2 CAN Message (419414300)
#define Arrive_And_Go_BusStop2_IDE (1U)
#define Arrive_And_Go_BusStop2_DLC (8U)
#define Arrive_And_Go_BusStop2_CANID (0x18FFC11CU)
typedef struct
{

  uint8_t AAG_StartStop_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCaps_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCapsChargeDemand;     //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_StartStopDemand;           //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_BusStopNo;                 //      Bits=08.  [ 0     , 0      ]  Unit:''     

  uint32_t AAG_DistanceToBusStop;        //      Bits=32.  [ 0     , 0      ]  Unit:''     
  uint32_t framecnt;
} Arrive_And_Go_BusStop2_t;

// def @Arrive_And_Go_BusStop3 CAN Message (419414556)
#define Arrive_And_Go_BusStop3_IDE (1U)
#define Arrive_And_Go_BusStop3_DLC (8U)
#define Arrive_And_Go_BusStop3_CANID (0x18FFC21CU)
typedef struct
{

  uint8_t AAG_StartStop_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCaps_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCapsChargeDemand;     //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_StartStopDemand;           //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_BusStopNo;                 //      Bits=08.  [ 0     , 0      ]  Unit:''     

  uint32_t AAG_DistanceToBusStop;        //      Bits=32.  [ 0     , 0      ]  Unit:''     
  uint32_t framecnt;
} Arrive_And_Go_BusStop3_t;

// def @Arrive_And_Go_BusStop4 CAN Message (419414812)
#define Arrive_And_Go_BusStop4_IDE (1U)
#define Arrive_And_Go_BusStop4_DLC (8U)
#define Arrive_And_Go_BusStop4_CANID (0x18FFC31CU)
typedef struct
{

  uint8_t AAG_StartStop_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCaps_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCapsChargeDemand;     //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_StartStopDemand;           //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_BusStopNo;                 //      Bits=08.  [ 0     , 0      ]  Unit:''     

  uint32_t AAG_DistanceToBusStop;        //      Bits=32.  [ 0     , 0      ]  Unit:''     
  uint32_t framecnt;
} Arrive_And_Go_BusStop4_t;

// def @Arrive_And_Go_BusStop5 CAN Message (419415068)
#define Arrive_And_Go_BusStop5_IDE (1U)
#define Arrive_And_Go_BusStop5_DLC (8U)
#define Arrive_And_Go_BusStop5_CANID (0x18FFC41CU)
typedef struct
{

  uint8_t AAG_StartStop_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCaps_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCapsChargeDemand;     //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_StartStopDemand;           //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_BusStopNo;                 //      Bits=08.  [ 0     , 0      ]  Unit:''     

  uint32_t AAG_DistanceToBusStop;        //      Bits=32.  [ 0     , 0      ]  Unit:''     
  uint32_t framecnt;
} Arrive_And_Go_BusStop5_t;

// def @Arrive_And_Go_BusStop6 CAN Message (419415324)
#define Arrive_And_Go_BusStop6_IDE (1U)
#define Arrive_And_Go_BusStop6_DLC (8U)
#define Arrive_And_Go_BusStop6_CANID (0x18FFC51CU)
typedef struct
{

  uint8_t AAG_StartStop_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCaps_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCapsChargeDemand;     //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_StartStopDemand;           //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_BusStopNo;                 //      Bits=08.  [ 0     , 0      ]  Unit:''     

  uint32_t AAG_DistanceToBusStop;        //      Bits=32.  [ 0     , 0      ]  Unit:''     
  uint32_t framecnt;
} Arrive_And_Go_BusStop6_t;

// def @Arrive_And_Go_BusStop7 CAN Message (419415580)
#define Arrive_And_Go_BusStop7_IDE (1U)
#define Arrive_And_Go_BusStop7_DLC (8U)
#define Arrive_And_Go_BusStop7_CANID (0x18FFC61CU)
typedef struct
{

  uint8_t AAG_StartStop_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCaps_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCapsChargeDemand;     //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_StartStopDemand;           //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_BusStopNo;                 //      Bits=08.  [ 0     , 0      ]  Unit:''     

  uint32_t AAG_DistanceToBusStop;        //      Bits=32.  [ 0     , 0      ]  Unit:''     
  uint32_t framecnt;
} Arrive_And_Go_BusStop7_t;

// def @Arrive_And_Go_BusStop8 CAN Message (419415836)
#define Arrive_And_Go_BusStop8_IDE (1U)
#define Arrive_And_Go_BusStop8_DLC (8U)
#define Arrive_And_Go_BusStop8_CANID (0x18FFC71CU)
typedef struct
{

  uint8_t AAG_StartStop_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCaps_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCapsChargeDemand;     //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_StartStopDemand;           //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_BusStopNo;                 //      Bits=08.  [ 0     , 0      ]  Unit:''     

  uint32_t AAG_DistanceToBusStop;        //      Bits=32.  [ 0     , 0      ]  Unit:''     
  uint32_t framecnt;
} Arrive_And_Go_BusStop8_t;

// def @Arrive_And_Go_BusStop9 CAN Message (419416092)
#define Arrive_And_Go_BusStop9_IDE (1U)
#define Arrive_And_Go_BusStop9_DLC (8U)
#define Arrive_And_Go_BusStop9_CANID (0x18FFC81CU)
typedef struct
{

  uint8_t AAG_StartStop_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCaps_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCapsChargeDemand;     //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_StartStopDemand;           //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_BusStopNo;                 //      Bits=08.  [ 0     , 0      ]  Unit:''     

  uint32_t AAG_DistanceToBusStop;        //      Bits=32.  [ 0     , 0      ]  Unit:''     
  uint32_t framecnt;
} Arrive_And_Go_BusStop9_t;

// def @Arrive_And_Go_BusStop10 CAN Message (419416348)
#define Arrive_And_Go_BusStop10_IDE (1U)
#define Arrive_And_Go_BusStop10_DLC (8U)
#define Arrive_And_Go_BusStop10_CANID (0x18FFC91CU)
typedef struct
{

  uint8_t AAG_StartStop_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCaps_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCapsChargeDemand;     //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_StartStopDemand;           //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_BusStopNo;                 //      Bits=08.  [ 0     , 0      ]  Unit:''     

  uint32_t AAG_DistanceToBusStop;        //      Bits=32.  [ 0     , 0      ]  Unit:''     
  uint32_t framecnt;
} Arrive_And_Go_BusStop10_t;

// def @Arrive_And_Go_BusStop11 CAN Message (419416604)
#define Arrive_And_Go_BusStop11_IDE (1U)
#define Arrive_And_Go_BusStop11_DLC (8U)
#define Arrive_And_Go_BusStop11_CANID (0x18FFCA1CU)
typedef struct
{

  uint8_t AAG_StartStop_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCaps_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCapsChargeDemand;     //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_StartStopDemand;           //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_BusStopNo;                 //      Bits=08.  [ 0     , 0      ]  Unit:''     

  uint32_t AAG_DistanceToBusStop;        //      Bits=32.  [ 0     , 0      ]  Unit:''     
  uint32_t framecnt;
} Arrive_And_Go_BusStop11_t;

// def @Arrive_And_Go_BusStop12 CAN Message (419416860)
#define Arrive_And_Go_BusStop12_IDE (1U)
#define Arrive_And_Go_BusStop12_DLC (8U)
#define Arrive_And_Go_BusStop12_CANID (0x18FFCB1CU)
typedef struct
{

  uint8_t AAG_StartStop_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCaps_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCapsChargeDemand;     //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_StartStopDemand;           //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_BusStopNo;                 //      Bits=08.  [ 0     , 0      ]  Unit:''     

  uint32_t AAG_DistanceToBusStop;        //      Bits=32.  [ 0     , 0      ]  Unit:''     
  uint32_t framecnt;
} Arrive_And_Go_BusStop12_t;

// def @Arrive_And_Go_BusStop13 CAN Message (419417116)
#define Arrive_And_Go_BusStop13_IDE (1U)
#define Arrive_And_Go_BusStop13_DLC (8U)
#define Arrive_And_Go_BusStop13_CANID (0x18FFCC1CU)
typedef struct
{

  uint8_t AAG_StartStop_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCaps_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCapsChargeDemand;     //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_StartStopDemand;           //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_BusStopNo;                 //      Bits=08.  [ 0     , 0      ]  Unit:''     

  uint32_t AAG_DistanceToBusStop;        //      Bits=32.  [ 0     , 0      ]  Unit:''     
  uint32_t framecnt;
} Arrive_And_Go_BusStop13_t;

// def @Arrive_And_Go_BusStop14 CAN Message (419417372)
#define Arrive_And_Go_BusStop14_IDE (1U)
#define Arrive_And_Go_BusStop14_DLC (8U)
#define Arrive_And_Go_BusStop14_CANID (0x18FFCD1CU)
typedef struct
{

  uint8_t AAG_StartStop_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCaps_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCapsChargeDemand;     //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_StartStopDemand;           //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_BusStopNo;                 //      Bits=08.  [ 0     , 0      ]  Unit:''     

  uint32_t AAG_DistanceToBusStop;        //      Bits=32.  [ 0     , 0      ]  Unit:''     
  uint32_t framecnt;
} Arrive_And_Go_BusStop14_t;

// def @Arrive_And_Go_BusStop15 CAN Message (419417628)
#define Arrive_And_Go_BusStop15_IDE (1U)
#define Arrive_And_Go_BusStop15_DLC (8U)
#define Arrive_And_Go_BusStop15_CANID (0x18FFCE1CU)
typedef struct
{

  uint8_t AAG_StartStop_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCaps_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCapsChargeDemand;     //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_StartStopDemand;           //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_BusStopNo;                 //      Bits=08.  [ 0     , 0      ]  Unit:''     

  uint32_t AAG_DistanceToBusStop;        //      Bits=32.  [ 0     , 0      ]  Unit:''     
  uint32_t framecnt;
} Arrive_And_Go_BusStop15_t;

// def @Arrive_And_Go_BusStop16 CAN Message (419417884)
#define Arrive_And_Go_BusStop16_IDE (1U)
#define Arrive_And_Go_BusStop16_DLC (8U)
#define Arrive_And_Go_BusStop16_CANID (0x18FFCF1CU)
typedef struct
{

  uint8_t AAG_StartStop_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCaps_ApproachOK;      //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_SuperCapsChargeDemand;     //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_StartStopDemand;           //      Bits=01.  [ 0     , 0      ]  Unit:''     

  uint8_t AAG_BusStopNo;                 //      Bits=08.  [ 0     , 0      ]  Unit:''     

  uint32_t AAG_DistanceToBusStop;        //      Bits=32.  [ 0     , 0      ]  Unit:''     
  uint32_t framecnt;
} Arrive_And_Go_BusStop16_t;

uint32_t Unpack_Out_IO_PCANEXT(Out_IO_t* _m, const uint8_t* _d);
uint32_t Pack_Out_IO_PCANEXT(const Out_IO_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_Out_PowerOff_PCANEXT(Out_PowerOff_t* _m, const uint8_t* _d);
uint32_t Pack_Out_PowerOff_PCANEXT(const Out_PowerOff_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_Out_Gyro_PCANEXT(Out_Gyro_t* _m, const uint8_t* _d);
uint32_t Pack_Out_Gyro_PCANEXT(const Out_Gyro_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_Out_BMC_AccScale_PCANEXT(Out_BMC_AccScale_t* _m, const uint8_t* _d);
uint32_t Pack_Out_BMC_AccScale_PCANEXT(const Out_BMC_AccScale_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_Out_SaveConfig_PCANEXT(Out_SaveConfig_t* _m, const uint8_t* _d);
uint32_t Pack_Out_SaveConfig_PCANEXT(const Out_SaveConfig_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_Out_RTC_SetTime_PCANEXT(Out_RTC_SetTime_t* _m, const uint8_t* _d);
uint32_t Pack_Out_RTC_SetTime_PCANEXT(const Out_RTC_SetTime_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_Out_RTC_TimeFromGPS_PCANEXT(Out_RTC_TimeFromGPS_t* _m, const uint8_t* _d);
uint32_t Pack_Out_RTC_TimeFromGPS_PCANEXT(const Out_RTC_TimeFromGPS_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_Out_Acc_FastCalibration_PCANEXT(Out_Acc_FastCalibration_t* _m, const uint8_t* _d);
uint32_t Pack_Out_Acc_FastCalibration_PCANEXT(const Out_Acc_FastCalibration_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_Arrive_And_Go_Position_PCANEXT(Arrive_And_Go_Position_t* _m, const uint8_t* _d);
uint32_t Pack_Arrive_And_Go_Position_PCANEXT(const Arrive_And_Go_Position_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_Arrive_And_Go_Verification_PCANEXT(Arrive_And_Go_Verification_t* _m, const uint8_t* _d);
uint32_t Pack_Arrive_And_Go_Verification_PCANEXT(const Arrive_And_Go_Verification_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_BMC_Acceleration_PCANEXT(BMC_Acceleration_t* _m, const uint8_t* _d);
uint32_t Pack_BMC_Acceleration_PCANEXT(const BMC_Acceleration_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_BMC_MagneticField_PCANEXT(BMC_MagneticField_t* _m, const uint8_t* _d);
uint32_t Pack_BMC_MagneticField_PCANEXT(const BMC_MagneticField_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_L3GD20_Rotation_A_PCANEXT(L3GD20_Rotation_A_t* _m, const uint8_t* _d);
uint32_t Pack_L3GD20_Rotation_A_PCANEXT(const L3GD20_Rotation_A_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_L3GD20_Rotation_B_PCANEXT(L3GD20_Rotation_B_t* _m, const uint8_t* _d);
uint32_t Pack_L3GD20_Rotation_B_PCANEXT(const L3GD20_Rotation_B_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_GPS_Status_PCANEXT(GPS_Status_t* _m, const uint8_t* _d);
uint32_t Pack_GPS_Status_PCANEXT(const GPS_Status_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_GPS_CourseSpeed_PCANEXT(GPS_CourseSpeed_t* _m, const uint8_t* _d);
uint32_t Pack_GPS_CourseSpeed_PCANEXT(const GPS_CourseSpeed_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_GPS_PositionLongitude_PCANEXT(GPS_PositionLongitude_t* _m, const uint8_t* _d);
uint32_t Pack_GPS_PositionLongitude_PCANEXT(const GPS_PositionLongitude_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_GPS_PositionLatitude_PCANEXT(GPS_PositionLatitude_t* _m, const uint8_t* _d);
uint32_t Pack_GPS_PositionLatitude_PCANEXT(const GPS_PositionLatitude_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_GPS_PositionAltitude_PCANEXT(GPS_PositionAltitude_t* _m, const uint8_t* _d);
uint32_t Pack_GPS_PositionAltitude_PCANEXT(const GPS_PositionAltitude_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_GPS_Delusions_A_PCANEXT(GPS_Delusions_A_t* _m, const uint8_t* _d);
uint32_t Pack_GPS_Delusions_A_PCANEXT(const GPS_Delusions_A_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_GPS_Delusions_B_PCANEXT(GPS_Delusions_B_t* _m, const uint8_t* _d);
uint32_t Pack_GPS_Delusions_B_PCANEXT(const GPS_Delusions_B_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_GPS_DateTime_PCANEXT(GPS_DateTime_t* _m, const uint8_t* _d);
uint32_t Pack_GPS_DateTime_PCANEXT(const GPS_DateTime_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_IO_PCANEXT(IO_t* _m, const uint8_t* _d);
uint32_t Pack_IO_PCANEXT(const IO_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_RTC_DateTime_PCANEXT(RTC_DateTime_t* _m, const uint8_t* _d);
uint32_t Pack_RTC_DateTime_PCANEXT(const RTC_DateTime_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_Arrive_And_Go_BusStop1_PCANEXT(Arrive_And_Go_BusStop1_t* _m, const uint8_t* _d);
uint32_t Pack_Arrive_And_Go_BusStop1_PCANEXT(const Arrive_And_Go_BusStop1_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_Arrive_And_Go_BusStop2_PCANEXT(Arrive_And_Go_BusStop2_t* _m, const uint8_t* _d);
uint32_t Pack_Arrive_And_Go_BusStop2_PCANEXT(const Arrive_And_Go_BusStop2_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_Arrive_And_Go_BusStop3_PCANEXT(Arrive_And_Go_BusStop3_t* _m, const uint8_t* _d);
uint32_t Pack_Arrive_And_Go_BusStop3_PCANEXT(const Arrive_And_Go_BusStop3_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_Arrive_And_Go_BusStop4_PCANEXT(Arrive_And_Go_BusStop4_t* _m, const uint8_t* _d);
uint32_t Pack_Arrive_And_Go_BusStop4_PCANEXT(const Arrive_And_Go_BusStop4_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_Arrive_And_Go_BusStop5_PCANEXT(Arrive_And_Go_BusStop5_t* _m, const uint8_t* _d);
uint32_t Pack_Arrive_And_Go_BusStop5_PCANEXT(const Arrive_And_Go_BusStop5_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_Arrive_And_Go_BusStop6_PCANEXT(Arrive_And_Go_BusStop6_t* _m, const uint8_t* _d);
uint32_t Pack_Arrive_And_Go_BusStop6_PCANEXT(const Arrive_And_Go_BusStop6_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_Arrive_And_Go_BusStop7_PCANEXT(Arrive_And_Go_BusStop7_t* _m, const uint8_t* _d);
uint32_t Pack_Arrive_And_Go_BusStop7_PCANEXT(const Arrive_And_Go_BusStop7_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_Arrive_And_Go_BusStop8_PCANEXT(Arrive_And_Go_BusStop8_t* _m, const uint8_t* _d);
uint32_t Pack_Arrive_And_Go_BusStop8_PCANEXT(const Arrive_And_Go_BusStop8_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_Arrive_And_Go_BusStop9_PCANEXT(Arrive_And_Go_BusStop9_t* _m, const uint8_t* _d);
uint32_t Pack_Arrive_And_Go_BusStop9_PCANEXT(const Arrive_And_Go_BusStop9_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_Arrive_And_Go_BusStop10_PCANEXT(Arrive_And_Go_BusStop10_t* _m, const uint8_t* _d);
uint32_t Pack_Arrive_And_Go_BusStop10_PCANEXT(const Arrive_And_Go_BusStop10_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_Arrive_And_Go_BusStop11_PCANEXT(Arrive_And_Go_BusStop11_t* _m, const uint8_t* _d);
uint32_t Pack_Arrive_And_Go_BusStop11_PCANEXT(const Arrive_And_Go_BusStop11_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_Arrive_And_Go_BusStop12_PCANEXT(Arrive_And_Go_BusStop12_t* _m, const uint8_t* _d);
uint32_t Pack_Arrive_And_Go_BusStop12_PCANEXT(const Arrive_And_Go_BusStop12_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_Arrive_And_Go_BusStop13_PCANEXT(Arrive_And_Go_BusStop13_t* _m, const uint8_t* _d);
uint32_t Pack_Arrive_And_Go_BusStop13_PCANEXT(const Arrive_And_Go_BusStop13_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_Arrive_And_Go_BusStop14_PCANEXT(Arrive_And_Go_BusStop14_t* _m, const uint8_t* _d);
uint32_t Pack_Arrive_And_Go_BusStop14_PCANEXT(const Arrive_And_Go_BusStop14_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_Arrive_And_Go_BusStop15_PCANEXT(Arrive_And_Go_BusStop15_t* _m, const uint8_t* _d);
uint32_t Pack_Arrive_And_Go_BusStop15_PCANEXT(const Arrive_And_Go_BusStop15_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_Arrive_And_Go_BusStop16_PCANEXT(Arrive_And_Go_BusStop16_t* _m, const uint8_t* _d);
uint32_t Pack_Arrive_And_Go_BusStop16_PCANEXT(const Arrive_And_Go_BusStop16_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);

#ifdef __cplusplus
}
#endif

