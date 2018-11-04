#include "pch.h"
#include <iostream>
using namespace std;

int p(char* a, int b) {
	int k = 1;
	for (int i = 0; i < (b - 1); i++) {
		if (*(a + i) != *(a + i + 1))	{
			k += 1;
		};
	};
	return k;
}
int d(char* a) {
	int b = 0;
	while (*a++) {
		b++;
	};
	return b;
}





void compress (char* &x, int y) {
	int d = p(x, y);
	d += d;
	int s = 0;
	char* copy = new char[d];



	int i = 0;
	while (i < y) {
		int letters = 0;
		int j = i;
		while (*(x + i) == *(x + j)) {
			letters += 1;
			j += 1;
		};
		*(copy + s + 1) = *(x + i);
		*(copy + s) = letters + '0';
		i = j;
		s += 2;
	};
	x = copy;
}





int main() {
	int n;
	
	char* transformation = new char[256];
	cin.getline(transformation, 256, '\n');
	n = d(transformation);



	
	int f = p(transformation, n);
	f += f;
	compress(transformation, n);
	for (int i = 0; i < f; i++) {
		cout << *(transformation + i);
	};
}
