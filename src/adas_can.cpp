
#include "core.hpp"
#include "ros_utils.hpp"
#include "math.hpp"
#include <ros/ros.h>
#include <ros/time.h>

#include <socketcan_interface/socketcan.h>
#include <socketcan_interface/threading.h>
#include <socketcan_interface/filter.h>
#include <socketcan_interface/string.h>
#include <can_msgs/Frame.h>

#include <adas_can/communication/WGS84toCartesian.hpp>

#include <adas_can/communication/PCANEXT_binUtil.h>
#include <adas_can/communication/j1939v8_5_binUtil.h>
#include <adas_can/communication/pp_motors_binUtil.h>
#include <adas_can/communication/pp_to_sbc_adas_binUtil.h>

#include <adas_can/communication/AdasDbcIds.hpp>
#include <adas_can/CanData.h>

#include <fstream>
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>


typedef double Real;
using namespace ast;
using namespace ast::ros;



class AdasCanProcessor
{
    j1939v8_5_rx_t message;
    PCANEXT_rx_t messageGPS;
    PropB_PS7_MotorsPower_Torque_t messageTorque;
    PropB_PS8_MotorsSpeed_t messageSpeed;

    NodeHandle nh;

    TopicOut<adas_can::Beta1> beta1Out;
    TopicOut<adas_can::SteeringAngle> steeringAngleOut;
    TopicOut<adas_can::Velocity> velocityOut;

    TopicIn<can_msgs::Frame> rawCanIn;


    //TopicOut<vfoma::CanData> canDataOut;
    //boost::shared_ptr<vfoma::CanData> processedData;

    boost::shared_ptr<adas_can::Beta1> processedBeta1;
    boost::shared_ptr<adas_can::SteeringAngle> processedSteeringAngle;
    boost::shared_ptr<adas_can::Velocity> processedVelocity;

    boost::shared_ptr<can_msgs::Frame> rawCan;
    //received_messages 

    int velocitySign = 1.0;

    Real computeSteeringAngle(Real columnAngle)
    {
        return 0.0494*(columnAngle + 1.995);
        //return columnAngle;
    }

    //w bagu bez przeliczenia
    Real computeLinearVelocity(Real velocity)
    {
        return 0.277777778*velocity;
    }

    Real computeLinearVelocityMotor(Real left, Real right)
    {
        Real factor = 1.0/465.309898242;
        return 0.5*(left + right)*factor;
    }

    Real computeHubnerSteeringAngle(Real columnAngle)
    {
        Real factor = 0.01745329252;
        return factor*columnAngle*(0.79412481/0.602)*(-0.671);
    }

    Real computeHubnerbeta1(Real tiltAngle)
    {
        return tiltAngle*0.01745329252*(-1.0);
    }
    

public:
    can::DriverInterfaceSharedPtr driver;
    can::FrameListenerConstSharedPtr frameListener;
    can::StateListenerConstSharedPtr stateListener;

    const char *homedir;
    std::ofstream expFile;
    int expNumber = 0;
    Real time0;

    bool isFirstLongitudeData = false;
    bool isFirstLatitudeData = false;

    bool isReferencePosition = false;
    std::array<double, 2> busReference;
    std::array<double, 2> busPosition;

    AdasCanProcessor(can::DriverInterfaceSharedPtr driverInterface, NodeHandle handle) : driver(driverInterface), nh(handle), processedData(new vfoma::CanData()), canDataOut(nh.Output<vfoma::CanData>("/processed_can_data"))
    {
        can::FilteredFrameListener::FilterVector filters;
        //TODO: populate filters
        //    frameListener.reset(new can::FilteredFrameListener(driver,
        //                                                            can::CommInterface::FrameDelegate(this, &AdasCanProcessor::frameCallback),
        //                                                            filters));
        frameListener = driver->createMsgListener(can::CommInterface::FrameDelegate(this, &AdasCanProcessor::frameCallback));
        stateListener = driver->createStateListener(can::StateInterface::StateDelegate(this, &AdasCanProcessor::stateCallback));

        processedData->steeringAngle = 0.0;
        processedData->tachoVelocity = 0.0;   
    }

