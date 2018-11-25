#include "pch.h"
#include <iostream> 
using namespace std;

int main () {
	int n;
	cin >> n;
	bool* serf = new bool[n];
	serf[0] = serf[1] = 0;
	for (int i = 2; i <= 2 * n; i++) {
		int l = 0;
		serf[i] = 1;
		for (int i = 2; i <= 2 * n;i++) {
			if (serf[i]) {
				for (int k = i + i; k <= 2 * n; k += i) {
					serf[k] = 0;
				};
			};
		};
		if (l == n) {
			break;
		};
		if (serf[i] == 0) {
			cout << i;
			l++;
		};
	};
	return 0;
}