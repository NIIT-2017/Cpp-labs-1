
#include <iostream>
#include "task1.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	unsigned int min_value=1, max_value=10;
	cout << "������� ����������� �������� ";
	//cin >> min_value;
	cout << "������� ������������ �������� ";
//	cin >> max_value;
	unsigned int temp = findValue(min_value, max_value);
	if (temp == 0)
		cout << "\n����������� �������� �� ����� ���� ������ ������������� � �� �� ������ ������� ���������� ��������!" << endl;
	else
		cout << temp << endl;


	return 0;
}