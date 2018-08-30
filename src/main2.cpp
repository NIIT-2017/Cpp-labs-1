#include<iostream>
using namespace std;
#include "task2.h"

int main() {
	
	cout << checkPrime(35) << endl;//  проверка числа на простоту.
	cout<<nPrime(7)<<endl;// нахождение n - ого простого числа(в ряду).
	cout<<nextPrime(21)<<endl;// нахождение ближайшего следующего простого числа к value.
	
	
	return 0;
}
