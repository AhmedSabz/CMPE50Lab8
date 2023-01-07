//============================================================================
// Name        : Lab8Question2.cpp
// Author      :Ahmed Sabzwari
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <cctype>
using namespace std;
char* delete_repeats(char *str, int size);
int main() {
	char str[100] = "to be or not to be";
	int size = sizeof(str);
	char *noRepeat;
	noRepeat = delete_repeats(str, size);
	cout << noRepeat;
	return 0;
}

char* delete_repeats(char *str, int size) {
	char *newarray = new char[size];
	int index = 0;
	bool truth;
	for (int i = 0; i < size; i++) {
		truth = false;
		for (int j = 0; j < i; j++) {
			if (str[i] == str[j]) {
				truth = true;
				break;
			}
		}
		if (truth == false) {
			newarray[index++] = str[i];
		}
	}
	return newarray;

}
//output:
//to bern
