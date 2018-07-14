#pragma once
#include <iostream>
#include "task3.h"

int main()
{
	unsigned int n;
	std::cout << "Enter a n: ";
	std::cin >> n;
	std::cout << "The sum's prime numbers < " << n << " is " << sumPrime(n) << std::endl;
}
