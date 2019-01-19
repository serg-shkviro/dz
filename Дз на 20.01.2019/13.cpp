#include "pch.h"
#include <iostream>
using namespace std;

int max(int a, int b) {
	if (a > b) {
		return a;
	};
	return b;
};
// for 

int max_ymn(int *x, int y) {
	int result = 0;
	for (int i = 0; i < y - 5; i++) {
		for (int j = i + 5; j < y; j++) {
			result = max(result, x[i] * x[j]);
		};
	};
	return result;
};

int main() {
	int q;
	cin >> q;
	int *mass = new int[q];
	for (int i = 0; i < q; i++)	{
		cin >> mass[i];
	};
	cout << max_ymn(mass, q);
	return 0;
}
