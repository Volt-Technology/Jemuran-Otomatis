#include <Servo.h> 

int rainSensor = A0;
int threshold = 400;
int servoPos = 90;
Servo myServo;

void setup() {
  pinMode(rainSensor, INPUT);
  myServo.attach(11);
  myServo.write(servoPos);

}

void loop() {
 int sensor = analogRead(rainSensor);

 if (sensor < threshold){
  servoPos = 0;
 }else{
  servoPos = 180;
 }

  myServo.write(servoPos);
  delay(500);
}
