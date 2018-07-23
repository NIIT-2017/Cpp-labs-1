#include <iostream>
#include <cstring>
#include <string>
#include "task5.h"
using namespace std;

int main()
{
	char *buf = (char*) "2345678---34567--456--";
	char ***result = new char **;
	int *N = new int;
	char ch = '-';
	split(result, N, buf, ch);
	for (int i = 0; i < *N; i++)
	{
		cout << result[i] << endl;
	}
	for (int i = 0; i < *N; i++)
		delete[]result[i];
	delete[] * result;
	return 0;
}

