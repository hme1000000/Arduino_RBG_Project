import processing.serial.*;
Serial colorrpg;
String RBG;
int red = 0;
int green = 0;
int blue = 0;
void setup()
{
  size(500,500);
  colorrpg = new Serial(this,"COM5",9600);
  colorrpg.bufferUntil('\n');
}
void draw()
{
  background(red,green,blue); 
}
void serialEvent(Serial colorrpg)
{
  RBG = colorrpg.readStringUntil('\n');
  String redString = RBG.substring(0,3);
  String greenString = RBG.substring(3,6);
  String blueString = RBG.substring(6,9);
  red =  Integer.parseInt(redString);
  green =  Integer.parseInt(greenString);
  blue =  Integer.parseInt(blueString);
}
