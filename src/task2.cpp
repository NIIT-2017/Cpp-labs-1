#include <math.h>

bool checkPrime(unsigned int value)
{
	double limit = sqrt(value);
	for (int i = 2; i < limit; i++)
		if (value % i == 0)
			return false;
	return true;
}

static unsigned int searchPrime(unsigned value, unsigned n)
{
	unsigned counter = 0;
	while (counter < n)
	{
		if (!checkPrime(value))
		{
			value++;
		}
		else
		{
			counter++;
			value++;
		}
	}
	return --value;
}

unsigned int nPrime(unsigned n)
{
	return searchPrime(2, n);
}

unsigned int nextPrime(unsigned int value)
{
	return searchPrime(value + 1, 1);
}