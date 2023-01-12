#define bt 17
#define wifi 2
#define ntp 15
#define iot 12
#define sw1 16
#define sw2 14

void setup() {
  pinMode (bt,OUTPUT);
 pinMode (wifi,OUTPUT);
pinMode (ntp,OUTPUT);
pinMode (iot,OUTPUT);
pinMode (sw1,INPUT_PULLUP);
pinMode (sw2,INPUT_PULLUP);
digitalWrite (bt,HIGH);
digitalWrite (wifi,HIGH);
digitalWrite (ntp,HIGH);
digitalWrite (iot,HIGH);
}

void loop() {
  int x = digitalRead (sw1);
  int z = digitalRead (sw2);
  
 if ( x == LOW){
 forward();
 }
 else if (z == LOW){
 back();
 } 
 
 else{
  sto();
  
 }
 }

 
