 
 #include <malloc.h>
#include <cstring>
#include <string> 
using namespace std;

char * sum(char *x, char *y) {

	string sum = "";
	int i, j;
	for (i = 0; x[i] != '\0'; ++i);
	 
	int size1 = i + 1;
	for (j = 0; y[j] != '\0'; ++j);
	int size2 = j+1;
	
	if (size1>size2)
	{
		int difference = size1 - size2;
		for (int n = 0; n<difference; n++)
			sum += '0';
		 
		sum += y;
		strcpy(y, sum.c_str());
		 
	}
	if (size1<size2)
	{
		int difference = size2 - size1;
		for (int n = 0; n<difference; n++)
			sum += '0';
		 
		sum += x;
		strcpy(x, sum.c_str());
		 
	}
	if (size1 == size2)
		sum = x;

	int reminder = 0, dividend = 0, localSum = 0;

	for (int n = sum.size() - 1; n >= 0; n--)
	{
		localSum = dividend + (y[n] - '0') + (x[n] - '0');
		reminder = localSum % 10;
		dividend = localSum / 10;
		sum[n] = reminder + '0';
		if (n == 0 && dividend >= 1) {
			sum.insert(sum.begin(), div(localSum, 10).quot + '0');
		}
	}

	char* result = new char[sum.size()];
	strcpy(result, sum.c_str());

	return result;
}
