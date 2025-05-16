#include <Arduino.h>

// 最初に一回だけ実行される
void setup() {
    Serial.begin(9600); // 通信を開始
}

// 繰り返し実行される
void loop() {
    for (int i = 1; i < 20; i++) {
        if(i % 3 == 0){
            continue;
        }
        else if (i == 10){
            Serial.println("end");
            break;
        }
        Serial.println(i);
        delay(1000); // 1000ミリ秒(=1秒)待つ
    }
}
