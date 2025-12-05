#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.1/l5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double g = (2, 3);
			Assert::AreEqual(-0.777430, g, 0.000001);
		}
	};
}
