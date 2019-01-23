#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int A, X = 1001, N = 0, K = 0, max = 0;

	do {
		cin >> A;
		if (A != 0) {
			N++;
		} if (A > X) {
			K = K + A - X;
		} else
			if (K > max) {
			max = K;
			K = 0;//??
			};
		X = A;
	} while (A != 0);
	cout << N << "  numbers have received ";
	cout << "Highest lift height is " << max;
	return 0;
}