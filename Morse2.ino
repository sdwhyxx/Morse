void setup()
{
  pinMode(2,OUTPUT);
  Serial.begin(9600);
}

void loop()
{ char data= 0;
  if (Serial.available() > 0)
  {
    data = Serial.read();
  }
switch (data) {
  case 'a':
   dot();dash();delay(750);
    break;
  case 'b':
  dash();dot();  dot();  dot(); delay(750);
    break;
  case 'c':
   dash(); dot(); dash();  dot(); delay(750);
    break;
    case 'd':
   dash(); dot();  dot(); delay(750);
    break;
    case 'e':
   dot(); delay(750);
    break;
    case 'f':
   dot();  dot();  dash(); dot(); delay(750);
    break;
    case 'g':
   dash(); dash(); dot(); delay(750);
    break;
    case 'h':
   dot();  dot();  dot();  dot(); delay(750);
    break;
    case 'i':
   dot();  dot(); delay(750);
    break;
    case 'j':
   dot();  dash(); dash(); dash();delay(750);
    break;
    case 'k':
   dash(); dot(); dash();delay(750);
    break;
    case 'l':
   dot();  dash();  dot();  dot(); delay(750);
    break;
    case 'm':
   dash(); dash();delay(750);
    break;
    case 'n':
   dash();  dot(); delay(750);
    break;
    case 'o':
   dash(); dash(); dash(); delay(750);
    break;
    case 'p':
   dot();  dash(); dash();  dot(); delay(750);
    break;
    case 'q':
   dash(); dash();  dot();  dash();delay(750);
    break;
    case 'r':
   dot(); dash();  dot(); delay(750);
    break;
    case 's':
   dot();  dot();  dot(); delay(750);
    break;
    case 't':
   dash();delay(750);
    break;
    case 'u':
   dot();  dot();  dash(); delay(750);
    break;
    case 'v':
   dot();  dot();  dot(); dash();delay(750);
    break;
    case 'w':
   dot(); dash(); dash();delay(750);
    break;
    case 'x':
   dash(); dot();  dot();  dash(); delay(750);
    break;
    case 'y':
   dash(); dot(); dash(); dash();delay(750);
    break;
    case 'z':
   dash(); dash(); dot();  dot(); delay(750);
    break;
    case ' ':
  delay(1750);
    break;
    case '/': break;
}
}


void dot()
{
  digitalWrite(2,HIGH);
  delay(250);
  digitalWrite(2,LOW);
  delay(250);
  }
void dash()
{
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  delay(250);}
