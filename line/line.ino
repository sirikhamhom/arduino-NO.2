#include <POP32.h>
int L1,L2, C,R1, R2;
int RefL1 = 2317;
int RefL2 = 1586;
int RefC = 2371;
int RefR2 = 2273;
int RefR1 = 2334;
int Speed;
int TurnSpeed;
int  LeftSpeed, RightSpeed;
int Kp,Ki,Kd,Error,PreError, Integral,MaxSpeed;

//int InitialSpeedBack;
void setup() {
  //ShowADC();

 //Speed=20;
 //TurnSpeed=15;
  waitSW_OK();
beep();
}

void loop() {
  
round2();
  
}
