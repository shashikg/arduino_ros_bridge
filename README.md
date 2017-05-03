# arduino_ros_bridge
This project was done to control arduino from your computer running ros during runtime.
This code had been written for arduin mega2560. It can be changed according to your usage.

Why??
There will be no need to upload codes to arduino each and everytime you want it to be changed, a single code for arduino. Rest of the code and algorithm which you want can be written in any programming language in which you want. You can also run 2-3 algo at the same time for a single arduino.

Features supported at present:
1) set pinMode type using the service call to "pin_mode_srv"
2) analogRead --> service "analog_read_srv" for pwm pins.
3) analogWrite --> service "analog_write_srv" for pwm pins.
4) ANALOG IN pin data will be published on a topic "analog_read_val"
5) extra services for digitalRead or digitalWrite had not been made because we can use analog one for the same it would not affect.
