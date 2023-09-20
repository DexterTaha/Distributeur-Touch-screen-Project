#define led 13
void setup() 
{
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  if(Serial.available())
  {
    String rec= Serial.readString();
    if(int(rec[0])==1)
    {
      digitalWrite(led,HIGH);
    }else if(int(rec[0])==2)
    {
      digitalWrite(led,LOW);
    }
  }
}
