#include "task2.h"

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long sum{0};
	int i{2};
	while (i<hbound)
	{
		if (checkPrime(i) == true) sum += i;
		i++;
	}	
	
	
/*	for (unsigned int i = 2; i < hbound; i++)
		if (checkPrime(i) == true)
			sum += i;*/
	return sum;
}


