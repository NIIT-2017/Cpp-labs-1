#include <iostream>
#include "task2.h"

using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	unsigned int number;
	unsigned int n;
	unsigned long long int number1;

	
	cout << "Введите число: ";
	cin >> number;

	if (checkPrime(number))
		cout << number << "   Простое число " << endl;
	else
		cout << number << "   Не простое число" << endl;

	cout << "Введите число для поиска следующего простого числа: ";
	cin >> number1;

	cout << " Следующее простое число  =   " << nextPrime(number1) << endl;

	cout << "Введите n простое число в ряду ";
	cin >> n;

	cout << "N - чило в ряду =   " << nPrime(n) << endl;

	system("pause");

	return 0;
}