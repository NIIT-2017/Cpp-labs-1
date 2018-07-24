#include "task1.h"
unsigned long findValue(unsigned int min, unsigned max)
{
	unsigned long r;
	r = 1;
	for (int i = min; i <= max; i++)
	{
		unsigned long a = i;
		unsigned long b = r;
		while (a != b)
		{
			if (a > b)
				a = a - b;
			else b = b - a;
		}
		r = r*i / a; ///���(a,b) = a*b/���(a,b)
	}
	return r;
}