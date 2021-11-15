#include "pch.h"
#include "CppUnitTest.h"
#include "E:\oop\lab3.3_C\lab3.3_C\FuzzyNumber.h"
#include "E:\oop\lab3.3_C\lab3.3_C\FuzzyNumber.cpp"
#include "E:\oop\lab3.3_C\lab3.3_C\Object.h"
#include "E:\oop\lab3.3_C\lab3.3_C\Object.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33C
{
	TEST_CLASS(UnitTest33C)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			FuzzyNumber A(1, 1, 1);
			A.SetX(5);
			Assert::AreEqual(A.GetX(), 5.);
		}
	};
}
