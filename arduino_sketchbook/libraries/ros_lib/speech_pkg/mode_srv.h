#ifndef _ROS_SERVICE_mode_srv_h
#define _ROS_SERVICE_mode_srv_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace speech_pkg
{

static const char MODE_SRV[] = "speech_pkg/mode_srv";

  class mode_srvRequest : public ros::Msg
  {
    public:
      typedef uint8_t _comm_type;
      _comm_type comm;
      typedef int32_t _data_type;
      _data_type data;

    mode_srvRequest():
      comm(0),
      data(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->comm >> (8 * 0)) & 0xFF;
      offset += sizeof(this->comm);
      union {
        int32_t real;
        uint32_t base;
      } u_data;
      u_data.real = this->data;
      *(outbuffer + offset + 0) = (u_data.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_data.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_data.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_data.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->data);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      this->comm =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->comm);
      union {
        int32_t real;
        uint32_t base;
      } u_data;
      u_data.base = 0;
      u_data.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_data.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_data.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_data.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->data = u_data.real;
      offset += sizeof(this->data);
     return offset;
    }

    const char * getType(){ return MODE_SRV; };
    const char * getMD5(){ return "8a4d6b39dcf75ad4a27a19c8d14db782"; };

  };

  class mode_srvResponse : public ros::Msg
  {
    public:
      typedef bool _flag_type;
      _flag_type flag;

    mode_srvResponse():
      flag(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_flag;
      u_flag.real = this->flag;
      *(outbuffer + offset + 0) = (u_flag.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->flag);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_flag;
      u_flag.base = 0;
      u_flag.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->flag = u_flag.real;
      offset += sizeof(this->flag);
     return offset;
    }

    const char * getType(){ return MODE_SRV; };
    const char * getMD5(){ return "24842bc754e0f5cc982338eca1269251"; };

  };

  class mode_srv {
    public:
    typedef mode_srvRequest Request;
    typedef mode_srvResponse Response;
  };

}
#endif
