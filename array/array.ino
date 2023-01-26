int x[3] = {'A','B','C'};
char y[3] = {'A','B','C'};
void setup() {
  Serial.begin(9600);
  Serial.println("\n"+String(x[0]) + "=" + String(y[0]));
  Serial.println(String(x[1]) + "=" + String(y[1]));
  Serial.println(String(x[2]) + "=" + String(y[2]));
  
  
  

}

void loop() {

}
