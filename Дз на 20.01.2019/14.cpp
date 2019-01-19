#include "pch.h"
#include <iostream>
using namespace std;
// oh no. effect...
int main() {
	int n, a = 0, b = 0,x,y = 5;
	cin >> n;
	int *mass = new int[y - 1];
	for (int i = 0; i < y; i++) {
		cin >> x;
		mass[i % y] = x;
	};

	for (int i = y; i < n; i++) {
		cin >> x;
		if (mass[i % y] > b) {
			b = mass[i % y];
		} if (x + b > a) {
			a = x + b;
			mass[i % y] = x;
		};
	};

	cout << a;
	return 0;
}