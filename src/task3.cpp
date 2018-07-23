#include <iostream>
#include "task2.h"
using namespace std;

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long sum = 0;
	unsigned int a = 0;
	while (a < hbound)
	{
		a++;
		if (checkPrime(a) == true) sum = sum + a;
	}
	return sum;
}