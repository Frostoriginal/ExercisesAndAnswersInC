#include "pch.h"
#include "CppUnitTest.h"
#include "../ExercisesAndAnswersInC/8Kyu.h"
#include "../ExercisesAndAnswersInC/8Kyu.c"
#include <stdint.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests8Kyu
{
	TEST_CLASS(SquaringAnArgument)
	{
	public:

		TEST_METHOD(Test1)
		{
			int number = 2;
			int squared = 4;
			Assert::AreEqual(squared, returnSquare(number));
		}
		TEST_METHOD(Test2)
		{
			int number = 3;
			int squared = 9;
			Assert::AreEqual(squared, returnSquare(number));
		}

		TEST_METHOD(Test3)
		{
			int number = -2;
			int squared = 4;
			Assert::AreEqual(squared, returnSquare(number));
		}
		TEST_METHOD(Test4)
		{
			int number = 5;
			int squared = 25;
			Assert::AreEqual(squared, returnSquare(number));
		}
	};

	TEST_CLASS(ReverseList) {
	public:

		TEST_METHOD(Test1)
		{
		const int array[4] = { 1, 2, 3, 4 };
		const int expected[4] = { 4, 3, 2, 1 };
			for (int i = 0; i < 4; i++)
			{
				Assert::AreEqual(reverse_list(array, 4)[i], expected[i]);
			}

		}
	};
}


namespace Tests7Kyu
{
	TEST_CLASS(SquaringAnArgumena)
	{
	public:

		TEST_METHOD(Test1)
		{
			int number = 2;
			int squared = 4;
			Assert::AreEqual(squared, returnSquare(number));
		}
	};
}
