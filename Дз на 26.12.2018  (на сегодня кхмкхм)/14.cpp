#include "pch.h"
#include <iostream>
#include<cmath>

using namespace std;

int main() {

	int n,q;
	cin >> n;
	for (;;) {
		if (n == 0) {
			break;
		};
		q = sqrt(n);
		n = n - q * q;
		cout << q ;
	};
}