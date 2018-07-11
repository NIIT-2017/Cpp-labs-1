//Autor is Dmitriy Parev

#include "task2.h"
#include "task3.h"

//сумма всех чисел до hbound (не включая его)
unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long sum = 0;
	for(unsigned i = 2; i < hbound; i++)
		if (checkPrime(i)) sum += i;
	return sum;
}