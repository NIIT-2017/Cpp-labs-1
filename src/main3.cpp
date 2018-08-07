#include <iostream>
#include "task3.h"


using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");


	cout << "Сумма простых чисел до 2000000 = " << sumPrime(2000000) << endl;


	return 0;
}