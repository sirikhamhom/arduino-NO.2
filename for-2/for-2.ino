struct LED{
  String name;
 int iot= 12;
 int  ntp= 15;
 int wifi= 2;
 int bt =17;
 
};

struct LED led1;
int iot = 12;
int ntp=15;
int wifi=2;
int bt=17;
void setup(){
  Serial.begin(9600);
  pinMode(led1.iot,OUTPUT);
   pinMode(led1. ntp,OUTPUT);
    pinMode(led1.wifi,OUTPUT);
     pinMode(led1.bt,OUTPUT);
     led1.name = "Natchanon";
}
void loop (){
  Serial.println("HEllo"+ led1.name);
  digitalWrite(iot,LOW);
  delay(500);
  digitalWrite(iot,HIGH);
  delay(500);

  digitalWrite(ntp,LOW);
  delay(500);
  digitalWrite(ntp,HIGH);
  delay(500);

  digitalWrite(wifi,LOW);
  delay(500);
  digitalWrite(wifi,HIGH);
  delay(500);

  digitalWrite(bt,LOW);
  delay(500);
  digitalWrite(bt,HIGH);
  delay(500);
  
}
