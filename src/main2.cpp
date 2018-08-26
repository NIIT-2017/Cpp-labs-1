#include <iostream>
#include "task2.h"

using namespace std;

int main()
{
	cout << "1 is prime? " << checkPrime(1) << endl;
	cout << "2 is prime? " << checkPrime(2) << endl;
	cout << "7 is prime? " << checkPrime(7) << endl;
	cout << "15 is prime? " << checkPrime(15) << endl;
	cout << "19 is prime? " << checkPrime(19) << endl;
	cout << "23 is prime? " << checkPrime(23) << endl;
	cout << "32 is prime? " << checkPrime(32) << endl;

	cout << "6 - next prime - " << nextPrime(6) << endl;
	cout << "34 - next prime - " << nextPrime(34) << endl;
	cout << "128 - next prime - " << nextPrime(128) << endl;

	cout << nPrime(2) << endl;
	cout << nPrime(4) << endl;
	cout << nPrime(18) << endl;
	return 0;
}