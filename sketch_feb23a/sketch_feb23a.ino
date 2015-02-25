int portR = A0;
int portG = A1;
int portB = A2;
String red_pot  ;
String green_pot;
String blue_pot;
String color;
void setup()
{
Serial.begin(9600);
pinMode(portR, INPUT);
pinMode(portG,INPUT);
pinMode(portB,INPUT);
}
void loop()
{
  red_pot = String((map(analogRead(portR),0,1023,0,255)),DEC);
  for(int i=0;i<2;i++)
  {
      if (red_pot.length()<3) red_pot = "0"+red_pot;
  }
  green_pot = String((map(analogRead(portG),0,1023,0,255)),DEC);
  for(int i=0;i<2;i++)
  {
      if (green_pot.length()<3) green_pot = "0"+green_pot;
  }
  blue_pot = String((map(analogRead(portB),0,1023,0,255)),DEC);
  for(int i=0;i<2;i++)
  {
      if (blue_pot.length()<3) blue_pot = "0"+blue_pot;
  }
  color = red_pot + green_pot + blue_pot;
  Serial.println(color);
  delay(50);  
}
