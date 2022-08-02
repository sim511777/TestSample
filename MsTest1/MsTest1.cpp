#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include "TestSample/TestSample.h"
#pragma comment(lib, "TestSample/TestSample.lib")

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MsTest1
{
	TEST_CLASS(TestSample)
	{
	public:
		
        TEST_METHOD(Add) {
            Logger::WriteMessage("Hello, world!");
            Assert::AreEqual(2, ::Add(1, 1));
            Assert::AreEqual(7, ::Add(3, 4));
        }

        TEST_METHOD(Add_Bug) {
            Assert::AreEqual(2, ::Add_Bug(1, 1));
            Assert::AreEqual(7, ::Add_Bug(3, 4));
        }

        TEST_METHOD(Sub) {
            Assert::AreEqual(0, ::Sub(1, 1));
            Assert::AreEqual(-1, ::Sub(3, 4));
        }

        TEST_METHOD(Mul) {
            Assert::AreEqual(1, ::Mul(1, 1));
            Assert::AreEqual(12, ::Mul(3, 4));
        }

        TEST_METHOD(Div) {
            Assert::AreEqual(1, ::Div(1, 1));
            Assert::AreEqual(0, ::Div(3, 4));
        }

        TEST_METHOD(Even) {
            Assert::IsTrue(::Even(2));
            Assert::IsTrue(::Even(4));
            Assert::IsTrue(::Even(0));
            Assert::IsTrue(::Even(-2));
        }

        TEST_METHOD(Odd) {
            Assert::IsTrue(::Odd(1));
            Assert::IsTrue(::Odd(3));
            Assert::IsTrue(::Odd(5));
            Assert::IsTrue(::Odd(-1));
        }
        TEST_METHOD(CalcBusy) {
            auto result0 = ::CalcBusy(300);
            Assert::AreEqual(0, result0);
        }
        TEST_METHOD(CalcBusy_Time) {
            auto t0 = clock();
            auto result0 = ::CalcBusy(300);
            auto t1 = clock();
            Assert::IsTrue((t1 - t0) <= 320);
        }

        TEST_METHOD(Print) {
            std::cout << "hello ´ëÇÑ¹Î±¹!" << std::endl;
        }
	};
}
