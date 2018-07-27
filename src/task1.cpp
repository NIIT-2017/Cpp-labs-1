#include <iostream>
using namespace std;

unsigned long findValue(unsigned int min, unsigned int max)
{
	if (max < min || min < 0)
	{
		cout << "Данные введены некорректно" << endl;
		return 0;
	}



	unsigned int value = max + 1; // Первоначальное значение для поиска наименьшего числа
	unsigned int i = min;		  // переменная которая будет принимать диапозон чисел от min до max



	while (i <= max)
	{
		if (value % i)
		{
			value++;
			i = min;
		}
		else
		{
			i++;
		}
	}
	return value;
}






	