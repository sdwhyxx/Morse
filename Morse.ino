#include <Morse.h>
Morse morse(13);

void setup()
{
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
   morse.dot();morse.dash();delay(750);
    break;
  case 'b':
  morse.dash();morse.dot(); morse.dot(); morse.dot(); delay(750);
    break;
  case 'c':
  morse.dash();morse.dot();morse.dash(); morse.dot(); delay(750);
    break;
    case 'd':
  morse.dash();morse.dot(); morse.dot(); delay(750);
    break;
    case 'e':
  morse.dot(); delay(750);
    break;
    case 'f':
  morse.dot(); morse.dot(); morse.dash();morse.dot(); delay(750);
    break;
    case 'g':
  morse.dash();morse.dash();morse.dot(); delay(750);
    break;
    case 'h':
  morse.dot(); morse.dot(); morse.dot(); morse.dot(); delay(750);
    break;
    case 'i':
  morse.dot(); morse.dot(); delay(750);
    break;
    case 'j':
  morse.dot(); morse.dash();morse.dash();morse.dash();delay(750);
    break;
    case 'k':
  morse.dash();morse.dot();morse.dash();delay(750);
    break;
    case 'l':
  morse.dot(); morse.dash(); morse.dot(); morse.dot(); delay(750);
    break;
    case 'm':
  morse.dash();morse.dash();delay(750);
    break;
    case 'n':
  morse.dash(); morse.dot(); delay(750);
    break;
    case 'o':
  morse.dash();morse.dash();morse.dash(); delay(750);
    break;
    case 'p':
  morse.dot(); morse.dash();morse.dash(); morse.dot(); delay(750);
    break;
    case 'q':
  morse.dash();morse.dash(); morse.dot(); morse.dash();delay(750);
    break;
    case 'r':
  morse.dot();morse.dash(); morse.dot(); delay(750);
    break;
    case 's':
  morse.dot(); morse.dot(); morse.dot(); delay(750);
    break;
    case 't':
  morse.dash();delay(750);
    break;
    case 'u':
  morse.dot(); morse.dot(); morse.dash(); delay(750);
    break;
    case 'v':
  morse.dot(); morse.dot(); morse.dot();morse.dash();delay(750);
    break;
    case 'w':
  morse.dot();morse.dash();morse.dash();delay(750);
    break;
    case 'x':
  morse.dash();morse.dot(); morse.dot(); morse.dash(); delay(750);
    break;
    case 'y':
  morse.dash();morse.dot();morse.dash();morse.dash();delay(750);
    break;
    case 'z':
  morse.dash();morse.dash();morse.dot(); morse.dot(); delay(750);
    break;
    case ' ':
  delay(1750);
    break;
    case '/': break;
}
}
