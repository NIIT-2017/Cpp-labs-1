//Autor is Dmitriy Parev

#include "task4.h"
//#include <cstring>

//если использовать библиотеку <cstring>, убрать функцию strlen
unsigned strlen(const char *str)
{
	unsigned n = 0;
	while (str[n] != '\0') n++;
	return n;
}

//сумма чисел x и y
char *sum(char *x, char *y)
{
	unsigned cap_x = strlen(x);
	unsigned cap_y = strlen(y);
	unsigned cap = (cap_x > cap_y ? cap_x : cap_y);
	cap += 2;
	char *result = new char [cap];
	cap--;
	x = x + cap_x;
	y = y + cap_y;
	char *r = result;
	result = result + cap;
	*result = '\0';
	int k = 0;
	for (unsigned i = 0; i < cap - 1; i++)
	{
		k += (i < cap_x ? *--x - 48 : 0) + (i < cap_y ? *--y - 48 : 0);
		*--result = 48 + k % 10;
		k /= 10;
	}
	if (k != 0) *--result = 48 + k;
	char *res = new char [strlen(result) + 1];
	for(unsigned i = 0; i < strlen(result) + 1; i++)
		*(res + i) = *(result + i);
	delete [] r;
	return res;
}