bool checkPrime(unsigned int value) // �������� ����� �� ��������.
{
	bool res{ true };
	for (unsigned int i = value - 1; i > 1; i--)
		if (value %i == 0) res = false;
	return res;
}

unsigned long long sumPrime(unsigned int hbound) // ����� ���� ����� �� hbound(�� ������� ���)
{
	unsigned long long sum{0};
	for (unsigned int i = 2; i < hbound; i++)
		if (checkPrime(i) == true)
			sum += i;
	return sum;
}