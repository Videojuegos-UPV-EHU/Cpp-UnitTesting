#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ArrayMaths/ArrayMaths.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ArrayMathTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(ArrayMaths_Add)
		{
			vector<double> a = { 1,1,2,2 };
			vector<double> b = { 2,3,4,5 };
			vector<double> c = { 4,2,6 };
			vector<double> result = vector<double>(4);

			Assert::IsTrue(ArrayMaths::Add(a, b, result));
			Assert::IsTrue(ArrayMaths::AreEqual({ 3,4,6,7 }, result));

			Assert::IsFalse(ArrayMaths::Add(a, c, result));
		}
		TEST_METHOD(ArrayMaths_Substract)
		{
			vector<double> a = { 1,1,2,2 };
			vector<double> b = { 2,3,4,5 };
			vector<double> c = { 4,2,6 };
			vector<double> result = vector<double>(4);

			Assert::IsTrue(ArrayMaths::Substract(a, b, result));
			Assert::IsTrue(ArrayMaths::AreEqual({ -1,-2,-2,-3 }, result));

			Assert::IsFalse(ArrayMaths::Substract(a, c, result));
		}
		TEST_METHOD(ArrayMaths_Multiply)
		{
			vector<double> a = { 1,1,2,2 };
			vector<double> b = { 2,3,4,5 };
			vector<double> c = { 4,2,6 };
			vector<double> result = vector<double>(4);

			Assert::IsTrue(ArrayMaths::Multiply(a, b, result));
			Assert::IsTrue(ArrayMaths::AreEqual({ 2,3,8,10 }, result));

			Assert::IsFalse(ArrayMaths::Multiply(a, c, result));
		}
		TEST_METHOD(ArrayMaths_AreEqual)
		{
			vector<double> a = { 1,1,2,2 };
			vector<double> b = { 2,3,4,5 };
			vector<double> c = { 4,2,6 };
			vector<double> d = { 1,1,2,2 };

			Assert::IsFalse(ArrayMaths::AreEqual(a, b));
			Assert::IsFalse(ArrayMaths::AreEqual(a, c));
			Assert::IsFalse(ArrayMaths::AreEqual(b, c));
			Assert::IsFalse(ArrayMaths::AreEqual(c, d));
			Assert::IsTrue(ArrayMaths::AreEqual(a, d));
		}
	};
}