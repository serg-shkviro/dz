#include "pch.h"
#include <iostream>

using namespace std;

bool proverka_na_2_stepen(long long n) {
	long long squareRootN = (long long)(sqrt((double)n) + 0.5);
	return squareRootN * squareRootN == n;
}


int main() {
	int x, y;
	cin >> x >> y;
	bool *mass = new bool[y + 1];
	for (long long i = 0; i <= y; i++) {
		if (i == x) {
			mass[i] = 1;
		} else if (i <= x) {
			mass[i] = 0;
		} else if ((proverka_na_2_stepen(i) == true) && (i % 7 == 0) && (i % 10 == 1)) {
			mass[i] = mass[i - 9] || mass[(int)sqrt(i)] || mass[i / 7] || mass[(i - 1) / 10];
		} else if ((proverka_na_2_stepen(i) == true) && (i % 7 == 0) && (i % 10 != 1)) {
			mass[i] = mass[i - 9] || mass[(int)sqrt(i)] || mass[i / 7];
		} else if ((proverka_na_2_stepen(i) == true) && (i % 7 != 0) && (i % 10 == 1)) {
			mass[i] = mass[i - 9] || mass[(int)sqrt(i)] || mass[(i - 1) / 10];
		} else if ((proverka_na_2_stepen(i) == true) && (i % 7 != 0) && (i % 10 != 1)) {
			mass[i] = mass[i - 9] || mass[(int)sqrt(i)];
		} else if ((proverka_na_2_stepen(i) == false) && (i % 7 != 0) && (i % 10 != 1)) {
			mass[i] = mass[i - 9];
		} else if ((proverka_na_2_stepen(i) == false) && (i % 7 == 0) && (i % 10 == 1)) {
			mass[i] = mass[i - 9] || mass[i / 7] || mass[(i - 1) / 10];
		} else if ((proverka_na_2_stepen(i) == false) && (i % 7 == 0) && (i % 10 != 1)) {
			mass[i] = mass[i - 9] || mass[i / 7];
		} else if ((proverka_na_2_stepen(i) == false) && (i % 7 != 0) && (i % 10 == 1)) {
			mass[i] = mass[i - 9] || mass[(i - 1) / 10];
		};
	};

	if (mass[y] == 1) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}