#include <Servo.h> 
int button1 = 2;
int button2 = 3;
Servo svo;


void setup() {
  svo.attach(9);
  attachInterrupt(0, servo90, LOW);
  attachInterrupt(1, servo180, LOW);  
}

void loop() {
  svo.write(0);
  delay(3000);
}

void servo90(){
  svo.write(90);
}

void servo180(){
  svo.write(180);
}
