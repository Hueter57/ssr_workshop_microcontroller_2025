#include <Arduino.h>

std::array<int, 5> num = {0, 0, 0, 0, 0}; // {型名} {変数名} の形式で変数を定義する
// 最初に一回だけ実行される
void setup() {
    Serial.begin(9600); // 通信の開始
}

void loop() {
    for (int i = 0; i < 5; i++) {
        num[i] += i + 1;
        Serial.printf("%d ", num[i]); // num[0] の値を表示
    }
    Serial.println();
    delay(1000); // 1000ミリ秒(1秒)待機
}
