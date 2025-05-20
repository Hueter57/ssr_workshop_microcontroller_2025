#include <Arduino.h>

std::array<int, 5> num = {1, 2, 3, 4, 5}; // {型名} {変数名} の形式で変数を定義する
// 最初に一回だけ実行される
void setup() {
    Serial.begin(9600);    // 通信の開始
}

void loop() {
    Serial.println(num.at(-1)); // num[0] の値を表示
    delay(1000); // 1000ミリ秒(1秒)待機
}
