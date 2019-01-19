#include "pch.h"
#include <iostream>
using namespace std;
int main() {
	int n, k = 0;
	cin >> n;
	int *mass = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> mass[i];
	};


	for (int i = 0; i < n; i++) {
		if (mass[i] < 2 * mass[i - 1]) {
			k++;
		};
	};

	cout << k;
	return 0;
}