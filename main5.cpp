#include <iostream>
#include "task5.h"

int main()
{
    char *buf = (char*) "12345-6789-101112-131415-1618-00";
    char ***result = new  char** ;
    int *N = new int;
    *N = 0;
    split(result, N, buf, '-');
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
