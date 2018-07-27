#include <iostream>

#include "task4.h"


using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS"); // для распознавания в консоли русских букв

	char *str1 = "99999999999";
	char *str2 = "99";
	char *sumStr = sum(str1, str2);
	cout << sumStr;
	delete[] sumStr;
	return 0;
}