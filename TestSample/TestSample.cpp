// TestSample.cpp : DLL을 위해 내보낸 함수를 정의합니다.
//

#include "framework.h"
#include "TestSample.h"
#include <chrono>
#include <thread>

int Add(int a, int b) {
    return a + b;
}

int Add_Bug(int a, int b) {
    return a + b + 1;
}

int Sub(int a, int b) {
    return a - b;
}

int Mul(int a, int b) {
    return a * b;
}
int Div(int a, int b) {
    return a / b;
}

bool Even(int a) {
    return (a % 2 == 0);
}

bool Odd(int a) {
    auto mod = a % 2;
    return (mod == 1 || mod == -1);
}

int CalcBusy(int sleepMs) {
    std::this_thread::sleep_for(std::chrono::milliseconds(sleepMs));
    return 0;
}
