#include <cmath>
bool checkPrime(unsigned int value)
{
	for (int i = 2; i <= sqrt(value); i++)
	{
		if (value % i == 0)
			return false;
	}
	return true;
}
unsigned int nPrime(unsigned n)
{
	int tmp = 0;
	unsigned int i = 2;
	while (tmp != n)
	{
		if (checkPrime(i++))
			tmp++;
	}
	return i-1;
}
unsigned int nextPrime(unsigned int value) 
{
	while (!checkPrime(++value));
	return value;
}