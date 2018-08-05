#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS
#include <cstdlib>
#include<iostream>
typedef unsigned long UL;
#define SIZE 20

char * sum(char *x, char *y) {
	UL numX = 0;
	UL numY = 0;
	UL sumAll = 0;
	char *all;
	
	numX = strtol(x, NULL, 10);
	numY = strtol(y, NULL, 10);
	sumAll = numX + numY;
	
	char* arr = new char[SIZE];
	
	char *newStr = ltoa(sumAll, arr, 10);
	
	
	return arr;
}