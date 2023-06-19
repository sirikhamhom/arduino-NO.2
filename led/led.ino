#define led1 2
#define led2 3
#define led3 4
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop() {
 digitalWrite(led1,HIGH);
 delay(300);
 digitalWrite(led1,LOW);
 delay(300);

 digitalWrite(led2,HIGH);
 delay(300);
 digitalWrite(led2,LOW);
 delay(300);

 digitalWrite(led3,HIGH);
 delay(300);
 digitalWrite(led3,LOW);
 delay(300);
 
}
