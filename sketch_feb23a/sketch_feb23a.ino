int portR = A0;
int portG = A1;
int portB = A2;
String red_pot  ;
String green_pot;
String blue_pot;
String color;
String RBG[3];
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
  green_pot = String((map(analogRead(portG),0,1023,0,255)),DEC);
  blue_pot = String((map(analogRead(portB),0,1023,0,255)),DEC);
  color = red_pot + green_pot + blue_pot;
  Serial.println(red_pot);
  Serial.println(green_pot);
  Serial.println(blue_pot);
  /*for(int i =0;i<3;i++)
  {
     RBG[i] = "10";
     RBG[i] =Serial.readStringUntil('\n');
  }
  Serial.println(RBG[0]+RBG[1]+RBG[2]);*/
  delay(50);  
}
