#include <iostream>
#include "task2.h"

using namespace std;

int main()
{
	cout << checkPrime(10) << endl;
	cout << checkPrime(2) << endl;
	cout << checkPrime(17) << endl;
	cout << checkPrime(1) << endl;
	cout << checkPrime(0) << endl;
	for (unsigned i = 1; i <= 10; i++)
	{
		cout << nPrime(i) << " ";
	}
	cout << endl;
	for (unsigned i = 1; i <= 10; i++)
	{
		cout << nextPrime(nPrime(i)) << " ";
	}
	cout << endl;
	return 0;
}