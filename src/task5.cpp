#include <iostream>
#include <cstring> // strlen

using namespace std;

void split(char ***result, int *N, char *buf, char ch) //разбиение строки buf на подстроки и запись результата в result, с присвоением по адресу N количества полученных подстрок.
{
	int strlenbuf = strlen(buf);
	int separatorCount = 0; // счётчик встречаемости символа-разделителя

	char * beginptr = nullptr;
	if (buf[0] == ch)
	{
		int i = 0; 
		while (buf[i] == ch)
			i++;
		beginptr = buf + i;
	}
	else 
		beginptr = buf;

	char * endptr = nullptr;
	if (buf[strlenbuf - 1] == ch)
	{
		int i = strlenbuf - 1;
		while (buf[i] == ch)
			i--;
		endptr = buf + i;
	}
	else
		endptr = buf + (strlenbuf - 1);

	for (; beginptr < endptr; beginptr++)
	{
		if (*beginptr == ch && *(beginptr - 1) != ch) //.......asde.fdfd......fff.d.frr.....  // if (buf[i] == ch && i != 0 && (buf[i - 1] != ch) && (buf[i + 1] != ch) && i != (strlenbuf - 1))
			separatorCount++;
	}
	//cout << separatorCount << endl;

	int size = 0; // длина каждой подстроки
	int K = separatorCount + 1; // длина массива, содержащего адреса подстрок (количество подстрок)
	int charCount = 0; // счётчик символов в подстроке

	char ** strArr = new char *[K];

	int indexA = 0; // индексы массивов подстрок
	int indexB = 0; // индексы массива указателей
	char * ptr = nullptr; // указатель на начало подстроки
	for (int i = 0; i < strlenbuf; i++)
	{
		//if ((buf[i] == ch && i = 0) || (buf[i] == ch && i = (strlenbuf-1)))
		if (buf[i] == ch)
			continue;
		if (buf[i] != ch)
			ptr = buf+i;
		while (buf[i] != ch)
		{
			charCount++;
			i++;
		}

		size = charCount + 1; // +1 for '\0'
		//for (int j = 0; j < K; j++)
		strArr[indexA] = new char[size];
		for (indexB = 0; indexB < size - 1; indexB++)
		{
			strArr[indexA][indexB] = *ptr;
			ptr++;
		}
		indexB = (size - 1);
		strArr[indexA][indexB] = '\0';

		indexA++;
		charCount = 0;
	}

	*result = strArr;
	*N = K;


	/*
	for (indexA = 0; indexA < K; indexA++)
	for (*strArr[0]; indexB != '\n'; indexB++)
	cout << strArr[indexA][indexB] << " ";
	cout << endl;
	*/

	//for (indexA = 0; indexA < K; indexA++)
	//cout << strArr[indexA] << " ";

	for (indexA = 0; indexA < K; indexA++)
	{
		indexB = 0;
		while (strArr[indexA][indexB] != '\0')
		{
			cout << strArr[indexA][indexB] << " ";
			indexB++;
		}
		cout << endl;
	}

	//for (indexA = 0; indexA < K; indexA++)
	//	delete[] strArr[K];

}
