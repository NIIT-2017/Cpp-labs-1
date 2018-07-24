#include <math.h>
           /*нахождение ближайшего следующего простого числа к value.*/
unsigned int nextPrime(unsigned int value)
{
	int x = 99999;
	int prime[100000]{};
	int arr = 0;
	int i = 3;
	prime[0] = 2;
	for (arr, i; x; i += 2) {
		for (int j = 3; j*j <= i; ++j)
			if (i%j == 0)
				goto next;
		--x;
		if (i != 0) {
			arr++;
			prime[arr] = i;
		}
	next:;
	}
	for (int i = 0; i < 100000; i++)
	{
		if (value > 1) 
		{
			if (prime[i]<value && prime[i + 1]>value)
				return prime[i + 1];
			if (prime[i] == value)
				return prime[i + 1];
		}
		if (value <2 )
		return 2;
	}

}
/*нахождение n-ого простого числа (в р€ду).*/
unsigned int nPrime(unsigned n)
{
	int x = 99999;
	int prime[100000]{};
	int arr = 0;
	int i = 3;
	prime[0] = 2;
	for (arr, i; x; i += 2) {
		for (int j = 3; j*j <= i; ++j)
			if (i%j == 0)
				goto next;
		--x;
		if (i != 0) {
			arr++;
			prime[arr] = i;
		}
	next:;
	}
	for (int i = 0; i < 100000; i++)
		//cout << prime[i] << " ";
	return prime[n - 1];
}
/*проверка числа на простоту.*/
bool checkPrime(unsigned int value)
{
	
	for (int i = 2; i <= sqrt(value); i++)
	{
		if (value % i == 0)
		{
		//	cout << value << " - —оставное число" << endl;
			return 0;
		}
	}
	//cout << value << " - ѕростое число" << endl;
	return 1;
}
