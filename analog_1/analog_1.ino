#include <analogWrite.h>

int BT = 17 ;
 int WIFI = 2 ;
 int NTP = 15 ;
 int IOT = 12 ;

void setup() {
 pinMode (BT,OUTPUT);
 pinMode (WIFI,OUTPUT);
 pinMode (NTP,OUTPUT);
 pinMode (IOT,OUTPUT);
 digitalWrite (BT,HIGH);
 digitalWrite (WIFI,HIGH);
 digitalWrite (NTP,HIGH);
 digitalWrite (IOT,HIGH);
 
}
void loop() {
 
for (int x = 255 ; x >= 0 ; x--){

analogWrite(BT,x);
delay(3);
}
for(int x = 0 ; x <= 255 ; x++){
    analogWrite(BT , x);
    delay(3);
}
}
