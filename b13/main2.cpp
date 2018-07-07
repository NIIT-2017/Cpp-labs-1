//Autor is Dmitriy Parev

#include <iostream>
#include "task2.h"
using namespace std;

int main()
{
	cout << (checkPrime(25) ? "true" : "false") << endl;
	cout << (checkPrime(23) ? "true" : "false") << endl;
	
	cout << nextPrime(25) << endl;
	cout << nextPrime(17) << endl;

	cout << nPrime(0) << endl;
	cout << nPrime(1) << endl;
	cout << nPrime(2) << endl;
	cout << nPrime(5) << endl;

	cout << nextPrime(4294967295) << endl;
//	cout << nPrime(4294967295) << endl;

	return 0;
}