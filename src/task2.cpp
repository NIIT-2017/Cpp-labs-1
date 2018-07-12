//Autor is Dmitriy Parev

#include "task2.h"
#include <math.h>

//проверка числа на простоту
bool checkPrime(unsigned int value)
{
	if (value < 2) return false;
	for(unsigned int i = 2; i <= round(sqrt(value)); i++)
		if (value % i == 0) return false;
	return true;
}

//нахождение n-ого простого числа (в ряду)
unsigned long long nPrime(unsigned n)
{
	if (n == 0) return 0;
	unsigned long long k = 2;
	while (n > 0)
	{
		if (checkPrime(k)) n--;
		k++;
	}
	return --k;
}

//нахождение ближайшего следующего простого числа к value
unsigned long long nextPrime(unsigned long long value)
{
	while (value++)
	{
		if (checkPrime(value)) return value;
	}
	return 0;
}