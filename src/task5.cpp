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
	for (int j = 0; j < M; j++) {
		strarr[j] = new char[SIZE];
	}
	//strarr[0] = new char[M*SIZE];
	for (int n = 0; n < M;n++) {
		//for (int j = 0; j < SIZE; j++) {
			strarr[n] = strPtr[n];

		//}
	}
	
	
	M = *N ;
	//*result = strPtr;
	//result = &strarr;//������� ������
	for (int m = 0; m < M; m++) {
		result[m] = &strarr[m];
		cout<<*result[m] << endl;
	}

	
	freeMemory(strarr, M);

	
}






