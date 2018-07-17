#include "task2.h"
#include <cmath>
#include <ctime>

#include <iostream>

using namespace std;


// Проверка числа на простоту
bool checkPrime(unsigned int value)
{	
	for (unsigned int i = 2; i <= sqrt(value); i++)
		if (value%i == 0)
			return false;
	return true;
}

// Нахождение n - ого простого числа(в ряду).
unsigned long long nPrime(unsigned int n)
{
	// Если n некорректно возвращаем 0
	if (n < 1)
		return 0;

	// Первое простое число в ряду - 1
	unsigned long long result = 1;

	// Методом перебора найдем все простые числа по порядку до n
	// Первое число мы уже нашли
	for (unsigned int i = 0; i < n; i++)
	{
		// Запускаем поиск следующего простого числа
		result = result + 1;
		// Будем перебирать числа пока не найдем простое
		while (checkPrime(result) == false)
		{
			result = result + 1;
		}
	}
	return result;
}

// Нахождение ближайшего следующего простого числа к value.
unsigned long long nextPrime(unsigned long long value)
{
	unsigned long long result;
	if (value == 0 || value == 1)
		result = 2;
	else
		result = value + 1;
	// Находим ближайшее большее число
	while (checkPrime(result) == false)
	{
		result = result + 1;
	}

	return result;
}