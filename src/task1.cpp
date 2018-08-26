#include <iostream>

using namespace std;

unsigned long findValue(unsigned int min, unsigned max)
{
	if (min < max)
	{
		unsigned long result = max;
		unsigned int size = max - min + 1;
		unsigned int *arr = new unsigned int[size];
		for (int i = 0; i < size; i++)
			arr[i] = min + i;
		bool is_right_number;
		while (1) {
			is_right_number = true;
			for (int i = size - 1; i >= 0; i--)
			{
				if (result%arr[i])
					is_right_number = false;
			}
			if (is_right_number)
			{
				delete[] arr;
				return result;
			}
			result++;
		}
	}
	else return 0;
}