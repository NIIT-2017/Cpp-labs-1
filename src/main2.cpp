#include "task2.h"
using namespace std;
#include <iostream>
int main()
{
	setlocale(LC_ALL, "Russian");
	unsigned int value;
	unsigned int next_value;
	int chose;
	cout << "1 дл€ проверки на простоту числа.\n2 дл€ вывода простого числа по номеру.\n3 дл€ поиска следующего простого числа за вписанным.\n";
	while (cin >> chose && chose < 4 && chose > 0)
	{
		switch (chose)
		{
		case 1:
		{
			cout << "¬ведите число, чтобы узнать, простое оно или нет ";
			while (cin >> value)
			{
			
				int x = checkPrime(value);
				if (x == 0)
					cout << value << " - —оставное число" << endl;
				if (x == 1)
					cout << value << " - ѕростое число" << endl;
				cout << "\n¬ведите нечисловое значение дл€ выхода.\n";
				cout << "\n¬ведите следующее значение ";
				
			}
			cout << checkPrime(value) << std::endl;
		}
		break;
		case 2:
		{
			cout << "¬ведите номер простого числа: ";
			unsigned int number_value;
			while (cin >> number_value)
			{
				unsigned int temp_value = nPrime(number_value);
				cout << temp_value << endl;
				cout << "\n¬ведите нечисловое значение дл€ выхода.\n";
				cout << "\n¬ведите номер простого числа: ";
			}
		}
		break;
		case 3:
		{
			cout << "¬ведите число: ";
			while (cin >> next_value)
			{
				cout << nextPrime(next_value) << endl;
			}
		}
		break;
		}
	
	}
	return 0;
}