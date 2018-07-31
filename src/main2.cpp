#include <iostream>
#include "task2.h"
using namespace std;

int main()
{
	int x;
	cin >> x;
	if (checkPrime(x) == true)
		cout << "ne Prostoe chislo"<< endl;
	else cout << "Prostoe chislo"<<endl;
	cout << x << " prostoe chislo " << nPrime(x) << endl;
	cout << "Sleduushee prostoe chislo za " << x << " - " << nextPrime(x)<<endl;
	
	return 0;
}