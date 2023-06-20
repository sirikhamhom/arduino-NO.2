#define r A0
#define g A1
#define b A2

void RGB(int R, int G, int B);

void setup() {
  Serial.begin(9600);
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    char In = Serial.read();
    if (In == 's') {
      RGB(0, 255, 255);
      delay(500);
    } else if (In == 'a') {
      RGB(255, 255, 255);
      delay(500);
    } else if (In == 'w') {
      RGB(255, 0, 255);
      delay(500);
    }
  }
}

void RGB(int R, int G, int B) {
  analogWrite(r, R);
  analogWrite(g, G);
  analogWrite(b, B);
}
