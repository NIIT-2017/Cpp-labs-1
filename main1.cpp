#include"task1.h"
#include <iostream>

int main()
{
	unsigned int min{}, max{};
	std::cin >> min >> max;
	std::cout << findValue(min, max) << std::endl;
}