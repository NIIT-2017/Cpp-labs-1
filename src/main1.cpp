
#include <iostream>
#include "task1.h"
//#include "gtest/gtest.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");


	unsigned int temp = findValue(1, 20);
	cout << temp << endl;
	cout << endl;

	unsigned int sec = findValue(1, 10);
	
	cout << sec << endl;

	return 0;
}