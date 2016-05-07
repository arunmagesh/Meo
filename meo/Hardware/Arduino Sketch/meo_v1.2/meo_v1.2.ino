
const int level = A2;  // Analog input pin that the potentiometer is attached to
const int levelen = 3; // Analog output pin that the LED is attached to

const int temp = A1;  // Analog input pin that the potentiometer is attached to

const int color = A0;  // Analog input pin that the potentiometer is attached to
const int coloren = 2;

int levelval = 0;        // value read from the pot
int tempval = 0;  
int colorval = 0; 
 
void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  pinMode(coloren, OUTPUT);
  pinMode(levelen, OUTPUT);
  digitalWrite(levelen,HIGH);
  digitalWrite(coloren,LOW);
}

void loop() {
  // read the analog in value:
  colorval = analogRead(color);
  tempval = (analogRead(temp)*500)/1024;
  levelval = analogRead(level);
 

  // print the results to the serial monitor:
 Serial.print("level = ");
  Serial.print(levelval);
 Serial.print(", ");
  Serial.print("temp = ");
  Serial.print(tempval);
 Serial.print(", ");
  Serial.print("color = ");
  Serial.print(colorval);
 Serial.print(", ");
  Serial.println();

  delay(05);
}
