#ifndef SERIAL_H
#define SERIAL_H

/* !ALL UNITS ARE IN SI! */

#include <ros/ros.h>
#include <geometry_msgs/Pose2D.h>
#include <geometry_msgs/Twist.h>
#include "rs232.h"
#include <cstdint>

#define FRAME_HEADER       0xAA
#define FRAME_GROUP_NUMBER 0x01
#define FRAME_ROBOT_NUMBER 0x0100

#define CMD_SET_WHEELS          0x01
#define CMD_SET_LED             0x02
#define CMD_SET_WHEELS_AND_ODOM 0x03

#define MODE_MOTORS_OFF    0x00
#define MODE_MOTORS_ON     0x03
#define MODE_SET_ODOMETRY  0x04

#pragma pack(1)
struct Frame {
  Frame() : header(FRAME_HEADER), num_data_bytes(22), group_number(FRAME_GROUP_NUMBER), robot_number(FRAME_ROBOT_NUMBER) {}

  uint8_t header;
  uint8_t num_data_bytes;
  uint8_t group_number;
  uint8_t command;
  uint16_t robot_number;
  uint16_t mode;
  int16_t w_l;    // Left wheel angular velocity
  int16_t w_r;
  float x;        // X coordinate
  float y;
  float theta;    // Orientation
  uint16_t crc;
};

struct RespFrame
{
  uint8_t header;
  uint8_t num_data_bytes;
  uint8_t group_number;
  uint8_t command;
  uint16_t robot_number;
  uint16_t mode;
  int16_t w_l;    // Left wheel angular velocity
  int16_t w_r;
  float x;        // X coordinate
  float y;
  float theta;    // Orientation
  int16_t u_l;
  int16_t u_r;
  uint16_t crc;
};

class Serial {
public:
  Serial() : port_num(TTYSAC0) { openPort(); stopWheels(); }
  ~Serial()
  {
    stopWheels();
    switchOffMotors();
    closePort();
  }

private:
  int   port_num;
  Frame tx_frame;
  RespFrame rx_frame;

public:
  void openPort()
  {
    if (RS232_OpenComport(port_num, 115200, "8N1") != 0 && port_num <= 21)
    {
      this->port_num++;
      this->openPort();
    }
  }

  void closePort()
  {
    RS232_CloseComport(port_num);
  }

  void writeFrame()
  {
    RS232_SendBuf(port_num, (unsigned char*)&tx_frame, sizeof(Frame));
  }

  bool readFrame()
  {
    if (RS232_PollComport(port_num, (unsigned char*)&rx_frame, sizeof(RespFrame)) > 0)
    {
      if ((rx_frame.header == FRAME_HEADER) && (rx_frame.group_number == FRAME_GROUP_NUMBER))
      {
        // Omit header byte and include num_data_bytes byte in crc
        // crc has different endianess
        uint16_t crc1 = CRC16(((uint8_t*) (&rx_frame) + 1), rx_frame.num_data_bytes + 1);
        uint8_t c1 = rx_frame.crc >> 8;
        uint8_t c2 = 0xFF & rx_frame.crc;
        uint16_t crc2 = c1 + 256 * c2;

        if (crc1 == crc2)
          return true;
      }
    }

    return false;
  }

  void prepareFrame(uint16_t mode, uint8_t command)
  {
    tx_frame.command = command;
    tx_frame.mode = mode;

    // Omit header byte and include num_data_bytes byte for crc
    // The crc has different endianess
    uint16_t crc = CRC16(((uint8_t*)&tx_frame) + 1, (int)(tx_frame.num_data_bytes + 1));
    uint8_t crc1 = crc >> 8;
    uint8_t crc2 = 0xFF & crc;
    tx_frame.crc = crc1 + crc2 * 256;
   }


