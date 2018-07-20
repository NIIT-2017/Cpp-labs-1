#include <locale.h>  
#include <iostream>
#include <string>
#include <cstring>

#include "task4.h"

using namespace std;

int main()
{
	// ƒл¤ коректного вывода руссукого текста на консоль
	setlocale(LC_ALL, "RUS");
	string term1_str, term2_str;
	char * term1_char, * term2_char;

	while (1)
	{
		//  —ложить два сверхдлинных числа
		cout << "¬ведите первое число дл¤ сложени¤ : " << endl;
		cin >> term1_str;
		cout << "¬ведите второе число дл¤ сложени¤ : " << endl;
		cin >> term2_str;
		char * result = sum((char *)term1_str.c_str(), (char *)term2_str.c_str());
		cout << "–езультат сложени¤ : " << result << endl << endl;
		delete result;
	}
	return 0;
}
