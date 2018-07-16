bool checkPrime(unsigned int value){         // проверка на простоту
	if (value == 1){
		return false;
	}
	for (int d = 2; d * d <= value; d++){
		if (value % d == 0){
			return false;
		}
	}
	return true;
}


unsigned long long nextPrime(unsigned long long value){  // ищем следующее простое за введенным
	value++;
	while (checkPrime(value) == false){
		value++;
	}
	return value;
}


unsigned long long nPrime(unsigned long long n){            // поиск n-го протого числа

	int count(0);
	unsigned int *a = new unsigned int[n * n];
	for (unsigned int i = 0; i < n * n; i++)
		a[i] = i;
	for (unsigned int p = 2; p < n * n; p++)
	{
		if (a[p] != 0)
		{
			count++;
			if (count == n){
				return a[p];
			}
			for (int j = p*p; j < n * n; j += p)
				a[j] = 0;
		}
	}
}