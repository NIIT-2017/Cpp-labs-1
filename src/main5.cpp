#include <iostream>
#include "task5.h"
using namespace std;

int main()
{
	char **result=nullptr;
	int N = 0; 
	char buf[150];
	cin >> buf;
	split(&result, &N, buf, ',');
	for (int i = 0; i < N;  i++)
	{
		cout << result[i] << endl;
	}
	

	return 0;
}
//*/