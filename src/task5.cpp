#include <iostream>
#include <cstdlib>
using namespace std;


void split(char ***result, int *N, char *buf, char ch)
{

	int sizeBuf = strlen(buf);
	char * lineup = new char[sizeBuf + 1];
	for (int i = 0; i < sizeBuf; i++)
		lineup[i] = buf[i];
	int count = 1;
	for (int i = 0; i < sizeBuf - 1; i++)
	{
		if (lineup[i] == ch)
		{
			count++;
		}
	}
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
				lineout[row][column] = ' ';
				break;
			}
			cout << lineout[row][column];
		}
		cout << endl;
	}
	*N = count;
	cout << "\nКоличество строк " << *N << endl << endl;
	
	*result = lineout;
	/* some wrong things..
	for (int row = 0; row < count; row++)
	{
		for (int column = 0; column < sizeBuf+1; column++)
		{
			cout << result[row][column];
		}
		cout << endl;
	}
	*/
	/**result[0] = lineout[0];
	cout << result[0] << endl;*/

	delete[] lineup;
}