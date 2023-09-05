const int Pump1 = 9;
const int Pump2 = 8;
const int Pump3 = 11;
const int Led1 = 6;
const int Led2 = 7;
const int Led3 = 10;
int time = 2000;
int Royal = 0;
int Oasis = 0;
int Tropical = 0;
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
  if(Royal == 6){digitalWrite(Led1,HIGH);}
  if(Oasis == 6){digitalWrite(Led2,HIGH);}
  if(Tropical == 6){digitalWrite(Led3,HIGH);}
  if(Serial.available())
  {
    String rec= Serial.readString();
    if(int(rec[0])==1 && Royal > 7)
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
      Royal++;
    }
    else if(int(rec[0])==2 && Oasis > 7)
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
      Oasis++;
    }
    else if(int(rec[0])==3 && Tropical > 7)
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
      Tropical++;
    }
  }
}
