#include "pch.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
bool serf(int n) {
	int i = 2, k;
	k = sqrt(n);
	while (n% i != 0 && i <= k) {
		i++;
	}
	return i > k;
}
int main() {
	int i, n, m = 0;
	cin >> n;
	for (i = 1; i < n;i++) {
		if (serf(i) && serf(i * 2 + 1))
		{
			cout << i << ' ';
			m = 1;
		}
	}
	if (m == 0)
		cout << m;

	return 0;
}