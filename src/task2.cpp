#include <iostream>
#include <cmath>
#include "task2.h"

bool checkPrime(unsigned int value)
{
	if (value <= 1) return false;
	for (int i = 2; i <= sqrt(value); i++)
		if (value%i == 0)
			return false;
	return true;
}

unsigned nextPrime(unsigned int value)
{
	while (checkPrime(++value) == false);
	return value;
}

unsigned nPrime(unsigned n)
{
	unsigned  int result = 1;
	while (n--)
		result = nextPrime(result);
	return result;
}



