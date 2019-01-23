#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int predel = 2147483646, n, x, y, max, min, sum = 0, l;
	l = predel + 1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		cin >> y;
		if (x > y) {
			min = y;
			max = x;
		} else {
			min = x;
			max = y;
		};
		sum += max;
		if ((max - min) % 3 != 0 && max - min < l) {
			l = max - min;
		};
	} if (sum % 3 == 0) {
			if (l > predel) {
				sum = 0;
			} else {
				sum -= l;
			};
		};
		cout << sum;
		return 0;
	}