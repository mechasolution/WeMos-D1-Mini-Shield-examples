#include <Arduino.h>

#define PIN_RELAY 5

void setup() {
  pinMode(PIN_RELAY, OUTPUT);

  digitalWrite(PIN_RELAY, LOW);
}

void loop() {
  // 릴레이를 켠 후 1초간 대기
  digitalWrite(PIN_RELAY, HIGH);
  delay(1000);

  // 릴레이를 끈 후 1초간 대기
  digitalWrite(PIN_RELAY, LOW);
  delay(1000);
}