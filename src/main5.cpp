#include <iostream>
#include "task5.h"
using namespace std;

int main()
{
	char *buf = "1111,0000,123";
	int N = 0;
	char **result = nullptr;
	split(&result, &N, buf, ',');
	return 0;
}