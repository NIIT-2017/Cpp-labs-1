#include "task5.h"
void split(char ***result, int *N, char *buf, char ch)
{
	char ** tmp;
	unsigned count{0};
	*N = 0;
	int size = strlen(buf)/2 + 1;
	tmp = new char*[size] {nullptr};
	unsigned i{ 0 };
	unsigned start{ 0 };
	while (buf[count] != '\0')
	{
		while (buf[count] != ch && buf[count] != '\0')
			count++;
		if (*(N + 1) > size)
			tmp = resize_arr(tmp, size, size * 2);
		if (count != 0)
		{
			*(tmp + *N) = new char[count - start + 1]{ 0 };
			strncpy(tmp[(*N)++], buf+start, count - start);
		}
		while (buf[count] == ch)
			count++;
		start = count;
	}
	tmp = resize_arr(tmp, size, *N);
	*result = tmp;
}

char ** resize_arr(char ** arr, unsigned size, unsigned new_size)
{
	char ** new_arr;
	new_arr = new char*[new_size];
	for (unsigned i = 0; size > new_size ? i < new_size : i < size; i++)
	{
		new_arr[i] = new char[strlen(arr[i])+1]{0};
		strcpy(new_arr[i], arr[i]);
	}
	delete[] arr;
	return new_arr;
}
