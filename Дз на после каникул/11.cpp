#include "pch.h" 
#include <iostream>
using namespace std;


int max(int *a, int b) {
	int k = *a;
	for (int i = 0; i < b; i++) {
		if (*(a + i) > k) {
			k = *(a + i);
		};
	};
	return k;
}




int min(int *x, int y) {
	int m = *x;
	for (int i = 0; i < y; i++) {
		if ((*(x + i)) < m) {
			m = *(x + i);
		};
	};
	return m;
}

int schet(int* c, int d) {
	int y = 0;
	for (int i = 0; i < d; i++) {
		if (((*(c + i)) == (max(c, d))) || ((*(c + i)) == (min(c, d)))) {
			y += 1;
		};
	};
	return y;
}

void pust (int* &w, int v) {
	int P = schet(w, v);
	int *copy = new int[v - P];
	
	int k = 0;
	for (int i = 0; i < v; i++) {
		if (((*(w + i)) != max(w, v)) && ((*(w + i)) != min(w, v))) {
			*(copy + k) = *(w + i);
			k += 1;
		};
	};
	w = copy;
}



int main() {
	int vvod;
	cin >> vvod;
	int *finish = new int[vvod];
	for (int i = 0; i < vvod; i++) {
		cin >> *(finish + i);
	};


	int f = schet(finish, vvod);
	pust(finish, vvod);
	cout << endl;
	cout << " Result: " << endl;
	for (int i = 0; i < (vvod - f); i++) {
		cout << *(finish + i) << " " << " ";
	};
	delete[]finish;
}