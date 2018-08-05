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
	while (*x) {
		numX = numX * 10 + (*x++ - '0');
	}
	while (*y) {
		numY = numY * 10 + (*y++ - '0');
	}
	
//	numX = strtol(x, NULL, 10);
//	numY = strtol(y, NULL, 10);
	sumAll = numX + numY;
	
	char* arr = new char[SIZE];
	
	int i = 0;
	while (sumAll) {
		arr[i] = (sumAll % 10) + '0';
		sumAll = sumAll / 10;
		i++;
	}
	int len = 0;
	len = i;
	char *newStr=new char[len];
	newStr[len]='\0';
	for (int j = 0; j < len; j++) {
		newStr[j] = arr[len-1-j];
	}

		return newStr;
}