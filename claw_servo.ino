#include <Servo.h>

// Servo Pins
const int servoX = 8;
const int servoY = 7;

Servo xServo;
Servo yServo;

void setup(){
  xServo.attach(servoX);
  yServo.attach(servoY);
  xServo.write(0);
  yServo.write(180);
  delay(2000);

}
void loop(){
  xServo.write(0);
  yServo.write(180);
  delay(1000);
  xServo.write(70);
  yServo.write(100);
  delay(1000);

}