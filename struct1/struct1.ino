struct LED {
  String Name;
  int iot = 12;
  int ntp = 15;
  int wifi = 2;
  int bt = 17;
};

struct LED led1;

void setup() {
  Serial.begin(9600); 
  pinMode(led1.iot, OUTPUT);
  pinMode(led1.ntp, OUTPUT);
  pinMode(led1.wifi, OUTPUT);
  pinMode(led1.bt, OUTPUT);
  led1.Name = "Natchanon";
  
}

void loop() {
  Serial.println("Hello " + led1.Name);
  digitalWrite(led1.iot, LOW);
  delay(500);
  digitalWrite(led1.iot, HIGH);
  delay(500);
  digitalWrite(led1.ntp, LOW);
  delay(500);
  digitalWrite(led1.ntp, HIGH);
  delay(500);
  digitalWrite(led1.wifi, LOW);
  delay(500);
  digitalWrite(led1.wifi, HIGH);
  delay(500);
  digitalWrite(led1.bt, LOW);
  delay(500);
  digitalWrite(led1.bt, HIGH);
  delay(500);
}
