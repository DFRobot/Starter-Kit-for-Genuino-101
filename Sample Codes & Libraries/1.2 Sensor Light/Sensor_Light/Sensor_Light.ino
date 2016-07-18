//Sample Code 2-1:Item Two—Sensor Light
int sensorPin = 2; // IR sensor to be attached to digital pin NO.2
int ledPin = 13; // Digital Piranha LED-R to be attached to digital pin NO.13
int sensorState = 0; // variable sensorState for storing statistics about the status of the sensor
void setup() {
  pinMode(ledPin, OUTPUT); // LED is the output unit
  pinMode(sensorPin, INPUT); // Sensor is the input unit
}
void loop() {
  sensorState = digitalRead(sensorPin); // Read statistics collected from the sensor
  if (sensorState == HIGH) { // If it is HIGH, LED light will be turned on
    digitalWrite(ledPin, HIGH);
  }
  else { // If it is LOW, LED light will be turned off
    digitalWrite(ledPin, LOW);
  }
}
