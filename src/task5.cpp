
#include <cstring>
#include "task5.h"

// Функция разбивает строку на строку по разделителю
// int *N - указатель на количество строк
// char *buf - строка которую нужно разбить
// char ch - символ разделитель
// char ***result - результат

void split(char ***result, int *N, char *buf, char ch)
{
	// Счетчики
	int start_str = 0;
	int count_str = 0;
	int cut_str = 0;

	// Смотрим сколько подстрок нужно вернуть и выкидываем символы разделители из начала строки
	int count_str_max = 0;
	bool ch_in_start_str = false;
	for (int i = 0; i < strlen(buf) + 1; i++)
	{
		// Если разделитель стоит в начале строки
		if (buf[i] == ch && i == 0)
		{
			ch_in_start_str = true;
			start_str = i + 1;
			continue;
		}
		else if (buf[i] == ch && ch_in_start_str == true)
		{
			start_str = i + 1;
			continue;
		}
		else
			ch_in_start_str = false;
		if ((buf[i] == '\0' && buf[i - 1] != ch) || ((i < strlen(buf)) && (buf[i] == ch) && (buf[i + 1] != ch)))
			count_str_max = count_str_max + 1;
	}	

	char ** str_arr = new char*[count_str_max];
	// Перебираем все символы строки и '\0' 
	for (int i = start_str; i < strlen(buf) + 1; i++)
	{
		// Если нашли символ разделитель или конец строки
		// и несколько разделительных символов не идут подряд
		if ((buf[i] == '\0' && buf[i - 1] != ch) || ((i < strlen(buf)) && (buf[i] == ch) && (buf[i + 1] != ch)))
		{
			// Записываем новую строку
			str_arr[count_str] = new char[i - start_str + 1 - cut_str];
			for (int j = 0; j < i - start_str - cut_str; j++)
			{
				str_arr[count_str][j] = buf[start_str + j];
			}
			// Добавляем в конец строки нулевой символ
			str_arr[count_str][i - start_str - cut_str] = '\0';
			count_str = count_str + 1;
			start_str = i + 1;
			cut_str = 0;
		}
		// Если несколько разделительных символов идут подряд или в конце строки
		if ((buf[i] == '\0' && buf[i - 1] == ch) || ((i < strlen(buf)) && (buf[i] == ch) && (buf[i + 1] == ch)))
			cut_str = cut_str + 1;
	}
	// Количестуво найденых подстрок
	*N = count_str_max;
	*result = str_arr;
}