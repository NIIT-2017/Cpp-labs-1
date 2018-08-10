#include <iostream>
#include "task4.h"
using namespace std;


int main()
{
	char *x = "2018";
	char *y = "109";

	char *result = sum(x, y);

	cout << result << endl;
	return 0;
}