#include<iostream>
#include <cstring>
#include "task5.h"

int main() {
	
	int N = 0;
	 char buf[] = "This string must be broke by lexems.";

	 char ch = ' ';
	
	char ** result=nullptr;
	

	split(&result, &N, buf, ch);// ��������� ������ buf �� ��������� � ������
	//	���������� � result, � ����������� �� ������ N ���������� ���������� ��������.
	
	return 0;
}