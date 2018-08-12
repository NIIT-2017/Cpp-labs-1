#include <iostream>
#include "task4.h"
using namespace std;


int main()
{
	char *x = "1025";
	char *y = "573";

	char *result = sum(x, y);

	cout << result << endl;
	return 0;
}