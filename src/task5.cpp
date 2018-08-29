
static char* get_new_line(char* buf, int begin, int end)
{
	char* new_line = new char[end - begin + 1];
	for (int i = 0; i < end - begin; i++)
		new_line[i] = buf[begin + i];
	new_line[end - begin] = '\0';
	return new_line;
}

static void add_new_line(char ***result, int count, char* new_line)
{
	char **tmp = new char*[count + 1];
	for (int i = 0; i < count; i++)
	{
		tmp[i] = (*result)[i];
	}
	delete[] * result;
	*result = tmp;
	(*result)[count] = new_line;
}

void split(char ***result, int *N, char *buf, char ch)
{
	int count = 0;
	int begin = 0;
	int end = 0;

	while (buf[begin] != '\0')
	{
		end = begin;
		while (1)
		{
			if (buf[end] == ch || buf[end] == '\0')
			{
				if (end != begin)
				{

					char* new_line = get_new_line(buf, begin, end);

					if (count == 0)
					{
						*result = new char*[count + 1];
						(*result)[count] = new_line;
					}
					else
						add_new_line(result, count, new_line);

					count++;

					begin = end;
					if (buf[end] != '\0')
						begin++;
				}
				else begin++;
				break;
			}
			end++;
		}
	}
	*N = count;
}

