
#include <iostream>
#include "task1.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	unsigned int min_value=1, max_value=10;
	cout << "Введите минимальное значение ";
	//cin >> min_value;
	cout << "Введите максимальное значение ";
//	cin >> max_value;
	unsigned int temp = findValue(min_value, max_value);
	if (temp == 0)
		cout << "\nМинимальное значение не может быть больше максимального и вы не можете вводить нечисловые значения!" << endl;
	else
		cout << temp << endl;


	return 0;
}