#include <Arduino.h>

int max(std::array<int, 5> array) {
    int maxValue = array[0]; // 最初の要素を最大値とする
    for (int i = 0; i < array.size(); i++) {
        if (array[i] > maxValue) {
            maxValue = array[i]; // 新しい最大値を更新
        }
    }
    return maxValue; // 最大値を返す
}

std::array<int, 5> num = {1, 2, 3, 4, 5}; // {型名} {変数名} の形式で変数を定義する
// 最初に一回だけ実行される
void setup() {
    Serial.begin(9600);    // 通信の開始
}

void loop() {
    Serial.println(num.at(-1)); // num[0] の値を表示
    delay(1000); // 1000ミリ秒(1秒)待機
}
