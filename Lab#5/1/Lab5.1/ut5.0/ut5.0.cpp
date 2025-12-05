#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.1/l5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace l51
{
	TEST_CLASS(ut50)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double g=(2, 3);
				Assert::AreEqual(-0.777430, g, 0.000001);
		}
	};
}
