
#include "task2.h"
#include "task3.h"

// Функция вычисляет сумму всех простых чисел до hbound(не включая его)
unsigned long long sumPrime(unsigned int hbound)
{
	// Если ввели некоректные данные возвращаем 0
	if (hbound < 2)
		return 0;
	// Первое простое число будет 2
	unsigned long long result = 0;
	unsigned int prime = 2;
	while (prime < hbound)
	{	
		result = result + prime;
		// Ищем следующее простое число
		prime = nextPrime(prime);
	}
	return result;
}