const int Pump1 = 8;
const int Pump2 = 9;
const int Pump3 = 11;
const int Led1 = 7;
const int Led2 = 6;
const int Led3 = 10;
int time = 2000;
void setup() 
{
  pinMode(Pump1,OUTPUT);
  pinMode(Pump2,OUTPUT);
  pinMode(Pump3,OUTPUT);
  pinMode(Led1,OUTPUT);
  pinMode(Led2,OUTPUT);
  pinMode(Led3,OUTPUT);
  Serial.begin(9600);
  Welcome();
}
void Welcome(){
      digitalWrite(Led1,HIGH);
      digitalWrite(Led2,LOW);
      digitalWrite(Led3,LOW);
      delay(500);
      digitalWrite(Led1,HIGH);
      digitalWrite(Led2,HIGH);
      digitalWrite(Led3,LOW);
      delay(500);
      digitalWrite(Led1,HIGH);
      digitalWrite(Led2,HIGH);
      digitalWrite(Led3,HIGH);
      delay(500);
  
      for (int i = 0; i < 3; i++) {
      digitalWrite(Led1,LOW);
      digitalWrite(Led2,LOW);
      digitalWrite(Led3,LOW);
      delay(100);
      digitalWrite(Led1,HIGH);
      digitalWrite(Led2,HIGH);
      digitalWrite(Led3,HIGH);
      delay(100);
      }
  
      digitalWrite(Led1,LOW);
      digitalWrite(Led2,LOW);
      digitalWrite(Led3,LOW);
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
      digitalWrite(Pump2,HIGH);
      digitalWrite(Pump3,LOW);
      delay(time);
      digitalWrite(Pump1,LOW);
      digitalWrite(Pump2,LOW);
      digitalWrite(Pump3,LOW);

      for (int i = 0; i < 3; i++) {
      digitalWrite(Led1,LOW);
      digitalWrite(Led2,LOW);
      digitalWrite(Led3,LOW);
      delay(100);
      digitalWrite(Led1,HIGH);
      digitalWrite(Led2,HIGH);
      digitalWrite(Led3,HIGH);
      delay(100);
      }
      digitalWrite(Led1,LOW);
      digitalWrite(Led2,LOW);
      digitalWrite(Led3,LOW);
    }
    else if(int(rec[0])==2)
    {
      digitalWrite(Pump1,LOW);
      digitalWrite(Pump2,HIGH);
      digitalWrite(Pump3,LOW);
      delay(time);
      digitalWrite(Pump1,LOW);
      digitalWrite(Pump2,LOW);
      digitalWrite(Pump3,HIGH);
      delay(time);
      digitalWrite(Pump1,LOW);
      digitalWrite(Pump2,LOW);
      digitalWrite(Pump3,LOW);

      for (int i = 0; i < 3; i++) {
      digitalWrite(Led1,LOW);
      digitalWrite(Led2,LOW);
      digitalWrite(Led3,LOW);
      delay(100);
      digitalWrite(Led1,HIGH);
      digitalWrite(Led2,HIGH);
      digitalWrite(Led3,HIGH);
      delay(100);
      }
      digitalWrite(Led1,LOW);
      digitalWrite(Led2,LOW);
      digitalWrite(Led3,LOW);
    }
    else if(int(rec[0])==3)
    {
      digitalWrite(Pump1,LOW);
      digitalWrite(Pump2,LOW);
      digitalWrite(Pump3,HIGH);
      delay(time);
      digitalWrite(Pump1,HIGH);
      digitalWrite(Pump2,LOW);
      digitalWrite(Pump3,LOW);
      delay(time);
      digitalWrite(Pump1,LOW);
      digitalWrite(Pump2,LOW);
      digitalWrite(Pump3,LOW);
      
      for (int i = 0; i < 3; i++) {
      digitalWrite(Led1,LOW);
      digitalWrite(Led2,LOW);
      digitalWrite(Led3,LOW);
      delay(100);
      digitalWrite(Led1,HIGH);
      digitalWrite(Led2,HIGH);
      digitalWrite(Led3,HIGH);
      delay(100);
      }
      digitalWrite(Led1,LOW);
      digitalWrite(Led2,LOW);
      digitalWrite(Led3,LOW);
    }
  }
}
