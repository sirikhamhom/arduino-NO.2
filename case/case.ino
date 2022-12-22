#define sw1 16
#define sw2 14
#define led1 17
#define led2 2
#define led3 15
#define led4 12 
char key;

void setup()  {
   Serial.begin(9600);
   pinMode(led1,OUTPUT);
   pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
  digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  digitalWrite(led4,0);
}
void loop(){
   
key = Serial.read();
Serial.println(key);
delay(10);
switch(key){
  case 'q':  digitalWrite(led1,0);
             Serial.println("led3 ON");
             delay(5000);
             
  case 'w':  digitalWrite(led2,0);
             Serial.println("led3 ON");
             delay(5000);
             
  case 'e':  digitalWrite(led3,0);
             Serial.println("led3 ON");
             delay(5000);
  break;

  case 'r': digitalWrite(led4,0);
            Serial.println("led4 ON");
            delay(5000);
  break;
  default: digitalWrite(led1,1);
           digitalWrite(led2,1);
           digitalWrite(led3,1);
           digitalWrite(led4,1);
           Serial.println("OFF ALL");
}
}