    void clearMessages()
    {
    //BUS
        message.HRW.FrontAxleLeftWheelSpeed = 0.0;
        message.HRW.FrontAxleRightWheelSpeed = 0.0;
        message.HRW.RearAxleLeftWheelSpeed = 0.0;
        message.HRW.RearAxleRightWheelSpeed = 0.0;

        message.VDC2.SteerWheelAngle = 0.0;
        message.VDC2.YawRate = 0.0;
        message.VDC2.LongitudinalAcceleration = 0.0;

        message.SAS.SteerWheelAngle = 0.0;

        message.VDHR.HghRsolutionTotalVehicleDistance = 0.0;
        message.VDHR.HighResolutionTripDistance = 0.0;

        message.Hubner.Steering_angle = 0.0;
        message.Hubner.Tilt_angle = 0.0;

        message.EBC2.FrontAxleSpeed = 0.0;
        message.EBC2.RelativeSpeedFrontAxleLeftWheel = 0.0;
        message.EBC2.RelativeSpeedRearAxle1LeftWheel = 0.0;
        message.EBC2.RelativeSpeedRearAxle2LeftWheel = 0.0;
        message.EBC2.RelativeSpeedFrontAxleRightWheel = 0.0;
        message.EBC2.RelativeSpeedRearAxle1RightWheel = 0.0;
        message.EBC2.RelativeSpeedRearAxle2RightWheel = 0.0;

        message.TCO1.DirectionIndicator = 3;
        message.TCO1.TachographVehicleSpeed = 0.0;

    //GPS
        messageGPS.BMC_Acceleration.Acceleration_X = 0.0;
        messageGPS.BMC_Acceleration.Acceleration_Y = 0.0;
        messageGPS.BMC_Acceleration.Acceleration_Z = 0.0;
        messageGPS.BMC_Acceleration.VerticalAxis = 0.0;
        messageGPS.BMC_Acceleration.Orientation = 0.0;

        messageGPS.BMC_MagneticField.MagneticField_X = 0.0;
        messageGPS.BMC_MagneticField.MagneticField_Y = 0.0;
        messageGPS.BMC_MagneticField.MagneticField_Z = 0.0;

        messageGPS.L3GD20_Rotation_A.Rotation_X = 0.0;
        messageGPS.L3GD20_Rotation_A.Rotation_Y = 0.0;
        messageGPS.L3GD20_Rotation_B.Rotation_Z = 0.0;

        messageGPS.GPS_Status.GPS_AntennaStatus = 0.0;
        messageGPS.GPS_Status.GPS_NumSatellites = 0.0;
        messageGPS.GPS_Status.GPS_NavigationMethod = 0.0;

        messageGPS.GPS_CourseSpeed.GPS_Course = 0.0;
        messageGPS.GPS_CourseSpeed.GPS_Speed = 0.0;

        messageGPS.GPS_PositionLongitude.GPS_IndicatorEW = 0.0;
        messageGPS.GPS_PositionLongitude.GPS_Longitude_Minutes = 0.0;
        messageGPS.GPS_PositionLongitude.GPS_Longitude_Degree = 0.0;

        messageGPS.GPS_PositionLatitude.GPS_Latitude_Minutes = 0.0;
        messageGPS.GPS_PositionLatitude.GPS_Latitude_Degree = 0.0;

        messageGPS.GPS_PositionAltitude.GPS_Altitude = 0.0;
    }

