#define led3 15
#define led4 12 
         
void setup(){
 
  pinMode(led4,OUTPUT);
  
}
void loop(){
   led4blink();
   led3blink();
   
}
void led4blink(void){
  digitalWrite(led4,LOW);
  delay(500);
  digitalWrite(led4,HIGH);
  delay(500);
}
void led3blink(void){
   digitalWrite(led3,LOW);
  delay(500);
  digitalWrite(led3,HIGH);
  delay(500);
}
