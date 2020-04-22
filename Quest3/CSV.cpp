#include <iostream>
#include <fstream>
#include <string>
#include "CSV.h"
#include "Fraction.h"
using namespace std;

//CSV::CSV() {};
CSV::CSV(string csvFile) {
	ifstream fin;
	fin.open(csvFile);
	if (!fin.is_open()) {
		cout << "ERROR: Invalid CSV file name or unable to locate file" << endl;
	}
	while (fin.good()) {
		string num, num2, den, den2, operation;
		int numeratorFraction, denominatorFraction;
		getline(fin, num, ',');
		getline(fin, den, ',');
		numeratorFraction = stoi(num);
		denominatorFraction = stoi(den);
		Fraction fraction1(numeratorFraction, denominatorFraction);
		fraction1.reducedFraction(numeratorFraction, denominatorFraction);
		getline(fin, operation, ',');
		getline(fin, num2, ',');
		getline(fin, den2, '\n');
		numeratorFraction = stoi(num2);
		denominatorFraction = stoi(den2);
		Fraction fraction2(numeratorFraction, denominatorFraction);
		fraction2.reducedFraction(numeratorFraction, denominatorFraction);
		cout << num << "/" << den << operation << num2 << "/" << den2 << endl;
	}
	fin.close();
}
//CSV DESTRUCTOR
//COPY CONSTRUCTOR
//COPY ASSIGNMENT
//MOVE CONSTRUCTOR
//MOVE ASSIGNMENT