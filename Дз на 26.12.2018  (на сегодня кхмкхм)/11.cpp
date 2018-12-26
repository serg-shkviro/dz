#include "pch.h"
#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	int* A = new int[n];
	bool* B = new bool[n];
	int* C = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> A[i];
		B[i] = 1;
		C[i] = 0;
	};
	for (int j = 0; j < n; j++) {
		if (B[j] != 0) {
			C[j]++;
			for (int i = j + 1; i < n; i++) {
				if (B[i] != 0) {
					if (A[j] == A[i]) {
						B[i] = 0;
						C[j]++;
					};
				};
			};
		};
	};

	int z = 0, x, y = 1;
	for (int i = 0; i < n; i++) {
		if (B[i] != 0) {
			if (z < C[i]) {
				z = C[i];
				x = A[i];
			};
		};
		if (B[i] == 0)
			y++;
	};
	if (y == n) {
		cout << "NO ";
	} else {
		cout << x;
	};
	return 0;
}
