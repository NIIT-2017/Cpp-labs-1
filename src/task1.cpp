unsigned long findValue(unsigned int min, unsigned int max)
{
	unsigned int x{ max };
	unsigned int y{ max };
	for (unsigned int i = max - 1; i >= min; i--)
	{
		unsigned int a{ y };
		unsigned int b{ i };
		while (a)
		{
			unsigned int t;
			if (b > a) { t = a; a = b; b = t; }
			a %= b;
			x = b;
		}
		y = y * i;

		y = y / x;

	}

	return y;
}

