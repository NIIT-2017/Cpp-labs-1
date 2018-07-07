#include "task1.h"

unsigned long findValue(unsigned int min,unsigned max)
{
    unsigned long result = 1;
    int i = min;
    while (i < max)
    {
        unsigned long first = result;
        unsigned long second = i;
        while (first != second)
        {
            if (first > second)
                first -= second;
            else
                second -= first;
        }
        result = result * i / first;
        i++;
    }
    return result;
}

