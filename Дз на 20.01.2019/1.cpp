#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	

	int x, y;
	cin >> x >> y;
	long long *mass = new long long[y + 1]; 
	// int  and unsigned int no match

	for (long long i = 0; i <= y; i++) {
		if (i == x) {
			mass[i] = 1;
		} else if (i <= x) {
			mass[i] = 0;
		} else if ((i % 2 == 0) && (i % 3 == 0)) {
			mass[i] = mass[i - 1] + mass[i / 2] + mass[i / 3];
		} else if ((i % 2 == 0) && (i % 3 != 0)) {
			mass[i] = mass[i - 1] + mass[i / 2];
		} else if ((i % 2 != 0) && (i % 3 == 0)) {
			mass[i] = mass[i - 1] + mass[i / 3];
		}
		else if ((i % 2 != 0) && (i % 3 != 0)) {
			mass[i] = mass[i - 1];
		};
	};

	cout << mass[y];
	return 0;
}