// Item Four—Sound Control Light
int soundPin = 0; // Analog sound sensor is to be attached to analog 0
int ledPin = 13; // Digital Piranha LED-R is to be attached to digital 13
void setup() {
  pinMode(ledPin, OUTPUT);
  // Serial.begin(9600); // You can uncomment this for monitoring
}
void loop() {
  int soundState = analogRead(soundPin); // Read sound sensor’s value
   Serial.println(soundState); // serial port print the sound sensor’s value
  // if the sound sensor’s value is greater than 10, the light will be on for 10 seconds.
  //Otherwise, the light will turn off
  if (soundState > 10) {
    digitalWrite(ledPin, HIGH);
    delay(10000);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
