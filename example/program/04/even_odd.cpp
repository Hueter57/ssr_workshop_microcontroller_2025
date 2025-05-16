#include <Arduino.h>

int count;

// 最初に一回だけ実行される
void setup() {
    Serial.begin(9600); // 通信を開始
    count = 1;          // countに0を代入
}

// 繰り返し実行される
void loop() {
    if (count % 2 == 0) {
        Serial.printf("%d : even\n", count);
    }
    else {
        Serial.printf("%d : odd\n", count);
    }
    count++;     // countにcount + 1を代入
    delay(1000); // 1000ミリ秒(=1秒)待つ
}
