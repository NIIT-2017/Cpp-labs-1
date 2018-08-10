#include "task5.h"
#include <iostream>
#include <cstdlib>
using namespace std;


void split(char ***result, int *N, char *buf, char ch)
{
	int t, k = 1, start = -5;
	char *p;

	for (t = 0; buf[t]; t++)
	{
		if (buf[t] == ch) k++;
	}

	cout << ch << endl;

	char **arr = new char*[k];
	*N = k;
	k = 0;

	for (t = 0; t <= strlen(buf); t++)
	{
		if (buf[t] == ch || buf[t] == 0)
		{
			if (t > start && start>=0)
			{
				arr[k] = new char[t - start];
				p = &buf[start];
				strncpy(arr[k], p, t - start);
				arr[k][t - start] = '\0';
				start = -5;
				k++;
			}
			continue;
		}
		if (start < 0) start = t;
	}
	*result = arr;
}