void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(8, OUTPUT);
}

char income=0;
void loop()
{
  if(Serial.available()>0)
  {
  digitalWrite(4,LOW);
  digitalWrite(8,LOW);
    income=Serial.read();
    switch(income)
    {
      case 'f':
       forward();break;
      case 'b':
     backward();break;
      case 'l':
       left();break;
      case 'r':
       right();break;
      case 's':
       stop();break;
      default:
      break;
    }
  } 
  delay(2);
}

void forward()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
} 
void backward()
{
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
}
void left()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  
  while(1)
  {if(Serial.available()>0)
    return;
  digitalWrite(8,HIGH);
  delay(800);
  digitalWrite(8,LOW);
   delay(800);}
}
void right()
{
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(10,LOW);
  while(1)
  {
  if(Serial.available()>0)
    return;
  digitalWrite(4,HIGH);
  delay(800);
  digitalWrite(4,LOW);
  delay(800);}
}
void stop()
{
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
}
