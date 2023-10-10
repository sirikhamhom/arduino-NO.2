#include <POP32.h>
int L, C, R;
int RefL = 2726;
int RefC = 2598;
int RefR = 1611;
int Speed;
int TurnSpeed;
int  LeftSpeed, RightSpeed;
//int InitialSpeedBack;
void setup() {
  // put your setup code here, to run once:
  //L = analog(0);
 // C = analog(1);
 // R = analog(2);
 // oled.clear();
 // oled.textSize(1);
  //oled.text(0,0, "L = %d",L);
  //oled.text(1,0, "C = %d",C);
 // oled.text(2,0, "R = %d",R);
 // oled.show();

 Speed=20;
 TurnSpeed=15;
  waitSW_OK();
beep();
}

void loop() {
  
  
round1();
  
  // put your main code here, to run repeatedly:
 // abc();
  //  if (C == 0) {
  //  fd(40);
  //}
 // else if (L == 0) {
 //   tl(40);
  //}
 // else if (R == 0) {
 //   tr(40);
  //}
}

void abc(){
 // L = analog(0);
 // C = analog(1);
 // R = analog(2);
  //if(L<RefL) L = 0; else L = 1;
  //if(C<RefC) C = 0; else C = 1;
 // if(R<RefR) R = 0; else R = 1;
}
