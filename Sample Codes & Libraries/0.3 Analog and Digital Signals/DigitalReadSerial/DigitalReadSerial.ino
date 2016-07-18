int pushButton = 2; //connect to digital pin 2

void setup() { // initial function
  Serial.begin(9600); // set up baud rate of the serial port
  pinMode(pushButton, INPUT); // set the button to be in the output mode
}

void loop() { //main function
  int buttonState = digitalRead(pushButton); // record statistics about the status of digital pin 2
  Serial.println(buttonState); // Serial port print statistics about the status of digital pin 2
  delay(1); // delay 1ms
}
