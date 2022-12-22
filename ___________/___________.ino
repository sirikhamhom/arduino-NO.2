#define led1 17
#define led2 2
#define led3 15
#define led4 12 
void setup()  {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
}

void loop()  {
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1,LOW);
  delay(500);
  
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2,LOW);
  delay(500);
  
  digitalWrite(led3, HIGH);
  delay(500);
  digitalWrite(led3,LOW);
  delay(500);
  
  digitalWrite(led4, HIGH);
  delay(500);
  digitalWrite(led4,LOW);
  delay(500);
}
