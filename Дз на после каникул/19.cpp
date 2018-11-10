#include "pch.h"
#include <iostream>
using namespace std;

int length(char* a) {
	int b = 0;
	while (*a++) {
		b++;
	};
	return b;
}


bool angr(char* x, int y, char* z, int h) {
	if (y != h) {
		return false;
	} else {
		for (int i = 0; i < y; i++) {
			int v = 0;
			for (int j = 0; j < h; j++) {
				if (*(x + i) == *(z + j)) {
					
					int k = j, g = 0;

					char* spite = new char[h - 1];
					while (g < (h - 1)) {
						for (j = 0; j < h; j++) {
							if (j != k) {
								*(spite + g) = *(z + j);
								g++;
							};
						};
					};
					z = spite;
					v++;
				};
			};
			if (v == 0) {
				return 0;
				break;
			};
		};
		return 1;
	};
};


int main() {
	int n, l;
	char* no_win = new char[256];
	cin.getline(no_win, 256, '\n');
	n = length(no_win);

	char* fin_win = new char[256];
	cin.getline(fin_win, 256, '\n');
	l = length(fin_win);
	cout << '\n';
	if (angr(no_win, n, fin_win, l) == 1) {
		cout << "Yes";
	} else {
		cout << "No";
	}
	return 0;
}