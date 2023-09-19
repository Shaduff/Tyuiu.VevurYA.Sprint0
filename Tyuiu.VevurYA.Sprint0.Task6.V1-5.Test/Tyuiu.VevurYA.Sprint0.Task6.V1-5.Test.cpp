#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.VevurYA.Sprint0.Task6.V1-5.Lib/Tyuiu.VevurYA.Sprint0.Task6.V1-5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestUnitTask6V1_5
{
	TEST_CLASS(TestUnitTask6V1_5)
	{
	public:
		
		TEST_METHOD(TestMethodV1)
		{
			ISprint0Task6* service = new ServiceV1();
			int a = 3, b = 1, result;

			// Run 

			result = service->Calculate(a, b);

			// Valid

			Assert::AreEqual(7, result);
		}

		TEST_METHOD(TestMethodV2)
		{
			ISprint0Task6* service = new ServiceV2();
			int a = 1, b = 6, result;

			// Run 

			result = service->Calculate(a, b);

			// Valid

			Assert::AreEqual(7, result);
		}

		TEST_METHOD(TestMethodV3)
		{
			ISprint0Task6* service = new ServiceV3();
			int a = 3, b = 2, result;

			// Run 

			result = service->Calculate(a, b);

			// Valid

			Assert::AreEqual(7, result);
		}

		TEST_METHOD(TestMethodV4)
		{
			ISprint0Task6* service = new ServiceV4();
			int a = 14, b = 3, result;

			// Run 

			result = service->Calculate(a, b);

			// Valid

			Assert::AreEqual(7, result);
		}

		TEST_METHOD(TestMethodV5)
		{
			ISprint0Task6* service = new ServiceV5();
			int a = 7, b = 14, result;

			// Run 

			result = service->Calculate(a, b);

			// Valid

			Assert::AreEqual(8, result);
		}
	};
}
