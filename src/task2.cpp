#include "task2.h"
#include <math.h>

bool checkPrime(unsigned int value)
{
	bool result = true;
	if (value == 1)
		return false;	//судя по всему 1 не простое число, а жаль..
	//асимптота, дальше перебирать смысла нет
	unsigned int temp = (unsigned int)(sqrt((double)value));	
	for (unsigned int i = 2; i <= temp; i++)
		if (value%i==0)
			return false;
	return result;
}

unsigned int nextPrime(unsigned int value)
{
	while (checkPrime(++value) == false);
	return value;
}

//надо наверное какую нибудь защиту от переполнения, только как? ноль возвращать?
unsigned int nPrime(unsigned n)
{
	unsigned int result = 1;
	while (n--)
		result = nextPrime(result);
	return result;
}

