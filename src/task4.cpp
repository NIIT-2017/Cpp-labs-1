#include <iostream>
#include <string>
#include <stdio.h>
#define _CTR_SECURE_NO_WARNINGS
void print(int *arr, int size);
void transfer(int length, int *intarr, char *x);
void sum(int *resarr, int *arr1, int *arr2, int lengthResult, int lengthX, int lengthY);
int digitcalc(char *arr);
void reTransfer(int *result,int lengthResult, char *charResult1, char *charResult0);
using namespace std;
char * sum(char *x, char *y)
{
	setlocale(LC_ALL, "Russia");
	unsigned int lengthX = digitcalc(x); //подсчёт кол-ва чисел в массивах
	unsigned int lengthY = digitcalc(y);
	unsigned int lengthResult; //Длина 3-го массива и выбор его длинны.
	if (lengthX >= lengthY)
		lengthResult = lengthX+1;
	if (lengthX <= lengthY)
		lengthResult = lengthY+1;
	int temp = lengthResult;
	int* result = new int[lengthResult] {}; //Возвращаемый массив
	int* intarr1 = new int[lengthResult]{};  //Создание нового дин. массивов для переноса в него значений.
	int* intarr2 = new int[lengthResult]{};
	transfer(lengthX, intarr1, x);//Преобразование из массива char в массив int.
	transfer(lengthY, intarr2, y);
	print(intarr1, lengthX);	//Вывод на экран
	print(intarr2, lengthY);
	sum(result, intarr1, intarr2, lengthResult, lengthX, lengthY);
	cout << endl; 
	char* charResult1 = new char[lengthResult] {};
	char* charResult0 = new char[lengthResult - 1]{};
	print(result, lengthResult);//перевод из int arr в char arr 
	reTransfer(result, lengthResult, charResult1, charResult0);
	print(result, lengthResult);
	delete[] intarr1;
	delete[] intarr2;
	if (result[0] == 0)
	{
		delete[] result;
		return charResult0;
	}
	else if (result[0] != 0)
	{
		delete[] result;
		return charResult1;
	}
}

void reTransfer(int *result, int lengthResult, char *charResult1, char *charResult0)
{
	if (result[0] == 0)
	{
		for (int i = lengthResult; i > 0; i--)
		{
			//sprintf(&charResult0[i], "%d", result[i]);
			charResult0[i-1] = static_cast<char>(result[i]) + 48;
		
		}
		for (int i = 0; i < lengthResult; i++)
			cout << i;
		cout << endl;
		for(int i = 0 ; i < lengthResult-1;i++)
			cout << charResult0[i];
		cout<<endl;
	}
	if (result[0] != 0)
	{
		for (int i = 0; i < lengthResult; i++)
		{
			charResult0[i] = static_cast<char>(result[i]) + 48;
		}
		for (int i = 0; i < lengthResult; i++)
			cout << charResult0[i];
		cout << endl;
	}
}


void sum(int *resarr, int *arr1, int *arr2, int lengthResult, int lengthX, int lengthY)
{
	resarr[0] = 0;
	int* tempArr = new int[lengthResult]; //Создание 3 массива для сохранения в нём допов при сложении.
	for (int i = 0; i < lengthResult; i++)
		tempArr[i] = 0;
	for (int i = 0; i < *resarr; i++)
		resarr[i] = 0;
	for (int i = lengthResult - 1, j = lengthX-1, k = lengthY-1, reLength = 0; lengthResult > reLength; i--, j--, k--, reLength++)
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
		if ( j < 0 && k < 0)
			resarr[i] = 0 + 0 + tempArr[i];
		cout << " i = " << i << " result - " << resarr[i] << endl;
	}
}

void transfer(int length, int *intarr, char *x)
{
	for (int i = length-1; i > -1; i--)
	{
		intarr[i] = x[i] - 48;
	}
}

void print(int *arr, int size)
{
	for (int i = 0; i < size; i++) 
		cout << arr[i] ;
	cout << endl;
	/*for (int i = 0; i < size; i++)
		cout << i;*/
	cout << endl;
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

