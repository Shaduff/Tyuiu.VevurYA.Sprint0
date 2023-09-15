#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.VevurYA.Sprint0.Task5.V5.Lib/Tyuiu.VevurYA.Sprint0.Task5.V5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestTask5V5
{
	TEST_CLASS(UnitTestTask5V5)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task5* service = new Service();
			float a = 0, b = 0, c = 0;
			int d = 0;

			// run
			d = service->Zadacha(a, b, c);

			// Valid
			Assert::AreEqual(0, d);
		}
	};
}
