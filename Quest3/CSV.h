#pragma once
#include <string>
using namespace std;
class CSV {
public:	
	CSV(string file);
	~CSV();
	CSV(const CSV& csvCopy);
	CSV& operator= (const CSV& csvCopy);
	CSV(const CSV&& csvMove);
	
};