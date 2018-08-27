 
#include<cmath>


bool checkPrime(unsigned int value) {
	for (int i = 2; i<value; i++)
	{
		if (value%i == 0)
		{
			return false;
		}

		if ((i == value) || (i>sqrt(value)))
		{
			return true;
		}
	}

	return true;
}
 
unsigned long long nPrime(unsigned n) {
	unsigned int count = 0;
	int i = 1;
	 
	while (count<n) {
		i++;
		if (checkPrime(i)) count++;
		 
	}
	return i;
}

unsigned long long nextPrime(unsigned long long value) {
	unsigned long long i = value + 1;
	while (!checkPrime(i)) {
		i++;
	}

	return i;
}