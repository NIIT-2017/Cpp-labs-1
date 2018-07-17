#include <locale.h>  
#include <iostream>
#include <string>
#include <cstring>

#include "task4.h"

using namespace std;

int main()
{
	// Для коректного вывода руссукого текста на консоль
	setlocale(LC_ALL, "RUS");
	string term1_str, term2_str;
	char * term1_char, * term2_char;

	while (1)
	{
		//  Сложить два сверхдлинных числа
		cout << "Введите первое число для сложения : " << endl;
		cin >> term1_str;
		cout << "Введите второе число для сложения : " << endl;
		cin >> term2_str;
		char * result = sum((char *)term1_str.c_str(), (char *)term2_str.c_str());
		cout << "Результат сложения : " << result << endl << endl;
		delete result;
	}
	return 0;
}
