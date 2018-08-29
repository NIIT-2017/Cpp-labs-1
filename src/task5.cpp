 
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<vector>
#include <cstring>
#include <string>
 
using namespace std;

void split(char ***result, int *N, char *buf, char ch) {
	string str = buf;
	 
	 

	vector<char*> tokens;
	string::size_type lastPos = str.find_first_not_of(ch, 0);
	string::size_type pos = str.find_first_of(ch, lastPos);
	while (string::npos != pos || string::npos != lastPos) {
		char* tok = new char[str.substr(lastPos, pos - lastPos).length() + 1];;
		std::strcpy(tok, str.substr(lastPos, pos - lastPos).c_str());
		 
		tokens.push_back(tok);
		lastPos = str.find_first_not_of(ch, pos);
		pos = str.find_first_of(ch, lastPos);

	}
	*N = tokens.size();
	*result = new char*[*N];
	for (int i = 0; i < *N; i++) {
		 
		(*result)[i] = tokens[i];
	}
	 
		 
}

 
