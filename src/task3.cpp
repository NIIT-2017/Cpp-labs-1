#include "task3.h"
#include "task2.h"


using namespace std;

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long int primeNumber = 2;	// 2 Первое простое число (переменная для хранение простых чисел)
	unsigned long long int sum = 0;         // перменная для хранения суммы прсотых чисел
	                                       
	while (primeNumber < hbound)
	{
		sum = sum + primeNumber;
		primeNumber = nextPrime(primeNumber);
	}

	return sum;

}