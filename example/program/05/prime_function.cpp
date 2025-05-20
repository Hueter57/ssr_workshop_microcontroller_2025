#include <Arduino.h>

int count = 0;

bool isPrime(int n) {
    if (n <= 1)
        return false; // 1以下は素数ではない
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // 割り切れる数があれば素数ではない
        }
    }
    return true; // 素数
}

// 最初に一回だけ実行される
void setup() {
    Serial.begin(9600); // 通信の開始
}

void loop() {
    if (isPrime(count)) {
        Serial.printf("%d is Prime\n", count); // 素数を表示
    }
    else {
        Serial.printf("%d is not Prime\n", count); // 素数でない数を表示
    }
    count++;
    delay(1000); // 1000ミリ秒(1秒)待機
}
