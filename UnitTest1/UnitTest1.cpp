#include "pch.h"
#include "CppUnitTest.h"
#include "..\5.1\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double tmp = g(0, 0);
			Assert::AreEqual(1., tmp);
		}
	};
}
