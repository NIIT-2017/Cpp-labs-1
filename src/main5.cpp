#include <iostream>
#include "task5.h"

int main()
{
    char *buf = (char*) "123,456,789";
    char ***result = new  char** ;
    int *N = new int;
    *N = 0;
    split(result, N, buf, ',');
    for (int i = 0; i < *N; i++)
    {
        std:: cout << *((*result) + i) << std::endl;
    }
    if (*N > 0)
    {
        for (int i = 0; i < *N; i++)
            delete[](*result)[i];
        delete[] * result;
    }
    delete result;
    delete N;
    return 0;
}
