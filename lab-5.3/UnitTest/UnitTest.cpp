#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab-5.3\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double f=s(0);
			Assert::AreEqual(2., f);
		}
	};
}