    void publishFrameMsg(const can::Frame& f)
    {
        bool isGoodInformation = true;

        switch(f.id)
        {
        //BUS
            case HRW_CANID:
                Unpack_HRW_j1939v8_5(&(message.HRW), f.c_array());
            break;

            case VDC2_CANID:
                Unpack_VDC2_j1939v8_5(&(message.VDC2), f.c_array());
            break;

            case SAS_CANID:
                Unpack_SAS_j1939v8_5(&(message.SAS), f.c_array());
                processedData->SASsteeringAngle = computeSteeringAngle(message.SAS.SteerWheelAngle * SteerWheelAngle_CovFactor);
                processedData->steeringAngle = processedData->SASsteeringAngle;
                canDataOut(processedData);
            break;

            case VDHR_CANID:
                Unpack_VDHR_j1939v8_5(&(message.VDHR), f.c_array());
            break;

            case Hubner_CANID:
                Unpack_Hubner_j1939v8_5(&(message.Hubner), f.c_array());

                //TODO: uncomment for 2-segment
                processedData->steeringAngle = computeHubnerSteeringAngle(message.Hubner.Steering_angle * Steering_angle_CovFactor);
                processedData->beta1 = computeHubnerbeta1(message.Hubner.Tilt_angle * Tilt_angle_CovFactor);
                canDataOut(processedData);
            break;

            case EBC2_CANID:
                Unpack_EBC2_j1939v8_5(&(message.EBC2), f.c_array());
            break;

            case TCO1_CANID:
                Unpack_TCO1_j1939v8_5(&(message.TCO1), f.c_array());
                if(message.TCO1.DirectionIndicator == 1)
                  velocitySign = -1;
                else
                  velocitySign = 1;
                processedData->tachoVelocityOld = velocitySign*computeLinearVelocity(message.TCO1.TachographVehicleSpeed * TachographVehicleSpeed_CovFactor);
                canDataOut(processedData);
            break;
            
            case PropB_PS8_MotorsSpeed_CANID:
                Unpack_PropB_PS8_MotorsSpeed_PP_MOTORS(&(messageSpeed), f.c_array(), 0);
                processedData->leftMotorVelocity = messageSpeed.TractionMotor1_ActualSpeed;
                processedData->rightMotorVelocity = messageSpeed.TractionMotor2_ActualSpeed;
                if(messageSpeed.TractionMotor1_Direction == 2)
                    processedData->leftMotorVelocity*=-1.0;

                if(messageSpeed.TractionMotor2_Direction == 2)
                    processedData->rightMotorVelocity*=-1.0;

                processedData->tachoVelocity = velocitySign*computeLinearVelocityMotor(processedData->leftMotorVelocity, processedData->rightMotorVelocity);

                canDataOut(processedData);
            break;

            case PropB_PS7_MotorsPower_Torque_CANID:
                Unpack_PropB_PS7_MotorsPower_Torque_PP_MOTORS(&(messageTorque), f.c_array(), 0);
                processedData->leftMotorTorque = messageTorque.TractionMotor1_ActualTorque;
                processedData->rightMotorTorque = messageTorque.TractionMotor2_ActualTorque;
                canDataOut(processedData);
            break;

        //GPS
            case BMC_Acceleration_CANID:
                Unpack_BMC_Acceleration_PCANEXT(&(messageGPS.BMC_Acceleration), f.c_array());
            break;

            case BMC_MagneticField_CANID:
                Unpack_BMC_MagneticField_PCANEXT(&(messageGPS.BMC_MagneticField), f.c_array());
            break;

            case L3GD20_Rotation_A_CANID:
                Unpack_L3GD20_Rotation_A_PCANEXT(&(messageGPS.L3GD20_Rotation_A), f.c_array());
            break;

            case L3GD20_Rotation_B_CANID:
                Unpack_L3GD20_Rotation_B_PCANEXT(&(messageGPS.L3GD20_Rotation_B), f.c_array());
            break;

            case GPS_Status_CANID:
                Unpack_GPS_Status_PCANEXT(&(messageGPS.GPS_Status), f.c_array());
            break;

            case GPS_CourseSpeed_CANID:
                Unpack_GPS_CourseSpeed_PCANEXT(&(messageGPS.GPS_CourseSpeed), f.c_array());
            break;

            case GPS_PositionLongitude_CANID:
                Unpack_GPS_PositionLongitude_PCANEXT(&(messageGPS.GPS_PositionLongitude), f.c_array());
                isFirstLongitudeData = true;
            break;

            case GPS_PositionLatitude_CANID:
                Unpack_GPS_PositionLatitude_PCANEXT(&(messageGPS.GPS_PositionLatitude), f.c_array());
                isFirstLatitudeData = true;
            break;

            case GPS_PositionAltitude_CANID:
                Unpack_GPS_PositionAltitude_PCANEXT(&(messageGPS.GPS_PositionAltitude), f.c_array());
            break;

            case GPS_Delusions_A_CANID:
                Unpack_GPS_Delusions_A_PCANEXT(&(messageGPS.GPS_Delusions_A), f.c_array());
            break;

            case GPS_Delusions_B_CANID:
                Unpack_GPS_Delusions_B_PCANEXT(&(messageGPS.GPS_Delusions_B), f.c_array());
            break;

            case GPS_DateTime_CANID:
                Unpack_GPS_DateTime_PCANEXT(&(messageGPS.GPS_DateTime), f.c_array());
            break;

            case IO_CANID:
                Unpack_IO_PCANEXT(&(messageGPS.IO), f.c_array());
            break;

            case RTC_DateTime_CANID:
                Unpack_RTC_DateTime_PCANEXT(&(messageGPS.RTC_DateTime), f.c_array());
            break;
        //Default
            default:
                isGoodInformation = false;
            break;
        }

        if(isGoodInformation)
        {
            Real Longitude = 0.0;
            Real Latitude = 0.0;

//            Longitude = messageGPS.GPS_PositionLongitude.GPS_Longitude_Degree + (messageGPS.GPS_PositionLongitude.GPS_Longitude_Minutes / 60.0);
//            Latitude = messageGPS.GPS_PositionLatitude.GPS_Latitude_Degree + (messageGPS.GPS_PositionLatitude.GPS_Latitude_Minutes / 60.0);

            Longitude = messageGPS.GPS_PositionLongitude.GPS_Longitude_Degree;
            Latitude = messageGPS.GPS_PositionLatitude.GPS_Latitude_Degree;

            //Compute Longitude and Latitude to [x,y]
            if(isFirstLongitudeData && isFirstLatitudeData && !isReferencePosition)
            {
                busReference[0] = Latitude;
                busReference[1] = Longitude;
                isReferencePosition = true;
            }

            if(isReferencePosition)
                busPosition = wgs84::toCartesian(busReference, {Latitude, Longitude});

            auto timeString = ::ros::Time::now();
            expFile << timeString.toSec()-time0 << ", "
                //BUS
                    << std::to_string(message.HRW.FrontAxleLeftWheelSpeed * FrontAxleLeftWheelSpeed_CovFactor) << ","
                    << std::to_string(message.HRW.FrontAxleRightWheelSpeed * FrontAxleRightWheelSpeed_CovFactor) << ","
                    << std::to_string(message.HRW.RearAxleLeftWheelSpeed * RearAxleLeftWheelSpeed_CovFactor) << ","
                    << std::to_string(message.HRW.RearAxleRightWheelSpeed * RearAxleRightWheelSpeed_CovFactor) << ","

                    << std::to_string(message.VDC2.SteerWheelAngle * SteerWheelAngle_CovFactor) << ","
                    << std::to_string(message.VDC2.YawRate * YawRate_CovFactor) << ","
                    << std::to_string(message.VDC2.LongitudinalAcceleration * LongitudinalAcceleration_CovFactor) << ","

                    << std::to_string(message.SAS.SteerWheelAngle * SteerWheelAngle_CovFactor) << ","

                    << std::to_string(message.VDHR.HghRsolutionTotalVehicleDistance * HghRsolutionTotalVehicleDistance_CovFactor) << ","
                    << std::to_string(message.VDHR.HighResolutionTripDistance * HighResolutionTripDistance_CovFactor) << ","

                    << std::to_string(message.Hubner.Steering_angle * Steering_angle_CovFactor) << ","
                    << std::to_string(message.Hubner.Tilt_angle * Tilt_angle_CovFactor) << ","

                    << std::to_string(message.EBC2.FrontAxleSpeed * FrontAxleSpeed_CovFactor) << ","
                    << std::to_string(message.EBC2.RelativeSpeedFrontAxleLeftWheel * RelativeSpeedFrontAxleLeftWheel_CovFactor) << ","
                    << std::to_string(message.EBC2.RelativeSpeedFrontAxleRightWheel * RelativeSpeedFrontAxleRightWheel_CovFactor) << ","
                    << std::to_string(message.EBC2.RelativeSpeedRearAxle1LeftWheel * RelativeSpeedRearAxle1LeftWheel_CovFactor) << ","
                    << std::to_string(message.EBC2.RelativeSpeedRearAxle1RightWheel * RelativeSpeedRearAxle1RightWheel_CovFactor) << ","
                    << std::to_string(message.EBC2.RelativeSpeedRearAxle2LeftWheel * RelativeSpeedRearAxle2LeftWheel_CovFactor) << ","
                    << std::to_string(message.EBC2.RelativeSpeedRearAxle2RightWheel * RelativeSpeedRearAxle2RightWheel_CovFactor) << ","

                    << std::to_string(message.TCO1.DirectionIndicator) << ","
                    << std::to_string(message.TCO1.TachographVehicleSpeed * TachographVehicleSpeed_CovFactor) << ","

                //GPS
                    << std::to_string(messageGPS.BMC_Acceleration.Acceleration_X * Acceleration_X_CovFactor) << ","
                    << std::to_string(messageGPS.BMC_Acceleration.Acceleration_Y * Acceleration_Y_CovFactor) << ","
                    << std::to_string(messageGPS.BMC_Acceleration.Acceleration_Z * Acceleration_Z_CovFactor) << ","
                    << std::to_string(messageGPS.BMC_Acceleration.VerticalAxis) << ","
                    << std::to_string(messageGPS.BMC_Acceleration.Orientation) << ","

                    << std::to_string(messageGPS.BMC_MagneticField.MagneticField_X * MagneticField_X_CovFactor) << ","
                    << std::to_string(messageGPS.BMC_MagneticField.MagneticField_Y * MagneticField_Y_CovFactor) << ","
                    << std::to_string(messageGPS.BMC_MagneticField.MagneticField_Z * MagneticField_Z_CovFactor) << ","

                    << std::to_string(messageGPS.L3GD20_Rotation_A.Rotation_X) << ","
                    << std::to_string(messageGPS.L3GD20_Rotation_A.Rotation_Y) << ","
                    << std::to_string(messageGPS.L3GD20_Rotation_B.Rotation_Z) << ","

                    << std::to_string(messageGPS.GPS_Status.GPS_AntennaStatus) << ","
                    << std::to_string(messageGPS.GPS_Status.GPS_NumSatellites) << ","
                    << std::to_string(messageGPS.GPS_Status.GPS_NavigationMethod) << ","

                    << std::to_string(messageGPS.GPS_CourseSpeed.GPS_Course) << ","
                    << std::to_string(messageGPS.GPS_CourseSpeed.GPS_Speed) << ","

                    << std::to_string(messageGPS.GPS_PositionLongitude.GPS_IndicatorEW) << ","
                    << std::to_string(messageGPS.GPS_PositionLongitude.GPS_Longitude_Minutes) << ","
                    << std::to_string(messageGPS.GPS_PositionLongitude.GPS_Longitude_Degree) << ","

                    << std::to_string(messageGPS.GPS_PositionLatitude.GPS_Latitude_Minutes) << ","
                    << std::to_string(messageGPS.GPS_PositionLatitude.GPS_Latitude_Degree) << ","

                    << std::to_string(messageGPS.GPS_PositionAltitude.GPS_Altitude) << ","

                    << std::to_string(busPosition[0]) << ","
                    << std::to_string(busPosition[1]) << ","
                    << timeString<<","

                    << std::endl;
        }
        //AST_INFO_STREAM("add values");
    }

