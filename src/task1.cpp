#include <iostream>
using namespace std;
unsigned long findValue(unsigned int min, unsigned max)
{
	if (max > min)
	{
		using namespace std;
		int *arr = new int[max];
		int res = 0;
		unsigned long sum = max;
		for (int j = 0; j < max; j++)
		{
			arr[j] = min;
			min++;
		}
		for (int i = 0; i < max;)
		{
			res = sum % arr[i];
			if (res == 0)
				i++;
			else
			{
				sum++;
				i = 0;
			}
		}
		delete[] arr;
		return sum;
	}
	else
		return 0;

	}
