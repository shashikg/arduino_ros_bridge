#ifndef _ROS_SERVICE_analog_write_h
#define _ROS_SERVICE_analog_write_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace arduino_controler
{

static const char ANALOG_WRITE[] = "arduino_controler/analog_write";

  class analog_writeRequest : public ros::Msg
  {
    public:
      typedef int32_t _pin_type;
      _pin_type pin;
      typedef int32_t _val_type;
      _val_type val;

    analog_writeRequest():
      pin(0),
      val(0)
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
      } u_val;
      u_val.real = this->val;
      *(outbuffer + offset + 0) = (u_val.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_val.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_val.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_val.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->val);
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
      } u_val;
      u_val.base = 0;
      u_val.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_val.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_val.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_val.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->val = u_val.real;
      offset += sizeof(this->val);
     return offset;
    }

    const char * getType(){ return ANALOG_WRITE; };
    const char * getMD5(){ return "fd3980fc8fa44545309d66c8afb240e9"; };

  };

  class analog_writeResponse : public ros::Msg
  {
    public:
      typedef int32_t _out_type;
      _out_type out;

    analog_writeResponse():
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

    const char * getType(){ return ANALOG_WRITE; };
    const char * getMD5(){ return "bbbbb4259d2725c3ce6331761b71c6ab"; };

  };

  class analog_write {
    public:
    typedef analog_writeRequest Request;
    typedef analog_writeResponse Response;
  };

}
#endif
