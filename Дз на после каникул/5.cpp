#include "pch.h"
#include <iostream>
using namespace std;

bool withoutdiv (int a) {
	int n = 0;
	if (a == 1) {
		return 0;
	} else {
		for (int i = 2; i <= (a / 2); i++)	{
			if ((a % i) == 0) {
				return 0;
				break;
				n += 1;
			};
		};
		if (n == 0) {
			return 1;
		};
	};
}

int main() {
	int k;
	cin >> k;
	for (int i = k; i >= 2; i--) {
		if (((k % i) == 0) && (withoutdiv(i) == withoutdiv(2))) {
			k = i;
			break;
		};
	};
	cout << k;
}