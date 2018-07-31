#include <iostream>
using namespace std;

void split(char ***result, int *N, char *but, char ch)
{
	int M = 0;
	int size_str=0;
	int start_str = 0;
	while (but[size_str] == ch)
		size_str++;
	start_str = size_str;
	while (but[size_str] != 0)
	{
		if (but[size_str] == ch && but[size_str - 1] != ch)
		{
			M++;
			size_str++;
		}
		else size_str++;
	}
	if (but[size_str] == 0 && but[size_str - 1] != ch)
		M++;
	char ** str_arr = new char*[M];
	int i = 0;
	if (but[0] != ch)
		str_arr[i] = new char[size_str];
		for (int j = start_str; j <= size_str; j++)
		{
			if (but[j] != ch)
			{
				
				if (but[j] != ch && but[j - 1] == ch)
				{
					start_str = j;
					str_arr[i] = new char[size_str];
				}
				str_arr[i][j - start_str] = but[j];
			}
			if (but[j] == ch && but[j - 1] != ch)
			{
				str_arr[i][j - start_str] = 0;
				i++;
			}
			if (but[j] ==0 && but[j-1]!=ch)
				str_arr[i][j - start_str] = 0;
		}
	
	*result = str_arr;
	*N = M;
}