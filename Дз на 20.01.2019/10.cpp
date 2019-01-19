#include "pch.h"
#include <iostream>
using namespace std;
int main() {
	int n, ymn = 1;
	cin >> n;
	int *mass = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> mass[i];
	}
	for (int i = 0; i < n; i++) {
		if ((mass[i] % 2 != 0) && (mass[i] % 3 == 0)) {
			ymn*= mass[i];
		}
	}
	cout << ymn;
	return 0;
}