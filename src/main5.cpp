#include<iostream>
#include <cstring>
#include "task5.h"

int main() {
	
	int N = 0;
	 char buf[] = "This string must be broke by lexems.";

	 char ch = ' ';
	
	char ** result=nullptr;
	

	split(&result, &N, buf, ch);// разбиение строки buf на подстроки и запись
	//	результата в result, с присвоением по адресу N количества полученных подстрок.
	for (int i = 0; i < N; i++) {
		cout << result[i] << endl;
	}

	for (int i = 0; i < N; i++) {
		delete[] result[i];
	}
		delete[] *result;
	
	
	return 0;
}