  void frameCallback(const can::Frame& f)
  {
    if (!f.isValid())
    {
      AST_ERROR("Invalid frame from SocketCAN: id: %#04x, length: %d, is_extended: %d, is_error: %d, is_rtr: %d",
                f.id, f.dlc, f.is_extended, f.is_error, f.is_rtr);
      return;
    }
    else
    {
      if (f.is_error)
      {
        AST_WARN("Received frame is error: %s", can::tostring(f, true).c_str());
      }
    }

    publishFrameMsg(f);
  }

  void stateCallback(const can::State & s)
  {
    std::string err;
    driver->translateError(s.internal_error, err);
    if (!s.internal_error)
      AST_INFO("State: %s, asio: %s", err.c_str(), s.error_code.message().c_str());
    else
      AST_ERROR("Error: %s, asio: %s", err.c_str(), s.error_code.message().c_str());
  }

  bool openFile()
  {
      if ((homedir = getenv("HOME")) == NULL)
          homedir = getpwuid(getuid())->pw_dir;
      time0 = ::ros::Time::now().toSec();
      expFile.open(std::string(homedir) + std::string("/adas_CAN_log_") + std::to_string(++expNumber) + std::string(".csv"), std::ios::out | std::ios::trunc);
        expFile << "time,"
                << "FrontAxleLeftWheelSpeed,FrontAxleRightWheelSpeed,RearAxleLeftWheelSpeed,RearAxleRightWheelSpeed,"
                << "SteerWheelAngle(VDC2),YawRate,LongitudinalAcceleration,"
                << "SteerWheelAngle(SAS),"
                << "HighResolutionTotalVehicleDistance,HighResolutionTripDistance,"
                << "Steering_angle(Hubner),Tilt_angle,"
                << "FrontAxleSpeed,RSFrontAxleLeftW,RSFrontAxleRightW,RSRearAxle1LeftW,RSRearAxle1RightW,RSRearAxle2LeftW,RSRearAxle2RightW,"
                << "DirIndicator,TachoVehicleSpeed,"
                << "Acceleration_X,Acceleration_Y,Acceleration_Z,VerticalAxis,Orientation,"
                << "MagneticField_X,MagneticField_Y,MagneticField_Z,"
                << "Rotation_X,Rotation_Y,Rotation_Z,"
                << "GPS_AntennaStatus,GPS_NumSatellites,GPS_NavigationMethod,"
                << "GPS_Course,GPS_Speed,"
                << "GPS_IndicatorEW,GPS_Longitude_Minutes,GPS_Longitude_Degree,"
                << "GPS_Latitude_Minutes,GPS_Latitude_Degree,"
                << "GPS_Altitude,"
                << "GPS_x_BusPos,"
                << "GPS_y_BusPos,"
                << "timesec"
                << std::endl;

      AST_INFO("CAN log opened");

      return true;
  }

