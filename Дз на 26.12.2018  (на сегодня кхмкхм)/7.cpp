
#include "pch.h"
#include <iostream>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	int *A = new int[10];
	char B[26];
	int *C = new int[10];

	for (int i = 0; i < 10; i++) {
		A[i] = -1;
	};

	for (char i = 'a';i <= 'z';++i) {
		B[i - 'a'] = i;
	};


	if (k > 10) {
		for (int i = 9;n > k; i--) {
			if (n % k >= 10) {
				A[i] = -2;
				C[i] = n;
			} else
				A[i] = n % k;
			n /= k;
		};

		A[0] = n;
		for (int i = 0; i < 10; i++) {
			if (A[i] != -1) {
				if (A[i] == -2) {
					cout << B[C[i] % k - 10];
				}
				else {
					cout << A[i];
				};
			};
		};
	} else {
		for (int i = 9; n >= k; i--) {
			A[i] = n % k;
			n /= k;
		};
		A[0] = n;
		for (int i = 0; i < 10; i++) {
			if (A[i] != -1)
				cout << A[i];
		};
	};
	delete[] A;
	delete[] C;
	return 0;
}
