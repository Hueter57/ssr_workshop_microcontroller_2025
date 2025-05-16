#include <Arduino.h>

int count;
// 最初に一回だけ実行される
void setup() {
    Serial.begin(9600); // 通信を開始
    count = 1;          // countに0を代入
}

// 繰り返し実行される
void loop() {
    int count2 = 1;
    while (count2 <= count) {
        Serial.print("-");
        count2++;
    }
    Serial.println();
    count++;     // countにcount + 1を代入
    delay(1000); // 1000ミリ秒(=1秒)待つ
}
