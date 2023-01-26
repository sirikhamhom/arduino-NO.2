String str = "cdti";


void setup()  {
   Serial.begin(9600);
   str += "Hello";
   
}
void loop(){
  Serial.println (str);
  delay (500);
}
