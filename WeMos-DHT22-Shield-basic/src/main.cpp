#include <Arduino.h>
#include <DHT.h>

#define PIN_DHT22 2  // DHT22 센서가 연결된 핀

DHT dht(PIN_DHT22, DHT22);  // DHT 센서 객체 생성

void setup() {
  Serial.begin(115200);  // 시리얼 통신 초기화

  dht.begin();  // DHT22 센서 초기화
  delay(1000);

  Serial.println("\n\nSensor Starts!");
}

void loop() {
  float temperature = dht.readTemperature();  // 온도 데이터 읽어옴
  float humidity = dht.readHumidity();        // 습도 데이터 읽어옴
  if (isnan(humidity) || isnan(temperature)) {  // 센서 데이터에 오류가 있는 경우
    Serial.println("Failed to read from DHT sensor!");
  } else {  // 정상적인 데이터인 경우
    // 온도 데이터 출력
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.print("°C ");
    // 습도 데이터 출력
    Serial.print("%  Humidity: ");
    Serial.println(humidity);
  }
  delay(2000);  // 2초 대기
}