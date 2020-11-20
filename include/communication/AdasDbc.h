
// this file were genereted by coderdbc.com web service
// any questions - mailto:coderdbc@gmail.com

#pragma once


#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

// def @HRW CAN Message (150892286)
#define HRW_IDE (1U)
#define HRW_DLC (8U)
#define HRW_CANID (0x8FE6EFEU)
#define HRW_CYC (20U)
// signal: @FrontAxleLeftWheelSpeed
#define FrontAxleLeftWheelSpeed_CovFactor 0.00390625
#define FrontAxleLeftWheelSpeed_CovS(x) ((uint16_t)((x / 0.00390625)))
// signal: @FrontAxleRightWheelSpeed
#define FrontAxleRightWheelSpeed_CovFactor 0.00390625
#define FrontAxleRightWheelSpeed_CovS(x) ((uint16_t)((x / 0.00390625)))
// signal: @RearAxleLeftWheelSpeed
#define RearAxleLeftWheelSpeed_CovFactor 0.00390625
#define RearAxleLeftWheelSpeed_CovS(x) ((uint16_t)((x / 0.00390625)))
// signal: @RearAxleRightWheelSpeed
#define RearAxleRightWheelSpeed_CovFactor 0.00390625
#define RearAxleRightWheelSpeed_CovS(x) ((uint16_t)((x / 0.00390625)))
typedef struct
{

  // High resolution measurement of the speed of the left wheel on the front axle.
  uint16_t FrontAxleLeftWheelSpeed;      //      Bits=16.  [ 0     , 250.996 ]  Unit:'km/h'  Factor= 0.00390625

  // High resolution measurement of the speed of the right wheel on the front axle.
  uint16_t FrontAxleRightWheelSpeed;     //      Bits=16.  [ 0     , 250.996 ]  Unit:'km/h'  Factor= 0.00390625

  // High resolution measurement of the speed of the left wheel on the rear axle.
  uint16_t RearAxleLeftWheelSpeed;       //      Bits=16.  [ 0     , 250.996 ]  Unit:'km/h'  Factor= 0.00390625

  // High resolution measurement of the speed of the right wheel on the rear axle.
  uint16_t RearAxleRightWheelSpeed;      //      Bits=16.  [ 0     , 250.996 ]  Unit:'km/h'  Factor= 0.00390625
  uint32_t framecnt;
} HRW_t;

// def @SRASI CAN Message (201981694)
#define SRASI_IDE (1U)
#define SRASI_DLC (8U)
#define SRASI_CANID (0xC09FEFEU)
#define SRASI_CYC (100U)
// -- Contains Static Roll Angle Data and Status of the Static Roll Angle Sensor ...
// signal: @StaticRollAngle
#define StaticRollAngle_CovFactor 1
#define StaticRollAngle_CovS(x) ((int16_t)(x + 125))
typedef struct
{

  // The measured static roll angle between the vehicle y-axis and the ground plane about the X-axis.  The sign of the roll ...
  int16_t StaticRollAngle;               //      Bits=08.  [ -125  , 125    ]  Unit:'deg'   Offset= -125     

  // Status of the transmitted roll angle data.
  // 7 - "Not available" 
  // 6 - "Error" 
  // 5 - "Reserved" 
  // 4 - "Angle Data Invalid" 
  // 3 - "Sensor Reboots" 
  // 2 - "Sensor Defect" 
  // 1 - "Sensor OK" 
  // 0 - "Sensor Busy" 

  uint8_t StaticRollAngleStatus;         //      Bits=03.  [ 0     , 7      ]  Unit:''     
  uint32_t framecnt;
} SRASI_t;

// def @ASC6 CAN Message (215088894)
#define ASC6_IDE (1U)
#define ASC6_DLC (8U)
#define ASC6_CANID (0xCD1FEFEU)
#define ASC6_CYC (100U)
// -- Used for suspension control ...
// signal: @LevelPresetFrontAxleLeft
#define LevelPresetFrontAxleLeft_CovFactor 0.1
#define LevelPresetFrontAxleLeft_CovS(x) ((int32_t)((x / 0.1) + 32000))
// signal: @LevelPresetFrontAxleRight
#define LevelPresetFrontAxleRight_CovFactor 0.1
#define LevelPresetFrontAxleRight_CovS(x) ((int32_t)((x / 0.1) + 32000))
// signal: @LevelPresetRearAxleLeft
#define LevelPresetRearAxleLeft_CovFactor 0.1
#define LevelPresetRearAxleLeft_CovS(x) ((int32_t)((x / 0.1) + 32000))
// signal: @LevelPresetRearAxleRight
#define LevelPresetRearAxleRight_CovFactor 0.1
#define LevelPresetRearAxleRight_CovS(x) ((int32_t)((x / 0.1) + 32000))
typedef struct
{

  // Set value for nominal level 'preset level' at the left side of the front axle. This value is referred to 'Normal level 1'.  For ...
  int32_t LevelPresetFrontAxleLeft;      //      Bits=16.  [ -3200 , 3225.5 ]  Unit:'mm'    Offset= -3200     Factor= 0.1   

  // Set value for nominal level 'preset level' at the right side of the front axle. This value is referred to 'Normal level 1'.  For ...
  int32_t LevelPresetFrontAxleRight;     //      Bits=16.  [ -3200 , 3225.5 ]  Unit:'mm'    Offset= -3200     Factor= 0.1   

  // Set value for nominal level 'preset level' at the left side of the rear axle. This value is referred to 'Normal level 1'.  For ...
  int32_t LevelPresetRearAxleLeft;       //      Bits=16.  [ -3200 , 3225.5 ]  Unit:'mm'    Offset= -3200     Factor= 0.1   

  // Set value for nominal level 'preset level' at the right side of the rear axle. This value is referred to 'Normal level 1'.  For ...
  int32_t LevelPresetRearAxleRight;      //      Bits=16.  [ -3200 , 3225.5 ]  Unit:'mm'    Offset= -3200     Factor= 0.1   
  uint32_t framecnt;
} ASC6_t;

