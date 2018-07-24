/*Задача №4
Реализовать функцию сложения двух сверхдлинных чисел, заданных в виде строк.
Пояснение
В результате работы функции sum должен появиться массив в динамической памяти с результатом сложения.
Состав проекта
- char * sum(char *x, char *y) - сумма чисел x и y
- main()*/
char * sum(char *x, char *y);
void transfer(int length, int *intarr, char *x);
void sum(int *resarr, int *arr1, int *arr2, int lengthResult, int lengthX, int lengthY);
int digitcalc(char *arr);
void reTransfer(int *result, int lengthResult, char *charResult);