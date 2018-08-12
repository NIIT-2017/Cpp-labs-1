#include <iostream>
#include "task4.h"
#include <cstdlib>
#include <string>
#include <cstring>
using namespace std;

char *sum(char *x, char *y)
{
	type a, b, c;

	a = (type)atoi(x);
	b = (type)atoi(y);

	c = a + b;

	string smb = to_string(c);

	char *result = new char;
	char *out = (char*)smb.c_str();

	strcpy(result, out);

	return result;
}

