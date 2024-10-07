#include "pch.h"
#include "CppUnitTest.h"
#include "../laboratory5.1/laboratory5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double result = k(1, 2);
			Assert::AreEqual(result, 0.0295786, 1e-6);
		}
	};
}