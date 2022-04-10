// #define ESP32
// #define WIFI_Kit_8

// #include <Arduino.h>
// #include "oled/SSD1306Wire.h"
#include <heltecESP32.h>

#define LED1 25

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);

  Heltec.begin(true /*DisplayEnable Enable*/, true /*Serial Enable*/);
  Heltec.display->init();
  Heltec.display->flipScreenVertically();
  Heltec.display->setFont(ArialMT_Plain_10);

  Heltec.display->drawString(0,0,"Hello World!");
  Heltec.display->display();
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1, HIGH);
  delay(2000);
  digitalWrite(LED1, LOW);
  delay(2000);


}