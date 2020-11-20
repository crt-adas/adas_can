#pragma once

#define VFOMA_MTRACKER

#include "math.hpp"
#include "serial.hpp"
#include "geometry_msgs/Twist.h"
#include "geometry_msgs/Pose2D.h"

namespace ast
{

struct OdometryOutpout
{
  geometry_msgs::Pose2D pose;
  geometry_msgs::Twist velocity;
  Real w_l, w_r;
  bool isNew;
};

class MotorInterface
{
  Serial robot;
  OdometryOutpout output;
public:
    OdometryOutpout operator()(Real w, Real v, geometry_msgs::Pose2D pose)
    {
      robot.setOdometry(pose.x, pose.y, pose.theta);
      

      output.isNew = robot.readFrame();
      if (output.isNew)
      {
          output.pose = robot.getOdometry();
          output.velocity = robot.getVelocity();
      }

      //v [m/s], w [rad/s]
      const Real r = 0.025;
      const Real b = 0.145;
      output.w_l = (v-w*b/2.0)/r;
      output.w_r = (v+w*b/2.0)/r;

      //robot.setVelocity(w_l, w_r);
      robot.setVelocityAndOdometry(output.w_l, output.w_r, pose.x, pose.y, pose.theta);

      return output;
    }
};

}
