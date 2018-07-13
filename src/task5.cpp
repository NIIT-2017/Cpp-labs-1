static unsigned int length(char* value)
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
}