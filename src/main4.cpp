#include<iostream>
#include"task4.h"
using namespace std;

int main()
{

	char num1[] = "93463363465";
	char num2[] = "39856091435";
	char num3[] = "0";
	char num4[] = "43";

	cout << num1 << " + " << num2 << " = "<< sum(num1, num2) << endl;
	cout << num1 << " + " << num3 << " = " << sum(num1, num3) << endl;
	cout << num1 << " + " << num4 << " = " << sum(num1, num4) << endl;
	return 0;
}