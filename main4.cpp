#include <iostream>
#include "task4.h"

int main()
{
    char *x = (char*)"2525252567";
    char *y = (char*)"12345678";
    int i = 0;
    while (x[i] != '\0') i++;
    int j = 0;
    while (y[j] != '\0') j++;
    int leight;
    if (i > j) leight = i + 1;
    else leight = j + 1;
    char *z = sum(x, y);
    std::cout << x << " + " << y << " = ";
    for (int i = 0; i < leight + 1; i++)
    {
         std::cout << z[i];
    }
    delete[] z;
    return 0;
}
