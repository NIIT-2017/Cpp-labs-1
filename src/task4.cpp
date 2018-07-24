#include <iostream>
#include <string>
#include <stdio.h>
#define _CTR_SECURE_NO_WARNINGS
void transfer(int length, int *intarr, char *x);
void sum(int *resarr, int *arr1, int *arr2, int lengthResult, int lengthX, int lengthY);
int digitcalc(char *arr);
void reTransfer(int *result, int lengthResult, char *charResult);
using namespace std;
char * sum(char *x, char *y)
{
	setlocale(LC_ALL, "Russia");
	unsigned int lengthX = digitcalc(x);
	unsigned int lengthY = digitcalc(y);
	unsigned int lengthResult;
	if (lengthX >= lengthY)
		lengthResult = lengthX + 1;
	if (lengthX <= lengthY)
		lengthResult = lengthY + 1;
	int temp = lengthResult;
	int* result = new int[lengthResult] {};
	int* intarr1 = new int[lengthResult] {};
	int* intarr2 = new int[lengthResult] {};
	transfer(lengthX, intarr1, x);
	transfer(lengthY, intarr2, y);
	sum(result, intarr1, intarr2, lengthResult, lengthX, lengthY);
	cout << endl;
	if (result[0] == 0)
		lengthResult--;
	char* charResult = new char[lengthResult+1] {0};
	reTransfer(result, lengthResult, charResult);
	charResult[lengthResult] = '\0';
	delete[] intarr1;
	delete[] intarr2;
	delete[] result;
	return charResult;
}

void reTransfer(int *result, int lengthResult, char *charResult)
{
	if (result[0] == 0)
		for (int i = lengthResult; i > 0; i--)
			charResult[i - 1] = static_cast<char>(result[i]) + 48;
	if (result[0] != 0)
		for (int i = 0; i < lengthResult; i++)
			charResult[i] = static_cast<char>(result[i]) + 48;
}
void sum(int *resarr, int *arr1, int *arr2, int lengthResult, int lengthX, int lengthY)
{
	resarr[0] = 0;
	int* tempArr = new int[lengthResult]; 
	for (int i = 0; i < lengthResult; i++)
		tempArr[i] = 0;
	for (int i = 0; i < *resarr; i++)
		resarr[i] = 0;
	for (int i = lengthResult - 1, j = lengthX - 1, k = lengthY - 1, reLength = 0; lengthResult > reLength; i--, j--, k--, reLength++)
	{
		if (k < 0 && j >-1)
		{
			resarr[i] = arr1[j] + 0 + tempArr[i];
			if (resarr[i] > 9)
			{
				resarr[i] %= 10;
				tempArr[i - 1] += 1;
			}
		}
		if (k > -1 && j > -1)
		{
			resarr[i] = arr1[j] + arr2[k] + tempArr[i];
			if (resarr[i] > 9)
			{
				resarr[i] %= 10;
				tempArr[i - 1] += 1;
			}

		}
		if (j < 0 && k >-1)
		{
			resarr[i] = 0 + arr2[k] + tempArr[i];
			if (resarr[i] > 9)
			{
				resarr[i] %= 10;
				tempArr[i - 1] += 1;
			}
		}
		if (j < 0 && k < 0)
			resarr[i] = 0 + 0 + tempArr[i];
	}
}
void transfer(int length, int *intarr, char *x)
{
	for (int i = length - 1; i > -1; i--)
		intarr[i] = x[i] - 48;
}
int digitcalc(char *arr)
{
	unsigned int length = strlen(arr);
	int count1 = 0;
	for (int i = 0; i < length; i++)
	{
		if (!isdigit(arr[i]))
			break;
		if (isdigit(arr[i]))
			count1++;
	}
	return count1;
}