// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <climits>
#include <cmath>
#include <cfloat>
using namespace std;

float z()
{
		float x = -5;
		int b = 3;
		int a = 2, d = 8;
		int c = 3;
		float result = 0;

		for (x = -5; x <= 5; x += 0.5)
		{
			if (a == 0 || x == 0 || c == 0)
			{
				break;
			}
			if (x < 5 && b != 0)
			{
				result += a*pow((x + 7), 2) - b;
				//cout << result;
			}
			else if (x < 5 && b == 0)
			{
				result += (x - c*d) / (a*x);
			}
			else
			{
				result += x / c;
			}
			continue;
		}
		return result;

}


int main()
{
	//int p;
	long v;
	long long x;
	short c;
	char b=NULL;
	float result=0;
	int n = 10;
	int p = 3;
	cout << "zadanie A";
	cout << "short :" << endl << "min:" << SHRT_MIN << " max:" << SHRT_MAX << endl;
	cout << "----------------------------------------------------------------------" << endl;
	cout << "int :" << endl << "min:" << INT_MIN << " max:" << INT_MAX << endl;

	cout << "----------------------------------------------------------------------" << endl;
	cout << "long :" << endl << "min:" << LONG_MIN << " max:" << LONG_MAX << endl;

	cout << "----------------------------------------------------------------------" << endl;
	cout << "long long :" << endl << "min:" << LLONG_MIN << " max:" << LLONG_MAX << endl;

	cout << "----------------------------------------------------------------------" << endl;
	cout << "char :" << endl << "min:" << CHAR_MIN << " max:" << CHAR_MAX << endl;

	cout << "----------------------------------------------------------------------" << endl;
	cout << " zadanie B";
	cout << "float:" << endl << "razmer: " << FLT_DECIMAL_DIG << endl << "kolvo znach tsifr: " << FLT_DIG << endl << "mantisa: " << FLT_MANT_DIG << endl << "min_exp: " << FLT_MIN_10_EXP << endl << "max_exp: " << FLT_MAX_10_EXP << endl;
	cout << "----------------------------------------------------------------------" << endl;
	cout << "ldouble/double:" << endl << "razmer: " << DBL_DECIMAL_DIG << endl << "kolvo znach tsifr: " << DBL_DIG << endl << "mantisa: " << DBL_MANT_DIG << endl << "min_exp: " << DBL_MIN_10_EXP << endl << "max_exp: " << DBL_MAX_10_EXP << endl;
	cout << "----------------------------------------------------------------------" << endl;
	cout << "zadanie c";

	result = n / p;
	cout << "priobrazovanie tipa pri prisvoenii :" << endl << "result: " << result << endl;
	cout << "----------------------------------------------------------------------" << endl;
	cout << "result2: " << float(n)/p<<endl;
	z();
	cin.get();
	return 0;
}

