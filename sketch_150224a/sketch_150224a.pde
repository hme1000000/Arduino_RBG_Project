import processing.serial.*;
Serial colorrpg;
float red = 0;
void setup()
{
  size(500,500);
  colorrpg = new Serial(this,"COM5",9600);
  colorrpg.bufferUntil('\n');
}
void draw()
{
  background(red,0,0); 
}
void serialEvent(Serial colorrpg)
{
  red = float(colorrpg.readStringUntil('\n'));
}
