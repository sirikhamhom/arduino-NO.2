String str1 = "hello" ;
String neme = "Natchanon";
int age = 10000000;
float gpa = 10.00;



void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.println("NAME : " + neme);
  Serial.println("AGE : " + String(age));
  Serial.println("gpa : " + String(gpa));
  delay(1000);
  

}
