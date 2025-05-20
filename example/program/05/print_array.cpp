#include <Arduino.h>

void printArray(std::array<int, 5> array) {
    for (int i = 0; i < array.size(); i++) {
        Serial.printf("%d ", array[i]); // 配列の要素を表示
    }
    Serial.println();
}

std::array<int, 5> num = {0, 0, 0, 0, 0}; // {型名} {変数名} の形式で変数を定義する
// 最初に一回だけ実行される
void setup() {
    Serial.begin(9600); // 通信の開始
}

void loop() {
    printArray(num); // 配列を表示
    delay(1000); // 1000ミリ秒(1秒)待機
}
