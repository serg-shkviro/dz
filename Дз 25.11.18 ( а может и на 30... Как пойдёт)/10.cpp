#include "pch.h"
#include <iostream> 
using namespace std;

int primorial(bool *a, int b) {
	int m = 1;
	bool *serf = new bool[b + 1];
	serf[0] = serf[1] = 0;
	for (int i = 2; i <= b; i++) {
		serf[i] = 1;
		for (int i = 2; i <= b; i++) {
			if (serf[i]) {
				for (int k = i + i; k <= b; k += i) {
					serf[k] = 0;
				};
			};
		};
		if (serf[i] == 1) {
			m *= i;
		};
	};
	return m;
}
int main() {
	int n;
	cin >> n;
	bool *serf_2 = new bool[n + 1];
	cout << primorial(serf_2, n);
	return 0;
}