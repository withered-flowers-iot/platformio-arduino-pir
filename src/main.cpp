#include "Arduino.h"

int calibrationTime = 30;

void setup() {
  Serial.begin(9600);
  pinMode(3, INPUT);
  
  Serial.print("calibrating sensor ");
  for(int i = 0; i < calibrationTime; i++){
    Serial.print(".");
    delay(1000);
  }
  Serial.println(" done");
  Serial.println("SENSOR ACTIVE");
  delay(50);
}

void loop() {
  if(digitalRead(3) == HIGH) {
    Serial.println("PIR sedang tinggi");
  }
  else {
    Serial.println("PIR sedang rendah");
  };
  delay(1000);
}