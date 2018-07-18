#include "task1.h"
/*
* функция нахождения наибольшего общего делителя
* NOD(a,b)=NOD(b, a%b)
* NOD(0,a)=a
* NOD(a,b)=NOD(b,a)
*/
unsigned long NOD(unsigned long a, long unsigned b)
{
	if (b == 0)
		return a;
	return NOD(b, a%b);
}

unsigned long long findValue(unsigned int min, unsigned int max)
{
	unsigned long result = min;
	min++;
	while (max >= min)
	{
		//Удивительно, но без внешних скобок не работало:
		// на числе 19 было переполнение, т.к сначала умножалось на 20, переполнялось
		//и лишь потом делилось на 20=))
		result = result*(min/NOD(result, min));
		min++;
	}
	return result;
}
