// TestSample.cpp : DLL을 위해 내보낸 함수를 정의합니다.
//

#include "framework.h"
#include "TestSample.h"


// 내보낸 변수의 예제입니다.
TESTSAMPLE_API int nTestSample = 0;

// 내보낸 함수의 예제입니다.
TESTSAMPLE_API int fnTestSample(void) {
    return 0;
}

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

// 내보낸 클래스의 생성자입니다.
CTestSample::CTestSample() {
    return;
}
