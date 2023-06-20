#define sw 2
int val = 0;

void setup() {
  pinMode(sw,INPUT);
  Serial.begin(9600); 
  

}

void loop() {
  val = digitalRead(sw);
  if (val == 1){
  Serial.print(":HELLO");
  }

  else{
Serial.print(":good by");
delay(300);
}
  
}
