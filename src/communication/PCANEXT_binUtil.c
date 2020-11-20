
// this file were genereted by coderdbc.com web service
// any questions - mailto:coderdbc@gmail.com

#include <vfoma/communication/PCANEXT_binUtil.h>

#ifdef __DEF_PCANEXT__

PCANEXT_rx_t PCANEXT_rx;

#endif

uint32_t PCANEXT_Receive(PCANEXT_rx_t* _m, const uint8_t* _d, uint32_t _id)
{
 uint32_t recid = 0;
 if (_id >= 0x650U && _id < 0x18FFBA1CU) {
  if (_id >= 0x650U && _id < 0x18FFB01CU) {
   if (_id >= 0x650U && _id < 0x655U) {
    if (_id >= 0x650U && _id < 0x652U) {
     if (_id == 0x650U) {
      recid = Unpack_Out_IO_PCANEXT(&(_m->Out_IO), _d);
     } else if (_id == 0x651U) {
      recid = Unpack_Out_PowerOff_PCANEXT(&(_m->Out_PowerOff), _d);
     }
    } else {
     if (_id == 0x652U) {
      recid = Unpack_Out_Gyro_PCANEXT(&(_m->Out_Gyro), _d);
     } else {
      if (_id == 0x653U) {
       recid = Unpack_Out_BMC_AccScale_PCANEXT(&(_m->Out_BMC_AccScale), _d);
      } else if (_id == 0x654U) {
       recid = Unpack_Out_SaveConfig_PCANEXT(&(_m->Out_SaveConfig), _d);
      }
     }
    }
   } else {
    if (_id >= 0x655U && _id < 0x657U) {
     if (_id == 0x655U) {
      recid = Unpack_Out_RTC_SetTime_PCANEXT(&(_m->Out_RTC_SetTime), _d);
     } else if (_id == 0x656U) {
      recid = Unpack_Out_RTC_TimeFromGPS_PCANEXT(&(_m->Out_RTC_TimeFromGPS), _d);
     }
    } else {
     if (_id == 0x657U) {
      recid = Unpack_Out_Acc_FastCalibration_PCANEXT(&(_m->Out_Acc_FastCalibration), _d);
     } else {
      if (_id == 0x18FEF3FEU) {
       recid = Unpack_Arrive_And_Go_Position_PCANEXT(&(_m->Arrive_And_Go_Position), _d);
      } else if (_id == 0x18FEF5FEU) {
       recid = Unpack_Arrive_And_Go_Verification_PCANEXT(&(_m->Arrive_And_Go_Verification), _d);
      }
     }
    }
   }
  } else {
   if (_id >= 0x18FFB01CU && _id < 0x18FFB51CU) {
    if (_id >= 0x18FFB01CU && _id < 0x18FFB21CU) {
     if (_id == 0x18FFB01CU) {
      recid = Unpack_BMC_Acceleration_PCANEXT(&(_m->BMC_Acceleration), _d);
     } else if (_id == 0x18FFB11CU) {
      recid = Unpack_BMC_MagneticField_PCANEXT(&(_m->BMC_MagneticField), _d);
     }
    } else {
     if (_id == 0x18FFB21CU) {
      recid = Unpack_L3GD20_Rotation_A_PCANEXT(&(_m->L3GD20_Rotation_A), _d);
     } else {
      if (_id == 0x18FFB31CU) {
       recid = Unpack_L3GD20_Rotation_B_PCANEXT(&(_m->L3GD20_Rotation_B), _d);
      } else if (_id == 0x18FFB41CU) {
       recid = Unpack_GPS_Status_PCANEXT(&(_m->GPS_Status), _d);
      }
     }
    }
   } else {
    if (_id >= 0x18FFB51CU && _id < 0x18FFB71CU) {
     if (_id == 0x18FFB51CU) {
      recid = Unpack_GPS_CourseSpeed_PCANEXT(&(_m->GPS_CourseSpeed), _d);
     } else if (_id == 0x18FFB61CU) {
      recid = Unpack_GPS_PositionLongitude_PCANEXT(&(_m->GPS_PositionLongitude), _d);
     }
    } else {
     if (_id == 0x18FFB71CU) {
      recid = Unpack_GPS_PositionLatitude_PCANEXT(&(_m->GPS_PositionLatitude), _d);
     } else {
      if (_id == 0x18FFB81CU) {
       recid = Unpack_GPS_PositionAltitude_PCANEXT(&(_m->GPS_PositionAltitude), _d);
      } else if (_id == 0x18FFB91CU) {
       recid = Unpack_GPS_Delusions_A_PCANEXT(&(_m->GPS_Delusions_A), _d);
      }
     }
    }
   }
  }
 } else {
  if (_id >= 0x18FFBA1CU && _id < 0x18FFC61CU) {
   if (_id >= 0x18FFBA1CU && _id < 0x18FFC11CU) {
    if (_id >= 0x18FFBA1CU && _id < 0x18FFBC1CU) {
     if (_id == 0x18FFBA1CU) {
      recid = Unpack_GPS_Delusions_B_PCANEXT(&(_m->GPS_Delusions_B), _d);
     } else if (_id == 0x18FFBB1CU) {
      recid = Unpack_GPS_DateTime_PCANEXT(&(_m->GPS_DateTime), _d);
     }
    } else {
     if (_id == 0x18FFBC1CU) {
      recid = Unpack_IO_PCANEXT(&(_m->IO), _d);
     } else {
      if (_id == 0x18FFBD1CU) {
       recid = Unpack_RTC_DateTime_PCANEXT(&(_m->RTC_DateTime), _d);
      } else if (_id == 0x18FFC01CU) {
       recid = Unpack_Arrive_And_Go_BusStop1_PCANEXT(&(_m->Arrive_And_Go_BusStop1), _d);
      }
     }
    }
   } else {
    if (_id >= 0x18FFC11CU && _id < 0x18FFC31CU) {
     if (_id == 0x18FFC11CU) {
      recid = Unpack_Arrive_And_Go_BusStop2_PCANEXT(&(_m->Arrive_And_Go_BusStop2), _d);
     } else if (_id == 0x18FFC21CU) {
      recid = Unpack_Arrive_And_Go_BusStop3_PCANEXT(&(_m->Arrive_And_Go_BusStop3), _d);
     }
    } else {
     if (_id == 0x18FFC31CU) {
      recid = Unpack_Arrive_And_Go_BusStop4_PCANEXT(&(_m->Arrive_And_Go_BusStop4), _d);
     } else {
      if (_id == 0x18FFC41CU) {
       recid = Unpack_Arrive_And_Go_BusStop5_PCANEXT(&(_m->Arrive_And_Go_BusStop5), _d);
      } else if (_id == 0x18FFC51CU) {
       recid = Unpack_Arrive_And_Go_BusStop6_PCANEXT(&(_m->Arrive_And_Go_BusStop6), _d);
      }
     }
    }
   }
  } else {
   if (_id >= 0x18FFC61CU && _id < 0x18FFCB1CU) {
    if (_id >= 0x18FFC61CU && _id < 0x18FFC81CU) {
     if (_id == 0x18FFC61CU) {
      recid = Unpack_Arrive_And_Go_BusStop7_PCANEXT(&(_m->Arrive_And_Go_BusStop7), _d);
     } else if (_id == 0x18FFC71CU) {
      recid = Unpack_Arrive_And_Go_BusStop8_PCANEXT(&(_m->Arrive_And_Go_BusStop8), _d);
     }
    } else {
     if (_id == 0x18FFC81CU) {
      recid = Unpack_Arrive_And_Go_BusStop9_PCANEXT(&(_m->Arrive_And_Go_BusStop9), _d);
     } else {
      if (_id == 0x18FFC91CU) {
       recid = Unpack_Arrive_And_Go_BusStop10_PCANEXT(&(_m->Arrive_And_Go_BusStop10), _d);
      } else if (_id == 0x18FFCA1CU) {
       recid = Unpack_Arrive_And_Go_BusStop11_PCANEXT(&(_m->Arrive_And_Go_BusStop11), _d);
      }
     }
    }
   } else {
    if (_id >= 0x18FFCB1CU && _id < 0x18FFCD1CU) {
     if (_id == 0x18FFCB1CU) {
      recid = Unpack_Arrive_And_Go_BusStop12_PCANEXT(&(_m->Arrive_And_Go_BusStop12), _d);
     } else if (_id == 0x18FFCC1CU) {
      recid = Unpack_Arrive_And_Go_BusStop13_PCANEXT(&(_m->Arrive_And_Go_BusStop13), _d);
     }
    } else {
     if (_id == 0x18FFCD1CU) {
      recid = Unpack_Arrive_And_Go_BusStop14_PCANEXT(&(_m->Arrive_And_Go_BusStop14), _d);
     } else {
      if (_id == 0x18FFCE1CU) {
       recid = Unpack_Arrive_And_Go_BusStop15_PCANEXT(&(_m->Arrive_And_Go_BusStop15), _d);
      } else if (_id == 0x18FFCF1CU) {
       recid = Unpack_Arrive_And_Go_BusStop16_PCANEXT(&(_m->Arrive_And_Go_BusStop16), _d);
      }
     }
    }
   }
  }
 }

 return recid;
}

