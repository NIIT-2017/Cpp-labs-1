#include "task4.h"
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	char * v1 = new char[21]{"99999999999999999999"};
	char * v2 = new char[2] {"1"};
	char * resultt = sum(v1, v2);
	
	delete[] v1;
	delete[] v2;
      if (resultt != 0)
    delete[] resultt;
	return 0;
}