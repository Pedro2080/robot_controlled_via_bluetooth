# Robot controlled via bluetooth

The robotic car is controlled wiressly via a Smartphone, the smarthphone has an Android app
through which  can be sent commands directly to the Robot.
The robot can move forward, backward, left, right and stop.
The Arduino's Bluetoth-controlled robot car is interfaced with a Bluetooth HC-05, an specific 
command is sent to the robot through an Android app installed on the mobile phone, the Bluetooth
module receives the command and forward it to the Arduino to perform a specif action.

## Components used:
 - Arduino MEGA 
 - L298N Motor Driver Module 
 - HC-05 Bluetooth Module  
 - Robot Chassis  
 - 4 x 5V Geared Motors  
 - Connecting Wires  
 - Battery Holder
 - Android Phone 
 - Bluetooth Controller App

### HC-05 Bluetooth Module:

The HC-05 Bluetooth Module is responsible for enabling Bluetooth Communication between Arduino and Android Phone.
Since will be only transmitting data related to the Robot’s movement from Android Phone to Bluetooth Module and do 
not intend to receive any data from Arduino, TX pin of the Bluetooth Module is connected to RX Pin of Arduino.

### L298N Motor Driver Module:

The L298N Motor Driver Module is responsible for providing the necessary drive current to the motors of the robotic car. 
The robot chassis which used in this Bluetooth Controlled Robot car project is supplied with 4 geared motors.

### Android App:

The name of the app used is `Arduino Bluetooth Control`, whis is installed on the Android Phone to communicate with the Bluetooth module.
[Link to download the app](https://play.google.com/store/apps/details?id=com.broxcode.arduinobluetoothfree&hl=en_US&gl=US)

The simplified bluetooth wiring diagram of the project is:
[Bluetooth_car_control_wiring_diagram](resources/bluetooth_car_control_wiring_diagram.jpg)

## Usage

Assemble the Robot, make the necessary connections and upload the code to Arduino
In the Android App, I have used 5 keys as Forward, Back, Left, Right and Stop. 

The corresponding data associated with each key is as follows:

 - Forward –> f
 - Left –> e
 - Stop –> p
 - Right –> d
 - Backward –> a

When a key is pressed on the Android App, the corresponding data is transmitted to
the Bluetooth Module from the Phone over Bluetooth Communication.
In the Arduino code, the Arduino MEGA receives any of this data from the Bluetooth Module (as per the key pressed)
and performs a simple switch case operation, where each case associated with appropriate instructions to the Motor Driver Input Pins.
For example, if ‘Forward’ key is pressed in the Android app, then ‘f’ is transmitted. Arduino will then make IN1 and IN3 as HIGH and 
IN2 and IN4 as LOW to achieve a forward motion.
The same applies to other keys correspond to appropriate setting of IN1 – IN4 pins.

[Robot_car_control_video_demostration](https://www.youtube.com/watch?v=k1oWYAJVBFU)