#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.VevurYA.Sprint0.Task7.V1-5.Lib/Tyuiu.VevurYA.Sprint0.Task7.V1-5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestUnitTask7V1_5
{
	TEST_CLASS(TestUnitTask7V1_5)
	{
	public:
		
		TEST_METHOD(TestMethodv1)
		{
			ISprint0Task7* service = new ServiceV1();
			int a = 120;
			Assert::IsTrue(service->Rezalt(a));
		}
		TEST_METHOD(TestMethodv2)
		{
			ISprint0Task7* service = new ServiceV2();
			int a = 1200;
			Assert::IsTrue(service->Rezalt(a));
		}
		TEST_METHOD(TestMethodv3)
		{
			ISprint0Task7* service = new ServiceV3();
			int a = 12010;
			Assert::IsTrue(service->Rezalt(a));
		}
		TEST_METHOD(TestMethodv4)
		{
			ISprint0Task7* service = new ServiceV4();
			int a = 120100;
			Assert::IsTrue(service->Rezalt(a));
		}
		TEST_METHOD(TestMethodv5)
		{
			ISprint0Task7* service = new ServiceV5();
			int a = 1201010;
			Assert::IsTrue(service->Rezalt(a));
		}
	};
}
