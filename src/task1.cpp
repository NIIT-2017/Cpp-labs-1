#include "task1.h"
typedef unsigned long UL;
typedef unsigned int UI;

UL findValue(UI min, UI max)
{
	int flag = 1;
	UL i = 1;
	int j = 0;
	UL temp = 0;

	for (i = max;; i++) {
		for (j = min; j <= max; j++) {
			if (i%j != 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1) {
			temp = i;
			break;
		}
		flag = 1;
		
	}
	

	return temp;
}