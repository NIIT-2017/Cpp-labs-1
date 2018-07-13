// Реализовать функцию разбиения строки на подстроки с использованием символа - разделителя.

#include "task5.h"
#include <iostream>

int main()
{
	using namespace std;

	char ***result = new char **;
	int *N = new int;
	char *buf = "dfdgdgd.dgddgd.ghff";
	char *buf1 = ".......asde.fdfd......fff.d.frr.....";
	char *buf2 = ".fdfs.dsdsd.dsdsd.g.cgfc..d.r.y.s.sasaap";
	char ch = '.';
	split( result, N,buf, ch);

	cout << endl;

	split(result, N, buf1, ch);
	cout << endl;

	split(result, N, buf2, ch);
	cout << endl;

	delete[] result;
	delete N;

	return 0;
}