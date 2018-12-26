#include "pch.h"
#include <iostream>

using namespace std;

bool znakomo (int *A, int size, int x, int y, int z = 0) {
	if (A[(y + z) / 2] == x) {
		return true;
	};
	if (y - z <= 1) {
		return false;
	};
	if (A[(z + y) / 2] > x) {
		znakomo(A, size, x, (z + y) / 2, z);
	};

	if (A[(z + y) / 2] < x) {
		znakomo(A, size, x, y, (z + y) / 2);
	};
}

int main() {
	int razmeeer_tipo_size_no_ne_size;
	cin >> razmeeer_tipo_size_no_ne_size;
	int *A = new int[razmeeer_tipo_size_no_ne_size];
	for (int i = 0; i < razmeeer_tipo_size_no_ne_size; i++) {
		cin >> A[i];
	}
	int a, b;
	cin >> a >> b;
	if (znakomo(A, razmeeer_tipo_size_no_ne_size, a, razmeeer_tipo_size_no_ne_size) && znakomo(A, razmeeer_tipo_size_no_ne_size, b, razmeeer_tipo_size_no_ne_size) == true) {
		cout << " YES ";
	} else {
		cout << " NO";
	};
	delete[] A;
	return 0;
}