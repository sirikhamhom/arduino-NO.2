#define led1 17
#define led2 2
#define led3 15
#define led4 12 
#define sw1 16
#define sw2 14

void setup()  {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(sw1,INPUT_PULLUP);
  pinMode(sw2,INPUT_PULLUP);
}

void loop()  {
   int S1Val= digitalRead(sw1);
   int S2Val= digitalRead(sw2);
   if (S1Val ==0)
   {
    digitalWrite(led1,0);
    digitalWrite(led2,0);
    digitalWrite(led3,0);
    digitalWrite(led4,0);
   }
    else if (S2Val ==0)
    {
      digitalWrite(led1,1);
      digitalWrite(led2,1);
      digitalWrite(led3,1);
      digitalWrite(led4,1);
    }
}
