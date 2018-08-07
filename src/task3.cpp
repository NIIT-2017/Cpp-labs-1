#include <iostream>
using namespace std;
unsigned long long sumPrime(unsigned int hbound)
{
	setlocale(LC_ALL, "Russian");
    unsigned int x = 2000000;
	unsigned int i = 3;
	unsigned long long sum = 2;
	for (i; x; i += 2) {
		for (unsigned long long j = 3; j*j <= i; ++j)
		{
			if ((i > hbound || i >= hbound))
				return sum;
			if (i%j == 0)
				goto next;
		}
		--x;
		if (i != 0)
		{
			sum += i;
		}
	next:;
	}
}