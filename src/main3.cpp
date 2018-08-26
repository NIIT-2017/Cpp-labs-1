#include <iostream>
#include "task3.h"
#include "task2.h"

using namespace std;

int main()
{
	cout << "bound is 10: " << sumPrime(10) << endl;
	cout << "bound is 17: " << sumPrime(500) << endl;
	cout << "bound is 42: " << sumPrime(42) << endl;
	return 0;
}
