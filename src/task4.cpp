#include <iostream>
#include "task4.h"
#include <cstdlib>
#include <string>
#include <cstring>
using namespace std;

char *sum(char *x, char *y)
{
	string a = string(x), b = string(y), sum = "", sum2 = "";
	int c = 0, d = 0, t = 0, n = 0;

	if (a.size()>b.size())
	{
		t = a.size() - b.size();
		for (n = 0; n<t; n++)
			sum += '0';
		sum += b;
		b = sum;
	}
	if (a.size()<b.size())
	{
		t = b.size() - a.size();
		for (n = 0; n<t; n++)
			sum += '0';
		sum += a;
		a = sum;
	}
	if (a.size() == b.size())
		sum = a;

	for (n = a.size() - 1; n >= 0; n--)
	{
		t = d + (b[n] - '0') + (a[n] - '0');
		c = t % 10;
		d = t / 10;
		sum[n] = c + '0';

		if (n == 0 && d == 1)
		{
			sum2 = sum + '0';
			for (int j = sum.size(); j >= 0; j--)
			{
				if (j == 0)
				{
					sum2[j] = 1 + '0';
					break;
				}
				sum2[j] = sum[j - 1];
			}
			sum = sum2;
		}
	}

	int size = sum.size();

	char *result = new char[size + 1];
	char *out = (char*)sum.c_str();

	strncpy(result, out, size);
	result[size] = '\0';

	return result;
}

