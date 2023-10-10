#include "BluetoothSerial.h"

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif
char message;
BluetoothSerial SerialBT;
#define R 13
#define G 12
#define B 14

void setup() {
  Serial.begin(115200);
  SerialBT.begin("Natchanon"); //Bluetooth device name
  Serial.println("The device started, now you can pair it with bluetooth!");
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT);
}

void loop() {
  

if (SerialBT.available()){
     message = SerialBT.read();
}
  if (message =='B'){
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, HIGH);
}
else if (message =='R'){
    digitalWrite(R, HIGH);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
}
else if (message =='Y'){
    digitalWrite(R, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(B, LOW);
}
else if (message =='A'){
    digitalWrite(R, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
}
else if (message =='F'){
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
}
}
