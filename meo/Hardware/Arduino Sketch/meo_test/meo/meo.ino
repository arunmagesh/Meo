
const int level = A2;  // Analog input pin that the potentiometer is attached to
const int levelen = 3; // Analog output pin that the LED is attached to

const int temp = A1;  // Analog input pin that the potentiometer is attached to

const int color = A0;  // Analog input pin that the potentiometer is attached to
const int coloren = 2;

int levelval = 0;        // value read from the pot
int tempval = 0;  
int colorval = 0; 
void setup() {
  pinMode(coloren, OUTPUT);
  pinMode(levelen, OUTPUT);
  digitalWrite(levelen,HIGH);
  digitalWrite(coloren,LOW);
  Serial.begin(9600);
}
void loop()
{
colorval = map(analogRead(color),0, 1023, 1, 100);
  tempval = (analogRead(temp)*50)/1024;
  levelval = map(analogRead(level),0, 1023, 1, 100);

    while (Serial.available() > 0) {

    // look for the next valid integer in the incoming serial stream:
    int red = Serial.read();
    if(red == 1)
    {
Serial.print((char)(colorval));
  delay(100);
    }
    
else if(red == 2)
    {
Serial.print((char)(tempval));
  delay(100);
    }
    
  else if(red == 3)
    {
Serial.print((char)(levelval));
 delay(100);
    }
}
}
