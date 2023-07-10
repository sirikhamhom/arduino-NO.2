int LED[] = {9,10,11};
void setup() {
 
pinMode(LED[0], OUTPUT);
pinMode(LED[1], OUTPUT);
pinMode(LED[2], OUTPUT);
attachInterrupt(1, blink, RISING);
}
void loop(){
 for(int i=0; i<3; i++){
  digitalWrite(LED[i], HIGH);
  delay(1000);
  digitalWrite(LED[i], LOW);
  delay(1000);
 }
}
void blink(){
  digitalWrite(LED[0], HIGH);
  digitalWrite(LED[1], HIGH);
  digitalWrite(LED[2], HIGH);
  delay(1000);
}
