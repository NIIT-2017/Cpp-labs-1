
#include <locale.h>  
#include <iostream>
#include <string>
#include <cstring>

#include "task5.h"

using namespace std;

int main()
{
	// Для коректного вывода руссукого текста на консоль
	setlocale(LC_ALL, "RUS");
	string term_str;
	char * term_char;
	char term_ch;
	// Массив подстрок
	char **result;
	int N;

	while (1)
	{
		setlocale(LC_ALL, "RUS");
		cout << "Введите строку : " << endl;
		setlocale(LC_ALL, "C");

		cin >> term_str;

		setlocale(LC_ALL, "RUS");
		cout << "Введите символ разделитель : " << endl;
		setlocale(LC_ALL, "C");

		cin >> term_ch;

		term_char = (char *)term_str.c_str();

		split(&result, &N, term_char, term_ch);

		setlocale(LC_ALL, "RUS");
		cout << "Результат: " << endl;
		setlocale(LC_ALL, "C");
		for (int i = 0; i < N; i++)
		{
			setlocale(LC_ALL, "RUS");
			cout << "Строка №" << (i + 1) << "  :  ";
			setlocale(LC_ALL, "C");
			cout << result[i] << endl;
		}

		// Освобождаем память
		for (int i = 0; i < N; i++)
		{
			delete result[i];
		}
		//delete result;
	}

	return 0;
}