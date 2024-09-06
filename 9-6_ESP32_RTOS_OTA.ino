#define ESP32_RTOS
#include "src/OTA.h"
#define LED 16
void setup() {
  Serial.begin(115200);
  Serial.println("Booting");
  setupOTA("kick_Sketch", "ID", "PW");
  
  // Your setup code
  pinMode(LED,OUTPUT);
}

void loop() {
  // Your code here
  digitalWrite(LED,HIGH);
  delay(500);
  digitalWrite(LED,LOW);
  delay(500);
}