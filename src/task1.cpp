unsigned int gcd(unsigned int a, unsigned int b) {
	return b ? gcd(b, a % b) : a;
}

unsigned int lcm(unsigned int a, unsigned int b) {
	return a / gcd(a, b) * b;
}

unsigned long findValue(unsigned int min, unsigned max)
{
	unsigned int tmp{ min };
	tmp = lcm(min, ++min);
	while (min != max)
		tmp = lcm(tmp, ++min);
	return tmp;
}