// def @ASC2 CAN Message (215154430)
#define ASC2_IDE (1U)
#define ASC2_DLC (8U)
#define ASC2_CANID (0xCD2FEFEU)
#define ASC2_CYC (100U)
// -- Used for suspension control ...
// signal: @DamperStiffnessRqFrontAxle
#define DamperStiffnessRqFrontAxle_CovFactor 0.4
#define DamperStiffnessRqFrontAxle_CovS(x) ((uint8_t)((x / 0.4)))
// signal: @DamperStiffnessRqRearAxle
#define DamperStiffnessRqRearAxle_CovFactor 0.4
#define DamperStiffnessRqRearAxle_CovS(x) ((uint8_t)((x / 0.4)))
// signal: @DamperStiffnessRqLift_TagAxle
#define DamperStiffnessRqLift_TagAxle_CovFactor 0.4
#define DamperStiffnessRqLift_TagAxle_CovS(x) ((uint8_t)((x / 0.4)))
typedef struct
{

  // This signal enables the traction help (load transfer) in case of an active ASR function ...
  // 3 - "Dont care" 
  // 2 - "Reserved" 
  // 1 - "Enable automatic traction help" 
  // 0 - "Disable automatic traction help" 

  uint8_t AutomaticTractionHelp;              //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Command signal to activate the kneeling functionality on the left side of the vehicle ...
  // 3 - "Dont care/take no action" 
  // 2 - "Reserved" 
  // 1 - "Kneeling request" 
  // 0 - "No kneeling request" 

  uint8_t KneelingRqLeftSide;                 //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Command signal to activate the kneeling functionality on the right side of the vehicle ...
  // 3 - "Dont care/take no action" 
  // 2 - "Reserved" 
  // 1 - "Kneeling request" 
  // 0 - "No kneeling request" 

  uint8_t KneelingRqRightSide;                //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Command signal to select the kneeling functionality ...
  // 3 - "Dont care/take no action" 
  // 2 - "Reserved" 
  // 1 - "Manually actuated" 
  // 0 - "Automatically actuated" 

  uint8_t KneelingCtrlModeRq;                 //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Command signal to activate a level of the front axle programmed and/or memorized in the ECU   For explanations of ...
  // 10 - "Lower Request Continuously lowering front axle as long as active" 
  // 15 - "Dont care/take no action" 
  // 14 - "Reserved" 
  // 9 - "Raise Request Continuously raising front axle as long as active" 
  // 8 - "Stop level changeie the level change in process shall be stopped immediately" 
  // 7 - "Lower Levelie the lowest level to be controlled" 
  // 6 - "Upper Levelie the highest level to be controlled" 
  // 5 - "Customer Levelie a level to be defined by customer via parameter setting" 
  // 4 - "Preset Levelie a level to be defined externally via CAN" 
  // 3 - "Normal Level 3ie a level permitted for driving for example to lift the vehicle in case of offroad" 
  // 2 - "Normal Level 2ie a level permitted for driving for example to lower the vehicle in case of high speed" 
  // 1 - "Normal Level 1ie the level prescribed for normal driving given by design" 
  // 0 - "No level request" 

  uint8_t NominalLevelRqFrontAxle;            //      Bits=04.  [ 0     , 15     ]  Unit:''     

  // Command signal to activate a level of the rear axle programmed and/or memorized in the ECU.  For explanations of ...
  // 10 - "Lower Request Continuously lowering front axle as long as active" 
  // 15 - "Dont care/take no action" 
  // 14 - "Reserved" 
  // 9 - "Raise Request Continuously raising front axle as long as active" 
  // 8 - "Stop level changeie the level change in process shall be stopped immediately" 
  // 7 - "Lower Levelie the lowest level to be controlled" 
  // 6 - "Upper Levelie the highest level to be controlled" 
  // 5 - "Customer Levelie a level to be defined by customer via parameter setting" 
  // 4 - "Preset Levelie a level to be defined externally via CAN" 
  // 3 - "Normal Level 3ie a level permitted for driving for example to lift the vehicle in case of offroad" 
  // 2 - "Normal Level 2ie a level permitted for driving for example to lower the vehicle in case of high speed" 
  // 1 - "Normal Level 1ie the level prescribed for normal driving given by design" 
  // 0 - "No level request" 

  uint8_t NominalLevelRqRearAxle;             //      Bits=04.  [ 0     , 15     ]  Unit:''     

  // Command signal to activate a level control mode ...
  // 10 - "1101    Not defined" 
  // 15 - "Dont care/take no action" 
  // 14 - "Reserved" 
  // 9 - "Force to bumper level" 
  // 8 - "Exhaust bellows" 
  // 7 - "Traction help  load reduce ie reduce axle load of driven axle to normal load condition" 
  // 6 - "Optimum traction 2 ie the pressure at the driven axle is controlled at a fixed value 2" 
  // 5 - "Optimum traction 1 ie the pressure at the driven axle is controlled at a fixed value 1" 
  // 4 - "Pressure ratio 2 ie the ratio between the pressures at the driven axle and at the third axle is controlled so that" 
  // 3 - "Pressure ratio 1 ie the ratio between the pressures at the driven axle and at the third axle is controlled so that" 
  // 2 - "Load fixing ie the driven axle is loaded to a value defined by the driver" 
  // 1 - "Traction help load transfer ie the driven axle is loaded to a maximum value given by legislation or design" 
  // 0 - "Normal operation ie the system performs a pure control of the vehicle height" 

  uint8_t LevelCtrlModeRq;                    //      Bits=04.  [ 0     , 15     ]  Unit:''     

  // Signal to command the position/load condition of lift/tag axle #1.  Numbering of lift/tag axles starts at front axle.
  // 3 - "Dont care/take no action" 
  // 2 - "Reserved" 
  // 1 - "Lift axle position up / tag axle unladen" 
  // 0 - "Lift axle position down / tag axle laden" 

  uint8_t LiftAxle1PosCmd;                    //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Signal to command the position / load condition of lift / tag axle #2.  Numbering of lift/tag axles starts at front axle.
  // 3 - "Dont care/take no action" 
  // 2 - "Reserved" 
  // 1 - "Lift axle position up / tag axle unladen" 
  // 0 - "Lift axle position down / tag axle laden" 

  uint8_t LiftAxle2PosCmd;                    //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Demand value for the shock absorber control at the front axle.
  uint8_t DamperStiffnessRqFrontAxle;         //      Bits=08.  [ 0     , 100    ]  Unit:'%'     Factor= 0.4   

  // Demand value for the shock absorber control at the rear  axle.
  uint8_t DamperStiffnessRqRearAxle;          //      Bits=08.  [ 0     , 100    ]  Unit:'%'     Factor= 0.4   

  // Demand value for the shock absorber control at the lift or tag axle ...
  uint8_t DamperStiffnessRqLift_TagAxle;      //      Bits=08.  [ 0     , 100    ]  Unit:'%'     Factor= 0.4   

  // Command signal to activate the kneeling functionality at the front axle of the vehicle ...
  // 3 - "Dont care/take no action" 
  // 2 - "Reserved" 
  // 1 - "Activate kneeling" 
  // 0 - "Deactivate kneeling" 

  uint8_t KneelingCmdFrontAxle;               //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Command signal to activate the kneeling functionality at the rear axle of the vehicle.
  // 3 - "Dont care/take no action" 
  // 2 - "Reserved" 
  // 1 - "Activate kneeling" 
  // 0 - "Deactivate kneeling" 

  uint8_t KneelingCmdRearAxle;                //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // This parameter is an external request to the air suspension control system to prohibit all air suspension control.  If the ...
  // 3 - "Not available" 
  // 2 - "Error indicator" 
  // 1 - "Request prohibit air suspension control" 
  // 0 - "No request" 

  uint8_t ProhibitAirSuspensionCtrl;          //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // This parameter overides the inhibit of level control during braking.
  // 3 - "Dont care/take no action" 
  // 2 - "Reserved" 
  // 1 - "Allow level control during braking" 
  // 0 - "Disallow level control during braking normal operation" 

  uint8_t AllowLevelCtrlDuringBrakingCmd;     //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // This parameter activates speed dependent level control in suspension system.
  // 3 - "Dont care/take no action" 
  // 2 - "Reserved" 
  // 1 - "Activate" 
  // 0 - "Deactivate" 

  uint8_t SpeedDependentLevelCtrlRq;          //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // This parameter is an internal request to the air suspension control system to prohibit automatic air suspension control.  If ...
  // 3 - "Not available" 
  // 2 - "Error indicator" 
  // 1 - "Request prohibit automatic air suspension control" 
  // 0 - "No request" 

  uint8_t PrhbitAutomaticAirSuspensionCtrl;   //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Signal which indicates that the air suspension control requests a memory level or a memory level shall be stored.
  // 15 - "Dont care" 
  // 14 - "Reserved" 
  // 13 - "Store Memory level  5" 
  // 12 - "Store Memory level  4" 
  // 11 - "Store Memory level  3" 
  // 10 - "Store Memory level  2" 
  // 9 - "Store Memory level  1" 
  // 8 - "reserved" 
  // 7 - "reserved" 
  // 6 - "reserved" 
  // 5 - "Memory level 5 request" 
  // 4 - "Memory level 4 request" 
  // 3 - "Memory level 3 request" 
  // 2 - "Memory level 2 request" 
  // 1 - "Memory level 1 request" 
  // 0 - "No memory level request" 

  uint8_t MemoryLevelRq;                      //      Bits=04.  [ 0     , 15     ]  Unit:''     
  uint32_t framecnt;
} ASC2_t;

