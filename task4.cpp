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
    char *z = new char[length]();
    int k = length;
    int a;
    int b;
    int d = 0;
    while ((i != 0) && (j != 0))
    {
        a = x[i - 1] - '0';
        b = y[j - 1] - '0';
        t = a + b + c;
        d = t % 10;
        z[k] = d + '0';
        if (t > 9) c = 1;
        else c = 0;
        // std::cout << z[k];
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
            // std::cout << z[k];
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
            // std::cout << z[k];
            k--;
            j--;
        }
    }
    return z;
}
