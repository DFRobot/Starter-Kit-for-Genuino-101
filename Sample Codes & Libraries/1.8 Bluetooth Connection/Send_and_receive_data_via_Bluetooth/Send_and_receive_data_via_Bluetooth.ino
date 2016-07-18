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
  while (BLESerial.operator bool()) {
    digitalWrite(13, HIGH);
    while(Serial.available()){
        BLESerial.write(Serial.read());
    }
    while(BLESerial.available()){
        Serial.write(BLESerial.read());
    }
  }
  digitalWrite(13, LOW);
}

