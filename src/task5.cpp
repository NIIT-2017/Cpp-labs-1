

char* substring(int theFirstIndex, int theSecondIndex, char* theString)
{
	char* aNewString = new char[theSecondIndex - theFirstIndex + 2];
	int aNewStringIndex = 0;
	for (int i = theFirstIndex; i <= theSecondIndex; i++)
	{
		aNewString[aNewStringIndex++] = theString[i];
	}
	aNewString[aNewStringIndex] = '\0';
	return aNewString;
}

void split(char*** result, int* N, char* buf, char ch)
{
	// Инициализируем значения
	int aCurrentIndex = 0;  // текущий символ
	int aPreviusSplitSymbolIndex = 0;  // начало перед первым символом
	char aSymbol = buf[aCurrentIndex];

	// Посчитать количество  символов разделения
	int aNumberOfSplitSymbols = 0;
	while (aSymbol != '\0')
	{
		if (aSymbol == ch)
		{
			aNumberOfSplitSymbols++;
		}
		aCurrentIndex++;
		aSymbol = buf[aCurrentIndex];
	}

	if (aPreviusSplitSymbolIndex != aCurrentIndex)
	{
		aNumberOfSplitSymbols++; // для случая, когда полошли к концу строки
	}

	// Сбросить значения
	aCurrentIndex = 0;
	aSymbol = buf[aCurrentIndex];

	// Основной массив и индекс для вставки в него
	(*result) = new char*[aNumberOfSplitSymbols];
	int aMainMassiveCurrentIndex = 0;

	// Пока не конец строки
	while (aSymbol != '\0') {
		// Если символ - разделительный символ, мы создаем новый массив и добавляем к основному массивному
		if (aSymbol == ch) 
		{
			aPreviusSplitSymbolIndex = aPreviusSplitSymbolIndex > 0 ? aPreviusSplitSymbolIndex + 1 : aPreviusSplitSymbolIndex;
			char* aNewString = substring(aPreviusSplitSymbolIndex, aCurrentIndex - 1, buf);

			// Добавить к основному массиву и изменить индекс
			(*result)[aMainMassiveCurrentIndex++] = aNewString;

			aPreviusSplitSymbolIndex = aCurrentIndex;
		}
		++aCurrentIndex;
		aSymbol = buf[aCurrentIndex];
	}

	// От последнего разделительного символа до конца строки
	if (aPreviusSplitSymbolIndex != aCurrentIndex) 
	{
		aPreviusSplitSymbolIndex = aPreviusSplitSymbolIndex > 0 ? aPreviusSplitSymbolIndex + 1 : aPreviusSplitSymbolIndex;
		char* aNewString = substring(aPreviusSplitSymbolIndex, aCurrentIndex, buf);
		(*result)[aMainMassiveCurrentIndex] = aNewString;
	}

	(*N) = aNumberOfSplitSymbols;
}


