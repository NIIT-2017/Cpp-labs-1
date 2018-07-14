#include "task4.h"
char * sum(char *x, char *y)
{
	int dec_x{};
	int dec_y{};
	char * result = nullptr;
	int ostatok;
	int delenie;
	int size;
	int i{ 0 }, j{ 0 }, k{};
	while (x[i] != '\0')
		i++;
	while (y[j] != '\0')
		j++;
	i > j ? size = i+2 : size = j+2;
	result = new char[size] {0};
	k = size-1;
	i--;
	j--;
	result[k--] = '\0';
	dec_x = x[i--] - '0';
	dec_y = y[j--] - '0';
	ostatok = (dec_x + dec_y) % 10;
	delenie = (dec_x + dec_y) / 10;
	result[k--] = ostatok + '0';
	while (k >= 0)
	{
		if (i >= 0)
			dec_x = x[i--] - '0';
		else
			dec_x = 0;
		if (j >= 0)
			dec_y = y[j--] - '0';
		else
			dec_y = 0;
		ostatok = (dec_x + dec_y + delenie) % 10;
		result[k--] = ostatok + '0';
		delenie = (dec_x + dec_y + delenie) / 10;
	}
	if (result[0] == '0')
	{
		char * nresult = nullptr;
		nresult = new char[size - 1]{ 0 };
		for (size_t i = 0; i < size-1; i++)
		{
			nresult[i] = result[i + 1];
		}
		delete [] result;
		return nresult;
	}
	else
		return result;
}