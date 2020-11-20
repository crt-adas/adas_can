
// this file were genereted by coderdbc.com web service
// any questions - mailto:coderdbc@gmail.com

#pragma once


#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

// This file must define:
// base monitor struct
// function signature for CRC calculation
// function signature for getting system tick value (100 us step)
#include "canmonitorutil.h"



// def @SteeringColumnAssistant CAN Message (419365072)
#define SteeringColumnAssistant_IDE (1U)
#define SteeringColumnAssistant_DLC (8U)
#define SteeringColumnAssistant_CANID (0x18FF00D0U)
// signal: @CurrentSteeringWheelPosition
#define SteeringColumnAssistant_CurrentSteeringWheelPosition_CovFactor (0.001)
// conversion value to CAN signal
#define SteeringColumnAssistant_CurrentSteeringWheelPosition_toS(x) ((int16_t)(x / 0.001))
// conversion value from CAN signal
#define SteeringColumnAssistant_CurrentSteeringWheelPosition_fromS(x) (x * 0.001)

// signal: @RequiredSteeringWheelPosition1
#define SteeringColumnAssistant_RequiredSteeringWheelPosition1_CovFactor (0.001)
// conversion value to CAN signal
#define SteeringColumnAssistant_RequiredSteeringWheelPosition1_toS(x) ((int16_t)(x / 0.001))
// conversion value from CAN signal
#define SteeringColumnAssistant_RequiredSteeringWheelPosition1_fromS(x) (x * 0.001)

// signal: @RequiredSteeringWheelPosition2
#define SteeringColumnAssistant_RequiredSteeringWheelPosition2_CovFactor (0.001)
// conversion value to CAN signal
#define SteeringColumnAssistant_RequiredSteeringWheelPosition2_toS(x) ((int16_t)(x / 0.001))
// conversion value from CAN signal
#define SteeringColumnAssistant_RequiredSteeringWheelPosition2_fromS(x) (x * 0.001)

// signal: @PredictedSteeringWheelPosition
#define SteeringColumnAssistant_PredictedSteeringWheelPosition_CovFactor (0.001)
// conversion value to CAN signal
#define SteeringColumnAssistant_PredictedSteeringWheelPosition_toS(x) ((int16_t)(x / 0.001))
// conversion value from CAN signal
#define SteeringColumnAssistant_PredictedSteeringWheelPosition_fromS(x) (x * 0.001)

typedef struct
{

  int16_t CurrentSteeringWheelPosition;        //  [-] Bits=16.  [ -32.768, 32.767 ]  Unit:'rad'   Factor= 0.001 

  int16_t RequiredSteeringWheelPosition1;      //  [-] Bits=16.  [ -32.768, 32.767 ]  Unit:'rad'   Factor= 0.001 

  int16_t RequiredSteeringWheelPosition2;      //  [-] Bits=16.  [ -32.768, 32.767 ]  Unit:'rad'   Factor= 0.001 

  int16_t PredictedSteeringWheelPosition;      //  [-] Bits=16.  [ -32.768, 32.767 ]  Unit:'rad'   Factor= 0.001 
} SteeringColumnAssistant_t;

// def @BusLocation CAN Message (419365328)
#define BusLocation_IDE (1U)
#define BusLocation_DLC (8U)
#define BusLocation_CANID (0x18FF01D0U)
// signal: @LocalPosBusX
#define BusLocation_LocalPosBusX_CovFactor (0.2)
// conversion value to CAN signal
#define BusLocation_LocalPosBusX_toS(x) ((uint8_t)(x / 0.2))
// conversion value from CAN signal
#define BusLocation_LocalPosBusX_fromS(x) (x * 0.2)

// signal: @LocalPosBusY
#define BusLocation_LocalPosBusY_CovFactor (0.2)
// conversion value to CAN signal
#define BusLocation_LocalPosBusY_toS(x) ((uint8_t)(x / 0.2))
// conversion value from CAN signal
#define BusLocation_LocalPosBusY_fromS(x) (x * 0.2)

