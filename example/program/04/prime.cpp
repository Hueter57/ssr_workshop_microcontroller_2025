#include <Arduino.h>

int count;

// 最初に一回だけ実行される
void setup() {
    Serial.begin(9600); // 通信を開始
    count = 2;          // countに0を代入
}

// 繰り返し実行される
void loop() {
    Serial.print(count);
    for (int i = 2; i < count; i++) {
        if (count % i == 0){
            Serial.print(" not Prime");
        }
    }
    Serial.println();
    count++;     // countにcount + 1を代入
    delay(1000); // 1000ミリ秒(=1秒)待つ
}
