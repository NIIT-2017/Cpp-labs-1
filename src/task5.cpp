#include <stdlib.h>
#include <string.h>
#include <assert.h>

void split(char*** result, int* N, char* buf, char ch)
{

	int count = 1;
	int token_len = 1;
	int i = 0;
	char *p;
	char *t;

	p = buf;
	while (*p != '\0')
	{
		if (*p == ch)
			count++;
		p++;
	}

	*result = new char*[count];//(char**)malloc(sizeof(char*) * count);
	if (*result == NULL)
		exit(1);

	p = buf;
	while (*p != '\0')
	{
		if (*p == ch)
		{
			(*result)[i] = new char[token_len];//(char*)malloc(sizeof(char) * token_len);
			if ((*result)[i] == NULL)
				exit(1);

			token_len = 0;
			i++;
		}
		p++;
		token_len++;
	}
	(*result)[i] = new char[token_len];//(char*)malloc(sizeof(char) * token_len);
	if ((*result)[i] == NULL)
		exit(1);

	i = 0;
	p = buf;
	t = ((*result)[i]);
	while (*p != '\0')
	{
		if (*p != ch && *p != '\0')
		{
			*t = *p;
			t++;
		}
		else
		{
			*t = '\0';
			i++;
			t = ((*result)[i]);
		}
		p++;
	}

	*N = count;

}

/*static unsigned int length(char* value)
{
	unsigned int counter = 0;
	while (*value != '\0')
	{
		counter++;
		value++;
	}
	return counter;
}

void split(char*** result, int* N, char* buf, char ch)
{
	unsigned int len = length(buf);
	*N = 0;
	for (int i = 0; i < len; i++)
		if (buf[i] == ch)
			(*N)++;
	(*N)++;
	*result = new char*[*N];
	int counter = 0;
	unsigned local_len = 0;
	for (int i = 0; i < len; i++)
		if (buf[i] == ch)
		{
			*result[counter] = new char[local_len + 1];
			for (int j = 0; j < local_len; j++)
				*result[counter][j] = buf[i - local_len + j];
			*result[counter][local_len] = '\0';
			counter++;
			local_len = 0;
		}
		else
			local_len++;
}*/