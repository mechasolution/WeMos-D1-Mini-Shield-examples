#include <Adafruit_NeoPixel.h>  // WS2812 네오픽셀 라이브러리
#include <Arduino.h>

#define PIN_WS2812 4
#define NUMPIXELS 1

// 네오픽셀 객체 생성
Adafruit_NeoPixel pixels(NUMPIXELS, PIN_WS2812, NEO_GRB + NEO_KHZ800);

void setup() {
  // 네오픽셀 초기화
  pixels.begin();
  pixels.clear();
}

void loop() {
  // LED를 빨간색으로 설정한 후 1초 대기
  pixels.setPixelColor(0, pixels.Color(255, 0, 0));
  pixels.show();
  delay(1000);

  // LED를 초록색으로 설정한 후 1초 대기
  pixels.setPixelColor(0, pixels.Color(0, 255, 0));
  pixels.show();
  delay(1000);

  // LED를 파란색으로 설정한 후 1초 대기
  pixels.setPixelColor(0, pixels.Color(0, 0, 255));
  pixels.show();
  delay(1000);

  // LED를 흰색으로 설정한 후 1초 대기
  pixels.setPixelColor(0, pixels.Color(255, 255, 255));
  pixels.show();
  delay(1000);
}