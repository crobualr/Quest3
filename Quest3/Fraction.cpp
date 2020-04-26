#include <iostream>
#include <algorithm>
#include <string>
#include "Fraction.h"
using namespace std;
Fraction::Fraction() {
	numerator = 0;
	denominator = 0;
}
Fraction::Fraction(int numerator1, int denominator1) {
	numerator = numerator1;
	denominator = denominator1;
}
int Fraction::GCF(int numerator1, int denominator1) {
	int temp;
	while (numerator1 != 0 && denominator1 != 0) {
		temp = denominator1;
		denominator1 = numerator1 % denominator1;
		numerator1 = temp;
	}
	return numerator1;
}
void Fraction::reducedFraction(int numerator1, int denominator1) {
	//perform arithmetic operation on 2 fractions
	//return the result
	//gcf of the num and denom
	//reduce the fraction
	//save the new num and denom into 
	//cout << numerator1 << "/" << denominator << endl; 
	int commonFactor = GCF(numerator1, denominator1);
	numerator1 /= commonFactor;
	denominator1 /= commonFactor;
	cout << "The result of the operation is " << numerator1 << "/" << denominator1 << endl;  
}
void operator + (Fraction one, Fraction two){
	int num1;
	int newNum, newNum2, newDenom, sumNum;
	Fraction fraction;
	if (one.denominator == two.denominator) {
		num1 = one.numerator + two.numerator;
		fraction.reducedFraction(num1, one.denominator);
	}
	else {
		newNum = (one.numerator * two.denominator);
		newNum2 = (two.numerator * one.denominator);
		newDenom = (one.denominator * two.denominator);
		sumNum = newNum + newNum2;
		fraction.reducedFraction(sumNum, newDenom);
	}
}
void operator - (Fraction one, Fraction two){
	int num1;
	int newNum, newNum2, newDenom, sumNum;
	Fraction fraction;
	if (one.denominator == two.denominator) {
		num1 = one.numerator - two.numerator;
		fraction.reducedFraction(num1, one.denominator);
	}
	else {
		newNum = (one.numerator * two.denominator);
		newNum2 = (two.numerator * one.denominator);
		newDenom = (one.denominator * two.denominator);
		sumNum = newNum - newNum2;
		fraction.reducedFraction(sumNum, newDenom);
	}
}
void operator * (Fraction one, Fraction two){
	int num1;
	num1 = (one.numerator * two.numerator);
	int num2;
	num2 = (one.denominator * two.denominator);
	Fraction multiplyFraction;
	multiplyFraction.reducedFraction(num1, num2);
}
void operator / (Fraction one, Fraction two){
	int newNum, newDenom;
	Fraction fraction;
	
	newNum = (one.numerator * two.denominator);
	newDenom = (one.denominator * two.numerator);
	fraction.reducedFraction(newNum, newDenom);

}
bool operator == (Fraction one, Fraction two){
	int gcf1, gcf2, gcf;
	gcf = 1;
	gcf1 = one.GCF(one.numerator, one.denominator);
	gcf2 = two.GCF(two.numerator, two.denominator);
	
	if (gcf != gcf1 && gcf != gcf2) {
		one.numerator /= gcf1;
		one.denominator /= gcf1;
		two.numerator /= gcf2;
		two.denominator /= gcf2;
	}
	else if (gcf != gcf1) {
		one.numerator /= gcf1;
		one.denominator /= gcf1;
	}
	else if (gcf != gcf2) {
		two.numerator /= gcf2;
		two.denominator /= gcf2;
	}

	if (one.numerator == two.numerator && two.denominator == two.denominator) {
		cout << "The result of the operation is " << one.numerator << "/" << one.denominator
			<< " == " << two.numerator << "/" << two.denominator << endl;
		return true;
	}
	else {
		cout << "The result of the operation is " << one.numerator << "/" << one.denominator
			<< " != " << two.numerator << "/" << two.denominator << endl;
		return false;
	}
}
bool operator != (Fraction one, Fraction two){
	return false;
}