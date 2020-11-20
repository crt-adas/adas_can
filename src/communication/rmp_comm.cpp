//#include <vfoma/core.hpp>
//#include <vfoma/communication/udp_protocol.hpp>

//#include <ros/console.h>

//ast_module(RMPComm)
////  in(Real, input);
////  out(Real, output);

////  state(real, st);

////  setting(Real, sett);

//  UdpProtocol udp;
//  int iCount = 0;

//  bool init()
//  {
//    return true;
//  }

//  bool update()
//  {
//      //ROS_INFO_STREAM("test start");
//      auto iRet = udp.receiveData();
//      if (iRet==0)
//      {
//          ROS_INFO_STREAM("recv");
//          iRet = udp.sendData(iCount,-1.23);

//          iCount++;
//      }

//    //ROS_INFO_STREAM("test");
//    return true;
//  }
//ast_end_module
