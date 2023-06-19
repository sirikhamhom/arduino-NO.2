#define r 2
#define g 3
#define b 4
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
}
void RGB(int R , int G, int B){
  analogWrite(r,R);
  analogWrite(g,G);
  analogWrite(b,B);
}
