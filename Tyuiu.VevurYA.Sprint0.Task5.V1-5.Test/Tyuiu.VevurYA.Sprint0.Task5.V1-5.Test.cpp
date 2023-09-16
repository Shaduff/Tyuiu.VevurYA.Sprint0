#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.VevurYA.Sprint0.Task5.V1-5.Lib/Tyuiu.VevurYA.Sprint0.Task5.V1-5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestUnitTask5V1_5
{
	TEST_CLASS(TestUnitTask5V1_5)
	{
	public:

		TEST_METHOD(TestMethodV1)
		{
			ISprint0Task5* service = new ServiceV1();
			float
				a = 9,
				b = 7.5,
				c = 5;

			float result;

			// Run

			result = service->Zadacha(a, b, c);

			// Init

			Assert::AreEqual(float(337.5), result);
		}

		TEST_METHOD(TestMethodV2)
		{
			ISprint0Task5* service = new ServiceV2();
			float
				a = 2.75,
				b = 0.5,
				c = 7;

			float result;

			// Run

			result = service->Zadacha(a, b, c);

			// Init

			Assert::AreEqual(float(22.75), result);
		}

		TEST_METHOD(TestMethodV3)
		{
			ISprint0Task5* service = new ServiceV3();
			float
				a = 5.45,
				b = 2.5,
				c = 3;

			float result;

			// Run

			result = service->Zadacha(a, b, c);

			// Init

			Assert::AreEqual(float(10.95), result);
		}

		TEST_METHOD(TestMethodV4)
		{
			ISprint0Task5* service = new ServiceV4();
			float
				a = 67,
				b = 8.5,
				c = 6.5;

			float result;

			// Run

			result = service->Zadacha(a, b, c);

			// Init

			Assert::AreEqual(float(74.035), result);
		}

		TEST_METHOD(TestMethodV5)
		{
			ISprint0Task5* service = new ServiceV5();
			float
				a = 4,
				b = 5,
				c = 6;

			float result;

			// Run

			result = service->Zadacha(a, b, c);

			// Init

			Assert::AreEqual(float(25), result);
		}

	};
}
