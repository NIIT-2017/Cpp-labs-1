unsigned long findValue(unsigned int min, unsigned int max)
{
	if (min > max || min == 0 || max == 0)
		return 0;

	unsigned long result = max;
	bool result_flag = false;

	unsigned long max_result = 0;
	max_result--;

	do
	{
		bool devider_flag = true;
		for (unsigned int devider = min; devider <= max; devider++)
			if (result % devider != 0)
			{
				devider_flag = false;
				break;
			}
		if (!devider_flag)
			if (result != max_result)
				result++;
			else
				return 0;
		else
			result_flag = true;
	}
	while (!result_flag);

	return result;
}