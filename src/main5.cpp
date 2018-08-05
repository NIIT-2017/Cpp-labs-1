#include<iostream>
#include <cstring>
#include "task5.h"

int main() {
	char arr1;
	char* arr2 = {&arr1};
	char** data = { &arr2 };

	//int count = 0;
	int N = 0;
	 char buf[] = "This string must be broke by lexems.";

	 char ch[] = " ";
	
	char ** result=nullptr;
	//char *** result = &data;

	split(&result, &N, buf,  *ch);// разбиение строки buf на подстроки и запись
	//	результата в result, с присвоением по адресу N количества полученных подстрок.
	
	return 0;
}