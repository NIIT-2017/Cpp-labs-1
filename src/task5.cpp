#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
void split(char ***result, int *N, char *buf, char ch)
{
	int sizeBuf = strlen(buf);
	char * lineup = new char[sizeBuf + 1];
	lineup[sizeBuf] = '\0';
	for (int i = 0; i < sizeBuf; i++)
		lineup[i] = buf[i];
	int count = 1;
	for (int i = 0; i < sizeBuf - 1; i++)
		if (lineup[i] == ch)
			count++;
	char** lineout = new char*[count];
	for (int lineNumber = 0; lineNumber < count; lineNumber++)
		lineout[lineNumber] = new char[sizeBuf];
	int x = -1;
	int &counter = x;
	for (int row = 0; row < count; row++)
	{
		for (int column = 0; column < sizeBuf; column++, sizeBuf--)
		{
			lineout[row][column] = lineup[counter + 1];
			counter++;
			if (lineout[row][column] == ch)
			{
				lineout[row][column] = '\0';
				break;
			}
				cout << lineout[row][column];
		}

			cout << endl;
	}
	*N = count;
	*result = lineout;
	delete[] lineup;
}