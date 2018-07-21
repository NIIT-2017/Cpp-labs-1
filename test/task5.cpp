#include <iostream>
#include <cstdlib>
using namespace std;


void split(char ***result, int *N, char *buf, char ch)
{
	int sizeBuf = strlen(buf);
	char * lineup = new char[sizeBuf];
	for (int i = 0; i < sizeBuf; i++)
		lineup[i] = buf[i];
	int count = 1;
	for (int i = 0; i < sizeBuf - 1; i++)
	{
		if (lineup[i] == ch)
			count++;
	}
	char** lineout = new char *[count];
	for (int lineNumber = 0; lineNumber < count; lineNumber++)    
		lineout[lineNumber] = new char[sizeBuf];
	int x = -1;
	int &counter = x;
	for (int row = 0; row < count; row++)
	{
		for (int column = 0; (*lineup != '\n') && column < sizeBuf; column++)
		{
			lineout[row][column] = lineup[counter + 1];
			cout << lineout[row][column];
			counter++;
			if (lineup[counter] == ch)
			{
				break;
			}
		}
		cout << endl;
	}
	*N = count;
	cout << "\nКоличество строк " << *N << endl << endl;
	*result = lineout;
	delete[] lineup;

}