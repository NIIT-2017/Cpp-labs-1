bool isDelimiter(char c, char ch)
{
	return c == ch || c == '\0';
}

bool isEnd(char c)
{
	return c == '\0';
}

char* getWord(char* buf, int begin, int end)
{
	char* word = new char[end - begin + 1];
	for (int i = 0; i < end - begin; i++)
		word[i] = buf[begin + i];
	word[end - begin] = '\0';
	return word;
}

void addWord(char ***result, int count)
{
	char **copy = new char*[count + 1];
	for (int i = 0; i < count; i++)
	{
		copy[i] = (*result)[i];
	}
	delete[] * result;
	*result = copy;
}

void split(char ***result, int *N, char *buf, char ch)
{
	int count = 0;
	int begin = 0;
	int end = 0;
	
	while (!isEnd(buf[begin]))
	{
		end = begin;
		while (true)
		{
			if (isDelimiter(buf[end], ch))
			{
				if (end == begin)
				{
					begin++;
					break;
				}
				
				char* word = getWord(buf, begin, end);

				if (count == 0)
					*result = new char* [count + 1];
				else
					addWord(result, count);

				(*result)[count] = word;
				count++;

				begin = end;
				if (!isEnd(buf[end]))
					begin++;
				break;
			}
			end++;
		}
	}
	*N = count;
}