#include "pch.h"
#include <iostream>
using namespace std;


int pra(char* a, int b) {
	int k = 0;
	int j;
	for (int i = 0; i < b; i++) {
		if (i % 2 == 0) {
			j = *(a + i) - '0';
			k += j;
		};
	};
	return k;
}



int d(char* x) {
	int y = 0;
	while (*x++) {
		y += 1;
	};
	return y;
}

void ancompress(char* &c, int d) {
	int e = pra(c, d);
	char* copy = new char[e];
	int b, m = 0;;

	for (int i = 0; i < d; i += 2) {
		b = (*(c + i) - '0');
		while (b != 0) {
			*(copy + m) = *(c + i + 1);
			b -= 1;
			m += 1;
		};
	};
	c = copy;
}




int main() {
	int n;
	char* transformation = new char[256];
	cin.getline(transformation, 256, '\n');
	n = d(transformation);

	int z = pra(transformation, n);
	ancompress(transformation, n);
	for (int i = 0; i < z; i++) {
		cout << *(transformation + i);
	};
}
