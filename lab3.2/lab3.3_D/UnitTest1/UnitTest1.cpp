#include "pch.h"
#include "CppUnitTest.h"
#include "E:\oop\lab3.3_D\lab3.3_D\Complex_Public.h"
#include "E:\oop\lab3.3_D\lab3.3_D\Complex_Public.cpp"
#include "E:\oop\lab3.3_D\lab3.3_D\Pair.h"
#include "E:\oop\lab3.3_D\lab3.3_D\Pair.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33D
{
	TEST_CLASS(UnitTest33D)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Complex_Public i(0, 0);
			Pair  k1(4), k2(2);

			Assert::AreEqual(i.Diff_1(k1, k2), 2);
		}
	};
}

