#include<iostream>
#include "task5.h"

using namespace std;

int main()
{
	
	char buf1[19]= "first7second7third";
	char buf2[20] = "7first7second7third";
	char buf3[20] = "first7second7third7";
	char buf4[20] = "first77second7third";
	char buf5[21] = "first7second777third";
	char buf6[17] = "firstsecondthird";
	char buf7[1] = "";
	char ch = '7';
	int n1,n2,n3, n4, n5, n6, n7;
	char **result1;
	char **result2;
	char **result3;
	char **result4;
	char **result5;
	char **result6;
	char **result7;
	split(&result1, &n1, buf1, ch);
	split(&result2, &n2, buf2, ch);
	split(&result3, &n3, buf3, ch);
	split(&result4, &n4, buf4, ch);
	split(&result5, &n5, buf5, ch);
	split(&result6, &n6, buf6, ch);
	split(&result7, &n7, buf7, ch);
	for (int i = 0; i < n1; i++)
		cout << result1[i] << endl;
	for (int i = 0; i < n2; i++)
		cout << result2[i] << endl;
	for (int i = 0; i < n3; i++)
		cout << result3[i] << endl;
	for (int i = 0; i < n4; i++)
		cout << result4[i] << endl;
	for (int i = 0; i < n5; i++)
		cout << result5[i] << endl;
	for (int i = 0; i < n6; i++)
		cout << result6[i] << endl;
	for (int i = 0; i < n7; i++)
		cout << result7[i] << endl;
	return 0;
}