// def @SSI CAN Message (217060350)
#define SSI_IDE (1U)
#define SSI_DLC (8U)
#define SSI_CANID (0xCF013FEU)
#define SSI_CYC (10U)
// signal: @PitchAngle
#define PitchAngle_CovFactor 0.002
#define PitchAngle_CovS(x) ((int32_t)((x / 0.002) + 32000))
// signal: @RollAngle
#define RollAngle_CovFactor 0.002
#define RollAngle_CovS(x) ((int32_t)((x / 0.002) + 32000))
// signal: @PitchRate
#define PitchRate_CovFactor 0.002
#define PitchRate_CovS(x) ((int32_t)((x / 0.002) + 32000))
// signal: @RollAndPitchMeasurementLatency
#define RollAndPitchMeasurementLatency_CovFactor 0.5
#define RollAndPitchMeasurementLatency_CovS(x) ((uint8_t)((x / 0.5)))
typedef struct
{

  int32_t PitchAngle;                       //      Bits=16.  [ -64   , 64.51  ]  Unit:'deg'   Offset= -64       Factor= 0.002 

  int32_t RollAngle;                        //      Bits=16.  [ -64   , 64.51  ]  Unit:'deg'   Offset= -64       Factor= 0.002 

  int32_t PitchRate;                        //      Bits=16.  [ -64   , 64.51  ]  Unit:'deg/sec' Offset= -64       Factor= 0.002 

  uint8_t PitchAngleFigureOfMerit;          //      Bits=02.  [ 0     , 3      ]  Unit:''     

  uint8_t RollAngleFigureOfMerit;           //      Bits=02.  [ 0     , 3      ]  Unit:''     

  uint8_t PitchRateFigureOfMerit;           //      Bits=02.  [ 0     , 3      ]  Unit:''     

  uint8_t PitchAndRollCompensated;          //      Bits=02.  [ 0     , 3      ]  Unit:''     

  uint8_t RollAndPitchMeasurementLatency;   //      Bits=08.  [ 0     , 125    ]  Unit:'ms'    Factor= 0.5   
  uint32_t framecnt;
} SSI_t;

// def @SSI2 CAN Message (217065982)
#define SSI2_IDE (1U)
#define SSI2_DLC (8U)
#define SSI2_CANID (0xCF029FEU)
#define SSI2_CYC (10U)
// -- The Slope Sensor Information 2 message shall provide a measurement of the vehicle's extended pitch angle and a ...
// signal: @PitchAngleExRange
#define PitchAngleExRange_CovFactor 3.0517578125E-05
#define PitchAngleExRange_CovS(x) ((int32_t)((x / 3.0517578125E-05) + 8192000))
// signal: @RollAngleExRange
#define RollAngleExRange_CovFactor 3.0517578125E-05
#define RollAngleExRange_CovS(x) ((int32_t)((x / 3.0517578125E-05) + 8192000))
// signal: @RllAndPtchExRngMasurementLatency
#define RllAndPtchExRngMasurementLatency_CovFactor 0.5
#define RllAndPtchExRngMasurementLatency_CovS(x) ((uint8_t)((x / 0.5)))
typedef struct
{

  // The angle between the vehicle x-axis and the ground plane (i.e. rotation about the vehicle Y-axis).  The pitch angle for an ...
  int32_t PitchAngleExRange;                  //      Bits=24.  [ -250  , 250.9999 ]  Unit:'deg'   Offset= -250      Factor= 3.0517578125E-05

  // The angle between the vehicle y-axis and the ground plane (i.e. rotation about the X-axis).  The roll angle for a roll to the ...
  int32_t RollAngleExRange;                   //      Bits=24.  [ -250  , 250.9999 ]  Unit:'deg'   Offset= -250      Factor= 3.0517578125E-05

  // Compensated mode for the pitch measurement.  Compensation is the use of multiple sensors together to enhance the ...
  // 3 - "Not Available" 
  // 2 - "Error" 
  // 1 - "Off" 
  // 0 - "On" 

  uint8_t PitchAngleExRangeCompensation;      //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Figure of merit for pitch angle measurement.
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "Pitch rate degraded Data is suspect due to environmental conditions" 
  // 0 - "Pitch rate fully functional Data is within sensor specification" 

  uint8_t PitchAngleExRangeFigureOfMerit;     //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Compensated mode for the roll angle measurement.  Compensation is the use of multiple sensors together to enhance ...
  // 3 - "Not Available" 
  // 2 - "Error" 
  // 1 - "Off" 
  // 0 - "On" 

  uint8_t RollAngleExRangeCompensation;       //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Figure of merit for roll angle measurement.
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "Roll rate degraded Data is suspect due to environmental conditions" 
  // 0 - "Roll rate fully functional Data is within sensor specification" 

  uint8_t RollAngleExRangeFigureOfMerit;      //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Time between start of sensor processing and CAN transmission ...
  uint8_t RllAndPtchExRngMasurementLatency;   //      Bits=08.  [ 0     , 125    ]  Unit:'ms'    Factor= 0.5   
  uint32_t framecnt;
} SSI2_t;

// def @ARI CAN Message (217066238)
#define ARI_IDE (1U)
#define ARI_DLC (8U)
#define ARI_CANID (0xCF02AFEU)
#define ARI_CYC (10U)
// -- The Angular Rate Information message shall provide a measurement of the vehicle's pitch rate, roll rate, and yaw rate ...
// signal: @PitchRateExRange
#define PitchRateExRange_CovFactor 0.0078125
#define PitchRateExRange_CovS(x) ((int32_t)((x / 0.0078125) + 32000))
// signal: @RollRateExRange
#define RollRateExRange_CovFactor 0.0078125
#define RollRateExRange_CovS(x) ((int32_t)((x / 0.0078125) + 32000))
// signal: @YawRateExRange
#define YawRateExRange_CovFactor 0.0078125
#define YawRateExRange_CovS(x) ((int32_t)((x / 0.0078125) + 32000))
// signal: @AngularRateMeasurementLatency
#define AngularRateMeasurementLatency_CovFactor 0.5
#define AngularRateMeasurementLatency_CovS(x) ((uint8_t)((x / 0.5)))
typedef struct
{

  // Pitch rate is the rate-of-change of the pitch angle over time, where the pitch angle vector is in the direction of travel of the ...
  int32_t PitchRateExRange;                //      Bits=16.  [ -250  , 250.992 ]  Unit:'deg/sec' Offset= -250      Factor= 0.0078125

  // Roll rate is the rate-of-change of the roll angle over time.  The roll rate for increasing roll to the right is reported with a ...
  int32_t RollRateExRange;                 //      Bits=16.  [ -250  , 250.992 ]  Unit:'deg/sec' Offset= -250      Factor= 0.0078125

  // Yaw rate is the rate-of-change of the yaw angle over time.  A positive yaw rate signal results when the object turns ...
  int32_t YawRateExRange;                  //      Bits=16.  [ -250  , 250.992 ]  Unit:'deg/sec' Offset= -250      Factor= 0.0078125

  // Figure of merit for pitch rate measurement.
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "Pitch rate degraded Data is suspect due to environmental conditions" 
  // 0 - "Pitch rate fully functional Data is within sensor specification" 

  uint8_t PitchRateExRangeFigureOfMerit;   //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Figure of merit for roll rate measurement.
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "Roll rate degraded Data is suspect due to environmental conditions" 
  // 0 - "Roll rate fully functional Data is within sensor specification" 

  uint8_t RollRateExRangeFigureOfMerit;    //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Figure of merit for yaw angle measurement.
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "Yaw rate degraded Data is suspect due to environmental conditions" 
  // 0 - "Yaw rate fully functional Data is within sensor specification" 

  uint8_t YawRateExRangeFigureOfMerit;     //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // The estimated measurement latency of the measurement.
  uint8_t AngularRateMeasurementLatency;   //      Bits=08.  [ 0     , 125    ]  Unit:'ms'    Factor= 0.5   
  uint32_t framecnt;
} ARI_t;

