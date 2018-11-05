#include "pch.h"
#include <iostream>
using namespace std;

bool palindrom(char *a, int b) {
	b -= 1;
	int k = 0;
	for (int i = 0; i <= ((b - 1) / 2); i++) {
		if (a[i] != a[b - i]) {
			k += 1;
		};
	};
	return (k == 0);
}

int distance(char* x) {
	int y = 0;
	while (*x++) {
		y++;
	};
	return y;
}

int main() {
	int n;
	char* okolo_otvet = new char[256];
	cin.getline(okolo_otvet, 256, '\n');
	n = distance(okolo_otvet);

	if (palindrom(okolo_otvet, n) == 1) {
		cout << "Yes";
	} else {
		cout << "No";
	};
}