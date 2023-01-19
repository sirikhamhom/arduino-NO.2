#include <analogWrite.h>

int BT = 17;
         int WIFI = 2;
                    int NTP = 15;
                              int IOT = 12 ;
int LDR = 36 ;
int light = 0;

void setup() {
  pinMode (BT, OUTPUT);
  pinMode (WIFI, OUTPUT);
  pinMode (NTP, OUTPUT);
  pinMode (IOT, OUTPUT);
  digitalWrite (BT, HIGH);
  digitalWrite (WIFI, HIGH);
  digitalWrite (NTP, HIGH);
  digitalWrite (BT, HIGH);
  pinMode (LDR, INPUT);
  Serial.begin(9600);
}
void loop() {

  light = map (analogRead(36), 0, 1024, 0, 4 );
  Serial.print(light);

  if (light == 0) {
    digitalWrite( BT, LOW);
    digitalWrite( WIFI, LOW);
    digitalWrite( NTP, LOW);
    digitalWrite( IOT, LOW);
  }
    if (light == 1) {
    digitalWrite( BT, LOW);
    digitalWrite( WIFI, LOW);
    digitalWrite( NTP, LOW);
    digitalWrite( IOT, HIGH);
    }
    if (light == 2) {
    digitalWrite( BT, LOW);
    digitalWrite( WIFI, LOW);
    digitalWrite( NTP, HIGH);
    digitalWrite( IOT, HIGH);
    }
    if (light == 3) {
    digitalWrite( BT, HIGH);
    digitalWrite( WIFI, HIGH);
    digitalWrite( NTP, HIGH);
    digitalWrite( IOT, HIGH);
  }

  if (light == 4) {
    digitalWrite( BT, HIGH);
    digitalWrite( WIFI, HIGH);
    digitalWrite( NTP, HIGH);
    digitalWrite( IOT, HIGH);
  }
}
