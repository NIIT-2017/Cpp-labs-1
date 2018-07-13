#include <cstring>  // strlen
#include <cctype>  // isdigit
// #include <cstdlib>  // atoi
//#include <iostream>
//using namespace std;


//char * x       = " 1937";
//char * y       = "51498";
//                  53435

unsigned long maxStrLen(char * x, char * y)  // для нахождения максимальной длины строки, состоящей только из цифровых значений
{
	unsigned long lenStr1 = strlen(x);
	unsigned long lenStr2 = strlen(y);
	unsigned long count1 = 0; // длина строки с первым числом
	unsigned long count2 = 0; // длина строки со вторым числом
	//cout << lenStr1 << " " << lenStr2 << endl << endl;
	for (int m = 0; m < lenStr1; m++)
	if (isdigit(x[m]))
		count1++;
	for (int n = 0; n < lenStr1; n++)
	if (isdigit(y[n]))
		count2++;

	if (count1 >= count2)
		return count1;
	else
		return count2;
}

char * sum(char * x, char * y)
{
	//unsigned long lenStr1 = strlen(x);
	//unsigned long lenStr2 = strlen(y);

	unsigned long lenSumStr = maxStrLen(x, y); // длина итоговой строки
	//cout << lenSumStr << endl << endl;

	if (lenSumStr > 0)
	{

		char * sumStr = new char[lenSumStr + 1 + 1]; // +1 for one more number (may be); +1 for '\0'
		char * sumStr1 = new char[strlen(sumStr) + 1]; // if the first symbol will be ' '

		for (int t = 0; t <= lenSumStr; t++)
			sumStr[t] = ' '; // в результате вычислений может оказаться незаполненным, поэтому заполняем пробелами

		sumStr[lenSumStr + 1] = '\0'; // слэш-ноль для обозначения того, что это строка, а не просто массив

		int digit1 = 0;
		int digit2 = 0;
		int units = 0; // для расчёта, если попарное сложение единиц двух чисел превысило значение 9
		int memorize = 0; // запомнить целую часть от деления для переноса в другой разряд
		int k = lenSumStr; // индексы итоговой строки, +1 for one more number (may be)
		int i = (strlen(x) - 1);
		int j = (strlen(y) - 1);
		while (i >= 0 && j >= 0)
		{
			while (!isdigit(x[i]) && (i >= 0))
				i--;
			if (i >= 0)
				digit1 = x[i] - '0';
			else
				digit1 = 0;

			while (!isdigit(y[j]) && (j >= 0))
				j--;
			if (j >= 0)
				digit2 = y[j] - '0';
			else
				digit2 = 0;

			//cout << digit1;
			//cout << endl;
			//cout << digit2;
			//cout << endl;


			units = (digit1 + digit2) % 10 + memorize; // остаток записать + то, что запомнили из прошлого разряда
			if (units <= 9)
			{
				sumStr[k] = units + '0';
				//cout << sumStr[k] << endl;
				memorize = (digit1 + digit2) / 10;  // запомнить целую часть от деления для переноса в другой разряд
				//cout << memorize;
				//cout << endl << endl;
			}
			else
			{
				sumStr[k] = '0';
				//cout << sumStr[k] << endl;
				memorize = 1;  // запомнить целую часть от деления для переноса в другой разряд
				//cout << memorize;
				//cout << endl << endl;
			}
			k--;
			i--;
			j--;
		}

		if (i >= 0)
		{
			while (i >= 0)
			{
				while (!isdigit(x[i]) && (i >= 0))
					i--;
				if (i < 0)
				{
					sumStr[k] = memorize + '0';
				}
				else
				{
					units = (x[i] - '0') + memorize; // остаток записать + то, что запомнили из прошлого разряда
					if (units <= 9)
					{
						sumStr[k] = units + '0';
						//cout << sumStr[k] << endl;

						//cout << endl << endl;
					}
					else
					{
						sumStr[k] = '0';
						//cout << sumStr[k] << endl;
						memorize = 1;  // запомнить целую часть от деления для переноса в другой разряд
						//cout << memorize;
						//cout << endl << endl;
					}
					i--;
					k--;
				}
			}
		}

		if (j >= 0)
		{
			while (j >= 0)
			{
				while (!isdigit(y[j]) && (j >= 0))
					j--;
				if (j < 0)
				{
					sumStr[k] = memorize + '0';
				}
				else
				{
					units = (y[j] - '0') + memorize; // остаток записать + то, что запомнили из прошлого разряда
					if (units <= 9)
					{
						sumStr[k] = units + '0';
						//cout << sumStr[k] << endl;
						//cout << endl << endl;
					}
					else
					{
						sumStr[k] = '0';
						//cout << sumStr[k] << endl;
						memorize = 1;  // запомнить целую часть от деления для переноса в другой разряд
						//cout << memorize;
						//cout << endl << endl;
					}
					j--;
					k--;
				}
			}
		}

		if (memorize > 0) // если после перебора единиц обоих чисел в памяти что-то осталось, выведем это (под это и выделяли доп. разряд при выделении памяти)
			sumStr[k] = memorize + '0';

		if (sumStr[0] == ' ' || sumStr[0] == '0')
		{
			for (int r = 0; r <= lenSumStr + 1; r++)
				sumStr1[r] = sumStr[r + 1];
			delete[] sumStr;
			return sumStr1;
		}
		return sumStr;

	}



	else
	{
		unsigned long lenStr1 = strlen(x);
		unsigned long lenStr2 = strlen(y);
		//cout << lenStr1 << " " << lenStr2 << endl;
		
		if (lenStr1 >= lenStr2)
			lenSumStr = lenStr1;
		else
			lenSumStr = lenStr2;
		//cout << lenSumStr << endl;

		char * sumStr = new char[lenSumStr + 1]; // +1 for '\0'
		sumStr[lenSumStr] = '\0'; // слэш-ноль для обозначения того, что это строка, а не просто массив

		int digit1 = 0;
		int digit2 = 0;
		int k = lenSumStr - 1; // индексы итоговой строки
		int i = (lenStr1 - 1);
		int j = (lenStr2 - 1);

		while (i >= 0 && j >= 0)
		{
			digit1 = x[i] - '0';
			digit2 = y[j] - '0';
			if (digit2 >= digit1)
				sumStr[k] = ((digit2 - digit1) + digit2) + '0';
			else
				sumStr[k] = ((digit1 - digit2) + digit1) + '0';
			k--;
			i--;
			j--;
		}
		return sumStr;
	}
}
