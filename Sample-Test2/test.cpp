#include "pch.h"
#include "TestSample/TestSample.h"
#pragma comment(lib, "TestSample/TestSample.lib")

//TEST(FirstTest, FirstTest_TestName) {
//  EXPECT_EQ(1, 1);
//  EXPECT_TRUE(true);
//}

TEST(TestSample, Add) {
    EXPECT_EQ(Add(1, 1), 2);
    EXPECT_EQ(Add(3, 4), 7);
}

TEST(TestSample, Sub) {
    EXPECT_EQ(Sub(1, 1), 0);
    EXPECT_EQ(Sub(3, 4), -1);
}

TEST(TestSample, Mul) {
    EXPECT_EQ(Mul(1, 1), 1);
    EXPECT_EQ(Mul(3, 4), 12);
}

TEST(TestSample, Div) {
    EXPECT_EQ(Div(1, 1), 1);
    EXPECT_EQ(Div(3, 4), 0);
}

TEST(TestSample, Even) {
    EXPECT_TRUE(Even(2));
    EXPECT_TRUE(Even(4));
    EXPECT_TRUE(Even(0));
    EXPECT_TRUE(Even(-2));
}

TEST(TestSample, Odd) {
    EXPECT_TRUE(Odd(1));
    EXPECT_TRUE(Odd(3));
    EXPECT_TRUE(Odd(5));
    EXPECT_TRUE(Odd(-1));
}