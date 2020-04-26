#pragma once
#include <string>
using namespace std;
class CSV {
public:	
	CSV(string file);
	~CSV();
	CSV(const CSV&);
	//COPY ASSIGNMENT
	CSV(const CSV&&);
	//MOVE ASSIGNMENT
};