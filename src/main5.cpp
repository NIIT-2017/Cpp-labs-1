#include "task5.h"
#include <iostream>

int main()
{
	char * str{ "abcd ndej     asd      v232 asd 345    345  asw 3    " };
	int count{0};
	char ** result;
	split(&result, &count, str, ' ');
	for (int i = 0; i < count; i++)
	{
		std::cout << result[i] << std::endl;
	}
}