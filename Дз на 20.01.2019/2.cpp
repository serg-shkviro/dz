#include "pch.h"
#include <iostream>

using namespace std;

int main() {

	int x, y, z;
	cin >> x >> y >> z;
	long long *mass = new long long[y + 1];
	// no int
	for (long long i = 0; i <= y; i++) {
		if (i == x) {
			mass[i] = 1;
		} else if (i <= x) {
			mass[i] = 0;
		} else if (i == z) {
			mass[i] = 0;
		} else if ((i % 2 != 0) && (i % 10 == 0)) {
			mass[i] = mass[i - 1] + mass[(i - 1) / 2] + mass[i / 10];
		} else if ((i % 2 != 0) && (i % 10 != 0)) {
			mass[i] = mass[i - 1] + mass[(i - 1) / 2];
		} else if ((i % 2 == 0) && (i % 10 == 0)) {
			mass[i] = mass[i - 1] + mass[i / 2] + mass[i / 10];
		} else if ((i % 2 == 0) && (i % 10 != 0)) {
			mass[i] = mass[i - 1] + mass[i / 2];
		};
	};
	// check 2 4 3
	cout << mass[y];
	return 0;

}