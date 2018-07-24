#include "task5.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");



	int * N = new int;

	string str = "123,456,789";
	int x = str.length();
	char * buf = new char[x];
	for (int i = 0; i < x+1; i++)
		buf[i] = str[i];
	cout << endl;
	char ***result = new char**[100];
	char ch = ',';
	split(result, N, buf, ch);
	cout << result[0] << endl;
	cout << result[1] << endl;
	cout << result[2] << endl;
	for (int i = 0; i < *N ; i++)
		delete[] (*result)[i];
	delete[] result;
	delete N;
	return 0;
}