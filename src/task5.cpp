#include "task5.h"
#include <iostream>
/*
N - количество строк,
buf входная строка
ch - символ разделитель
*/
void split(char ***result, int *N, char *buf, char ch)
{
	char *ptr = buf;
	int len = 0;
	unsigned rows = 0;
	//посчитаем строчки (можно конечно каждый раз менять размер массива указателей, но так проще)
	while (*ptr != '\0') 
	{
		while (*ptr == ch)	//прокручиваем символы разделители если они вначале
			ptr++;
		if (*ptr != '\0')	//считаем строчки
			rows++;
		while ((*ptr != ch) && (*ptr != '\0'))	//прогоняем символы
			ptr++;
	}
	if (rows == 0)
	{
		*N = 0;
		return;
	}
	//создаем массив указателей нужной длины
	char **strarr = new char *[rows];
	*N = rows;
	ptr = buf;
	rows = 0;
	while (*ptr != '\0')
	{
		while (*ptr == ch)	//ищем первый символ
			ptr++;
		len = 0;
		while ((*ptr != ch) && (*ptr != '\0'))	//прогоняем символы
		{
			ptr++;
			len++;
		}
		strarr[rows] = new char[len+1];
		memcpy(strarr[rows], (ptr - len), len);
		strarr[rows][len] = '\0';
		rows++;
	}
	*result = strarr;
}