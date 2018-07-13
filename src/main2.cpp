/*
Написать прототип библиотеки для работы с простыми (prime) числами.
*/

#include <iostream>
#include "task2.h"
using namespace std;

int main()
{
	/*
	unsigned int number;
	cout << "Enter an integer number, please: ";
	cin >> number;
	if (checkPrime(number))
	cout << "This number is prime. \n" << endl;
	else
	cout << "This number is NOT prime. \n" << endl;
	*/

	if (checkPrime(7))
		cout << "Number 7 is prime." << endl;
	else
		cout << "Number 7 is NOT prime." << endl;

	if (checkPrime(256))
		cout << "Number 256 is prime." << endl;
	else
		cout << "Number 256 is NOT prime." << endl;
	cout << endl;

	cout << "The 1st prime number is " << nPrime(1) << endl;
	cout << "The 2nd prime number is " << nPrime(2) << endl;
	cout << "The 3rd prime number is " << nPrime(3) << endl;
	cout << "The 5th prime number is " << nPrime(5) << endl;
	cout << "The 7th prime number is " << nPrime(7) << endl;
	cout << "The 8th prime number is " << nPrime(8) << endl;
	cout << endl;


	cout << "Next prime number to 7 is " << nextPrime(7) << endl;
	cout << "Next prime number to 73 is " << nextPrime(73) << endl;
	cout << endl;
}