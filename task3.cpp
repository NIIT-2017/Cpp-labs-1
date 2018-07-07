#include "task3.h"

unsigned long sumPrime(unsigned int hbound) //- сумма всех чисел до hbound (не включая его)
{
    unsigned int i, j;
    unsigned long sum = 0;
    bool *a = new bool [hbound];
    for (i = 0; i < hbound; i++) a[i] = true;
    for (i = 2; i<hbound; i++)
    {
        if (a[i] == true)
        {
            for (j = i; j<hbound; j+=i)
            {
                a[j] = false;
            }
            a[i] = true;
        }
    }
    for (i = 2; i < hbound; i++)
    {
        if (a[i] == true)  sum+=i;
    }
    delete [] a;
    return sum;
}
