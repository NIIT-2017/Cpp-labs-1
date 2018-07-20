#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
char ** resize_arr(char ** arr, unsigned size, unsigned new_size);
void split(char ***result, int *N, char *buf, char ch);