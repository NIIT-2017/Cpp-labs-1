
char* sum(char *x, char *y){
	int k = 0;
	int size_x = 0;
	int size_y = 0;
	int r = 0;
	while (x[k] >= '0' && x[k] <= '9'){
		k++;
		size_x = k;
	}
	k = 0;
	while (y[k] >= '0' && y[k] <= '9'){
		k++;
		size_y = k;
	}

	if (size_x >= size_y){
		k = size_x - size_y;
		char* arr = new char[(size_x + 1) / 2];
		arr[size_x] = '\0';
		for (int i = size_x - 1; i >= -1; i--){
			if (i == -1 && r != 0){
				arr[size_x + 1] = '\0';
				for (int i = size_x; i >= 0; i--){
					if (i == 0){
						arr[i] = char(r + 48);
						return arr;
					}
					arr[i] = arr[i - 1];
				}
			}
			else if (i == -1 && r == 0){
				return arr;
			}
			else if (i - k < 0){
				arr[i] = char((int(x[i] - 48) + r) % 10 + 48);
				r = (int(x[i] - 48) + r) / 10;
			}
			else{
				arr[i] = char((int(x[i] - 48) + int(int(y[i - k] - 48) + r)) % 10 + 48);
				r = (int(x[i] - 48) + int(y[i - k] - 48) + r) / 10;
			}
		}
		return arr;
	}
	else{
		k = size_y - size_x;
		char* arr = new char[(size_y + 1) / 2];
		arr[size_y] = '\0';
		for (int i = size_y - 1; i >= -1; i--){
			if (i == -1 && r != 0){
				arr[size_y + 1] = '\0';
				for (int i = size_y; i >= 0; i--){
					if (i == 0){
						arr[i] = char(r + 48);
						return arr;
					}
					arr[i] = arr[i - 1];
				}
			}
			else if (i == -1 && r == 0){
				return arr;
			}
			else if (i - k < 0){
				arr[i] = char((int(y[i] - 48) + r) % 10 + 48);
				r = (int(y[i] - 48) + r) / 10;
			}
			else{
				arr[i] = char((int(y[i] - 48) + int(x[i - k] - 48) + r) % 10 + 48);
				r = (int(y[i] - 48) + int(x[i - k] - 48) + r) / 10;
			}
		}
		return arr;
	}
}