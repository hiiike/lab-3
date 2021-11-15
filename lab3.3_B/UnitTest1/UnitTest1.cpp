#include "pch.h"
#include "CppUnitTest.h"
#include "E:\oop\lab3.3_B\lab3.3_B\FuzzyNumber_Public.h"
#include "E:\oop\lab3.3_B\lab3.3_B\FuzzyNumber_Public.cpp"
#include "E:\oop\lab3.3_B\lab3.3_B\FuzzyNumber.h"
#include "E:\oop\lab3.3_B\lab3.3_B\FuzzyNumber.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33B
{
	TEST_CLASS(UnitTest33B)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			FuzzyNumber_Public A(1, 1, 1);
			A.SetX(5);
			Assert::AreEqual(A.GetX(), 5.);
		}
	};
}
