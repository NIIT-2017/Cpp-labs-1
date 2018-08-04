#include <iostream>
#include "task5.h"
using namespace std;

int main()
{
	int N;
	char ch={ ',' };
	char arr[] = { ",,,123,,,4,567,,,55666" };
	char **result;
	split(&result, &N, arr, ch);


	for (int i = 0; i < N; i++)
	{
		delete result[i];	
	}
	return 0;
}