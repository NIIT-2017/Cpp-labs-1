#include<iostream>
#include"task5.h"
using namespace std;


int main()
{
	char *buf = new char[12]{ "123,456,789" };
	int N = 0;
	char **result = nullptr;
	char ch = ',';


	split(&result, &N, buf, ',');

	cout << N << endl;


	if (result != nullptr)
		cout << "result is not nullptr" << endl;


	cout << result[0] << endl;
	cout << result[1] << endl;
	cout << result[2] << endl;

	return 0;
}
