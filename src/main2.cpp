#pragma once
#include <iostream>
#include "task2.h"

int main()
{
	unsigned int number, n;
	std::cout << "Enter a number: ";
	std::cin >> number;
	std::cout << number << " is a prime? " << std::boolalpha << checkPrime(number) << std::noboolalpha << std::endl;
	std::cout << " The next prime value is " << nextPrime(number) << std::endl;
	std::cout << "Enter a n: ";
	std::cin >> n;
	std::cout << "The n-number in the sequence is " << nPrime(n) << std::endl;
}