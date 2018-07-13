// Реализовать функцию сложения двух сверхдлинных чисел, заданных в виде строк.

#include "task4.h"
#include <iostream>

int main()
{
	using namespace std;

	char * arrStr3 = "99999999999999999999";
	char * arrStr4 = "1";

	char * arrStr1 = "123456789";
	char * arrStr2 = "000000001";

	char * arrStr5 = "xyx";
	char * arrStr6 = "yxy";

	char * arrStr7 = "ert5674sdd45p333";
	char * arrStr8 = "vdgf456789";


	char * ps;

	ps = sum(arrStr1, arrStr2);
	//cout << sum(arrStr1, arrStr2) << endl;
	cout << ps << endl << endl;
	delete[] ps;

	ps = sum(arrStr3, arrStr4);
	cout << ps << endl << endl;
	delete[] ps;

	ps = sum(arrStr5, arrStr6);
	cout << ps << endl << endl;
	delete[] ps;

	ps = sum(arrStr7, arrStr8);
	cout << ps << endl << endl;
	delete[] ps;

	return 0;
}