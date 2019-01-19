#include "pch.h"
#include <iostream>
using namespace std;
// no effffectivna
int min(int a, int b) {
	if (a < b) {
		return a;
	};
	return b;
};

int min_sum(int *x, int y) {
	int ans = 2147483647;
	// predel int
	for (int i = 0; i < y - 5; i++) {
		for (int j = i + 5; j < y; j++) {
			ans = min(ans, x[i] + x[j]);
		};
	};
	return ans;
};

int main() {
	int y_1;
	cin >> y_1;
	int *mass = new int[y_1];
	for (int i = 0; i < y_1; i++) {
		cin >> mass[i];
	};

	cout << min_sum(mass, y_1);
	return 0;
}