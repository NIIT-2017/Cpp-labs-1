#define _CRT_SECURE_NO_WARNINGS

#include<string.h>
#include<iostream>
#include "task4.h"

#define MAX_LEN 30
using namespace std;

char* sum(char* x, char* y) {
	char a[MAX_LEN];
	char b[MAX_LEN];
	char c[MAX_LEN];
	

	char *res = new char[MAX_LEN];
	memset(a, 0, MAX_LEN);
	memset(b, 0, MAX_LEN);
	memset(c, 0, MAX_LEN);

	res[MAX_LEN] = '\0';
	memset(res, 0, MAX_LEN);
	convertBigNumber(a, x);
	convertBigNumber(b, y);
	addBigNumbers(c, a, b);
	outputBigNumber(c, res);

	return res;
}
void convertBigNumber(char *convertNumber, char* number)
{
	
	char i, k;

	k = strlen(number) - 1;
	for (i = k; i >= 0; i--) {
		convertNumber[k - i] = number[i] - '0';
	}
}

void outputBigNumber(char *number, char*& result)
{
	char i, j, k;
	result[strlen(number) - 1] = '\0';

	for (k = MAX_LEN - 1; number[k] == 0 && k > 0; k--);

	for (i = k, j=0; i >= 0,j<strlen(number);j++, i--) {
	
		result[j] ='0'+ number[i];
	
	}
	
}

void addBigNumbers(char* sum, const char *a, const char* b)
{
	char inMind = 0;
	char w = 0;
	char t;
	char i, j, k;

	for (t = 0; t < MAX_LEN; t++)
	{
		w = a[t] + b[t] + inMind;
		inMind = w / 10;
		sum[t] = w % 10;
	}
}