//Autor is Dmitriy Parev

#include "task1.h"

//Подбор числа на которое нужно умножить результат, чтобы
//результат соответствовал условию задачи для диапазона [min...i]
unsigned long res(unsigned long ress, unsigned int c)
{
	unsigned int i = 2;
	unsigned int k = 1;
	while (c > 1)
	{
		if (c % i == 0)
		{
			if (ress % i == 0) ress /= i;
			else k *= i;
			c /= i;
		}
		else i++;
	}
	return k;
}

//Написать программу, определяющую, какое самое маленькое положительное целое 
//число делится на все числа из диапазона [1...20] без остатка.
unsigned long findValue(unsigned int min, unsigned max)
{
	if (min > max) return 0;

	unsigned long result = min;
	for (unsigned int i = min; i <= max; i++)
	{
		if (result % i != 0) result *= res(result, i);
	}
	return result;
}