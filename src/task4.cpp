static bool isDigit(char c)
{
	if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9')
		return true;
	else
		return false;
}

static bool isNumber(char* value)
{
	while (*value != '\0')
	{
		if (isDigit(*value))
			value++;
		else
			return false;
	}
	return true;
}

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

char* big_plus(char *x, char *y)
{
	if (isNumber(x) && isNumber(y))
	{
		unsigned int len_x = length(x);
		unsigned int len_y = length(y);

		if (len_x < len_y)
			return big_plus(y, x);

		char* result = new char[len_x + 1];
		result[len_x] = '\0';

		bool plus_one_flag = false;
		for (int i = 0; i < len_x; i++)
		{
			if (i < len_y)
				result[len_x - 1 - i] = x[len_x - 1 - i] + y[len_y - 1 - i] - 48;
			else
				result[len_x - 1 - i] = x[len_x - 1 - i];
			if (plus_one_flag)
			{
				result[len_x - 1 - i]++;
				plus_one_flag = false;
			}
			if (result[len_x - 1 - i] > '9')
			{
				result[len_x - 1 - i] -= 10;
				plus_one_flag = true;
			}
		}
		if (plus_one_flag)
		{
			char* result_with_one = new char[len_x + 2];
			result_with_one[0] = '1';
			for (int i = 1; i < len_x + 1; i++)
				result_with_one[i] = result[i - 1];
			result_with_one[len_x + 1] = '\0';
			delete [] result;
			return result_with_one;
		}

		return result;
	}
	else
		return nullptr;
}