#define r A0
#define g A1
#define b A2
#define pr A3
#define pg A4
#define pb A5

void setup() {
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(pr,INPUT);
   pinMode(pg,INPUT);
    pinMode(pb,INPUT);
}

void loop() {
 int RValue = analogRead(pr);
 int GValue = analogRead(pg);
 int BValue = analogRead(pb);
 RGB(RValue,GValue,BValue);
}
void RGB(int R , int G, int B){
  analogWrite(r,R);
  analogWrite(g,G);
  analogWrite(b,B);
}
