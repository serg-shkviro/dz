#include "pch.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool CHECHNA(int n) {
	int i = 3, k;
	bool f;
	k = sqrt(n);
	f = n != 1;
	if (n > 2 && n % 2 == 0) {
		f = false;
	} else {
		while (i <= k) {
			if (n % i == 0) {
				f = false;
				break;
			};
			i = i + 2;
		};
		return f;
	};
};




int main() {
	int n, i;
	cin >> n;
	for (i = 1; i < n;i++) {
		if (CHECHNA(i))
			cout << i << " ";
	};
}
