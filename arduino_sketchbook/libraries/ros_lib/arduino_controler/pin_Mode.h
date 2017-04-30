#ifndef _ROS_SERVICE_pin_Mode_h
#define _ROS_SERVICE_pin_Mode_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace arduino_controler
{

static const char PIN_MODE[] = "arduino_controler/pin_Mode";

  class pin_ModeRequest : public ros::Msg
  {
    public:
      typedef int32_t _pin_type;
      _pin_type pin;
      typedef int32_t _stat_type;
      _stat_type stat;

    pin_ModeRequest():
      pin(0),
      stat(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_pin;
      u_pin.real = this->pin;
      *(outbuffer + offset + 0) = (u_pin.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pin.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pin.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pin.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pin);
      union {
        int32_t real;
        uint32_t base;
      } u_stat;
      u_stat.real = this->stat;
      *(outbuffer + offset + 0) = (u_stat.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_stat.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_stat.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_stat.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->stat);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_pin;
      u_pin.base = 0;
      u_pin.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pin.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pin.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pin.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pin = u_pin.real;
      offset += sizeof(this->pin);
      union {
        int32_t real;
        uint32_t base;
      } u_stat;
      u_stat.base = 0;
      u_stat.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_stat.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_stat.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_stat.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->stat = u_stat.real;
      offset += sizeof(this->stat);
     return offset;
    }

    const char * getType(){ return PIN_MODE; };
    const char * getMD5(){ return "e4e31850d7b1490769ea92f5f51a1b6c"; };

  };

  class pin_ModeResponse : public ros::Msg
  {
    public:
      typedef int32_t _out_type;
      _out_type out;

    pin_ModeResponse():
      out(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_out;
      u_out.real = this->out;
      *(outbuffer + offset + 0) = (u_out.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_out.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_out.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_out.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->out);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_out;
      u_out.base = 0;
      u_out.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_out.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_out.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_out.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->out = u_out.real;
      offset += sizeof(this->out);
     return offset;
    }

    const char * getType(){ return PIN_MODE; };
    const char * getMD5(){ return "bbbbb4259d2725c3ce6331761b71c6ab"; };

  };

  class pin_Mode {
    public:
    typedef pin_ModeRequest Request;
    typedef pin_ModeResponse Response;
  };

}
#endif
