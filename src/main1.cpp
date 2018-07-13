/*
Написать программу, определяющую, какое самое маленькое положительное целое
число делится на все числа из диапазона [1...20] без остатка.
*/

#include <iostream>
#include "task1.h"
using namespace std;

int main()
{
	unsigned int min = 1;
	unsigned max = 20;

	cout << "The smallest positive integer that is divided by all numbers " << '\n'
		<< "in the range " << min << "..." << max << " without a remainder is: "
		<< findValue(min, max) << '\n' << endl;

	min = 5;
	max = 1;
	cout << "The smallest positive integer that is divided by all numbers " << '\n'
		<< "in the range " << min << "..." << max << " without a remainder is: "
		<< findValue(min, max) << '\n' << endl;

	min = 1;
	max = 5;
	cout << "The smallest positive integer that is divided by all numbers " << '\n'
		<< "in the range " << min << "..." << max << " without a remainder is: "
		<< findValue(min, max) << '\n' << endl;

	return 0;
}