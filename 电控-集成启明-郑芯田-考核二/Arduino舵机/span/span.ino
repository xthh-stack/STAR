#include<Servo.h>
Servo myservo;
void setup() {
  myservo.attach(9);
}

void loop() {
  int angle[]={0,30,45,90,135};
  for (int i=0;i<=4;i++){
    myservo.write(angle[i]);
    delay(1000);
  }
}
