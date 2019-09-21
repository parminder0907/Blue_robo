int led=13;
int m11=2;
int m12=3;
int m21=4;
int m22=5;
char data=0;
void forward()
{
  digitalWrite(m11,LOW);
  digitalWrite(m12,HIGH);
  digitalWrite(m21,HIGH);
  digitalWrite(m22,LOW);

}
void backward()
{
  digitalWrite(m11,HIGH);
  digitalWrite(m12,LOW);
  digitalWrite(m21,LOW);
  digitalWrite(m22,HIGH);
  
  
}
void left()
{
  digitalWrite(m11,LOW);
  digitalWrite(m12,HIGH);
  delay(100);
  digitalWrite(m21,LOW);
  digitalWrite(m22,LOW);

}
void right()
{
  digitalWrite(m11,LOW);
  digitalWrite(m12,LOW);
  delay(100);
  digitalWrite(m21,HIGH);
  digitalWrite(m22,LOW);

}
void Stop()
{
  digitalWrite(m11,LOW);
  digitalWrite(m12,LOW);
  digitalWrite(m21,LOW);
  digitalWrite(m22,LOW);

}
void setup()
{
  Serial.begin(9600);
  pinMode(m11,OUTPUT);
  pinMode(m12,OUTPUT);
  pinMode(m21,OUTPUT);
  pinMode(m22,OUTPUT);
  pinMode(led,OUTPUT);
}
void loop()
{
  while(Serial.available())
  {
    char data=Serial.read();
    if(data=='1')
    {
      Serial.println("Forward");
      forward();
    }
    else if(data=='2')
    {
      Serial.println("left");
      right();
    }
    else if(data=='3')
    {
      Serial.println("Right");
      left();
    }
    else if(data=='4')
    {
      Serial.println("Backward");
      backward();
    }
    else if(data=='5')
    {
      Serial.println("Stop");
      Stop();
    }
     if(data=='6')
      digitalWrite(led,HIGH);
      else if(data=='7')
     digitalWrite(led,LOW);
    delay(100);
    }
  }