  uint16_t CRC16(const uint8_t *data, int len)
  {
    static const uint16_t crc_table[] = {
      0x0000,0x8005,0x800F,0x000A,0x801B,0x001E,0x0014,0x8011,
      0x8033,0x0036,0x003C,0x8039,0x0028,0x802D,0x8027,0x0022,
      0x8063,0x0066,0x006C,0x8069,0x0078,0x807D,0x8077,0x0072,
      0x0050,0x8055,0x805F,0x005A,0x804B,0x004E,0x0044,0x8041,
      0x80C3,0x00C6,0x00CC,0x80C9,0x00D8,0x80DD,0x80D7,0x00D2,
      0x00F0,0x80F5,0x80FF,0x00FA,0x80EB,0x00EE,0x00E4,0x80E1,
      0x00A0,0x80A5,0x80AF,0x00AA,0x80BB,0x00BE,0x00B4,0x80B1,
      0x8093,0x0096,0x009C,0x8099,0x0088,0x808D,0x8087,0x0082,
      0x8183,0x0186,0x018C,0x8189,0x0198,0x819D,0x8197,0x0192,
      0x01B0,0x81B5,0x81BF,0x01BA,0x81AB,0x01AE,0x01A4,0x81A1,
      0x01E0,0x81E5,0x81EF,0x01EA,0x81FB,0x01FE,0x01F4,0x81F1,
      0x81D3,0x01D6,0x01DC,0x81D9,0x01C8,0x81CD,0x81C7,0x01C2,
      0x0140,0x8145,0x814F,0x014A,0x815B,0x015E,0x0154,0x8151,
      0x8173,0x0176,0x017C,0x8179,0x0168,0x816D,0x8167,0x0162,
      0x8123,0x0126,0x012C,0x8129,0x0138,0x813D,0x8137,0x0132,
      0x0110,0x8115,0x811F,0x011A,0x810B,0x010E,0x0104,0x8101,
      0x8303,0x0306,0x030C,0x8309,0x0318,0x831D,0x8317,0x0312,
      0x0330,0x8335,0x833F,0x033A,0x832B,0x032E,0x0324,0x8321,
      0x0360,0x8365,0x836F,0x036A,0x837B,0x037E,0x0374,0x8371,
      0x8353,0x0356,0x035C,0x8359,0x0348,0x834D,0x8347,0x0342,
      0x03C0,0x83C5,0x83CF,0x03CA,0x83DB,0x03DE,0x03D4,0x83D1,
      0x83F3,0x03F6,0x03FC,0x83F9,0x03E8,0x83ED,0x83E7,0x03E2,
      0x83A3,0x03A6,0x03AC,0x83A9,0x03B8,0x83BD,0x83B7,0x03B2,
      0x0390,0x8395,0x839F,0x039A,0x838B,0x038E,0x0384,0x8381,
      0x0280,0x8285,0x828F,0x028A,0x829B,0x029E,0x0294,0x8291,
      0x82B3,0x02B6,0x02BC,0x82B9,0x02A8,0x82AD,0x82A7,0x02A2,
      0x82E3,0x02E6,0x02EC,0x82E9,0x02F8,0x82FD,0x82F7,0x02F2,
      0x02D0,0x82D5,0x82DF,0x02DA,0x82CB,0x02CE,0x02C4,0x82C1,
      0x8243,0x0246,0x024C,0x8249,0x0258,0x825D,0x8257,0x0252,
      0x0270,0x8275,0x827F,0x027A,0x826B,0x026E,0x0264,0x8261,
      0x0220,0x8225,0x822F,0x022A,0x823B,0x023E,0x0234,0x8231,
      0x8213,0x0216,0x021C,0x8219,0x0208,0x820D,0x8207,0x0202
    };

    uint16_t crc_word = 0xFFFF;

    while (len--)
      crc_word = (crc_word << 8) ^ crc_table[(((crc_word >> 8) & 0x00FF) ^ *data++) & 0x00FF];

    return crc_word;
  }

  geometry_msgs::Pose2D getOdometry()
  {
    geometry_msgs::Pose2D odom;

    odom.x = rx_frame.x;
    odom.y = rx_frame.y;
    odom.theta = rx_frame.theta;

    return odom;
  }

  geometry_msgs::Twist getVelocity()
  {
    geometry_msgs::Twist vel;

    vel.angular.x = rx_frame.w_l / 256.0f;
    vel.angular.y = rx_frame.w_r / 256.0f;

    return vel;
  }

  void setOdometry(float x, float y, float theta)
  {
    tx_frame.x = x;
    tx_frame.y = y;
    tx_frame.theta = theta;

    prepareFrame(MODE_SET_ODOMETRY | MODE_MOTORS_ON, CMD_SET_WHEELS_AND_ODOM);
    writeFrame();
  }

  void setVelocity(float w_l, float w_r)
  {
    tx_frame.w_l =  (int16_t) (w_l * 256.0f);
    tx_frame.w_r = (int16_t) (w_r * 256.0f);

    prepareFrame(MODE_MOTORS_ON, CMD_SET_WHEELS_AND_ODOM);
    writeFrame();
  }

  void setVelocityAndOdometry(float w_l, float w_r, float x, float y, float theta)
  {
    tx_frame.w_l =  (int16_t) (w_l * 256.0f);
    tx_frame.w_r = (int16_t) (w_r * 256.0f);
    tx_frame.x = x;
    tx_frame.y = y;
    tx_frame.theta = theta;

    prepareFrame(MODE_MOTORS_ON, CMD_SET_WHEELS_AND_ODOM);
    writeFrame();
  }

  void switchOffMotors()
  {
    tx_frame.w_l = 0;
    tx_frame.w_r = 0;

    prepareFrame(MODE_MOTORS_OFF, CMD_SET_WHEELS_AND_ODOM);
    writeFrame();
  }

  void stopWheels()
  {
    setVelocity(0.0f, 0.0f);
  }
};

#endif
