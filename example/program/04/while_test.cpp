#include <Arduino.h>

int count; // {型名} {変数名} の形式で変数を定義する
// 最初に一回だけ実行される
void setup() {
    Serial.begin(9600); // 通信の開始
    count = 0;          // count に 0 を代入
}

void loop() {
    while (count <= 10) { // 0からcount以下まで繰り返し
        if (count % 2 == 0) {
            Serial.printf("% d : even\n", count);
        }
        else {
            Serial.printf("% d : odd\n", count);
        }
        count += 1;  // count を 1 ずつ増やす
        delay(1000); // 1000ミリ秒(1秒)待機
    }
    count = 0;
}
