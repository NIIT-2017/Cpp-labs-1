#include <iostream>
#include "task1.h"
#include <cmath>
#include <cstdlib>
using namespace std;

//создает новый массив с тем же именем с новым адресовм и значением вставленным в конец 
void push_back(unsigned int *&arr, int &size, const unsigned int value) {
	unsigned int *new_arr = new unsigned int[size + 1];
	for (int i = 0; i < size; i++)
	{
		new_arr[i] = arr[i];
	}
	new_arr[size] = value;
	delete[] arr;
	arr = new_arr;
	size++;
}
//делает список простых числел до половины значения value (нулевой элемент 1!) встовлять ссылку на список длиной 1!!! и size  0 
void prost(unsigned int *&arr, int &size2, const unsigned int vol) {
	unsigned int vol2 = vol;
	int iter = 0;
	unsigned int *a = new unsigned int[vol2];
	
	/*
	for (unsigned int i = 0; i < vol2; i++)
		a[i] = i;
	
	for (unsigned int p = 2; p < vol2; p++)
	{
		if (a[p] != 0)
		{
			push_back(arr, iter, a[p]);
			size2++;
			for (unsigned int j = p * p; j < vol2; j += p) {
				a[j] = 0;
			}
		}
	}
	*/

	for (int i = 0; i < vol2; ++i)
	{
		a[i] = i + 1;
		
	}
	

	for (int i = 1; i < vol2; ++i)
	{
		if (a[i])
		{
			push_back(arr, iter, a[i]);
			size2++;

			for (int j = a[i] * a[i]; j <= vol2; j += a[i])
			{
				a[j - 1] = 0;
			}
		}
	}

	

	delete[] a;
	//arr[0] = 1;
}
unsigned long findValue(unsigned int min, unsigned int max) {
	int i = 0;
	unsigned int *arr = new unsigned int[0];
	prost(arr, i, max);
	const unsigned int v = max - min+1;
	unsigned long res = 1;
	unsigned int *arr1 = new unsigned int[v];
	for (int ia = 0; ia < v; ia++) {
		arr1[ia] = min + ia;
	}
	bool test = false;

	cout << "arr ";
	for (int _i = 0; _i < i; ++_i)
	{
		cout << arr[_i] << " ";
	}
	cout << "\narr1 ";
	for (int i = 0; i < v; ++i)
	{
		cout << arr1[i] << " ";
	}
	cout << endl;

	for (int ia = 0; ia <= i; ia++) // primes 
	{
		for (int io = 0; io < v; io++) // min -> max
		{
			if (arr1[io] % arr[ia] == 0) {
				arr1[io] /= arr[ia];
				
				test = true;
			}
		}

		if (test) {
			res *= arr[ia];
			cout << arr[ia] << endl;
			test = false;
			//ia = 0;
			ia--;
		}

		cout << "\n" << ia << " : ";
		for (int aa = 0; aa < v; ++aa)
		{
			cout << arr1[aa] << " ";
		}
		cout << "\n";
	}

	
		
	return res;
}