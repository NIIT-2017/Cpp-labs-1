#include "task2.h"
#include <iostream>
#include <cmath>
using namespace std;


bool checkPrime(unsigned int value) {

		for (int i= 2 ; i <= sqrt(value); i++) {
			if (value%i == 0) {
				
				return false;
				break;
			}

		}
		return true;

}
unsigned int nPrime(unsigned int n) {
	int count = 0;
	int prime = 0;
	int p = 0,i =0;
	for ( p = 2; ; p++) {
		for ( i = 2; i*i <= p; i++) {
			if (p%i == 0)
				break;
		}
			if (i*i > p) {
				count++;
				if (count == n) {
					prime = p;
					//cout<<p<<endl;
					break;
				}
			}
		}
	
	return prime;
}
unsigned int nextPrime(unsigned int value) {
	int count = 0;
	int prime = 0;
	int p = value+1, i = 0;
	for (p = value+1; ; p++) {
		for (i = 2; i*i <= p; i++) {
			if (p%i == 0)
				break;
		}
		if (i*i > p) {
			prime = p;
			//cout << p << endl;
			break;
		
		}
	}

	return prime;
}