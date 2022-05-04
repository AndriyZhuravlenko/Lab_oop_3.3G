#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\LEGION\source\repos\Lab_oop_3.3G\Lab_oop_3.3G\Fraction.cpp"
#include "C:\Users\LEGION\source\repos\Lab_oop_3.3G\Lab_oop_3.3G\LongLong.cpp"
#include "C:\Users\LEGION\source\repos\Lab_oop_3.3G\Lab_oop_3.3G\Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTOOP33G
{
	TEST_CLASS(UTOOP33G)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			LongLong g(5, 5), g1(5, 5);

			Assert::AreEqual(operator ==(g, g1), true);
		}
	};
}
