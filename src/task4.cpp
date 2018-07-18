#include "task4.h"
#include <iostream>
#include <cstring>

char * sum(char *x, char *y)
{
	int len = 0;
	int sizex = 0;
	int sizey = 0;
	int temp = 0;
	char* result = nullptr;
	char* result2 = nullptr;

	char * ptr = x;
	while (*ptr != '\0')
	{
		if ((*ptr < '0') || (*ptr > '9'))
			return nullptr;
		sizex++;
		ptr++;
	}
	ptr = y;
	while (*ptr != '\0')
	{
		if ((*ptr < '0') || (*ptr > '9'))
			return nullptr;
		sizey++;
		ptr++;
	}

	//приводим к общему виду
	if (sizex >= sizey)
	{
		len = sizex+1;
		result = new char[len+1]();
		memcpy(result + (len - sizey), y, sizey);
		for (int i = 1; i <len; i++)
		{
			temp = x[sizex - i] - '0' + result[sizex + 1 - i] - '0';
			result[sizex + 1 - i] = temp % 10 + '0';
			result[sizex - i] = temp / 10 + '0';
		}
	}
	else
	{
		len = sizey + 1;
		result = new char[len + 1]();
		memcpy(result + (len - sizex), y, sizex);
		for (int i = 1; i <len; i++)
		{
			temp = y[sizey - i] - '0' + result[sizey + 1 - i] - '0';
			result[sizey + 1 - i] = temp % 10 + '0';
			result[sizey - i] = temp / 10 + '0';
		}
	}
	if (result[0] == '0')
	{
		result2 = new char[len]();
		memcpy(result2, result + 1, len);
		delete[] result;
		return result2;
	}
	return result;
}