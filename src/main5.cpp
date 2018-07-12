//Autor is Dmitriy Parev

#include <iostream>
#include "task5.h"
using namespace std;

int main()
{
	char *buf = (char*) ".123.456.89.1.";
	//char ***result = nullptr;
	char ***result = new char **;
	int *N = new int;
	split(result, N, buf, '.');
	
	for(int i = 0; i < *N; i++)
	{
		cout << *((*result) + i) << endl;
	}
	
	if (result == nullptr) exit(1);

	if (*N > 0)
	{
		for(int i = 0; i < *N; i++)
			delete [] (*result)[i];
		delete [] *result;
	}
	delete result;
	delete N;
	return 0;
}