#include"task2.h"

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long sum = 0;
	unsigned int next = 2;
	while (next < hbound)
	{
		sum += next;
		next = nextPrime(next);
	}
	return sum;
}