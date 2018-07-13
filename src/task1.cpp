#include <iostream>
using namespace std;

unsigned long findValue(unsigned int min, unsigned max)
{
	if (max < min)
	{
		cout << "Data entered incorrectly" << endl;
		return 0;
	}
	unsigned int value = max;
	int remainder = 0;
	for (unsigned int i = min; i <= max; )
	{
		remainder = (value % i);
		if (remainder == 0)
			i++;
		else
		{
			value++;
			i = min;
		}
	}
	return value;
}