int t = 500; 
int sound = 13;
int red = 12;
int orange = 11;
int yellow = 10;
int green = 9;
void setup()
{
  pinMode(sound, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  //1
  digitalWrite(red, 1);
  tone(13,196,100);
  delay(t);
  digitalWrite(red, 0);
  tone(13,196,100);
  delay(t);
  digitalWrite(red, 1);
  tone(13,220,200);
  delay(1000);
  digitalWrite(red, 0);
  tone(13,196,100);
  delay(t);
  digitalWrite(red, 1);
  tone(13,261.63,100);
  delay(t);
  digitalWrite(red, 0);
  delay(50);
  digitalWrite(red, 1);
  tone(13,247,400);
  delay(1500);
  //2
  digitalWrite(orange, 1);
  tone(13,196,100);
  delay(250);
  digitalWrite(orange, 0);
  tone(13,196,100);
  delay(250);
  digitalWrite(orange, 1);
  tone(13,220,200);
  delay(1000);
  digitalWrite(orange, 0);
  tone(13,196,100);
  delay(t);
  digitalWrite(orange, 1);
  tone(13,293.66,100);
  delay(t);
  digitalWrite(orange, 0);
  delay(50);
  digitalWrite(orange,1);
  tone(13,261.63,600);
  delay(1500);
  
  //3
  digitalWrite(yellow, 1);
  tone(13,196,100);
  delay(250);
  digitalWrite(yellow, 0);
  tone(13,196,100);
  delay(250);
  digitalWrite(yellow, 1);
  tone(13,392,200);
  delay(t);
  digitalWrite(yellow, 0);
  tone(13,329.63,200);
  delay(t);
  digitalWrite(yellow, 1);
  tone(13,261.63,200);
  delay(t);
  digitalWrite(yellow, 0);
  tone(13,246.94,200);
  delay(t);
  digitalWrite(yellow, 0);
  delay(50);
  digitalWrite(yellow, 1);
  tone(13,220,600);
  delay(1500);
   
  //4
  digitalWrite(green, 1);
  tone(13,349.23,100);
  delay(250);
  digitalWrite(green, 0);
  tone(13,349.23,100);
  delay(250);
  digitalWrite(green, 1);
  tone(13,329.63,200);
  delay(t);
  digitalWrite(green, 0);
  tone(13,261.63,200);
  delay(t);
  digitalWrite(green, 1);
  tone(13,293.66,200);
  delay(t);
  digitalWrite(green, 0);
  digitalWrite(yellow, 1);
  delay(100);
  digitalWrite(yellow, 0);
  delay(100);
  digitalWrite(orange, 1);
  delay(100);
  digitalWrite(orange, 0);
  delay(100);
  digitalWrite(red, 1);
  delay(500);
  tone(13,261.63,1000);
  delay(1500);
  
}