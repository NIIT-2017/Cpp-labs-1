//Autor is Dmitriy Parev

#include "task5.h"

//Выделение памяти на новую подстроку
void newRes(char ***res, int n)
{
	if(n == 0){
        *res = new char *[n + 1];
    }
    else{
        char **copy = new char *[n + 1];
        for(int i = 0; i < n; i++)
        {
			copy[i] = (*res)[i];
        }
        delete [] *res;
        *res = copy;
    }
}

//разбиение строки buf на подстроки и запись результата в result,
// с присвоением по адресу N количества полученных подстрок
void split(char ***result, int *N, char *buf, char ch)
{
	if (result == nullptr) return;
	
	*N = 0;
	int k = 0;
	while (*(buf + k) != '\0')
	{
		unsigned i = k;
		while (1)
		{
			if ((*(buf + i) == ch) || (*(buf + i) == '\0')) 
			{
				if ((int) i == k)
				{
					k++;
					break;
				}
				char *res = new char[i - k + 1];
				for(unsigned l = 0; l < i - k; l++)
					*(res + l) = *(buf + k + l);
				*(res + i - k) = '\0';
				newRes(result, *N);
				*((*result) + *N) = res;
				(*N)++;
				k = i;
				if (*(buf + i) != '\0') k++;
				break;
			}
			i++;
		}
	}
}