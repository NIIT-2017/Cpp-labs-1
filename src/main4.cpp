#include<iostream>
#include "task4.h"

int main()
{
	char *x = (char*)"123456789";
	char *y = (char*)"1";

	char *result = sum(x, y);
	std::cout<<result<<std::endl;
	
	return 0;
}


