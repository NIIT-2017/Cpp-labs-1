#include "task2.h"
using namespace std;
#include <iostream>
int main()
{
	setlocale(LC_ALL, "Russian");
	unsigned int value;
	unsigned int next_value;
	int chose;
	cout << "1 ��� �������� �� �������� �����.\n2 ��� ������ �������� ����� �� ������.\n3 ��� ������ ���������� �������� ����� �� ���������.\n";
	while (cin >> chose && chose < 4 && chose > 0)
	{
		switch (chose)
		{
		case 1:
		{
			cout << "������� �����, ����� ������, ������� ��� ��� ��� ";
			while (cin >> value)
			{
			
				int x = checkPrime(value);
				if (x == 0)
					cout << value << " - ��������� �����" << endl;
				if (x == 1)
					cout << value << " - ������� �����" << endl;
				cout << "\n������� ���������� �������� ��� ������.\n";
				cout << "\n������� ��������� �������� ";
				
			}
			cout << checkPrime(value) << std::endl;
		}
		break;
		case 2:
		{
			cout << "������� ����� �������� �����: ";
			unsigned int number_value;
			while (cin >> number_value)
			{
				unsigned int temp_value = nPrime(number_value);
				cout << temp_value << endl;
				cout << "\n������� ���������� �������� ��� ������.\n";
				cout << "\n������� ����� �������� �����: ";
			}
		}
		break;
		case 3:
		{
			cout << "������� �����: ";
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