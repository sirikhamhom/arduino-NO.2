#define led1 17
#define led2 2
#define led3 15
#define led4 12 
         
void setup(){
 pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  
}
void loop(){
   led4blink();
   led3blink();
   led1blink();
   
  digitalWrite(led2, LOW);
  delay(led2blink(100));
  digitalWrite(led2, HIGH);
  delay(led2blink(10));

}
