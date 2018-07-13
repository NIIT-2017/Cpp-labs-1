#include "task5.h"
void split(char ***result, int *N, char *buf, char ch)
{
    bool fix = true;
    int first = 0;
    int last = 0;
    int i = 0;
    int leigthword;
    int k;
    while (fix)
    {
        if (*(buf + i) == ch)
        {
            last = i - 1;
            leigthword = last - first + 2;
            char *res = new char[leigthword]();
            for (k = 0; k < leigthword - 1; k++)
                *(res + k) = *(buf + first+ k);
            *(res + leigthword - 1) = '\0';
            first = last + 2;//следующее слово
            addnewchartores(result, *N);
            *((*result) + *N) = res;
            (*N)++;
            while (*(buf + first) == ch)//проверка на повтор
            {
                first++;
                i++;
            }
        }
        else if (*(buf + i) == '\0')
        {
            if (first > last)
            {
                last = i - 1;
                leigthword = last - first + 2;
                char *res = new char[leigthword]();
                for (k = 0; k < leigthword - 1; k++)
                    *(res + k) = *(buf + first + k);
                *(res + leigthword - 1) = '\0';
                addnewchartores(result, *N);
                *((*result) + *N) = res;
                (*N)++;
            }
            fix = false;
        }
        i++;
    }
}

void addnewchartores(char ***res, int num)
{
    if (num != 0) {
        char **NewBufchar = new char *[num + 1];
        for (int i = 0; i < num; i++)
        {
            NewBufchar[i] = (*res)[i];
        }
        delete[] * res;
        *res = NewBufchar;
    }
    else {
        *res = new char *[num + 1];
    }
}
