void split(char ***result, int *N, char *buf, char ch){
	int k = 0;
	int m = 0;
	for (int i = 0; buf[i] != '\0'; i++){
		if (buf[i] == ch){
			k++;
			if (m < i - m){
				m = i - m;
			}
		}
	}
	char **strarr = new char *[k + 1];
	int s = 0;
	int j = 0;
	for (int i = 0; i < k + 1; i++){
		strarr[i] = new char[m];
		for (j = s; buf[j] != ch && buf[j] != '\0'; j++){
			strarr[i][j - s] = buf[j];
		}
		strarr[i][j - s] = '\0';
		s = j + 1;
	}
	*result = strarr;
	*N = k + 1;
}