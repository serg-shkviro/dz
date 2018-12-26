#include "pch.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int opana_kod_dlinoy_metr(int a, int b, int c, int d) {
	int pole = 1000000;
	pole = abs(a - c) + abs(b - d);
	return pole;
}

int main() {
	int N, M;
	cin >> N >> M;
	bool **X;

	X = new bool *[M];
	for (int i = 0; i < N; i++) {
		X[i] = new bool[N];
	};

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cin >> X[j][i];
		};
	};
	int gr = 1000000;
	int rg = gr;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (X[j][i] != 0) {
				for (int t = i; t < M; t++) {
					for (int q = j; q < N; q++) {
						if (X[q][t] != 0 && (q != j || t != i)) {
							rg = opana_kod_dlinoy_metr(i, j, t, q);
							if (rg <= gr) {
								gr = rg;
							};
						};
					};
				};
			};
		};
	};
	cout << gr; 
	
	for (int i = 0;i < M; i++) {
		delete[] X[i];
	};

	delete[] X;
	return 0;
}
