bool checkPrime(unsigned int value) // проверка числа на простоту.
{

		for (unsigned int i = 2; i*(i-1) < value; i++)
			if (value %i == 0) return false;
		return true;

}

unsigned long long nPrime(unsigned n) // нахождение n - ого простого числа(в ряду).
{
	int x{ 1 };
	for (int i = 0; i < n;)
	{
		x++;
		if (checkPrime(x) == true)
			i++;
	}
	return x;
}
unsigned long long nextPrime(unsigned long long value) // нахождение ближайшего следующего простого числа к value.
{
	unsigned long long n=value +1;
	if (checkPrime(n) == true)
		return n;
	else
		return nextPrime(n);
}
