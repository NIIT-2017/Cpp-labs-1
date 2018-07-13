#include <cstring>  // strlen
#include <cctype>  // isdigit
// #include <cstdlib>  // atoi
//#include <iostream>
//using namespace std;


//char * x       = " 1937";
//char * y       = "51498";
//                  53435

unsigned long long maxStrLen(char * x, char * y)  // для нахождения максимальной длины строки, состоящей только из цифровых значений
{
	unsigned long long lenStr1 = strlen(x);
	unsigned long long lenStr2 = strlen(y);
	unsigned long long count1 = 0; // длина строки с первым числом
	unsigned long long count2 = 0; // длина строки со вторым числом
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
	unsigned long long lenStr1 = strlen(x);
	unsigned long long lenStr2 = strlen(y);
	unsigned long long lenSumStr = maxStrLen(x, y); // длина итоговой строки
	
	//cout << lenSumStr << endl << endl;

	char * sumStr = new char[lenSumStr + 1 + 1]; // +1 for one more number (may be); +1 for '/0'

	for (int t = 0; t <= lenSumStr; t++)
		sumStr[t] = ' '; // в результате вычислений может оказаться незаполненным, поэтому заполняем пробелами

	sumStr[lenSumStr + 1] = '\0'; // слэш-ноль для обозначения того, что это строка, а не просто массив

	int digit1 = 0;
	int digit2 = 0;
	int units = 0; // для расчёта, если попарное сложение единиц двух чисел превысило значение 9
	int memorize = 0; // запомнить целую часть от деления для переноса в другой разряд
	int k = lenSumStr; // индексы итоговой строки, +1 for one more number (may be)
	int i = (lenStr1 - 1);
	int j = (lenStr2 - 1);
	while (i >= 0 && j >= 0)
	{

		//if (isdigit(x[i]))
			digit1 = x[i] - '0';
		//else
		//	digit1 = x[i];


		//if (isdigit(y[j]))
			digit2 = y[j] - '0';
		//else
		//	digit2 = y[j];

		//cout << digit1;
		//cout << endl;
		//cout << digit2;
		//cout << endl;

		if (isdigit(x[i]) || isdigit(y[j]))
		{
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
		else
		{
			sumStr[k] = (digit2 - digit1 + digit2) + '0';
			k--;
			i--;
			j--;
		}

	}

	if (isdigit(x[i]) || isdigit(y[j]))
	{
		if (i >= 0)
		{
			while (i >= 0)
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


		if (j >= 0)
		{
			while (j >= 0)
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

	

		if (memorize > 0) // если после перебора единиц обоих чисел в памяти что-то осталось, выведем это (под это и выделяли доп. разряд при выделении памяти)
			sumStr[k] = memorize + '0';
	}


	return sumStr;
}