// def @ASC5 CAN Message (217995262)
#define ASC5_IDE (1U)
#define ASC5_DLC (8U)
#define ASC5_CANID (0xCFE57FEU)
#define ASC5_CYC (100U)
// -- Used for damper stiffness information ...
// signal: @DamperStiffnessFrontAxle
#define DamperStiffnessFrontAxle_CovFactor 0.4
#define DamperStiffnessFrontAxle_CovS(x) ((uint8_t)((x / 0.4)))
// signal: @DamperStiffnessRearAxle
#define DamperStiffnessRearAxle_CovFactor 0.4
#define DamperStiffnessRearAxle_CovS(x) ((uint8_t)((x / 0.4)))
// signal: @DamperStiffnessLift_TagAxle
#define DamperStiffnessLift_TagAxle_CovFactor 0.4
#define DamperStiffnessLift_TagAxle_CovS(x) ((uint8_t)((x / 0.4)))
typedef struct
{

  // Damper stiffness information of the shock absorber control at the front axle ...
  uint8_t DamperStiffnessFrontAxle;           //      Bits=08.  [ 0     , 100    ]  Unit:'%'     Factor= 0.4   

  // Damper stiffness information of the shock absorber control at the rear axle ...
  uint8_t DamperStiffnessRearAxle;            //      Bits=08.  [ 0     , 100    ]  Unit:'%'     Factor= 0.4   

  // Damper stiffness information of the shock absorber control at the lift of tag axle ...
  uint8_t DamperStiffnessLift_TagAxle;        //      Bits=08.  [ 0     , 100    ]  Unit:'%'     Factor= 0.4   

  // Signal which indicates the current mode of operation of the electronic shock absorber control at the front axle.
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "Normal operation dampers active" 
  // 0 - "Normal operation dampers passive" 

  uint8_t ElctrncShckAbsrbrCtrlMdFrontAxle;   //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Signal which indicates the current mode of operation of the electronic shock absorber control at the rear axle.
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "Normal operation dampers active" 
  // 0 - "Normal operation dampers passive" 

  uint8_t ElctrncShckAbsrbrCtrlMdeRearAxle;   //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Signal which indicates the current mode of operation of the electronic shock absorber control at the lift/tag axle.
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "Normal operation dampers active" 
  // 0 - "Normal operation dampers passive" 

  uint8_t ElctrncShckAbsrbrCtrlMdLft_TgAxl;   //      Bits=02.  [ 0     , 3      ]  Unit:''     
  uint32_t framecnt;
} ASC5_t;

// def @ASC1 CAN Message (217996030)
#define ASC1_IDE (1U)
#define ASC1_DLC (8U)
#define ASC1_CANID (0xCFE5AFEU)
#define ASC1_CYC (100U)
// -- Used for suspension control  information ...
typedef struct
{

  // Signal which indicates the nominal (desired) height of the front axle to be controlled by the suspension system.
  // 9 - "Raising" 
  // 10 - "Lowering" 
  // 15 - "Not available" 
  // 14 - "Error" 
  // 8 - "Not defined" 
  // 7 - "Lower Levelie the lowest level to be controlled" 
  // 6 - "Upper Levelie the highest level to be controlled" 
  // 5 - "Customer Levelie a level to be defined by customer via parameter setting" 
  // 4 - "Preset Levelie a level to be defined externally via CAN" 
  // 3 - "Normal Level 3ie a level permitted for driving for example to lift the vehicle in case of offroad" 
  // 2 - "Normal Level 2ie a level permitted for driving for example to lower the vehicle in case of high speed" 
  // 1 - "Normal Level 1ie the level prescribed for normal driving given by design" 
  // 0 - "Level not specifiedie the nominal level is none of the specified levels no error condition" 

  uint8_t NominalLevelFrontAxle;              //      Bits=04.  [ 0     , 15     ]  Unit:''     

  // Signal which indicates the nominal (desired) height of the rear axle to be controlled by the suspension system.
  // 9 - "Raising" 
  // 10 - "Lowering" 
  // 15 - "Not available" 
  // 14 - "Error" 
  // 8 - "Not defined" 
  // 7 - "Lower Levelie the lowest level to be controlled" 
  // 6 - "Upper Levelie the highest level to be controlled" 
  // 5 - "Customer Levelie a level to be defined by customer via parameter setting" 
  // 4 - "Preset Levelie a level to be defined externally via CAN" 
  // 3 - "Normal Level 3ie a level permitted for driving for example to lift the vehicle in case of offroad" 
  // 2 - "Normal Level 2ie a level permitted for driving for example to lower the vehicle in case of high speed" 
  // 1 - "Normal Level 1ie the level prescribed for normal driving given by design" 
  // 0 - "Level not specifiedie the nominal level is none of the specified levels no error condition" 

  uint8_t NominalLevelRearAxle;               //      Bits=04.  [ 0     , 15     ]  Unit:''     

  // Signal which indicates whether the actual height of the front axle is below the nominal (desired) level for the front axle. For ...
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "Below" 
  // 0 - "Not below" 

  uint8_t BelowNominalLevelFrontAxle;         //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Signal which indicates whether the actual height of the rear axle is below the nominal (desired) level for the rear axle. For ...
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "Below" 
  // 0 - "Not below" 

  uint8_t BelowNominalLevelRearAxle;          //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Signal which indicates whether the actual height of the front axle is above the nominal (desired) level of the front axle. For ...
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "Above" 
  // 0 - "Not above" 

  uint8_t AboveNominalLevelFrontAxle;         //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Signal which indicates whether the actual height of the rear axle is above the nominal (desired) level of the rear axle. For ...
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "Above" 
  // 0 - "Not above" 

  uint8_t AboveNominalLevelRearAxle;          //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Signal which indicates the actual lowering level change at the front axle ...
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "Lowering active" 
  // 0 - "Lowering not active" 

  uint8_t LoweringCtrlModeFrontAxle;          //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Signal which indicates the actual lowering level change at the rear axle ...
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "Lowering active" 
  // 0 - "Lowering not active" 

  uint8_t LoweringCtrlModeRearAxle;           //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Signal which indicates the actual lifting level change at the front axle ...
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "Lifting active" 
  // 0 - "Lifting not active" 

  uint8_t LiftingCtrlModeFrontAxle;           //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Signal which indicates the actual lifting level change at the rear axle ...
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "Lifting active" 
  // 0 - "Lifting not active" 

  uint8_t LiftingCtrlModeRearAxle;            //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Signal which indicates the actual level change in case of kneeling function ...
  // 15 - "Not available" 
  // 14 - "Error" 
  // 4 - "Kneeling abortedie in case of manual actuation the request was dropped before the kneeling level was reached" 
  // 3 - "Lifting activeie the vehicle is lifted due to a recover request" 
  // 2 - "Kneeling level reachedie the vehicle is at the fixed kneeling level" 
  // 0 - "Not activeie the kneeling function is not active" 

  uint8_t KneelingInformation;                //      Bits=04.  [ 0     , 15     ]  Unit:''     

  // Signal which indicates the actual control mode of the air suspension system ...
  // 11 - "Force to bumper level request is in effect" 
  // 10 - "Automatic air suspension control prohibited" 
  // 15 - "Not available" 
  // 14 - "Error" 
  // 9 - "Air suspension control prohibited  ie hold current pressures in all suspension devices" 
  // 8 - "Exhausting bellow function ie the bellows are exhausted totally" 
  // 7 - "Traction help  load reduce ie the driven axle load is reduced to normal load condition" 
  // 6 - "Optimum traction 2 ie the pressure at the driven axle is controlled at a fixed value 2" 
  // 5 - "Optimum traction 1 ie the pressure at the driven axle is controlled at a fixed value 1" 
  // 4 - "Pressure ratio 2 ie the ratio between the pressures at the driven axle and at the third axle is controlled so that" 
  // 3 - "Pressure ratio 1 ie the ratio between the pressures at the driven axle and at the third axle is controlled so that" 
  // 2 - "Load fixing ie the driven axlen is loaded to a value defined by the driver" 
  // 1 - "Traction help load transfer ie the driven axle is loaded to a maximum value given by legislation or design" 
  // 0 - "Normal operation ie the system performs a pure control of the vehicle height" 

  uint8_t LevelCtrlMode;                      //      Bits=04.  [ 0     , 15     ]  Unit:''     

  // The signal which indicates the status of the security device.  An example of a security device is a curbstone feeler ...
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "Active" 
  // 0 - "Not active" 

  uint8_t SecurityDevice;                     //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Signal which indicates whether vehicle motion is inhibited.
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "Vehicle motion is inhibited" 
  // 0 - "Vehicle may be moved" 

  uint8_t VehicleMotionInhibit;               //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Signal which indicates that the doors may be opened. [Please note: doors instead of door!] ...
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "Doors may be opened" 
  // 0 - "Doors may not be opened" 

  uint8_t DoorRelease;                        //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Signal which indicates the position / load condition of lift axle / tag axle #1.   Numbering of lift/tag axles starts at front axle.
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "Lift axle position up / tag axle unladen" 
  // 0 - "Lift axle position down / tag axle laden" 

  uint8_t LiftAxle1Pos;                       //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Signal which indicates that the vehicle height at the front axle (SPNs 1721 and 1722) is within the bumper range.
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "Actual level within bumper range" 
  // 0 - "Actual level out of bumper range" 

  uint8_t FrontAxleInBumperRange;             //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Signal which indicates that the vehicle height at the rear axle (SPNs 1723 and 1724) is within the bumper range.
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "Actual level within bumper range" 
  // 0 - "Actual level out of bumper range" 

  uint8_t RearAxleInBumperRange;              //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Signal which indicates the position / load condition of lift axle / tag axle #2.   Numbering of lift/tag axles starts at front axle.
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "Lift axle position up / tag axle unladen" 
  // 0 - "Lift axle position down / tag axle laden" 

  uint8_t LiftAxle2Pos;                       //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Signal which indicates that the suspension system is controlled by remote control #1. Remote control is an external unit to ...
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "Active" 
  // 0 - "Not active" 

  uint8_t SuspensionRemoteCtrl1;              //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Signal which indicates that the suspension system is controlled by remote control #2. Remote control is an external unit to ...
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "Active" 
  // 0 - "Not active" 

  uint8_t SuspensionRemoteCtrl2;              //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // This parameter indicates if the function Allow Level Control During Braking is active. Functions is activated by SPN 5293.
  // 3 - "Dont care/take no action" 
  // 2 - "Reserved" 
  // 1 - "Activate" 
  // 0 - "Deactivate" 

  uint8_t AllwLevelCtrlDuringBrakingStatus;   //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // This parameter indicates if the function Speed Dependant Level Control is active. The function is activated by SPN 5295.
  // 3 - "Dont care/take no action" 
  // 2 - "Reserved" 
  // 1 - "Active" 
  // 0 - "Inactive" 

  uint8_t SpeedDependantLevelCtrlStatus;      //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Signal which indicates that the air suspension control cannot perform a request due to the operating conditions. It also ...
  // 15 - "Not available" 
  // 14 - "Error" 
  // 8 - "1101 Not defined" 
  // 7 - "Requested level not available" 
  // 6 - "General reject Ie no specified reason applies" 
  // 5 - "Below speed limit" 
  // 4 - "Above speed limit" 
  // 3 - "Bogie differential not locked" 
  // 2 - "Would exceed axle load limit tag axle" 
  // 1 - "Axle load limit reached load transfer" 
  // 0 - "Actual request not refused" 

  uint8_t SuspensionCtrlRefusalInformation;   //      Bits=04.  [ 0     , 15     ]  Unit:''     

  // Signal which indicates that the air suspension control has memory levels selected or stored.
  // 15 - "not available" 
  // 14 - "Error indicator" 
  // 13 - "Memory level  5 stored" 
  // 12 - "Memory level  4 stored" 
  // 11 - "Memory level  3 stored" 
  // 10 - "Memory level  2 stored" 
  // 9 - "Memory level  1 stored" 
  // 8 - "reserved" 
  // 7 - "reserved" 
  // 6 - "reserved" 
  // 5 - "Memory level 5 selected" 
  // 4 - "Memory level 4 selected" 
  // 3 - "Memory level 3 selected" 
  // 2 - "Memory level 2 selected" 
  // 1 - "Memory level 1 selected" 
  // 0 - "No memory level" 

  uint8_t MemoryLevel;                        //      Bits=04.  [ 0     , 15     ]  Unit:''     
  uint32_t framecnt;
} ASC1_t;

