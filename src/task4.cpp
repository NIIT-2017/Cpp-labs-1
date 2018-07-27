#include <cstring>
#include <iostream>
#include "task4.h"
using namespace std;

static void reverse(char *s)
{
	for (int i = 0, j = strlen(s) - 1; i<j; i++, j--)
	{
		char t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
}
static void add(char *z, char *v)
{
	int i = 0, j = 0, d = 0;
	while (v[i])
	{
		char t = z[i] + v[i] - 2 * '0';
		z[i] = t + d;

		if (t>9) {
			z[i] %= 10;
			d = 1;
		}
		else
			d = 0;
		z[i] += '0';
		i++;
	}
	while (z[i])
	{
		z[i] -= '0';
		z[i] += d;
		if (z[i]>9) {
			z[i] %= 10;
			d = 1;
		}
		else
			d = 0;
		z[i] += '0';
		i++;
	}
	z[i] += '0' + d;
}
char *sum(char *x, char *y)
{
	size_t lenx = strlen(x);
	size_t leny = strlen(y);

	size_t len = ((lenx>leny) ? lenx : leny) + 1;

	char *rx = new char[lenx + 1];
	char *ry = new char[leny + 1];
	char *z = new char[len + 1];
	memset(z, 0, len + 1);
	strcpy(rx, x);
	reverse(rx);
	strcpy(ry, y);
	reverse(ry);

	if (lenx>leny)
	{
		strcpy(z, rx);
		add(z, ry);
	}
	else
	{
		strcpy(z, ry);
		add(z, rx);
	}
	reverse(z);
	if (z[0] == '0')
		{
		for (unsigned long long int i = 0; i < len; i++)
			z[i] = z[i + 1];
		}
	delete[] rx;
	delete[] ry;
	return z;
}
