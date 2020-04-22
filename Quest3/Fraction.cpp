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

}
void operator - (Fraction one, Fraction two){

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

}
bool operator == (Fraction one, Fraction two){
	return (one.numerator == two.numerator && two.denominator == two.denominator);
}
bool operator != (Fraction one, Fraction two){
	return false;
}