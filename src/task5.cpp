#include <iostream>
#include <cstring>
#include <string>

using namespace std;
void split(char ***result, int *N, char *buf, char ch)
{
	int i = 0;
	int count = 0;
	*N = 0;
	char *newBuf = new char[strlen(buf)];
	strcpy(newBuf, buf);

	while (newBuf[i] == ch)
		i++;
	int begin = i + 1;
	while (newBuf[i] != '\0')
	{
		if (newBuf[i] == ch && newBuf[i + 1] != 0)
			count++;
		i++;
	}

	if (newBuf[strlen(buf) - 1] == ch)
		*N = count;
	else *N = count + 1;

	char **str = new char*[*N];
	int numRes = 0;
	int end = begin;
	while (newBuf[i] != '\0')
	{
		while (newBuf[i] != ch)
		{
			end++;
		}
		if (newBuf[i] != ch)
		{
			str[numRes] = new char[end - begin + 2];
		}
		for (int k = 0; k < (end - begin + 1); k++)
		{
			str[numRes][k] = newBuf[i];
			i++;
		}
		str[numRes][end - begin + 1] = '\0';
		i++;
		numRes++;
	}
	*result = str;
	delete[] newBuf;
	delete[] str;
}