#include <cstring>
#include <iostream>
#include "task4.h"
using namespace std;

int main()
{
	//char *x = (char*)"12335";
	//char *y = (char*)"92335";
	char *x = (char*)"1";
	char *y = (char*)"8";
	char *z = sum(x, y);
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
	delete[] z;
	return 0;
}