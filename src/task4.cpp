#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
typedef unsigned long ULL;
#define SIZE 20

char * sum(char *x, char *y) {
	ULL numX = 0;
	ULL numY = 0;
	ULL sumAll = 0;
	char *all;
	
	numX = strtol(x, NULL, 10);
	numY = strtol(y, NULL, 10);
	sumAll = numX + numY;
	
	char* arr = new char[SIZE];
	
	char *newStr = _ultoa(sumAll, arr, 10);
	
	
	return arr;
}