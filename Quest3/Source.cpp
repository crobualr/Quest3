#include <iostream>
#include <string>
#include "CSV.h"
using namespace std;

int main() {
	string fileName;
	cout << "Enter CSV file name: " << endl;
	cin >> fileName;
	CSV csvFILE (fileName);
	return 0;
}

