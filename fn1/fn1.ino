#define led4 12 
         
void setup(){

  pinMode(led4,OUTPUT);
  
}
void loop(){
   led4blink();
   
}
void led4blink(void){
  digitalWrite(led4,LOW);
  delay(500);
  digitalWrite(led4,HIGH);
  delay(500);
}
