#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int max = 100, N, D, K, numb;
	int u;
	int *mass = new int[max - 1];
	for (int i = 0; i < max - 1; i++) {
		mass[i] = 0;
	};
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> D >> K;
		u = K % D;
		if (u > 0) {
			mass[u] = mass[u] + 1;
		};
	};

	numb = 1;
	for (int i = 1; i < max - 1; i++) {
		if (mass[i] >= mass[numb]) {
			numb = i;
		};
	} if (mass[numb] == 0) {
		numb = 0;
	};
	cout << numb;
	return 0;
}

