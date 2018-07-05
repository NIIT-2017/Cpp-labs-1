//Autor is Dmitriy Parev

#include <iostream>
#include "task1.h"
using namespace std;

int main()
{
	unsigned int min;
	unsigned max;
	cout << "Enter min" << endl;
	while (true) {
		cin >> min;
		if (min > 0 && min < 21) break;
		cout << "Enter min again" << endl;
	}
	cout << "Enter max" << endl;
	while (true) {
		cin >> max;
		if (max >= min && max < 21) break;
		cout << "Enter max again" << endl;
	}
	cout << "Result = " << findValue(min, max) << endl;
	return 0;
}