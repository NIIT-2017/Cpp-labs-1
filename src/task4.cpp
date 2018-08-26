static int toInt(char x)
{
	return  int(x - '0');
}
static char toChar(int x)
{
	return  char(x + '0');
}

static int getSize(char* x)
{
	int size = 0;
	while (x[size] != '\0' && toInt(x[size]) >= 0 && toInt(x[size]) < 10)
	{
		size++;
	}
	return size;
}

static char* getNewResult(char* old_result) 
{
	int new_size = getSize(old_result) + 2;
	char* new_result = new char[new_size];
	for (int i = 1; i < new_size; i++)
	{
		new_result[i] = old_result[i - 1];
	}
	delete[] old_result;
	new_result[0] = '1';
	return new_result;
}

char* sum(char *x, char *y)
{
	int size_x = getSize(x);
	int size_y = getSize(y);
	int size_result = 0;
	int extra = 0;

	if (size_x > size_y) size_result = size_x;
	else size_result = size_y;

	int i = size_result - 1;
	int i_x = size_x - 1;
	int i_y = size_y - 1;

	char *result = new char[size_result + 1];
	result[size_result] = '\0';
	while (i >= 0)
	{
		if (i_x < 0 || i_y < 0)
		{
			if (i_y < 0)
			{
				if (toInt(x[i_x]) + extra < 10)
				{
					result[i] = toChar(toInt(x[i_x]) + extra);
					extra = 0;
				}
				else
				{
					result[i] = toChar(toInt(x[i_x]) + extra - 10);
					extra = 1;
				}
			}
			else
			{
				if (toInt(y[i_y]) + extra < 10)
				{
					result[i] = toChar(toInt(y[i_y]) + extra);
					extra = 0;
				}
				else
				{
					result[i] = toChar(toInt(y[i_y]) + extra - 10);
					extra = 1;
				}
			}
		}
		else
		{
			if (toInt(x[i_x]) + toInt(y[i_y]) + extra < 10)
			{
				result[i] = toChar(toInt(x[i_x]) + toInt(y[i_y]) + extra);
				extra = 0;
			}
			else
			{
				result[i] = toChar(toInt(x[i_x]) + toInt(y[i_y]) + extra - 10);
				extra = 1;
			}
		}
		i--;
		i_x--;
		i_y--;
	}

	if (extra == 1) result = getNewResult(result);

	return result;
}