#include "BluetoothSerial.h"

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif
char message;
BluetoothSerial SerialBT;
#define Pin1 23
#define Pin2 21

#define Pin3 19
#define Pin4 18

#define pwm  22
#define Pin5 17
#define Pin6 16

void setup() {
  pinMode(Pin1, OUTPUT);
  pinMode(Pin2, OUTPUT);
  pinMode(Pin3, OUTPUT);
  pinMode(Pin4, OUTPUT);
  pinMode(Pin5, OUTPUT);
  pinMode(Pin6, OUTPUT);

  Serial.begin(115200);
  SerialBT.begin("qwertyx"); //Bluetooth device name
  Serial.println("The device started, now you can pair it with bluetooth!");
}

void loop() {


  if (SerialBT.available()) {
    message = SerialBT.read();
  }
  if (message == 'R') {
    digitalWrite(Pin3, HIGH);
    digitalWrite(Pin4, LOW);
    digitalWrite(Pin1, LOW);
    digitalWrite(Pin2, HIGH);

  }
  else if (message == 'S') {
    digitalWrite(Pin1, LOW);
    digitalWrite(Pin2, LOW);
    digitalWrite(Pin3, LOW);
    digitalWrite(Pin4, LOW);
  }
  else if (message == 'L') {
    digitalWrite(Pin3, LOW);
    digitalWrite(Pin4, HIGH);
    digitalWrite(Pin1, HIGH);
    digitalWrite(Pin2, LOW);
    
  }
  else if (message == 'F') {
    digitalWrite(Pin1, HIGH);
    digitalWrite(Pin2, LOW);
    digitalWrite(Pin3, HIGH);
    digitalWrite(Pin4, LOW);
  }
  else if (message == 'B') {
    digitalWrite(Pin1, LOW);
    digitalWrite(Pin2, HIGH);
    digitalWrite(Pin3, LOW);
    digitalWrite(Pin4, HIGH);
  }
  else if (message == 'O') {
    analogWrite(pwm, 255);
    digitalWrite(Pin5, HIGH);
    digitalWrite(Pin6, LOW);
  }
  else if (message == 'P') {
    analogWrite(pwm, 255);
    digitalWrite(Pin5, LOW);
    digitalWrite(Pin6, LOW);

  }
  else if (message == 'W') {
    digitalWrite(Pin3, HIGH);
    digitalWrite(Pin4, LOW);
    digitalWrite(Pin1, LOW);
    digitalWrite(Pin2, HIGH);
    delay(750);
  }
  else if (message == 'K') {
    digitalWrite(Pin3, LOW);
    digitalWrite(Pin4, HIGH);
    digitalWrite(Pin1, HIGH);
    digitalWrite(Pin2, LOW);
    delay(750);
  }
     
}
