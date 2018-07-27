#define _CRT_SECURE_NO_WARNINGS
#include "task5.h"
#include <cstring>
#define SIZE 20


void split(char ***result, int *N, char *buf, char ch) {
	// N - возвращаем, в нем - кол-во подстрок(лексем)
	
	//ch = *(" ");
	
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
	
	//str указатель на массив со сторокой
	
	char **strarr= new char*[M];
	strarr[0] = new char[M*SIZE];
	
	for (int i = 0; i < M; i++) {
		strarr[i] = strarr[i] + SIZE;
		strarr[i] = strPtr[i];
	}
	
	 
	
	**result = *strarr;//вернуть массив


	delete[]strarr;
	
}






