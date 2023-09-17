#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.VevurYA.Sprint0.Task4.V1-5.Lib/Tyuiu.VevurYA.Sprint0.Task4.V1-5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestUnitTask4
{
	TEST_CLASS(TestUnitTask4)
	{
	public:
		
		TEST_METHOD(TestMethodV1)
		{
			ISprint0Task4* service = new ServiceV1();
			int a = 6, b = 2, c = 3, d = 9;
			int result;

			// Run

			result = service->Calculate(a, b, c, d);

			// Valid

			Assert::AreEqual(1, result);
		}

		TEST_METHOD(TestMethodV2)
		{
			ISprint0Task4* service = new ServiceV2();
			int a = 3, b = 4, c = 1, d = 2;
			int result;

			// Run

			result = service->Calculate(a, b, c, d);

			// Valid

			Assert::AreEqual(17, result);
		}

		TEST_METHOD(TestMethodV3)
		{
			ISprint0Task4* service = new ServiceV3();
			int a = 15, b = 2, c = 4, d = 8;
			int result;

			// Run

			result = service->Calculate(a, b, c, d);

			// Valid

			Assert::AreEqual(9, result);
		}

		TEST_METHOD(TestMethodV4)
		{
			ISprint0Task4* service = new ServiceV4();
			int a = 2, b = 3, c = 7, d = 4;
			int result;

			// Run

			result = service->Calculate(a, b, c, d);

			// Valid

			Assert::AreEqual(34, result);
		}

		TEST_METHOD(TestMethodV5)
		{
			ISprint0Task4* service = new ServiceV5();
			int a = 25, b = 8, c = 4, d = 9;
			int result;

			// Run

			result = service->Calculate(a, b, c, d);

			// Valid

			Assert::AreEqual(7, result);
		}
	};
}
