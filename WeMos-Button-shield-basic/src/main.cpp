#include <Arduino.h>

#define PIN_SWITCH 0  // 스위치 쉴드의 스위치가 연결된 핀
#define PIN_LED 2     // ESP-12 LED

void setup() {
  Serial.begin(115200);  // 시리얼 통신 초기화

  pinMode(PIN_SWITCH, INPUT_PULLUP);  // 스위치가 연결된 핀 풀업으로 설정
  pinMode(PIN_LED, OUTPUT);  // LED가 연결된 핀 OUTPUT으로 설정
}

void loop() {
  bool pin_status = !digitalRead(PIN_SWITCH);  // 스위치의 상태를 읽어옴

  if (pin_status == true) {             // 스위치가 눌려진 상태라면
    digitalWrite(PIN_LED, LOW);         // LED를 켬(부논리)
    Serial.println("button pressed!");  // 디버깅 메시지 출력
    while (!digitalRead(PIN_SWITCH))    // 버튼이 떨어질 때 까지 대기
      ;
    digitalWrite(PIN_LED, HIGH);  // LED를 끔(부논리)
  }
}