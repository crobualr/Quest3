#pragma once
#include <string>
using namespace std;
class Fraction {
public: 
	Fraction(int numerator1, int denominator1);
	int GCF(int numerator1, int denominator1);
	void reducedFraction(int numerator1, int denominator1);
	int numerator;
	int denominator;
};
