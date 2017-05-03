//including important header files.
#include "ros.h"
#include "arduino_controler/pin_Mode.h"
#include "arduino_controler/analog_write.h"
#include "arduino_controler/analog_read.h"
#include "arduino_controler/analog_read_msg.h"
#include "std_msgs/Int32.h"
#include "Arduino.h"

int pin[53];
//CReating node handle with a name of nh..
ros::NodeHandle nh;

using arduino_controler::pin_Mode;
using arduino_controler::analog_write;
using arduino_controler::analog_read;

// for pinmode stat = 0 means INPUT
// and stat = 1 means OUTPUT

void callback_pinmode(const pin_Mode::Request & req, pin_Mode::Response & res){
  pinMode(req.pin, req.stat);
  pin[req.pin]=req.stat;
  res.out=1;
}

ros::ServiceServer<pin_Mode::Request, pin_Mode::Response> pin_mode_server("pin_mode_srv",&callback_pinmode);

void callback_analogwrite(const analog_write::Request & req, analog_write::Response & res){
  analogWrite(req.pin, req.val);
  res.out=1;
}

ros::ServiceServer<analog_write::Request, analog_write::Response> analog_write_server("analog_write_srv",&callback_analogwrite);

void callback_analogread(const analog_write::Request & req, analog_write::Response & res){
  res.out=analogRead(req.pin);
}

ros::ServiceServer<analog_write::Request, analog_write::Response> analog_read_server("analog_read_srv",&callback_analogread);

arduino_controler::analog_read_msg analog_msg;

ros::Publisher pub_data("analog_read_val", &analog_msg);    

void setup()
{
  for(int i=0;i<15;i++){
    pin[i]=1;
  }
  nh.initNode(); //initialising the node
  nh.advertiseService(pin_mode_server);
  nh.advertiseService(analog_write_server);
  nh.advertise(pub_data);
}

void loop()
{
  
  analog_msg.pin0=analogRead(A0);
  analog_msg.pin1=analogRead(A1);
  analog_msg.pin2=analogRead(A2);
  analog_msg.pin3=analogRead(A3);
  analog_msg.pin4=analogRead(A4);
  analog_msg.pin5=analogRead(A5);
  analog_msg.pin6=analogRead(A6);
  analog_msg.pin7=analogRead(A7);
  analog_msg.pin8=analogRead(A8);
  analog_msg.pin9=analogRead(A9);
  analog_msg.pin10=analogRead(A10);
  analog_msg.pin11=analogRead(A11);
  analog_msg.pin12=analogRead(A12);
  analog_msg.pin13=analogRead(A13);
  analog_msg.pin14=analogRead(A14);
  analog_msg.pin15=analogRead(A15);

  pub_data.publish(&analog_msg);
  nh.spinOnce();
  delay(500);
}