// def @AGW CAN Message (352152318)
#define AGW_IDE (1U)
#define AGW_DLC (8U)
#define AGW_CANID (0x14FD6AFEU)
// -- Combination of specific axle group and the weight imposed on that axle group ...
// signal: @AxleGroupWeight
#define AxleGroupWeight_CovFactor 2
#define AxleGroupWeight_CovS(x) ((uint16_t)((x / 2)))
typedef struct
{

  // Specific axle group used in conjunction with and when communicating the axle group weight, listed from the front of the ...
  // 3 - "Trailer F axle group" 
  // 2 - "Trailer E axle group" 

  uint8_t AxleGroupLocation;             //      Bits=04.  [ 0     , 15     ]  Unit:''     

  // Total mass imposed on the road surface by all the tires in the axle group ...
  uint16_t AxleGroupWeight;              //      Bits=16.  [ 0     , 128510 ]  Unit:'kg'    Factor= 2     
  uint32_t framecnt;
} AGW_t;

// def @VDC2 CAN Message (418384382)
#define VDC2_IDE (1U)
#define VDC2_DLC (8U)
#define VDC2_CANID (0x18F009FEU)
#define VDC2_CYC (10U)
// -- Contains information which relates to the vehicle's movement.
// signal: @SteerWheelAngle
#define SteerWheelAngle_CovFactor 0.0009765625
#define SteerWheelAngle_CovS(x) ((int32_t)((x / 0.0009765625) + 32126))
// signal: @SteerWheelTurnCounter
#define SteerWheelTurnCounter_CovFactor 1
#define SteerWheelTurnCounter_CovS(x) ((int8_t)(x + 32))
// signal: @YawRate
#define YawRate_CovFactor 0.0001220703125
#define YawRate_CovS(x) ((int32_t)((x / 0.0001220703125) + 32112))
// signal: @LateralAcceleration
#define LateralAcceleration_CovFactor 0.00048828125
#define LateralAcceleration_CovS(x) ((int32_t)((x / 0.00048828125) + 32126))
// signal: @LongitudinalAcceleration
#define LongitudinalAcceleration_CovFactor 0.1
#define LongitudinalAcceleration_CovS(x) ((int16_t)((x / 0.1) + 125))
typedef struct
{

  // The main operator`s steering wheel angle (on the steering column, not the actual wheel angle).  The vehicle being ...
  int32_t SteerWheelAngle;               //      Bits=16.  [ -31.374, 31.374 ]  Unit:'rad'   Offset= -31.374   Factor= 0.0009765625

  // Indicates number of steering wheel turns, absolute position or relative position at ignition on. Positive values indicate left ...
  int8_t SteerWheelTurnCounter;          //      Bits=06.  [ -32   , 29     ]  Unit:'turns' Offset= -32      

  // Indicates whether the steering wheel angle sensor is capable of absolute measuring of the number of steering wheel ...
  // 3 - "Not Available" 
  // 2 - "Reserved" 
  // 1 - "Absolute measuring principle" 
  // 0 - "Relative measuring principle" 

  uint8_t SteerWheelAngleSensorType;     //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Indicates the rate of rotation about the vertical axis (i.e. the z-axis).  A positive yaw rate signal results when the vehicle ...
  int32_t YawRate;                       //      Bits=16.  [ -3.92 , 3.92   ]  Unit:'rad/s' Offset= -3.92     Factor= 0.0001220703125

  // Indicates a lateral acceleration of the vehicle (the component of vehicle acceleration vector along the Y-axis). A positive ...
  int32_t LateralAcceleration;           //      Bits=16.  [ -15.687, 15.687 ]  Unit:'m/s?'  Offset= -15.687   Factor= 0.00048828125

  // Indicates the longitudinal acceleration of the vehicle. A positive longitudinal acceleration signal results when the vehicle ...
  int16_t LongitudinalAcceleration;      //      Bits=08.  [ -12.5 , 12.5   ]  Unit:'m/s?'  Offset= -12.5     Factor= 0.1   
  uint32_t framecnt;
} VDC2_t;

