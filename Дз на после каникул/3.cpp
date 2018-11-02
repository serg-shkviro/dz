#include "pch.h"
#include <iostream>
using namespace std;

int c(int a, int b) {

	if (b == 0 || a == b) return 1;

	else {
		return c(a - 1, b - 1) + c(a - 1, b);
	}

}

int main() {

	 int n, k;

	cout << "Enter n and k: " << endl;
	cin >> n;
	cin >> k;

	if (k > n) cout << "(C)from(n)to(k): "<< "0";

	if (n < 0 || k < 0) cout << "(C)from(n)to(k): "<< "0";

	if (n >= k) {

		cout << "Binomial coefficient (C)from(n)to(k): ";

		cout << c( n, k);

	}

	return 0;
}