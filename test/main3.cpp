#include "task2.h"
#include "task3.h"
#include <iostream>
using namespace std;
int main()
{
	const unsigned int value = 2000000;
	unsigned long long sum = sumPrime(10);
	cout << sum << endl;
	unsigned long long xxx = sumPrime(value);
	cout << xxx << endl;
	system("pause");
	return 0;
}