// signal: @CurrentVehicleSpeed
#define BusLocation_CurrentVehicleSpeed_CovFactor (0.25)
// conversion value to CAN signal
#define BusLocation_CurrentVehicleSpeed_toS(x) ((int8_t)(x / 0.25))
// conversion value from CAN signal
#define BusLocation_CurrentVehicleSpeed_fromS(x) (x * 0.25)

// signal: @RequiredVehicleSpeed
#define BusLocation_RequiredVehicleSpeed_CovFactor (0.25)
// conversion value to CAN signal
#define BusLocation_RequiredVehicleSpeed_toS(x) ((int8_t)(x / 0.25))
// conversion value from CAN signal
#define BusLocation_RequiredVehicleSpeed_fromS(x) (x * 0.25)

// signal: @CurrentSWAngularVelocity
#define BusLocation_CurrentSWAngularVelocity_CovFactor (0.005)
// conversion value to CAN signal
#define BusLocation_CurrentSWAngularVelocity_toS(x) ((int8_t)(x / 0.005))
// conversion value from CAN signal
#define BusLocation_CurrentSWAngularVelocity_fromS(x) (x * 0.005)

// signal: @RequiredSWAngularVelocity
#define BusLocation_RequiredSWAngularVelocity_CovFactor (0.005)
// conversion value to CAN signal
#define BusLocation_RequiredSWAngularVelocity_toS(x) ((int8_t)(x / 0.005))
// conversion value from CAN signal
#define BusLocation_RequiredSWAngularVelocity_fromS(x) (x * 0.005)

// signal: @CurrentVehicleOrientation
#define BusLocation_CurrentVehicleOrientation_CovFactor (0.5)
// conversion value to CAN signal
#define BusLocation_CurrentVehicleOrientation_toS(x) ((int8_t)(x / 0.5))
// conversion value from CAN signal
#define BusLocation_CurrentVehicleOrientation_fromS(x) (x * 0.5)

typedef struct
{

  // No required signals from Vehicle
  uint8_t DiagVehicle;                      //      Bits=01.  [ 0     , 1      ]  Unit:''     

  // No required signal from positioning system
  uint8_t DiagLocation;                     //      Bits=01.  [ 0     , 1      ]  Unit:''     

  // Internal model system error
  uint8_t DiagModel;                        //      Bits=01.  [ 0     , 1      ]  Unit:''     

  uint8_t LocalPosBusX;                     //      Bits=08.  [ 0     , 51     ]  Unit:'m'     Factor= 0.2   

  uint8_t LocalPosBusY;                     //      Bits=08.  [ 0     , 51     ]  Unit:'m'     Factor= 0.2   

  int8_t CurrentVehicleSpeed;               //  [-] Bits=08.  [ -32   , 31.75  ]  Unit:'km/h'  Factor= 0.25  

  int8_t RequiredVehicleSpeed;              //  [-] Bits=08.  [ -32   , 31.75  ]  Unit:'km/h'  Factor= 0.25  

  int8_t CurrentSWAngularVelocity;          //  [-] Bits=08.  [ -0.64 , 0.635  ]  Unit:'rad/s' Factor= 0.005 

  int8_t RequiredSWAngularVelocity;         //  [-] Bits=08.  [ -0.64 , 0.635  ]  Unit:'rad/s' Factor= 0.005 

  int8_t CurrentVehicleOrientation;         //  [-] Bits=08.  [ -64   , 63.5   ]  Unit:'?'     Factor= 0.5   
} BusLocation_t;

uint32_t Unpack_SteeringColumnAssistant_PP_to_SBC_ADAS(SteeringColumnAssistant_t* _m, const uint8_t* _d, uint8_t dlc_);
uint32_t Pack_SteeringColumnAssistant_PP_to_SBC_ADAS(const SteeringColumnAssistant_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_BusLocation_PP_to_SBC_ADAS(BusLocation_t* _m, const uint8_t* _d, uint8_t dlc_);
uint32_t Pack_BusLocation_PP_to_SBC_ADAS(const BusLocation_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);

#ifdef __cplusplus
}
#endif

