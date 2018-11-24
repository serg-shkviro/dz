#include "pch.h"
#include <iostream> 
using namespace std;

void mul(int* a, int b, int c) {
	for (int i = 0; i < b; i++) {
		int copy = a[i];
		int m = 1;
		while (a[i] >= 1) {
			if ((a[i] % 10) != 0) {
				m *= (a[i] % 10);
			};
			if (m > c) {
				cout << copy;
				break;
			};
			*(a + i) /= 10;
		};
	};
}

int main()
{
	int n, k;
	cin >> n;
	int* serf = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> *(serf + i);
	};
	cin >> k;
	mul(serf, n, k);
}