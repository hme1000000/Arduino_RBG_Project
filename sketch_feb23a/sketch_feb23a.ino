int portR = A0;
int red_pot =0;
void setup()
{
Serial.begin(9600);
pinMode(portR, INPUT);
}
void loop()
{
  red_pot = map(analogRead(portR),0,1023,0,255);
    Serial.println(red_pot);
  delay(50);  
}
