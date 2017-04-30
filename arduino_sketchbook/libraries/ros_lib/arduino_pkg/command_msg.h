#ifndef _ROS_arduino_pkg_command_msg_h
#define _ROS_arduino_pkg_command_msg_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace arduino_pkg
{

  class command_msg : public ros::Msg
  {
    public:
      typedef uint8_t _dir_type;
      _dir_type dir;
      typedef int32_t _ang_type;
      _ang_type ang;

    command_msg():
      dir(0),
      ang(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->dir >> (8 * 0)) & 0xFF;
      offset += sizeof(this->dir);
      union {
        int32_t real;
        uint32_t base;
      } u_ang;
      u_ang.real = this->ang;
      *(outbuffer + offset + 0) = (u_ang.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ang.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ang.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ang.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ang);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      this->dir =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->dir);
      union {
        int32_t real;
        uint32_t base;
      } u_ang;
      u_ang.base = 0;
      u_ang.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ang.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ang.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ang.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->ang = u_ang.real;
      offset += sizeof(this->ang);
     return offset;
    }

    const char * getType(){ return "arduino_pkg/command_msg"; };
    const char * getMD5(){ return "cbc92d431ecf6c06ce80c848054b01a7"; };

  };

}
#endif