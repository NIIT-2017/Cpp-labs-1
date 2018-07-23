#include <iostream>
#include <cmaths>
#include "task2.h"
using namespace std;

bool checkPrime(unsigned int value)
{
	if (value <= 1) return false;
	for (int i = 2; i <= sqrt(value); i++)
		if (value%i == 0)
			return false;
	return true;
}

unsigned long long nPrime(unsigned n)
{
	int j = 0, i = 0;
	while (i < n)
	{
		if (checkPrime(j) == true) i++;
		j++;
	}
	return j-1;

}

unsigned long long nextPrime(unsigned long long value)
{
	unsigned long long i = value + 1;
	while (checkPrime(i) != 1)
	{
		i++;
	}
	return i++;
}