#include <iostream>
#include "task4.h"

int main()
{
    //char *x = (char*)"2525252567";
    //char *y = (char*)"12345678";
    //char *x = (char*)"123456789";
    //char *y = (char*)"000000001";
    char *x = (char*)"99999999999999999999";
    char *y = (char*)"1";
    int i = 0;
    while (x[i] != '\0') i++;
    int j = 0;
    while (y[j] != '\0') j++;
    int leight;
    if (i > j) leight = i + 1;
    else leight = j + 1;
    char *z = sum(x, y);
    std::cout << x << " + " << y << " = "<<  std::endl;
    i=0;
    while (z[i] != '\0'){
       std::cout << z[i];
       i++;
    }
    delete[] z;
    return 0;
}