// def @SAS CAN Message (418389502)
#define SAS_IDE (1U)
#define SAS_DLC (8U)
#define SAS_CANID (0x18F01DFEU)
#define SAS_CYC (10U)
// -- Contains information which relates to a steering angle sensor.
// signal: @SteerWheelAngle
#define SteerWheelAngle_CovFactor 0.0009765625
#define SteerWheelAngle_CovS(x) ((int32_t)((x / 0.0009765625) + 32126))
// signal: @SteerWheelAngleRangeCounter
#define SteerWheelAngleRangeCounter_CovFactor 1
#define SteerWheelAngleRangeCounter_CovS(x) ((int8_t)(x + 32))
// signal: @SteerWheelAngleRange
#define SteerWheelAngleRange_CovFactor 0.0009765625
#define SteerWheelAngleRange_CovS(x) ((int32_t)((x / 0.0009765625) + 32126))
typedef struct
{

  // The main operator`s steering wheel angle (on the steering column, not the actual wheel angle). The vehicle being steered ...
  int32_t SteerWheelAngle;                   //      Bits=16.  [ -31.374, 31.374 ]  Unit:'rad'   Offset= -31.374   Factor= 0.0009765625

  // The signal indicates the number of steering wheel angle range overflows if the operating range of steering wheel is ...
  int8_t SteerWheelAngleRangeCounter;        //      Bits=06.  [ -32   , 29     ]  Unit:'ranges' Offset= -32      

  // The signal indicates whether the steering wheel angle sensor is capable of absolute measuring of the number of steering ...
  // 3 - "signal not available" 
  // 2 - "not defined" 
  // 1 - "absolute number of counts" 
  // 0 - "relative number of counts" 

  uint8_t SteerWheelAngleRangeCounterType;   //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // The signal indicates the range of  the steering wheel angle the sensor element is capable to measure. The steering wheel ...
  int32_t SteerWheelAngleRange;              //      Bits=16.  [ -31.374, 31.374 ]  Unit:'rad'   Offset= -31.374   Factor= 0.0009765625

  // This signal indicates the operational mode of the steering angle sensor.
  // 3 - "Not available" 
  // 2 - "Reserved" 
  // 1 - "Normal mode active" 
  // 0 - "Programming mode active" 

  uint8_t SteerAngleSensorActiveMode;        //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // This signal indicates the calibration status of the steering angle sensor.
  // 3 - "Not available" 
  // 2 - "Reserved" 
  // 1 - "SAS calibrated" 
  // 0 - "SAS not calibrated" 

  uint8_t SteerAngleSensorCalibrated;        //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // The message counter is to verify the signal path from the demanding device to the steering controller.  The support of this ...
  uint8_t MessageCounter;                    //      Bits=04.  [ 0     , 15     ]  Unit:''     

  // The message checksum is used to verify the signal path from the demanding device to the steering controller.  The ...
  uint8_t MessageChecksum;                   //      Bits=04.  [ 0     , 15     ]  Unit:''     
  uint32_t framecnt;
} SAS_t;

// def @ASC4 CAN Message (419322110)
#define ASC4_IDE (1U)
#define ASC4_DLC (8U)
#define ASC4_CANID (0x18FE58FEU)
#define ASC4_CYC (100U)
// -- Used for bellow pressure information ...
// signal: @BellowPressFrontAxleLeft
#define BellowPressFrontAxleLeft_CovFactor 0.1
#define BellowPressFrontAxleLeft_CovS(x) ((uint16_t)((x / 0.1)))
// signal: @BellowPressFrontAxleRight
#define BellowPressFrontAxleRight_CovFactor 0.1
#define BellowPressFrontAxleRight_CovS(x) ((uint16_t)((x / 0.1)))
// signal: @BellowPressRearAxleLeft
#define BellowPressRearAxleLeft_CovFactor 0.1
#define BellowPressRearAxleLeft_CovS(x) ((uint16_t)((x / 0.1)))
// signal: @BellowPressRearAxleRight
#define BellowPressRearAxleRight_CovFactor 0.1
#define BellowPressRearAxleRight_CovS(x) ((uint16_t)((x / 0.1)))
typedef struct
{

  // Information of the pressure of the air suspension bellow at the left side of the front axle ...
  uint16_t BellowPressFrontAxleLeft;     //      Bits=16.  [ 0     , 6425.5 ]  Unit:'kPa'   Factor= 0.1   

  // Information of the pressure of the air suspension bellow at the right side of the front axle ...
  uint16_t BellowPressFrontAxleRight;    //      Bits=16.  [ 0     , 6425.5 ]  Unit:'kPa'   Factor= 0.1   

  // Information of the pressure of the air suspension bellow at the left side of the rear axle ...
  uint16_t BellowPressRearAxleLeft;      //      Bits=16.  [ 0     , 6425.5 ]  Unit:'kPa'   Factor= 0.1   

  // Information of the pressure of the air suspension bellow at the right side of the rear axle ...
  uint16_t BellowPressRearAxleRight;     //      Bits=16.  [ 0     , 6425.5 ]  Unit:'kPa'   Factor= 0.1   
  uint32_t framecnt;
} ASC4_t;

// def @ASC3 CAN Message (419322366)
#define ASC3_IDE (1U)
#define ASC3_DLC (8U)
#define ASC3_CANID (0x18FE59FEU)
#define ASC3_CYC (100U)
// -- Used for height information ...
// signal: @RelativeLevelFrontAxleLeft
#define RelativeLevelFrontAxleLeft_CovFactor 0.1
#define RelativeLevelFrontAxleLeft_CovS(x) ((int32_t)((x / 0.1) + 32000))
// signal: @RelativeLevelFrontAxleRight
#define RelativeLevelFrontAxleRight_CovFactor 0.1
#define RelativeLevelFrontAxleRight_CovS(x) ((int32_t)((x / 0.1) + 32000))
// signal: @RelativeLevelRearAxleLeft
#define RelativeLevelRearAxleLeft_CovFactor 0.1
#define RelativeLevelRearAxleLeft_CovS(x) ((int32_t)((x / 0.1) + 32000))
// signal: @RelativeLevelRearAxleRight
#define RelativeLevelRearAxleRight_CovFactor 0.1
#define RelativeLevelRearAxleRight_CovS(x) ((int32_t)((x / 0.1) + 32000))
typedef struct
{

  // Information of the height at the left side of the front axle referred to normal level 1.  For explanations of normal level 1 see SPN 1734 - Nominal Level Front Axle.
  int32_t RelativeLevelFrontAxleLeft;    //      Bits=16.  [ -3200 , 3225.5 ]  Unit:'mm'    Offset= -3200     Factor= 0.1   

  // Information of the height at the right side of the front axle referred to normal level 1.  For explanations of normal level 1 ...
  int32_t RelativeLevelFrontAxleRight;   //      Bits=16.  [ -3200 , 3225.5 ]  Unit:'mm'    Offset= -3200     Factor= 0.1   

  // Information of the height at the left side of the rear axle referred to normal level 1.  For explanations of normal level 1 see ...
  int32_t RelativeLevelRearAxleLeft;     //      Bits=16.  [ -3200 , 3225.5 ]  Unit:'mm'    Offset= -3200     Factor= 0.1   

  // Information of the height at the left side of the rear axle referred to normal level 1.  For explanations of normal level 1 see ...
  int32_t RelativeLevelRearAxleRight;    //      Bits=16.  [ -3200 , 3225.5 ]  Unit:'mm'    Offset= -3200     Factor= 0.1   
  uint32_t framecnt;
} ASC3_t;

// def @RGE22 CAN Message (419323134)
#define RGE22_IDE (1U)
#define RGE22_DLC (8U)
#define RGE22_CANID (0x18FE5CFEU)
#define RGE22_CYC (100U)
// -- ISO 11992: Towed vehicle message, running gear equipment #2/2
// signal: @RelVehBodyLevelFrontAxle
#define RelVehBodyLevelFrontAxle_CovFactor 1
#define RelVehBodyLevelFrontAxle_CovS(x) ((int32_t)(x + 32000))
typedef struct
{

  // Actual relative vehicle body height.
  int32_t RelVehBodyLevelFrontAxle;      //      Bits=16.  [ -32000, 32255  ]  Unit:'mm'    Offset= -32000   

  // Actual relative vehicle body height.
  uint16_t RelVehBodyLevelRearAxle;      //      Bits=16.  [ 0     , 64255  ]  Unit:'mm'   
  uint32_t framecnt;
} RGE22_t;

