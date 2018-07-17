
#include <iostream>
using namespace std;

#include "task1.h"

// Функция находления наибольшего общего делителя НОД для двух чисел
// Находим НОД по иттерационному алгоритму Евклида
unsigned long nod(unsigned long a, unsigned long b)
{
	unsigned long tmp;
	while (a != b)
	{
		if (a > b)
		{
			tmp = a;
			a = b;
			b = tmp;
		}
		b = b - a;
	}
	return a;
}

// Функция нахождения наименьшего общего кратного НОК для двух чисел
unsigned long nok(unsigned long a, unsigned long b)
{
	unsigned long  result;
	result = (unsigned long long int)a * (unsigned long long int)b / nod(a, b);
	return  result;
}

// Функия нахождения наименьшего общего кратного НОК для всех натуральных чисел лежащими в интервале min - max
unsigned long findValue(unsigned int min, unsigned int max)
{
	// Меняем min и max местами если они перепутаны 
	if (min > max)
	{
		unsigned int tmp = min;
		min = max;
		max = tmp;
	}
	// Находим НОК
	unsigned long result = min;
	for (unsigned long i = min + 1; i <= max; i++)
	{
		result = nok(result,i);
	}
	return result;
}

// Функция для проверки корректности ввода
unsigned int getValue()
{
	while (true) // Цикл продолжается до тех пор, пока пользователь не введет корректное значение
	{
		unsigned int a;
		cin >> a;
		// Проверка на предыдущее извлечение
		// если предыдущее извлечение оказалось провальным
		if (cin.fail())
		{
			cin.clear(); // возвращаем cin в 'обычный' режим работы
			cin.ignore(32767, '\n'); // и удаляем значения предыдущего ввода из входного буфера
			cout << endl << "Вы ввели некорректное значение, попробуйте снова" << endl;
		}
		else
		{
			std::cin.ignore(32767, '\n'); // удаляем лишние значения
			return a;
		}
	}
}