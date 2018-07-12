// Реализовать функцию сложения двух сверхдлинных чисел, заданных в виде строк.

#include "task4.h"
#include <iostream>

int main()
{
	using namespace std;

	char * arrStr1 = "1937";
	char * arrStr2 = "51498";

	char * arrStr3 = "12345rty67h8";
	char * arrStr4 = "203jh9n";

	char * arrStr5 = "k999hg99f";
	char * arrStr6 = "r999nb99k";


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

	return 0;
}