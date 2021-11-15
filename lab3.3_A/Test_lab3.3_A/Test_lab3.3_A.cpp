#include "pch.h"
#include "CppUnitTest.h"
#include "E:\oop\lab3.3_A\lab3.3_A\FuzzyNumber_Private.h"
#include "E:\oop\lab3.3_A\lab3.3_A\FuzzyNumber_Private.cpp"
#include "E:\oop\lab3.3_A\lab3.3_A\FuzzyNumber.h"
#include "E:\oop\lab3.3_A\lab3.3_A\FuzzyNumber.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33A
{
	TEST_CLASS(UnitTest33A)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			FuzzyNumber_Private A(1, 1, 1);
			A.SetX(5);
			Assert::AreEqual(A.GetX(), 5.);
		}
	};
}
