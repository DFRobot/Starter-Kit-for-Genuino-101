#include <Servo.h>
Servo myservo;
int LED = 3; // Set the LED light to be digital pin 3
int val = 0; // val stores analog ambient light sensor’s value
int pos = 0;
int light = 0;
void setup() {
  pinMode(LED, OUTPUT); // LED is set to be in the output mode
  Serial.begin(9600); // Baud rate of the serial port is set to be 9600
  myservo.attach(9); // attach the servo to digital pin 9
  myservo.write(0); // initial angle is 0
}
void loop() {
  val = analogRead(0); // read the analog ambient light sensor’s value
  Serial.println(val); // Check sensor value in serial port
  if (val < 40) { // when val is less than the pre-set value, increase the angle
    pos = pos + 2;
    if (pos >= 90) { // The angle should not be more than 90
      pos = 90;
    }
    myservo.write(pos); // write angle of the servo
    delay(100);
    light = map(pos, 0, 90, 0, 255); // As the angle expands, the LED becomes brighter
    analogWrite(LED, light); // write the brightness value
  } else {
    pos = pos - 2; // decrease 2°
    if (pos <= 0) {
      pos = 0; // until 0°
    }
    myservo.write(pos); // write angle of the servo
    delay(100);
    light = map(pos, 0, 90, 0, 255); // As the angle shrinks, the LED light becomes darker
    analogWrite(LED, light); // write the brightness value
  }
}
