cmake_minimum_required(VERSION 2.8.3)
project(arduino_controler)

find_package(catkin REQUIRED COMPONENTS
  message_generation
  message_runtime
  roscpp
  rosserial_arduino
  rosserial_client
  std_msgs
  rospy
  roslib
)

find_package(Boost REQUIRED COMPONENTS system)

add_message_files(
   FILES
   analog_read_msg.msg
   
 )

 add_service_files(
   FILES
	pin_Mode.srv
	analog_write.srv
	analog_read.srv
 )

generate_messages(
   DEPENDENCIES
   std_msgs
 )

catkin_package(
CATKIN_DEPENDS message_runtime roscpp rosserial_arduino rosserial_client roslib
)

include_directories(
  ${catkin_INCLUDE_DIRS}
  ${Boost_INCLUDE_DIRS}
)


rosserial_generate_ros_lib(
  PACKAGE rosserial_arduino
  SCRIPT make_libraries.py
)

rosserial_configure_client(
  DIRECTORY firmware
  TOOLCHAIN_FILE ${ROSSERIAL_ARDUINO_TOOLCHAIN}
)

rosserial_add_client_target(firmware arduino_node ALL)
rosserial_add_client_target(firmware arduino_node-upload)

## Declare a C++ executable
#add_executable(dabba src/dabba.cpp)

#add_dependencies(c++ file name arduino_generate_messages_cpp)

## Specify libraries to link a library or executable target against
# target_link_libraries(dabba
#   ${catkin_LIBRARIES}
 #)