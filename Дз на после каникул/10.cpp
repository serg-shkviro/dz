#include "pch.h" 
#include <iostream> 
using namespace std;

int chetnie(int *a, int b) {
	int k = 0;
	for (int i = 0; i < b; i++) {
		if (((*(a + i)) % 2) == 0) {
			k += 1;
		};
	};
	return k;
}

void nochdelete(int* & x, int y) {

	int P = chetnie(x, y);
	int* copy = new int[y - P];
	int j = 0;
	for (int i = 0; i < y; i++) {
		if (((*(x + i)) % 2) != 0) {
			*(copy + j) = *(x + i);
			j += 1;
		};
	};

	delete[] x;
	x = copy;
}

int main() {
	int n;
	cin >> n;
	int *finish = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> *(finish + i);
	};
	int c = chetnie(finish, n);
	nochdelete(finish, n);
	for (int i = 0; i < (n - c); i++) {
		cout << *(finish + i) ;
	};
	delete[ ] finish;
}