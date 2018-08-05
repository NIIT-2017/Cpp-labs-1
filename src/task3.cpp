#include "task3.h"
#include "task2.h"
#include <iostream>

typedef unsigned long long ULL;

unsigned long long sumPrime(unsigned int hbound) {
	ULL sum = 0;
	ULL nPrime = 0;
	for (size_t i = 2; i < hbound; i++) {
		if (checkPrime(i)) {
			sum+=i;
		}
		else
			continue;
	
	}
	std::cout << sum << std::endl;
	return sum;
}