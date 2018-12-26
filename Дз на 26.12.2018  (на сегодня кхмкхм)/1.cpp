#include "pch.h"
#include <iostream>

using namespace std;

int letsgoy(int *A, int m, int l_0) {
	if (m != l_0) {
		swap(A[m + rand() % (l_0 - m)], A[l_0]);
	};
	int x = A[l_0];
	int z = m - 1;
	for (int i = m; i <= l_0; i++) {
		if (A[i] <= x)
			swap(A[++z], A[i]);
	};
	return z;
}

int chetam(int *A, int b, int k) {
	int m = 0, l_0 = b;
	for (;;) {
		int agr = letsgoy(A, m, l_0);
		if (agr < k) {
			m = agr + 1;
		} else
			if (agr > k) {
				l_0 = agr - 1;
		} else
				return A[k];
	}
}

int main() {
	int k;
	int n;
	cin >> n;
	int* array = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	};
	cin >> k;
	cout << chetam(array, n, k);
	return 0;
}