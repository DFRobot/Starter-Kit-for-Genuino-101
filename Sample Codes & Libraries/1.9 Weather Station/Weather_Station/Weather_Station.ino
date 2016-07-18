#include "BLESerial.h"

void setup() {
  pinMode(13, OUTPUT); 
  Serial.begin(115200);    // initialize serial communication
  BLESerial.setName("Bluno101");
  BLESerial.begin();
  //Serial.println("Bluetooth device active, waiting for connections...");
  while(!BLESerial);
}

void loop() {
  while (BLESerial.operator bool()) 
  {
    digitalWrite(13, HIGH);
    uint16_t val;
    double dat;
    val=analogRead(0);//Connect LM35 on Analog 0
    dat = (double) val / 3.26;
    BLESerial.print("Tep:"); //Display the temperature on Serial monitor
    BLESerial.print(dat);
    BLESerial.println("C");
    delay(500);
  }
  digitalWrite(13, LOW);
}

