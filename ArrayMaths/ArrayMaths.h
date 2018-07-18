#pragma once

#include <vector>
using namespace std;

namespace ArrayMaths
{
	bool Add(vector<double>& op1, vector<double>& op2, vector<double>& result);
	bool Substract(vector<double>& op1, vector<double>& op2, vector<double>& result);
	bool Multiply(vector<double>& op1, vector<double>& op2, vector<double>& result);
	bool AreEqual(const vector<double>& op1, const vector<double>& op2);

	void Print(vector<double>& v);
};

