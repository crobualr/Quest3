#include <iostream>
#include <string>
#include "CSV.h"
using namespace std;

int main() {
	string fileName;

	cout << "Enter CSV file name: " << endl;
	cin >> fileName;

	CSV* fileCSV;
	fileCSV = new CSV(fileName);

	delete fileCSV;
	
	return 0;
}

