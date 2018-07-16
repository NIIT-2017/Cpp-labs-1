#include "task2.h"

unsigned long long sumPrime(unsigned int hbound){ // сумма всех простых чисел меньше введенного числа
	if (hbound < 2){
		return 0;
	}
	unsigned long long sum_prime(0);
	for (int i = 2; i < hbound; i++){
		if (checkPrime(i) == true){
			sum_prime += i;
		}
	}
	return sum_prime;
}