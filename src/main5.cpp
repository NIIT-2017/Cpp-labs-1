#include <iostream>
#include "task5.h"
using namespace std;

int main()
{
	char** aResult;
	int* N = new int(0);
	char* aString = "Hello&World&Hello&World&12345";
	split(&aResult, N, aString, '&');
	cout << "Number of strings: " << *N << endl;

	int aCurrentIndex = 0;
	while (aCurrentIndex < (*N)) {

		char* aCurrentString = aResult[aCurrentIndex];
		cout << aCurrentString << endl;

		aCurrentIndex++;
	}
	return 0;
}
