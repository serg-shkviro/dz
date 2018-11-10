#include "pch.h"
#include <iostream>
using namespace std;

void clear(char* str, unsigned int size) {
	char* upd_str = new char[size];
	int statement = 0;
	unsigned int dif = 0;
	for (unsigned int i = 0; i < size; i++) {
		if (str[i] == ' ') {
			if (statement == 1) {
				dif++;
			} else
				if (statement == 0) {
				statement = 1;
				upd_str[i - dif] = str[i];
			}
		}
		else {
			statement = 0;
			upd_str[i - dif] = str[i];
		};
	}
	for (unsigned int i = 0; i < size; i++)
	{
		str[i] = upd_str[i];
	};
};

int main() {
cout << "to finish writing a line, write . ";
	unsigned int size = 1000, i;
	char* str = new char[size];

	char input = 0;
	unsigned int count = 0;
	while (input != '.') {
		input = cin.get();
		str[count++] = input;
	};
	clear(str, size);
	for (i = 0; i < count; i++) {
		cout << str[i];
	};
	cout << endl;
	return 0;
}