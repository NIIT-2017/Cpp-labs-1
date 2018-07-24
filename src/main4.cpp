#include "task4.h"
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	char * v1 = new char[30] {"123456789"};
	char * v2 = new char[30] {"000000001"};
	char * resultt = sum(v1, v2);
	cout << resultt << " resultt"<< endl; 
	cout << strlen(resultt) <<" Длина resultt"<< endl;
	delete[] v1;
	delete[] v2;
	if (resultt != 0)
		delete[] resultt;
	char *v3 = new char[21]{ "99999999999999999999" };
	char *v4 = new char[2]{ "1" };
	char * resultt2 = sum(v3, v4);
	cout << resultt2 <<" resultt2 "<< endl;
	cout << strlen(resultt2) <<" strlen"<< endl;
	delete[] v3;
	delete[] v4;
	if (resultt2 != 0)
		delete[] resultt2;
	return 0;
}