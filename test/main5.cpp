#include "task5.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");



	int * N = new int;

	string str = "0.1.2.3.4.";
//	cin >> str; //����� ������� ������ ����
	int x = str.length();
//	cout << x << endl;//����� ������� ������ ����
	char * buf = new char[x];
	for (int i = 0; i < x+1; i++)
		buf[i] = str[i];
	cout << endl;
	char ***result = new char**[100];
	char ch = '.';
//	cin >> ch;  //����� ������� ������ ����
	split(result, N, buf, ch);
	for (int i = 0; i < *N - 1; i++)
		delete[] (*result)[i];
	delete[] result;
	delete N;
	system("pause");
	return 0;
}