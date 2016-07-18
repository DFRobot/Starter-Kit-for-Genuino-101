void setup() { //Initial setup
  Serial.begin(9600); //Set baud rate
}
void loop() { //Main function
  int sensorValue = analogRead(A0); // Read status of analog pin 0.
  Serial.println(sensorValue); // Print status of pin 0 in Serial Monitor
  delay(1);//Delay 1ms
}
