
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



// def @PropB_PS7_MotorsPower_Torque CAN Message (418449391)
#define PropB_PS7_MotorsPower_Torque_IDE (1U)
#define PropB_PS7_MotorsPower_Torque_DLC (8U)
#define PropB_PS7_MotorsPower_Torque_CANID (0x18F107EFU)
// signal: @TractionMotor1_ActualPower
#define PropB_PS7_MotorsPower_Torque_TractionMotor1_ActualPower_CovFactor (0.1)
// conversion value to CAN signal
#define PropB_PS7_MotorsPower_Torque_TractionMotor1_ActualPower_toS(x) ((int32_t)(x / 0.1 + 32765))
// conversion value from CAN signal
#define PropB_PS7_MotorsPower_Torque_TractionMotor1_ActualPower_fromS(x) (x * 0.1)

// signal: @TractionMotor2_ActualPower
#define PropB_PS7_MotorsPower_Torque_TractionMotor2_ActualPower_CovFactor (0.1)
// conversion value to CAN signal
#define PropB_PS7_MotorsPower_Torque_TractionMotor2_ActualPower_toS(x) ((int32_t)(x / 0.1 + 32765))
// conversion value from CAN signal
#define PropB_PS7_MotorsPower_Torque_TractionMotor2_ActualPower_fromS(x) (x * 0.1)

// signal: @TractionMotor1_ActualTorque
#define PropB_PS7_MotorsPower_Torque_TractionMotor1_ActualTorque_CovFactor (1)
// conversion value to CAN signal
#define PropB_PS7_MotorsPower_Torque_TractionMotor1_ActualTorque_toS(x) ((int32_t)(x + 32766))
// conversion value from CAN signal
#define PropB_PS7_MotorsPower_Torque_TractionMotor1_ActualTorque_fromS(x) (x)

// signal: @TractionMotor2_ActualTorque
#define PropB_PS7_MotorsPower_Torque_TractionMotor2_ActualTorque_CovFactor (1)
// conversion value to CAN signal
#define PropB_PS7_MotorsPower_Torque_TractionMotor2_ActualTorque_toS(x) ((int32_t)(x + 32766))
// conversion value from CAN signal
#define PropB_PS7_MotorsPower_Torque_TractionMotor2_ActualTorque_fromS(x) (x)

typedef struct
{

  int32_t TractionMotor1_ActualPower;       //      Bits=16.  [ -3276.6, 3276.9 ]  Unit:'kW'    Offset= -3276.6   Factor= 0.1   

  int32_t TractionMotor2_ActualPower;       //      Bits=16.  [ -3276.6, 3276.9 ]  Unit:'kW'    Offset= -3276.6   Factor= 0.1   

  int32_t TractionMotor1_ActualTorque;      //      Bits=16.  [ -32766, 32769  ]  Unit:'Nm'    Offset= -32766   

  int32_t TractionMotor2_ActualTorque;      //      Bits=16.  [ -32766, 32769  ]  Unit:'Nm'    Offset= -32766   
} PropB_PS7_MotorsPower_Torque_t;

// def @PropB_PS8_MotorsSpeed CAN Message (418449647)
#define PropB_PS8_MotorsSpeed_IDE (1U)
#define PropB_PS8_MotorsSpeed_DLC (8U)
#define PropB_PS8_MotorsSpeed_CANID (0x18F108EFU)
// signal: @TractionMotor1_ActualSpeed
#define PropB_PS8_MotorsSpeed_TractionMotor1_ActualSpeed_CovFactor (1)
// conversion value to CAN signal
#define PropB_PS8_MotorsSpeed_TractionMotor1_ActualSpeed_toS(x) ((int32_t)(x + 32766))
// conversion value from CAN signal
#define PropB_PS8_MotorsSpeed_TractionMotor1_ActualSpeed_fromS(x) (x)

// signal: @TractionMotor2_ActualSpeed
#define PropB_PS8_MotorsSpeed_TractionMotor2_ActualSpeed_CovFactor (1)
// conversion value to CAN signal
#define PropB_PS8_MotorsSpeed_TractionMotor2_ActualSpeed_toS(x) ((int32_t)(x + 32766))
// conversion value from CAN signal
#define PropB_PS8_MotorsSpeed_TractionMotor2_ActualSpeed_fromS(x) (x)

typedef struct
{

  // Actual speed of motor1 (ZF AVE130 - Left motor or TSA motor).  
  int32_t TractionMotor1_ActualSpeed;       //      Bits=16.  [ -32766, 32769  ]  Unit:'rpm'   Offset= -32766   

  // Actual speed of motor1 (ZF AVE130 - Right motor).  
  int32_t TractionMotor2_ActualSpeed;       //      Bits=16.  [ -32766, 32769  ]  Unit:'rpm'   Offset= -32766   

  // Motor 1 rotation direction (ZF AVE130 - Left motor or TSA motor).
  // 3 - "Not available" 
  // 2 - "Backward direction" 
  // 1 - "Forward direction" 
  // 0 - "Motor stopped" 

  uint8_t TractionMotor1_Direction;         //      Bits=02.  [ 0     , 3      ]  Unit:''     

  // Motor 1 rotation direction (ZF AVE130 - Right motor).
  // 3 - "Not available" 
  // 2 - "Backward direction" 
  // 1 - "Forward direction" 
  // 0 - "Motor stopped" 

  uint8_t TractionMotor2_Direction;         //      Bits=02.  [ 0     , 3      ]  Unit:''     
} PropB_PS8_MotorsSpeed_t;

uint32_t Unpack_PropB_PS7_MotorsPower_Torque_PP_MOTORS(PropB_PS7_MotorsPower_Torque_t* _m, const uint8_t* _d, uint8_t dlc_);
uint32_t Pack_PropB_PS7_MotorsPower_Torque_PP_MOTORS(const PropB_PS7_MotorsPower_Torque_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);
uint32_t Unpack_PropB_PS8_MotorsSpeed_PP_MOTORS(PropB_PS8_MotorsSpeed_t* _m, const uint8_t* _d, uint8_t dlc_);
uint32_t Pack_PropB_PS8_MotorsSpeed_PP_MOTORS(const PropB_PS8_MotorsSpeed_t* _m, uint8_t* _d, uint8_t* _len, uint8_t* _ide);

#ifdef __cplusplus
}
#endif

