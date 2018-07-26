#include <iostream>
#include <cstring>
#include <string>
#include "task5.h"
using namespace std;

	void split(char ***result, int *N, char *buf, char ch)
{
	int i = 0;
	int count = 0;
	*N = 0;
	int begin = 0;
	char *newBuf = new char[strlen(buf)];
	strcpy(newBuf, buf);

	while (newBuf[i] == ch)
	{
		i++;
	}
	if (i != 0) begin = i + 1;
	while (newBuf[i] != '\0')
	{
		if (newBuf[i] == ch && newBuf[i + 1] != ch)
			count++;
		i++;
	}

	if (newBuf[strlen(buf) - 1] == ch)
		*N = count;
	else *N = count + 1;

	char **str = new char*[*N];
	int numRes = 0;
	while (*newBuf != '\0')
	{
		while (*newBuf == ch)
		{
			newBuf++;
		}
		int length = 0;
		while (*newBuf != ch && *newBuf != '\0')
		{
			newBuf++;
			length++;
		}
		str[numRes] = new char[length + 1];
		memcpy(str[numRes], newBuf - length, length);
		str[numRes][length] = '\0';
		numRes++;
	}
	*result = str;
	delete[] newBuf;
	delete[] str;
}