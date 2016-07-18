// Item Six—Light –regulator
int potPin = 0; // Analog Rotation Sensor shall be attached to analog pin 0
int ledPin = 9; // LED shall be attached to digital pin 9
void setup() {
  pinMode(ledPin, OUTPUT);
}
void loop() {
  int sensorValue = analogRead(potPin); // collect value at analog pin 0
  // A value between 0 and 1023 to mapped to a value between 0 and 255
  int outputValue = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(ledPin, outputValue); // write corresponding value for LED
  delay(2);
}
