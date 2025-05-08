#include <Arduino.h>

// スラッシュを2つならべると、その右はコメントになる。
// コメントはあっても無くてもプログラムには影響しない。

int count; // {型名} {変数名} の形式で変数を定義する

// 最初に一回だけ実行される
void setup() {
    Serial.begin(9600); // 通信の開始
    count = 0;          // count に 0 を代入
}

// 繰り返し実行される
void loop() {
    Serial.println(count); // Hello, World! と出力
    count += 1;            // count を 1 ずつ増やす
    delay(1000);           // 1000ミリ秒(1秒)待機
}
