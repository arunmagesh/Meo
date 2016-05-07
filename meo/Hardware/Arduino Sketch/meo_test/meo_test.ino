int sensorValue2 = 50;
    int sensorValue = 1;
  int sensorValue1 = 100;
void setup() {

  Serial.begin(9600);
}

void loop() {

Serial.print((char)(sensorValue));
  delay(100);
  sensorValue = sensorValue +1;

Serial.print((char)(sensorValue1));
  delay(100);
    sensorValue1 = sensorValue1 -1;
    
  
Serial.print((char)(sensorValue2));
 delay(100);
   sensorValue2 = sensorValue2 +.5;
   
}
