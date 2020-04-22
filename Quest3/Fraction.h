#pragma once
#include <string>
using namespace std;
class Fraction {
public: 
	Fraction();
	Fraction(int numerator1, int denominator1);
	int GCF(int numerator1, int denominator1);
	void reducedFraction(int numerator1, int denominator1);
	friend void operator+(Fraction one, Fraction two);
	friend void operator-(Fraction one, Fraction two);
	friend void operator*(Fraction one, Fraction two);
	friend void operator/(Fraction one, Fraction two);
	friend bool operator==(Fraction one, Fraction two);
	friend bool operator!=(Fraction one, Fraction two);

	//friend bool operator¡(Fraction one, Fraction two);
	//friend bool operator¿(Fraction one, Fraction two);
	//friend bool operator¡=(Fraction one, Fraction two);
	//friend bool operator¿=(Fraction one, Fraction two);
	int numerator;
	int denominator;
};
