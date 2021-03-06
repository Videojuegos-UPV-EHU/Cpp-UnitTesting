// UnitTesting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;

#include "ArrayMaths.h"

int main()
{
	vector<double> a = { 1,1,2,2 };
	vector<double> b = { 2,3,4,5 };
	vector<double> c = { 4,2,6,2 };
	vector<double> result = vector<double>(4);

	cout << "a+b= ";
	ArrayMaths::Add(a, b, result);
	ArrayMaths::Print(result);
	cout << "\na-b= ";
	ArrayMaths::Substract(a, b, result);
	ArrayMaths::Print(result);
	cout << "\na*b= ";
	ArrayMaths::Multiply(a, b, result);
	ArrayMaths::Print(result);

    return 0;
}

