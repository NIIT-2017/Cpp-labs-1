//Autor is Dmitriy Parev

#include <iostream>
#include "task4.h"
using namespace std;

int main()
{
	char *x = (char*) "11111";
	char *y = (char*) "999992000";
	char *r = sum(x, y);
	cout << x << endl;
	cout << y << endl;
	cout << r << endl;
	delete [] r;
	return 0;
}