// def @GPM16 CAN Message (419325438)
#define GPM16_IDE (1U)
#define GPM16_DLC (8U)
#define GPM16_CANID (0x18FE65FEU)
#define GPM16_CYC (100U)
// -- ISO 11992: Towing vehicle message, general purpose message #1/6
// signal: @AmbientAirTemperature
#define AmbientAirTemperature_CovFactor 0.03125
#define AmbientAirTemperature_CovS(x) ((int32_t)((x / 0.03125) + 8736))
typedef struct
{

  // Temperature of air surrounding vehicle.
  int32_t AmbientAirTemperature;         //      Bits=16.  [ -273  , 1735   ]  Unit:'?C'    Offset= -273      Factor= 0.03125
  uint32_t framecnt;
} GPM16_t;

// def @VDHR CAN Message (419348990)
#define VDHR_IDE (1U)
#define VDHR_DLC (8U)
#define VDHR_CANID (0x18FEC1FEU)
#define VDHR_CYC (1000U)
// signal: @HghRsolutionTotalVehicleDistance
#define HghRsolutionTotalVehicleDistance_CovFactor 5
#define HghRsolutionTotalVehicleDistance_CovS(x) ((uint32_t)((x / 5)))
// signal: @HighResolutionTripDistance
#define HighResolutionTripDistance_CovFactor 5
#define HighResolutionTripDistance_CovS(x) ((uint32_t)((x / 5)))
typedef struct
{

  // Accumulated distance traveled by the vehicle during its operation.
  uint32_t HghRsolutionTotalVehicleDistance;  //      Bits=32.  [ 0     , 21055406 ]  Unit:'km'    Factor= 5     

  // Distance traveled during all or part of a journey.
  uint32_t HighResolutionTripDistance;        //      Bits=32.  [ 0     , 21055406 ]  Unit:'km'    Factor= 5     
  uint32_t framecnt;
} VDHR_t;

// def @VD CAN Message (419356926)
#define VD_IDE (1U)
#define VD_DLC (8U)
#define VD_CANID (0x18FEE0FEU)
#define VD_CYC (100U)
// signal: @TripDistance
#define TripDistance_CovFactor 0.125
#define TripDistance_CovS(x) ((uint32_t)((x / 0.125)))
// signal: @TotalVehicleDistance
#define TotalVehicleDistance_CovFactor 0.125
#define TotalVehicleDistance_CovS(x) ((uint32_t)((x / 0.125)))
typedef struct
{

  // Distance traveled during all or part of a journey.
  uint32_t TripDistance;                 //      Bits=32.  [ 0     , 526385151.9 ]  Unit:'km'    Factor= 0.125 

  // Accumulated distance traveled by vehicle during its operation.
  uint32_t TotalVehicleDistance;         //      Bits=32.  [ 0     , 526385151.9 ]  Unit:'km'    Factor= 0.125 
  uint32_t framecnt;
} VD_t;

// def @VP CAN Message (419361790)
#define VP_IDE (1U)
#define VP_DLC (8U)
#define VP_CANID (0x18FEF3FEU)
#define VP_CYC (5000U)
// signal: @Latitude
#define Latitude_CovFactor 1E-07
#define Latitude_CovS(x) ((int64_t)((x / 1E-07) + 2100000000))
// signal: @Longitude
#define Longitude_CovFactor 1E-07
#define Longitude_CovS(x) ((int64_t)((x / 1E-07) + 2100000000))
typedef struct
{

  // Latitude position of the vehicle.
  int64_t Latitude;                      //      Bits=32.  [ -210  , 211.1008122 ]  Unit:'deg'   Offset= -210      Factor= 1E-07 

  // Longitude position of the vehicle.
  int64_t Longitude;                     //      Bits=32.  [ -210  , 211.1008122 ]  Unit:'deg'   Offset= -210      Factor= 1E-07 
  uint32_t framecnt;
} VP_t;

// def @AGCW CAN Message (486369790)
#define AGCW_IDE (1U)
#define AGCW_DLC (8U)
#define AGCW_CANID (0x1CFD69FEU)
// -- Indicates axle group calibration weights ...
// signal: @AxleGroupEmptyWeightCalib
#define AxleGroupEmptyWeightCalib_CovFactor 2
#define AxleGroupEmptyWeightCalib_CovS(x) ((uint16_t)((x / 2)))
// signal: @AxleGroupFullWeightCalib
#define AxleGroupFullWeightCalib_CovFactor 2
#define AxleGroupFullWeightCalib_CovS(x) ((uint16_t)((x / 2)))
typedef struct
{

  // Specific axle group used in conjunction with and when communicating the axle group calibration, listed from the front of ...
  // 3 - "Trailer F axle group" 
  // 2 - "Trailer E axle group" 

  uint8_t AxleGroupLocation;             //      Bits=04.  [ 0     , 15     ]  Unit:''     

  // The empty weight calibration measurement of an axle group ...
  uint16_t AxleGroupEmptyWeightCalib;    //      Bits=16.  [ 0     , 128510 ]  Unit:'kg'    Factor= 2     

  // The full weight calibration measurement of an axle group ...
  uint16_t AxleGroupFullWeightCalib;     //      Bits=16.  [ 0     , 128510 ]  Unit:'kg'    Factor= 2     
  uint32_t framecnt;
} AGCW_t;

// def @TP1 CAN Message (486439166)
#define TP1_IDE (1U)
#define TP1_DLC (8U)
#define TP1_CANID (0x1CFE78FEU)
typedef struct
{

  // The interval at which the system will check the tire pressures (e.g., 5, 10, 15 min.).
  uint8_t TirePressCheckInterval;             //      Bits=08.  [ 0     , 250    ]  Unit:'mins' 

  // Indicates the functional mode of steer channel of the tire pressure control system.
  // 15 - "Not available" 
  // 14 - "Error Condition" 
  // 6 - "Pressure Check" 
  // 5 - "Deflate Wait  System will deflate when conditions allow" 
  // 4 - "Inflate Wait  System will inflate when conditions allow" 
  // 3 - "Confirm" 
  // 2 - "Deflate" 
  // 1 - "Inflate" 
  // 0 - "Maintain" 

  uint8_t SteerChannelMode;                   //      Bits=04.  [ 0     , 15     ]  Unit:''     

  // Indicates the functional mode of trailer/tag channel of the tire pressure control system.
  // 15 - "Not available" 
  // 14 - "Error Condition" 
  // 6 - "Pressure Check" 
  // 5 - "Deflate Wait  System will deflate when conditions allow" 
  // 4 - "Inflate Wait  System will inflate when conditions allow" 
  // 3 - "Confirm" 
  // 2 - "Deflate" 
  // 1 - "Inflate" 
  // 0 - "Maintain" 

  uint8_t Trailer_tagChannelMode;             //      Bits=04.  [ 0     , 15     ]  Unit:''     

  // Indicates the functional mode of trailer/tag channel of the tire pressure control system.
  // 15 - "Not available" 
  // 14 - "Error Condition" 
  // 6 - "Pressure Check" 
  // 5 - "Deflate Wait  System will deflate when conditions allow" 
  // 4 - "Inflate Wait  System will inflate when conditions allow" 
  // 3 - "Confirm" 
  // 2 - "Deflate" 
  // 1 - "Inflate" 
  // 0 - "Maintain" 

  uint8_t DriveChannelMode;                   //      Bits=04.  [ 0     , 15     ]  Unit:''     

  // Current state of the drive solenoid used to implement a tire pressure control system in its pneumatic control unit (PCU).
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "On" 
  // 0 - "Off" 

  uint8_t PCUDriveSolenoidStatus;             //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Current state of the steer solenoid used to implement a tire pressure control system in its pneumatic control unit (PCU).
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "On" 
  // 0 - "Off" 

  uint8_t PCUSteerSolenoidStatus;             //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Current state of an open/closed type switch used to determine if adequate pressure exists for system implementation.
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "On" 
  // 0 - "Off" 

  uint8_t TirePressSupplySwitchStatus;        //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Current state of the deflate solenoid used to implement a tire pressure control system in its pneumatic control unit (PCU).
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "On" 
  // 0 - "Off" 

  uint8_t PCUDeflateSolenoidStatus;           //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Current state of the control solenoid used to implement a tire pressure control system in its pneumatic control unit (PCU).
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "On" 
  // 0 - "Off" 

  uint8_t PCUCtrlSolenoidStatus;              //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Current state of the supply solenoid used to implement a tire pressure control system in its pneumatic control unit (PCU).
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "On" 
  // 0 - "Off" 

  uint8_t PCUSupplySolenoidStatus;            //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Current state of the trailer, tag, or push solenoid used to implement a tire pressure control system in its pneumatic control ...
  // 3 - "Not available" 
  // 2 - "Error" 
  // 1 - "On" 
  // 0 - "Off" 

  uint8_t PCUTrilerTagOrPushSolenoidStatus;   //      Bits=02.  [ 0     , 3      ]  Unit:''     
  uint32_t framecnt;
} TP1_t;

