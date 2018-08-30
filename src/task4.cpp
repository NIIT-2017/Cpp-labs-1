#define _CRT_SECURE_NO_WARNINGS
#include<cstring>
#include<iostream>
#include "task4.h"

#define MAX_LEN 30
using namespace std;

char* sum(char *x, char *y) {
	int len = (strlen(x) > strlen(y)) ? strlen(x) : strlen(y);
	char *a = new char[strlen(x) + 1];
	char *b = new char[strlen(y) + 1];
	char *res = new char[len+2];
	memset(res, 0, len+2);
	convertBigNumber(a, x);
	convertBigNumber(b, y);
	if (strlen(x) >= strlen(y)) {
		strcpy(res, a);
		addBigNumbers(res, b);
	}
	else if (strlen(x) < strlen(y)) {
		strcpy(res, b);
		addBigNumbers(res, a);
	}
	for (int k = 0, i = strlen(res) - 1; k < i; k++, i--) {
		char temp = res[k];
		res[k] = res[i];
		res[i] = temp;
	}
	if (res[0] == '0') {
		for (int j = 0; j < strlen(res); j++) {
			res[j] = res[j + 1];
		}
	}
	delete[]a;
	delete[]b;


	return res;
}
void convertBigNumber(char *convertNumber, char* number)
{
	strcpy(convertNumber, number);
	for (int k = 0, i = strlen(convertNumber) - 1; k < i; k++, i--) {
		char temp = convertNumber[k];
		convertNumber[k] = convertNumber[i];
		convertNumber[i] = temp;
	}
	//char i, k;

	//k = strlen(number) - 1;
	//for (i = k; i >= 0; i--) {
	//	convertNumber[k - i] = (int)(number[i]);
	//}
}

//void outputBigNumber(char *&number, char*& result)
//{
//	char i, j, k;
//	
//	result[strlen(number) - 1] = '\0';
//
//	for (k = MAX_LEN - 1; number[k] == 0 && k > 0; k--);
//
//	for (i = k, j=0; i >= 0,j<strlen(number);j++, i--) {
//	
//		result[j] ='0'+ number[i];
//	
//	}
//	
//}

void addBigNumbers(char *sum, char* num)
{
	
	int inMind = 0;
	char w;
	int t=0;
	

	//while (num[t])
	for(t=0;t<strlen(num);t++)
	{
		w = (sum[t] - '0') + (num[t] - '0');
		sum[t] = w + inMind;
		if (w >= 10) {
			sum[t] %= 10;
			inMind = 1;
		}
		else {
			inMind = 0;
		}
		sum[t] =sum[t]+ '0';
	
	}

	for(;t<strlen(sum);t++)
	{
		sum[t] -= '0';
		sum[t] += inMind;
		if (sum[t] >= 10) {
			sum[t] %= 10;
			inMind = 1;
		}
		else {
			inMind = 0;
		}
		sum[t] += '0';
		//t++;

	
	}
	sum[t] += '0' + inMind;
}