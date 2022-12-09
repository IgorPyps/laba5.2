#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1.1/5.1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unit51
{
	TEST_CLASS(unit51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c = (k(1 + (1 * 1), 1 - (1 * 1)) - (k(1, 1 * 1) * k(1, 1 * 1))) / (1 + k(1 * 1, 1));
			Assert::AreEqual(c, -1.0385655946774592);
		}
	};
}
