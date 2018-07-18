#include "stdafx.h"
#include "ArrayMaths.h"
#include <iostream>
using namespace std;

namespace ArrayMaths
{
	bool Add(vector<double>& op1, vector<double>& op2, vector<double>& result)
	{
		if (op1.size() != op2.size() || op1.size() != result.size())
			return false;

		for (int i = 0; i < op1.size(); i++)
		{
			result[i] = op1[i] + op2[i];
		}
		return true;
	}

	bool Substract(vector<double>& op1, vector<double>& op2, vector<double>& result)
	{
		if (op1.size() != op2.size() || op1.size() != result.size())
			return false;

		for (int i = 0; i < op1.size(); i++)
		{
			result[i] = op1[i] - op2[i];
		}
		return true;
	}

	bool Multiply(vector<double>& op1, vector<double>& op2, vector<double>& result)
	{
		if (op1.size() != op2.size() || op1.size() != result.size())
			return false;

		for (int i = 0; i < op1.size(); i++)
		{
			result[i] = op1[i] * op2[i];
		}
		return true;
	}

	bool AreEqual(const vector<double>& op1, const vector<double>& op2)
	{
		if (op1.size() != op2.size())
			return false;

		for (int i = 0; i < op1.size(); i++)
		{
			if (op1[i] != op2[i])
				return false;
		}
		return true;
	}
	void Print(vector<double>& v)
	{
		cout << "[ ";
		for (double& value : v)
		{
			cout << value << " ";
		}
		cout << "]";
	}
}