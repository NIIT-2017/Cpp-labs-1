#include<iostream>
#include <cstring>
#include "task5.h"

int main() {
	char arr1;
	char* arr2 = {&arr1};
	char** data = { &arr2 };

	int count = 0;
	int *N=&count;
	 char buf[] = "��� ������ ���� ������� �� �������.";

	 char ch[] = " ";
	
	char *** result=&data;

	split(result, N, buf,  *ch);// ��������� ������ buf �� ��������� � ������
	//	���������� � result, � ����������� �� ������ N ���������� ���������� ��������.
	cout << result<< " " << "N= " << *N << endl;
	return 0;
}