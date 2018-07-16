
unsigned long findValue(unsigned int min, unsigned int max){


	for (unsigned int i = min + 1; i <= max; i++){
		unsigned int gcd = 1;
		for (unsigned int d = 2; d <= min && d <= i; d++){
			if (min % d == 0 && i % d == 0){
				if (d > gcd){
					gcd = d;
				}
			}
		}
		min = min * (i / gcd);
	}
	return min;
}