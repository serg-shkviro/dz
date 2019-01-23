#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int N, t, a, b;
	int X, Y, Y_1, Y_2;
	cin >> N;
	cin >> t;
	X = 0;
	Y = t;
	for (int i = 1; i <= N; i++) {
		cin >> a;
		cin >> b;
		X = X + a;
		Y_1 = Y + b;
		Y_2 = X + t;
		if (Y_1 < Y_2) {
			Y = Y_1;
		} else {
			Y = Y_2;
		};
	};
	cout << Y;
	return 0;
}