#include <math.h>
bool checkPrime(unsigned int value)
{
	if (value < 2) return false;
	for (unsigned int i = 2; i <= sqrt(double(value)); i++)
	{
		if (value%i == 0) return false;
	}
	return true;
}
unsigned int nPrime(unsigned n)
{
	unsigned num = 0;
	while (n)
	{
		num++;
		if (checkPrime(num))n--;
	}
	return num;
}
unsigned int nextPrime(unsigned int value)
{
	while (true)
	{
		value++;
		if (checkPrime(value)) return value;
	}
}
