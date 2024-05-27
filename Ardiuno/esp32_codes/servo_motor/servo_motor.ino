#include<Servo.h>
int servopin=9;
Servo vbservo;
int angle=0;
void setup() {
  // put your setup code here, to run once:
vbservo.attach(servopin);//declare the servo motor pin
}

void loop() {
  // put your main code here, to run repeatedly:
  for(angle=0;angle<180;angle++)
  {
      vbservo.write(angle);
      delay(100);
  }
  for(angle=0;angle<180;angle++)
  {
      vbservo.write(angle);
      delay(100);
  }

}
