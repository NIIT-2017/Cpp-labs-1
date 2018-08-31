#include "task4.h"
char * sum(char *x, char *y)
{
    int length;
    int i = 0;
    while (x[i] != '\0') i++;
    int j = 0;
    while (y[j] != '\0') j++;
    int c = 0;
    int length1, length2;

    if (i >= j) {
        length = i + 1;
    }
    else {
        length = j + 1;
    }
    length1 = i;
    length2 = j;
    int t;
    char *z = new char[length+1]();
    int k = length;
    int a;
    int b;
    int d = 0;
    z[length+1]='\0';
    while ((i != 0) && (j != 0))
    {
        a = x[i - 1] - '0';
        b = y[j - 1] - '0';
        t = a + b + c;
        d = t % 10;
        z[k] = d + '0';
        if (t > 9) c = 1;
        else c = 0;
        //std::cout << z[k];
        k--;
        i--;
        j--;
    }
    if (length1 > length2)
    {
        while (k > 0) {
            if (i) {
                a = x[i - 1] - '0';
            }
            else a = 0;
            t = a + c;
            d = t % 10;
            z[k] = d + '0';
            if (t > 9) c = 1;
            else c = 0;
           //std::cout << z[k];
            k--;
            i--;
        }
    }
    else {
        while (k > 0) {
            if (j) {
                a = y[j - 1] - '0';
            }
            else a = 0;
            t = a + c;
            d = t % 10;
            z[k] = d + '0';
            if (t > 9) c = 1;
            else c = 0;
            //std::cout << z[k];
            k--;
            j--;
        }
    }
    if (z[1]== '0') {
        char *z2 = new char[length]();
        for (i=0;i<length-1;i++){
            z2[i] =z[i+2] ;
            //std::cout << z2[i];
        }
        z2[length]='\0';
        delete[] z;
        return z2;
    }
    else {
        char *z3 = new char[length+1]();
        for (i=0;i<length;i++){
            z3[i] =z[i+1] ;
            //std::cout << z3[i];
        }
        z3[length+1]='\0';
        delete[] z;
        return z3;
    }
}
