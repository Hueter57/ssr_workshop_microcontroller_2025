#include <Arduino.h>
#include <vector>

String name; // {型名} {変数名} の形式で変数を定義する
// 最初に一回だけ実行される
void setup() {
    Serial.begin(9600);    // 通信の開始
    name = "mori_kohsuke"; // name に 0 を代入
}

void loop() {
    Serial.println(name);
    delay(1000); // 1000ミリ秒(1秒)待機
}
