//including important header files.
#include "ros.h"
#include "arduino_controler/pin_Mode.h"
#include "arduino_controler/analog_write.h"
#include "arduino_controler/analog_read_msg.h"
#include "std_msgs/Int32.h"
#include "Arduino.h"

int pin[15];


//CReating node handle with a name of nh..
ros::NodeHandle nh;

using arduino_controler::pin_Mode;
using arduino_controler::analog_write;

void callback(const pin_Mode::Request & req, pin_Mode::Response & res){
  pinMode(req.pin, req.stat);
  pin[req.pin]=req.stat;
  res.out=1;
}

ros::ServiceServer<pin_Mode::Request, pin_Mode::Response> pin_mode_server("pin_mode_srv",&callback);

void callback1(const analog_write::Request & req, analog_write::Response & res){
  analogWrite(req.pin, req.val);
  res.out=1;
}

ros::ServiceServer<analog_write::Request, analog_write::Response> analog_write_server("analog_write_srv",&callback1);

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
  int i=0;
  if(!pin[i]){
    analog_msg.pin0=digitalRead(i);
  }
  i++;
  if(!pin[i]){
    analog_msg.pin1=digitalRead(i);
  }
  i++;
  if(!pin[i]){
    analog_msg.pin2=digitalRead(i);
  }
  i++;
  if(!pin[i]){
    analog_msg.pin3=digitalRead(i);
  }
  i++;
    if(!pin[i]){
    analog_msg.pin4=digitalRead(i);
  }
  i++;
  if(!pin[i]){
    analog_msg.pin5=digitalRead(i);
  }
  i++;
  if(!pin[i]){
    analog_msg.pin6=digitalRead(i);
  }
  i++;
  if(!pin[i]){
    analog_msg.pin7=digitalRead(i);
  }
  i++;
    if(!pin[i]){
    analog_msg.pin8=digitalRead(i);
  }
  i++;
  if(!pin[i]){
    analog_msg.pin9=digitalRead(i);
  }
  i++;
  if(!pin[i]){
    analog_msg.pin10=digitalRead(i);
  }
  i++;
  if(!pin[i]){
    analog_msg.pin11=digitalRead(i);
  }
  i++;
  if(!pin[i]){
    analog_msg.pin12=digitalRead(i);
  }
  i++;
  if(!pin[i]){
    analog_msg.pin13=digitalRead(i);
  }
  i++;

  pub_data.publish(&analog_msg);
  nh.spinOnce();
  delay(500);
}
