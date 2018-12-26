#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int ruk, val, wgt, count;
	cin >> ruk >> count;
	char *r_2 = new char[count];
	int *V = new int[count];
	int *W = new int[count];
	int *K = new int[count];
	char *N = new char[count];
	for (int i = 0; i < count; i++) {
		r_2[i] = 0;
	};

	for (int i = 0; i < count; i++) {
		cin >> N[i];
		cout << endl;
		cin >> V[i] >> W[i];
		K[i] = (double)V[i] / W[i];
	};
	int q, t;
	for (int q = 0; q < count; q++) {
		t = K[q];
		ruk -= W[q];
		for (int i = 0; i < count; i++) {
			if (N[q] != N[i])
				if (ruk + W[q] - W[i] != 0)
					if (t < K[i]) {
						t = K[i];
						r_2[q] = N[i];
						ruk += W[q];
						ruk -= W[i];
						val = V[i];
						wgt = W[i];
					};
		};
		W[q] = wgt;
		V[q] = val;
		K[q] = -1;
	};
	for (int i = 0; i < count; i++) {
		if (r_2[i] != 0)
			cout << r_2[i] << "Value " << V[i] << "Weight " << W[i] << endl;
	};

	delete[] V;
	delete[] W;
	delete[] K;
	return 0;
}