#define _CRT_SECURE_NO_WARNINGS
#include "task5.h"
#include <cstring>
#define SIZE 20
void freeMemory(char** str,int size) {
	for (int x = 0; x <size; x++) {
		delete[] str[x];
	}
	delete[]str;
}

void split(char ***result, int *N, char *buf, char ch) {
	// N - возвращаем, в нем - кол-во подстрок(лексем)
	
	
	char *strPtr[SIZE];// массив указателей на лексемы
	int i = 0;
	int M = 0;//количество лексем
	
	strPtr[i] = strtok(buf, &ch);
	++i;

	while (strPtr[i - 1] != NULL) //Разбиваем строку на лексемы и указатель на каждую лексему заносим в массив strPtr
	{
		strPtr[i] = strtok(NULL, &ch);
		i++;
	}

	M = i - 1;
	*N = M;
	for (int j = 0; j < M; j++) {
		cout << strPtr[j] << endl;
	}
	
	*result = strPtr;
	

	
}






