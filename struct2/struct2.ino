struct LED {
  String Name;
  int iot = 12;
  int ntp = 15;
  int wifi = 2;
  int bt = 17;
};

struct LED led1;

int LEDF[4] = {led1.iot, led1.ntp, led1.wifi, led1.bt};
int i = 0;

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
  for (i = 0; i < 3; i++) {
    digitalWrite(LEDF[i], LOW);
    delay(250);
    digitalWrite(LEDF[i], HIGH);
    delay(250);
    Serial.println(i);
  }
    for (i = 3; i > 0; i--) {
    digitalWrite(LEDF[i], LOW);
    delay(250);
    digitalWrite(LEDF[i], HIGH);
    delay(250);
    Serial.println(i);
  }
}
