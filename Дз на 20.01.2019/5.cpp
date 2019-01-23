#include "pch.h"
#include <iostream>
#include <cmath>
#include <limits.h>




using namespace std;
// no god please stop

int _1(int a, int b, int c, int d) {
	if (a <= b && a <= c && a <= d) {
		return a;
	} else if (b <= a && b <= c && b <= d) {
		return b;
	} else
		if (c <= a && c <= b && c <= d) {
		return c;
	} else {
		return d;
		};
};

int _2(int x, int y, int z) {
	if (x <= y && x <= z) {
		return x;
	} else
		if (y <= z) {
		return y;
		};
	return z;
};

int _3(int a, int b) {
	if (a <= b) {
		return a;
	};
	return b;
};

int reans(int *a, int *step, int b, int c) {
	if (a[b - 1] + 1 == a[b]) {
		step[c] = 1;
		return b - 1;
	} else
		if (a[b - 4] + 1 == a[b]) {
		step[c] = 2;
		return b - 4;
	} else
			if (a[b - 5] + 1 == a[b]) {
		step[c] = 3;
		return b - 5;
	} else
				if (a[b / 2] + 1 == a[b]) {
		step[c] = 4;
		return b / 2;
				};
};

int main() {
	setlocale(LC_ALL, "Russian");

	int x, y;
	cin >> x;
	cin >> y;
	int *mass = new int[y + 1];
	for (long long i = 0; i <= y; i++) {
		if (i == x) {
			mass[i] = 1;
		} else
			if (i < x) {
			mass[i] = INT_MAX;
		} else
				if ((i % 2 == 0) && (i >= 5)) {
			mass[i] = _1(mass[i - 1], mass[i - 4], mass[i - 5], mass[i / 2]) + 1;
		} else
				if ((i % 2 == 0) && (i < 5) && (i >= 4)) {
			mass[i] = _2(mass[i - 1], mass[i - 4], mass[i / 2]) + 1;
		} else
				if ((i % 2 == 0) && (i < 4) && (i >= 1)) {
			mass[i] = _3(mass[i - 1], mass[i / 2]) + 1;
		} else
				if ((i % 2 != 0) && (i >= 5)) {
			mass[i] = _2(mass[i - 1], mass[i - 4], mass[i - 5]) + 1;
		} else
				if ((i % 2 != 0) && (i < 5) && (i >= 4)) {
			mass[i] = _3(mass[i - 1], mass[i - 4]) + 1;
		} else 
				if ((i % 2 != 0) && (i < 4) && (i >= 1)) {
			mass[i] = mass[i - 1] + 1;
				};
	};

	int size = mass[y];
	int *step = new int[size];
	int l = y;
	for (long long i = size - 1; i >= 0; i--) {
		l = reans(mass, step, l, i);
	};

	for (long long i = 0; i <= size; i++) {
		if (step[i] == 1) {
			cout << "+ 1" << "\n";
		} else
			if (step[i] == 2) {
			cout << "+ 4" << "\n";
		} else
			if (step[i] == 3) {
			cout << "+ 5" << "\n";
		} else
			if (step[i] == 4) {
			cout << "* 2" << "\n";
			};
	};
	return 0;
}

