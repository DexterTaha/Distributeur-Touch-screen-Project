const int Pump1 = 8;
const int Pump2 = 9;
const int Pump3 = 11;
int time = 2000;
void setup() 
{
  pinMode(Pump1,OUTPUT);
  pinMode(Pump2,OUTPUT);
  pinMode(Pump3,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  if(Serial.available())
  {
    String rec= Serial.readString();
    if(int(rec[0])==1)
    {
      digitalWrite(Pump1,HIGH);
      digitalWrite(Pump2,LOW);
      digitalWrite(Pump3,LOW);
      delay(time);
      digitalWrite(Pump1,LOW);
      digitalWrite(Pump2,LOW);
      digitalWrite(Pump3,LOW);
    }else if(int(rec[0])==2)
    {
      digitalWrite(Pump1,LOW);
      digitalWrite(Pump2,HIGH);
      digitalWrite(Pump3,LOW);
      delay(time);
      digitalWrite(Pump1,LOW);
      digitalWrite(Pump2,LOW);
      digitalWrite(Pump3,LOW);
    }else if(int(rec[0])==3)
    {
      digitalWrite(Pump1,LOW);
      digitalWrite(Pump2,LOW);
      digitalWrite(Pump3,HIGH);
      delay(time);
      digitalWrite(Pump1,LOW);
      digitalWrite(Pump2,LOW);
      digitalWrite(Pump3,LOW);
    }
  }
}
