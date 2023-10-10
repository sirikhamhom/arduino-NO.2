/*
  WiFiAccessPoint.ino creates a WiFi access point and provides a web server on it.

  Steps:
  1. Connect to the access point "yourAp"
  2. Point your web browser to http://192.168.4.1/H to turn the LED on or http://192.168.4.1/L to turn it off
     OR
     Run raw TCP "GET /H" and "GET /L" on PuTTY terminal with 192.168.4.1 as IP address and 80 as port

  Created for arduino-esp32 on 04 July, 2018
  by Elochukwu Ifediora (fedy0)
*/

#include <WiFi.h>
#include <WiFiClient.h>
#include <WiFiAP.h>
char message;

#define LED_BUILTIN 2   // Set the GPIO pin where you connected your test LED or comment this line out if your dev board has a built-in LED

// Set these to your desired credentials.
const char *ssid = "Natchanon";
const char *password = "123456789";

WiFiServer server(80);
#define Pin1 23
#define Pin2 21

#define Pin3 19
#define Pin4 18

#define pwm  22
#define Pin5 17
#define Pin6 16

void setup() {
    pinMode(Pin1,OUTPUT);
  pinMode(Pin2,OUTPUT);
  pinMode(Pin3,OUTPUT);
  pinMode(Pin4,OUTPUT);
  pinMode(Pin5,OUTPUT);
  pinMode(Pin6,OUTPUT); 

  Serial.begin(115200);
  Serial.println();
  Serial.println("Configuring access point...");

  // You can remove the password parameter if you want the AP to be open.
  // a valid password must have more than 7 characters
  if (!WiFi.softAP(ssid, password)) {
    log_e("Soft AP creation failed.");
    while(1);
  }
  IPAddress myIP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(myIP);
  server.begin();

  Serial.println("Server started");
}

void loop() {
  WiFiClient client = server.available();   // listen for incoming clients
   
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
  else if (message == 'O'){
    analogWrite(pwm,255);
    digitalWrite(Pin5, HIGH);
    digitalWrite(Pin6, LOW);
  }
  else if (message == 'P'){
    analogWrite(pwm,255);
    digitalWrite(Pin5, LOW);
    digitalWrite(Pin6, LOW);
  }

}
