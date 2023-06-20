#define r A0
#define g A1
#define b A2
void setup() {
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT);
}

void loop() {
 RGB(0,255,255);
 delay(300);
 RGB(255,255,255);
 delay(300);
 RGB(255,0,255); 
 delay(300);
 RGB(255,0,0);
 delay(300);
 RGB(0,0,255);
 delay(300);
}
void RGB(int R , int G, int B){
  analogWrite(r,R);
  analogWrite(g,G);
  analogWrite(b,B);
}
