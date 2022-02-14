#include <Arduino.h>

#define PIN_SWITCH 0

void setup() {
  Serial.begin(115200);

  pinMode(PIN_SWITCH, INPUT_PULLUP);
}

void loop() {
  bool pin_status = !digitalRead(PIN_SWITCH);
  if(pin_status == true) {
    Serial.println("button pressed!");
    while (!digitalRead(PIN_SWITCH))  // 버튼이 떨어질 때 까지 대기
      ;
  }
}