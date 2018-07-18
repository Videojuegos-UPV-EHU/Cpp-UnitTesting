#pragma once

#include <vector>
using namespace std;

namespace ArrayMaths
{
	bool Add(vector<double>& op1, vector<double>& op2, vector<double>& result);
	bool Substract(vector<double>& op1, vector<double>& op2, vector<double>& result);
	bool Multiply(vector<double>& op1, vector<double>& op2, vector<double>& result);

	void Print(vector<double>& v);
};

