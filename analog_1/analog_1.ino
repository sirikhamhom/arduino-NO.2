#include <analogWrite.h>


 int IOT = 12 ;
 int LDR = 36 ;
int light = 0;
 
void setup() {
 pinMode (IOT,OUTPUT);
 pinMode (LDR,INPUT_PULLUP);
 Serial.begin(9600);
}
void loop() {
 
light=map (analogRead(36),0, 1024, 0,255 );

Serial.print(light);
analogWrite(IOT,light);
}
