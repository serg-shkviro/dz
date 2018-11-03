#include "pch.h" 
#include <iostream>
using namespace std;

int kv(int o) {
	return o * o;
}


void loading_____(int* &a, int b) {
	int	*another_copy = new int[b];
	for (int i = 0; i < b; i++) {
		*(another_copy + i) = kv(*(a + i));
	};

	int k = 2 * b;
	int *and_another_copy = new int[k];
	for (int i = 0; i < k; i++) {
		if ((i % 2) == 0) {
			*(and_another_copy + i) = *(a + (i / 2));
		} else {
			*(and_another_copy + i) = *(another_copy + ((i - 1) / 2));
		};
	};
	delete[]another_copy;
	a = and_another_copy;
}

int main() {
	int n;
	cin >> n;
	int *another_finish = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> *(another_finish + i);
	};

	loading_____(another_finish, n);
	n += n;
	for (int i = 0; i < n; i++) {
		cout << *(another_finish + i) << " " << " ";
	};
}