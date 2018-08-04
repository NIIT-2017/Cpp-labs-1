bool checkPrime(unsigned int value) // �������� ����� �� ��������.
{
	for (unsigned int i = 2; i*i < value; i++)
		if (value %i == 0) return false;
	return true;
}

unsigned long long nPrime(unsigned n) // ���������� n - ��� �������� �����(� ����).
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
unsigned long long nextPrime(unsigned long long value) // ���������� ���������� ���������� �������� ����� � value.
{
	unsigned long long n=value +1;
	if (checkPrime(n) == true)
		return n;
	else
		return nextPrime(n);
}
