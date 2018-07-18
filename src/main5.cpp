#include <iostream>
#include "task5.h"

using namespace std;

int main()
{
	char x[10] = "123456789";
	char** split_strings;
	int N;
	split(&split_strings, &N, x, '5');
	for (int i = 0; i < N; i++)
		cout << split_strings[i] << endl;
	return 0;
}