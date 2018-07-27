


char * sum(char * x, char * y)
{
	unsigned int lengthStrx = 0; // длина первой строки
	unsigned int lengthStry = 0; // длина второй строки

	char * result = nullptr;	// будет содержать сумму двух строк

	int number_x = 0;		// будет содержать числа первой строки
	int number_y = 0;		// будет содержать числа второй строки
	int rank = 0;			// хранит информацию про увеличении следующего ранга на 1
	unsigned int size =	0;	// размер итоговой строки

	// Проверка первой строки на правильность ввода
	for (int i = 0; x[i] != '\0'; i++)
	{
		lengthStrx++;  // считаем длину первой строки

		if (x[i] < '0' || x[i] > '9')
		{
			result = "Неверные входные данные";

			return result;
		}
	}

	// Проверка первой строки на правильность ввода
	for (int i = 0; y[i] != '\0'; i++)
	{
		lengthStry++; // считаем длину второй строки

		if (y[i] < '0' || y[i] > '9')
		{

			result = "Неверные входыне данные";

			return result;
		}
	}


	// Выделили память под новую строку, которая будет хранить результат суммы двух строк

	if (lengthStrx > lengthStry)
	{
		size = lengthStrx + 2; // +1 возможно число увелиться на разряд , +1  место под '/0'
		result = new char[size];
	}
	else
	{
		size = lengthStry + 2; 
		result = new char[size]{0};
	}


	for (unsigned int i = size - 2; i > 0; i--) // size - 2 так как должны начать с последней в строке буквы и оставить место под дополнительный разряд
	{

		if ((lengthStrx > 0) && (lengthStry > 0)) // если строки разного размера
		{
			number_x = x[lengthStrx - 1] - '0'; // Из символа преобразуем в чиcло
			number_y = y[lengthStry - 1] - '0';
			lengthStrx--;
			lengthStry--;

			// Сохраняем разярд, если он увеличился 
			if ((number_x + number_y) >= 10)
			{
				result[i] = ((((number_x + number_y) % 10) + rank) + '0');// i+1 так как оставляем последний разряд result[0] под новый разряд (если образуется при сумме)
				rank = 1;
			}
			else if ((number_x + number_y + rank) >= 10)
			{
				result[i] = ((((number_x + number_y) % 10) + rank) + '0');
				rank = 1;
			}
			else
			{
				result[i] = (((number_x + number_y) + rank) + '0');
				rank = 0;
			}

		}
		else  if ((lengthStrx > 0)) // Если у первого числа разрядов больше, чем у второго
		{
			number_x = x[lengthStrx - 1] - '0';
			lengthStrx--;
			if ((number_x + rank) >= 10)
			{
				result[i] = (((number_x + rank) % 10) + '0');
				rank = 1;
			}
			else
			{
				result[i] = ((number_x + rank) + '0');
				rank = 0;
			}


		}
		else  if (lengthStry > 0) // Если у второго числа разрядов больше, чем у первого
		{
			number_y = y[lengthStry - 1] - '0';
			lengthStry--;
			if ((number_x + rank >= 10))
			{
				result[i] = (((number_y + rank) % 10) + '0');
				rank = 1;
			}
			else
			{
				result[i] = ((number_y + rank) + '0');
				rank = 0;
			}

		}
	}
		
	result[0] = (rank + '0'); // добавление нового разряда
				
		

	// Вставляем конец строки
	result[size - 1] = '\0';


	// Если в итоге сумма не увеличилась на разряд, то нужно убрать последний разряд
	if (result[0] == '0')
	{
		for (unsigned int i = 0; i < size; i++)
			result[i] = result[i + 1];
	}

	return result;
		
}

