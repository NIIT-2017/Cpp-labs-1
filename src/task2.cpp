#include <cmath>

// Проверка числа на простоту
bool checkPrime(unsigned int value)
{
	for (int i = 2; i <= sqrt(value); i++)
	{
		if (value % i == 0)
			return false;
	}
	return true;
}



// Нахождение n-ого простого числа (в ряду)
unsigned long long nPrime(unsigned n)
{
	int counter = 0;
	unsigned int i = 2;
	while (counter != n)
	{
		if (checkPrime(i))
		{
			counter++;
			i++;
		}
		else
			i++;
			
	}
	return --i;
}


// Нахождение ближайшего следующего простого числа к value.
unsigned long long nextPrime(unsigned long long int value)
{
	while (!checkPrime(++value));
	return value;
}