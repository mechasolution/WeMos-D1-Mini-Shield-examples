#include <Arduino.h>
#include <U8g2lib.h>

U8G2_SSD1306_64X48_ER_1_HW_I2C u8g2(U8G2_R0, U8X8_PIN_NONE); // u8g2 객체 초기화

void setup() {
  u8g2.begin(); // OLED 초기화
}

void loop() {
  // https://github.com/olikraus/u8g2/issues/166 참고
  u8g2.firstPage();
  do {
    u8g2.setFont(u8g2_font_ncenB10_tr);  // 폰트 설정
    u8g2.drawStr(0, 17, "Hello,");       // 0, 17 위치에 "Hello," 출력
    u8g2.drawStr(5, 30, "Mecha!");       // 5, 30 위치에 "Mecha!" 출력
  } while (u8g2.nextPage());
}
