#define _CRT_SECURE_NO_WARNINGS
#include "task5.h"
#include <cstring>
#define SIZE 20


void split(char ***result, int *N, char *buf, char ch) {
	// N - ����������, � ��� - ���-�� ��������(������)
	
	//ch = *(" ");
	
	char *strPtr[SIZE];// ������ ���������� �� �������
	int i = 0;
	int M = 0;//���������� ������
	
	strPtr[i] = strtok(buf, &ch);
	++i;

	while (strPtr[i - 1] != NULL) //��������� ������ �� ������� � ��������� �� ������ ������� ������� � ������ strPtr
	{
		strPtr[i] = strtok(NULL, &ch);
		i++;
	}

	M = i - 1;
	*N = M;
	
	//str ��������� �� ������ �� ��������
	
	char **strarr= new char*[M];
	strarr[0] = new char[M*SIZE];
	
	for (int i = 0; i < M; i++) {
		strarr[i] = strarr[i] + SIZE;
		strarr[i] = strPtr[i];
	}
	
	 
	
	**result = *strarr;//������� ������


	delete[]strarr;
	
}






