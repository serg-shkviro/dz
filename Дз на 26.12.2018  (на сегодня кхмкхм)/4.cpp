#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	unsigned long long int N, q;
	cin >> N >> q;
	long long int* A = new long long int[N + 1];
	for (unsigned long long int i = 0; i < N + 1; i++) {
		cin >> A[i];
	};

	long long int b = A[N];
	for (unsigned long long int i = N - 1; i >= 1; i--)
		b = A[i] + b * q;
	cout << A[0] + b * q;
	return 0;
}