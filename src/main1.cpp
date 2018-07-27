#include <iostream>
#include "task1.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); // Для распознавания русского языка в консоли.
	unsigned int min = 1;
	unsigned max = 20;

	cout << "Наименьшее положительное целое число, деленное на все числа" 
		 << endl << "деленное на все числа в диапозоне от" << " "
		 << min << " ... " << max << " без остатка: "
		 << findValue(min, max) << endl;

	return 0;

}