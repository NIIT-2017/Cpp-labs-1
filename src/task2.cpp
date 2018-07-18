#include "task2.h"
bool checkPrime(unsigned int value) //- проверка числа на простоту.
{
    unsigned long i;
    if (value == 2) return 1;
    if (value == 0 || value == 1 || value % 2 == 0) return 0;
    for(i = 3; i*i <= value && value % i; i += 2) ;
    return i*i > value;
}

unsigned long long nPrime(unsigned n) //- нахождение n-ого простого числа (в ряду).
{
    unsigned long long candidateNum=0;
    unsigned long long candidate = 2;

    while(candidateNum < n)
    {
        unsigned int i = 2;
        bool prime = true;
        while(i * i <= candidate)
        {
            if(candidate % i == 0)
            {
                prime = false;
                break;
            }
            i++;
        }
        if(prime) candidateNum++;
        candidate++;
    }
    return candidate - 1;
}

unsigned long long nextPrime(unsigned long long value)  //- нахождение ближайшего следующего простого числа к value.
{
    value++;
    switch (value)
    {
    case 0:
    case 1:
    case 2:
        return 2;
    case 3:
        return 3;
    case 4:
    case 5:
        return 5;
    }
    unsigned long long k = value / 6;
    unsigned long long i = value - 6 * k;
    unsigned long long  j = i < 2 ? 1 : 5;
    value = 6 * k + j;
    for (i = (3 + j) / 2; !checkPrime(value); value += i)
        i ^= 6;
    return value;
}