// def @TP2 CAN Message (486439422)
#define TP2_IDE (1U)
#define TP2_DLC (8U)
#define TP2_CANID (0x1CFE79FEU)
// signal: @TrlrTgOrPshChnnelTirePressTarget
#define TrlrTgOrPshChnnelTirePressTarget_CovFactor 0.5
#define TrlrTgOrPshChnnelTirePressTarget_CovS(x) ((uint16_t)((x / 0.5)))
// signal: @DriveChannelTirePressTarget
#define DriveChannelTirePressTarget_CovFactor 0.5
#define DriveChannelTirePressTarget_CovS(x) ((uint16_t)((x / 0.5)))
// signal: @SteerChannelTirePressTarget
#define SteerChannelTirePressTarget_CovFactor 0.5
#define SteerChannelTirePressTarget_CovS(x) ((uint16_t)((x / 0.5)))
typedef struct
{

  // The tire pressure control system?s target gage pressure for the trailer, tag, or push group of tires.
  uint16_t TrlrTgOrPshChnnelTirePressTarget;  //      Bits=16.  [ 0     , 32127.5 ]  Unit:'kPa'   Factor= 0.5   

  // The tire pressure control system?s target gage pressure for the drive group of tires.
  uint16_t DriveChannelTirePressTarget;       //      Bits=16.  [ 0     , 32127.5 ]  Unit:'kPa'   Factor= 0.5   

  // The tire pressure control system?s target gage pressure for the steer group of tires.
  uint16_t SteerChannelTirePressTarget;       //      Bits=16.  [ 0     , 32127.5 ]  Unit:'kPa'   Factor= 0.5   
  uint32_t framecnt;
} TP2_t;

// def @TP3 CAN Message (486439678)
#define TP3_IDE (1U)
#define TP3_DLC (8U)
#define TP3_CANID (0x1CFE7AFEU)
// signal: @TrailerTagOrPushChannelTirePress
#define TrailerTagOrPushChannelTirePress_CovFactor 0.5
#define TrailerTagOrPushChannelTirePress_CovS(x) ((uint16_t)((x / 0.5)))
// signal: @DriveChannelTirePress
#define DriveChannelTirePress_CovFactor 0.5
#define DriveChannelTirePress_CovS(x) ((uint16_t)((x / 0.5)))
// signal: @SteerChannelTirePress
#define SteerChannelTirePress_CovFactor 0.5
#define SteerChannelTirePress_CovS(x) ((uint16_t)((x / 0.5)))
typedef struct
{

  // The latest gage pressure reading of the trailer, tag, or push group of tires, as opposed to the pressure in each tire.
  uint16_t TrailerTagOrPushChannelTirePress;  //      Bits=16.  [ 0     , 32127.5 ]  Unit:'kPa'   Factor= 0.5   

  // The latest gage pressure reading of the drive group of tires, as opposed to the pressure in each tire.
  uint16_t DriveChannelTirePress;             //      Bits=16.  [ 0     , 32127.5 ]  Unit:'kPa'   Factor= 0.5   

  // The latest gage pressure reading of the steer group of tires, as opposed to the pressure in each tire.
  uint16_t SteerChannelTirePress;             //      Bits=16.  [ 0     , 32127.5 ]  Unit:'kPa'   Factor= 0.5   
  uint32_t framecnt;
} TP3_t;

uint32_t Unpack_HRW_AdasDbc(HRW_t* _m, const uint8_t* _d);
uint32_t Pack_HRW_AdasDbc(const HRW_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_SRASI_AdasDbc(SRASI_t* _m, const uint8_t* _d);
uint32_t Pack_SRASI_AdasDbc(const SRASI_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_ASC6_AdasDbc(ASC6_t* _m, const uint8_t* _d);
uint32_t Pack_ASC6_AdasDbc(const ASC6_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_ASC2_AdasDbc(ASC2_t* _m, const uint8_t* _d);
uint32_t Pack_ASC2_AdasDbc(const ASC2_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_SSI_AdasDbc(SSI_t* _m, const uint8_t* _d);
uint32_t Pack_SSI_AdasDbc(const SSI_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_SSI2_AdasDbc(SSI2_t* _m, const uint8_t* _d);
uint32_t Pack_SSI2_AdasDbc(const SSI2_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_ARI_AdasDbc(ARI_t* _m, const uint8_t* _d);
uint32_t Pack_ARI_AdasDbc(const ARI_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_ASC5_AdasDbc(ASC5_t* _m, const uint8_t* _d);
uint32_t Pack_ASC5_AdasDbc(const ASC5_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_ASC1_AdasDbc(ASC1_t* _m, const uint8_t* _d);
uint32_t Pack_ASC1_AdasDbc(const ASC1_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_AGW_AdasDbc(AGW_t* _m, const uint8_t* _d);
uint32_t Pack_AGW_AdasDbc(const AGW_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_VDC2_AdasDbc(VDC2_t* _m, const uint8_t* _d);
uint32_t Pack_VDC2_AdasDbc(const VDC2_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_SAS_AdasDbc(SAS_t* _m, const uint8_t* _d);
uint32_t Pack_SAS_AdasDbc(const SAS_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_ASC4_AdasDbc(ASC4_t* _m, const uint8_t* _d);
uint32_t Pack_ASC4_AdasDbc(const ASC4_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_ASC3_AdasDbc(ASC3_t* _m, const uint8_t* _d);
uint32_t Pack_ASC3_AdasDbc(const ASC3_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_RGE22_AdasDbc(RGE22_t* _m, const uint8_t* _d);
uint32_t Pack_RGE22_AdasDbc(const RGE22_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_GPM16_AdasDbc(GPM16_t* _m, const uint8_t* _d);
uint32_t Pack_GPM16_AdasDbc(const GPM16_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_VDHR_AdasDbc(VDHR_t* _m, const uint8_t* _d);
uint32_t Pack_VDHR_AdasDbc(const VDHR_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_VD_AdasDbc(VD_t* _m, const uint8_t* _d);
uint32_t Pack_VD_AdasDbc(const VD_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_VP_AdasDbc(VP_t* _m, const uint8_t* _d);
uint32_t Pack_VP_AdasDbc(const VP_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_AGCW_AdasDbc(AGCW_t* _m, const uint8_t* _d);
uint32_t Pack_AGCW_AdasDbc(const AGCW_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_TP1_AdasDbc(TP1_t* _m, const uint8_t* _d);
uint32_t Pack_TP1_AdasDbc(const TP1_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_TP2_AdasDbc(TP2_t* _m, const uint8_t* _d);
uint32_t Pack_TP2_AdasDbc(const TP2_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_TP3_AdasDbc(TP3_t* _m, const uint8_t* _d);
uint32_t Pack_TP3_AdasDbc(const TP3_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);

#ifdef __cplusplus
}
#endif

