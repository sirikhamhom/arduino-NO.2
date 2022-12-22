
#define led1 17
#define led2 2
#define led3 15
#define led4 12 

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
}



void loop (){
  int x = 1;
 do{
   digitalWrite(led1,LOW);
  delay(50);
  digitalWrite(led1,HIGH);
  delay(50);
  
   digitalWrite(led2,LOW);
  delay(50);
  digitalWrite(led2,HIGH);
  delay(50); 
  
   digitalWrite(led3,LOW);
  delay(50);
  digitalWrite(led3,HIGH);
  delay(50);

  digitalWrite(led4,LOW);
  delay(50);
  digitalWrite(led4,HIGH);
  delay(5);
  x++;
  }while (x<=10);
}
