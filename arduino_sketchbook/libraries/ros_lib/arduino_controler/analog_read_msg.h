#ifndef _ROS_arduino_controler_analog_read_msg_h
#define _ROS_arduino_controler_analog_read_msg_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace arduino_controler
{

  class analog_read_msg : public ros::Msg
  {
    public:
      typedef int32_t _pin0_type;
      _pin0_type pin0;
      typedef int32_t _pin1_type;
      _pin1_type pin1;
      typedef int32_t _pin2_type;
      _pin2_type pin2;
      typedef int32_t _pin3_type;
      _pin3_type pin3;
      typedef int32_t _pin4_type;
      _pin4_type pin4;
      typedef int32_t _pin5_type;
      _pin5_type pin5;
      typedef int32_t _pin6_type;
      _pin6_type pin6;
      typedef int32_t _pin7_type;
      _pin7_type pin7;
      typedef int32_t _pin8_type;
      _pin8_type pin8;
      typedef int32_t _pin9_type;
      _pin9_type pin9;
      typedef int32_t _pin10_type;
      _pin10_type pin10;
      typedef int32_t _pin11_type;
      _pin11_type pin11;
      typedef int32_t _pin12_type;
      _pin12_type pin12;
      typedef int32_t _pin13_type;
      _pin13_type pin13;

    analog_read_msg():
      pin0(0),
      pin1(0),
      pin2(0),
      pin3(0),
      pin4(0),
      pin5(0),
      pin6(0),
      pin7(0),
      pin8(0),
      pin9(0),
      pin10(0),
      pin11(0),
      pin12(0),
      pin13(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_pin0;
      u_pin0.real = this->pin0;
      *(outbuffer + offset + 0) = (u_pin0.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pin0.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pin0.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pin0.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pin0);
      union {
        int32_t real;
        uint32_t base;
      } u_pin1;
      u_pin1.real = this->pin1;
      *(outbuffer + offset + 0) = (u_pin1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pin1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pin1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pin1.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pin1);
      union {
        int32_t real;
        uint32_t base;
      } u_pin2;
      u_pin2.real = this->pin2;
      *(outbuffer + offset + 0) = (u_pin2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pin2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pin2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pin2.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pin2);
      union {
        int32_t real;
        uint32_t base;
      } u_pin3;
      u_pin3.real = this->pin3;
      *(outbuffer + offset + 0) = (u_pin3.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pin3.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pin3.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pin3.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pin3);
      union {
        int32_t real;
        uint32_t base;
      } u_pin4;
      u_pin4.real = this->pin4;
      *(outbuffer + offset + 0) = (u_pin4.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pin4.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pin4.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pin4.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pin4);
      union {
        int32_t real;
        uint32_t base;
      } u_pin5;
      u_pin5.real = this->pin5;
      *(outbuffer + offset + 0) = (u_pin5.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pin5.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pin5.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pin5.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pin5);
      union {
        int32_t real;
        uint32_t base;
      } u_pin6;
      u_pin6.real = this->pin6;
      *(outbuffer + offset + 0) = (u_pin6.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pin6.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pin6.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pin6.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pin6);
      union {
        int32_t real;
        uint32_t base;
      } u_pin7;
      u_pin7.real = this->pin7;
      *(outbuffer + offset + 0) = (u_pin7.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pin7.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pin7.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pin7.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pin7);
      union {
        int32_t real;
        uint32_t base;
      } u_pin8;
      u_pin8.real = this->pin8;
      *(outbuffer + offset + 0) = (u_pin8.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pin8.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pin8.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pin8.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pin8);
      union {
        int32_t real;
        uint32_t base;
      } u_pin9;
      u_pin9.real = this->pin9;
      *(outbuffer + offset + 0) = (u_pin9.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pin9.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pin9.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pin9.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pin9);
      union {
        int32_t real;
        uint32_t base;
      } u_pin10;
      u_pin10.real = this->pin10;
      *(outbuffer + offset + 0) = (u_pin10.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pin10.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pin10.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pin10.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pin10);
      union {
        int32_t real;
        uint32_t base;
      } u_pin11;
      u_pin11.real = this->pin11;
      *(outbuffer + offset + 0) = (u_pin11.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pin11.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pin11.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pin11.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pin11);
      union {
        int32_t real;
        uint32_t base;
      } u_pin12;
      u_pin12.real = this->pin12;
      *(outbuffer + offset + 0) = (u_pin12.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pin12.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pin12.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pin12.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pin12);
      union {
        int32_t real;
        uint32_t base;
      } u_pin13;
      u_pin13.real = this->pin13;
      *(outbuffer + offset + 0) = (u_pin13.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pin13.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pin13.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pin13.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pin13);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_pin0;
      u_pin0.base = 0;
      u_pin0.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pin0.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pin0.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pin0.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pin0 = u_pin0.real;
      offset += sizeof(this->pin0);
      union {
        int32_t real;
        uint32_t base;
      } u_pin1;
      u_pin1.base = 0;
      u_pin1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pin1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pin1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pin1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pin1 = u_pin1.real;
      offset += sizeof(this->pin1);
      union {
        int32_t real;
        uint32_t base;
      } u_pin2;
      u_pin2.base = 0;
      u_pin2.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pin2.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pin2.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pin2.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pin2 = u_pin2.real;
      offset += sizeof(this->pin2);
      union {
        int32_t real;
        uint32_t base;
      } u_pin3;
      u_pin3.base = 0;
      u_pin3.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pin3.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pin3.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pin3.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pin3 = u_pin3.real;
      offset += sizeof(this->pin3);
      union {
        int32_t real;
        uint32_t base;
      } u_pin4;
      u_pin4.base = 0;
      u_pin4.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pin4.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pin4.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pin4.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pin4 = u_pin4.real;
      offset += sizeof(this->pin4);
      union {
        int32_t real;
        uint32_t base;
      } u_pin5;
      u_pin5.base = 0;
      u_pin5.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pin5.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pin5.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pin5.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pin5 = u_pin5.real;
      offset += sizeof(this->pin5);
      union {
        int32_t real;
        uint32_t base;
      } u_pin6;
      u_pin6.base = 0;
      u_pin6.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pin6.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pin6.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pin6.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pin6 = u_pin6.real;
      offset += sizeof(this->pin6);
      union {
        int32_t real;
        uint32_t base;
      } u_pin7;
      u_pin7.base = 0;
      u_pin7.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pin7.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pin7.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pin7.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pin7 = u_pin7.real;
      offset += sizeof(this->pin7);
      union {
        int32_t real;
        uint32_t base;
      } u_pin8;
      u_pin8.base = 0;
      u_pin8.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pin8.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pin8.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pin8.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pin8 = u_pin8.real;
      offset += sizeof(this->pin8);
      union {
        int32_t real;
        uint32_t base;
      } u_pin9;
      u_pin9.base = 0;
      u_pin9.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pin9.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pin9.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pin9.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pin9 = u_pin9.real;
      offset += sizeof(this->pin9);
      union {
        int32_t real;
        uint32_t base;
      } u_pin10;
      u_pin10.base = 0;
      u_pin10.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pin10.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pin10.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pin10.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pin10 = u_pin10.real;
      offset += sizeof(this->pin10);
      union {
        int32_t real;
        uint32_t base;
      } u_pin11;
      u_pin11.base = 0;
      u_pin11.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pin11.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pin11.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pin11.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pin11 = u_pin11.real;
      offset += sizeof(this->pin11);
      union {
        int32_t real;
        uint32_t base;
      } u_pin12;
      u_pin12.base = 0;
      u_pin12.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pin12.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pin12.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pin12.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pin12 = u_pin12.real;
      offset += sizeof(this->pin12);
      union {
        int32_t real;
        uint32_t base;
      } u_pin13;
      u_pin13.base = 0;
      u_pin13.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pin13.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pin13.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pin13.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pin13 = u_pin13.real;
      offset += sizeof(this->pin13);
     return offset;
    }

    const char * getType(){ return "arduino_controler/analog_read_msg"; };
    const char * getMD5(){ return "ac9fc82038722dc7074b673ff2917bdf"; };

  };

}
#endif