#include <limits.h>
#include "task2.h"
#include "task3.h"

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long result = 0;
	unsigned int prime = 2;
	while (prime<hbound)
	{
		result += prime;
		prime = nextPrime(prime);
	}
	return result;
}