#include "pch.h"
#include "CppUnitTest.h"
#include "../LAb5.4/functions.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LAbtest54
{
	TEST_CLASS(LAbtest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            int K = 1, N = 15;

            double p0 = P0(K, N);
            double p1 = P1(K, N, K);
            double p2 = P2(K, N, N);
            double p3 = P3(K, N, K, 1.0);
            double p4 = P4(K, N, N, 1.0);

           
            Assert::AreEqual(p0, p1, 1e-10);
            Assert::AreEqual(p0, p2, 1e-10);
            Assert::AreEqual(p0, p3, 1e-10);
            Assert::AreEqual(p0, p4, 1e-10);
		}
	};
}