  bool closeFile()
  {
      expFile.close();

      return true;
  }

};

int main(int argc, char **argv)
{
    using namespace ast;
    using namespace ast::ros;    

    ::ros::init(argc, argv, "adas_can");
    NodeHandle nh;

    std::string canDevice;
    ::ros::NodeHandle nhParam;
    nhParam.param<std::string>("canDevice", canDevice, "can0");    

    auto driver = can::ThreadedSocketCANInterfaceSharedPtr(new can::ThreadedSocketCANInterface());
    if (!driver->init(canDevice, 0))  // initialize device at can_device, 0 for no loopback.
    {
      AST_ERROR_STREAM("Failed to initialize can device " << canDevice);
      return 1;
    }
    else
      AST_INFO_STREAM("Successfully connected to can device " << canDevice);

    AdasCanProcessor processor(driver, nh);
    processor.openFile();
    processor.clearMessages();

    

    uint8_t canMsgBuffer[8];
    uint8_t canMsgLen, canMsgIde;
    can::Frame canFrame;
    SteeringColumnAssistant_t steeringMsg;
    BusLocation_t locationMsg;

    locationMsg.DiagModel = 1;
    locationMsg.DiagVehicle = 1;
    locationMsg.DiagLocation = 1;

  /*  timedMainLoop(50.0, [&]()
    {
        auto& conf = confIn();
        auto& state = stateIn();

        steeringMsg.CurrentSteeringWheelPosition = SteeringColumnAssistant_CurrentSteeringWheelPosition_toS(conf.actualSteeringValue);
        steeringMsg.RequiredSteeringWheelPosition1 = SteeringColumnAssistant_RequiredSteeringWheelPosition1_toS(conf.setSteeringValue);
        steeringMsg.RequiredSteeringWheelPosition2 = SteeringColumnAssistant_RequiredSteeringWheelPosition2_toS(conf.toleranceSteeringValue);
        steeringMsg.PredictedSteeringWheelPosition = 0;

        locationMsg.LocalPosBusX = BusLocation_LocalPosBusX_toS(state.x);
        locationMsg.LocalPosBusY = BusLocation_LocalPosBusY_toS(state.y);
        locationMsg.CurrentVehicleSpeed = BusLocation_CurrentVehicleSpeed_toS(state.velocity);
        locationMsg.CurrentVehicleOrientation = BusLocation_CurrentVehicleOrientation_toS(state.theta);
        locationMsg.CurrentSWAngularVelocity = 0;
        locationMsg.RequiredSWAngularVelocity = 0;
        locationMsg.RequiredVehicleSpeed = 0;

        uint8_t ide;
        canFrame.id = Pack_SteeringColumnAssistant_PP_to_SBC_ADAS(&steeringMsg, canFrame.data.data(), &canFrame.dlc, &ide);
        canFrame.is_extended = false;
        if(!canFrame.isValid())
            ROS_ERROR("Failed to validate steering can frame.");
        if(!driver->send(canFrame))
            ROS_ERROR("Failed to send steering can frame.");

        canFrame.id = Pack_BusLocation_PP_to_SBC_ADAS(&locationMsg, canFrame.data.data(), &canFrame.dlc, &ide);
         canFrame.is_extended = false;
        if(!canFrame.isValid())
            ROS_ERROR("Failed to validate steering can frame.");
        if(!driver->send(canFrame))
            ROS_ERROR("Failed to send steering can frame.");

    });
*/
    ::ros::spin();

    processor.closeFile();

    driver->shutdown();
    driver.reset();
    ::ros::waitForShutdown();

    return 0;
}
