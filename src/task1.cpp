#include <iostream>
 
 
using namespace std;

unsigned long gcd(unsigned long m, unsigned long n)
{
	while (m && n) if (m < n) n %= m; else m %= n;
	return (m == 0L) ? n : m;
}

unsigned long lcm(unsigned long m, unsigned long n)
{
	return (m / gcd(m, n))*n;
}
 

unsigned long findValue(unsigned int min, unsigned int max) {

	unsigned long result = min;
	for (int i = 2; i <= max; ++i)
	{
		result = lcm(result, i);
		 
	}

	return result;
}

 
 

