#include <Arduino.h>

int count; // {型名} {変数名} の形式で変数を定義する
// 最初に一回だけ実行される
void setup() {
    Serial.begin(9600); // 通信の開始
    count = 1;          // count に 1 を代入
}

// 繰り返し実行される
void loop() {
    for (int i = 0; i < count; i++) { // 0からcount未満まで繰り返し
        Serial.printf("-");           // 数字と空白を表示
    }
    Serial.println(); // 改行
    count++;          // count を 1 ずつ増やす
    delay(1000);      // 1000ミリ秒(1秒)待機
}
