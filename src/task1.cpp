#include "task1.h"

unsigned long long findValue(unsigned int min, unsigned int max)
{
	unsigned long long result;
	int x = 1;

	while (x)
	{
		result = max*x;

		for (int i = min; i <= max; i++)
		{
			if (result%i == 0 && i == max) { x = 0; break; }
			if (result%i > 0) break;
		}

		if (x>0) x++;
	}

	return result;
}