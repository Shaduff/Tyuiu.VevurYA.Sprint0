#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.VevurYA.Sprint0.Task3.V0.Lib/Tyuiu.VevurYA.Sprint0.Task3.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestTask3
{
	TEST_CLASS(UnitTestTask3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// Init
			ISprint0Task3* date = new Service();
			int a = 3;
			int b = 4;
			int c = 5;
			int d;

			// Run
			d = date->SummV3(a, b, c);

			// Valid 
			Assert::AreEqual(12, d);

		}
	};
}
