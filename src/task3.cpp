#include "task3.h"
#include "task2.h"
#include <cmath>

unsigned long sumPrime(unsigned int hbound)
{
	unsigned int result{ 0 };
	for (int i = 2; i < hbound; i++)
		if (checkPrime(i))
			result += i;

	return result;
}

