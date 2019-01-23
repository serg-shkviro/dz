include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int max = 1001, F , min_1, min_2, min_3, multiplication_of_numbers, t = 6, N;
	cin >> N;
	int *mass = new int[t];
	for (int i = 0; i < t; i++) {
		cin >> mass[i];
	};

	min_2 = max;
	min_1 = max;
	min_3 = max * max;


	for (int i = t; i < N; i++) {
		cin >> F;
		if (mass[0] < min_2) {
			min_2 = mass[1];
		} if ((mass[0] % 2 == 0) && (mass[0] < min_1)) {
			min_1 = mass[0];
		} if (F % 2 == 0) {
			multiplication_of_numbers = F * min_2;
		} else
			if (min_1 < max) {
			multiplication_of_numbers = F * min_1;
		} else {
			multiplication_of_numbers = max * max;
		} if (multiplication_of_numbers < min_3) {
			min_3 = multiplication_of_numbers;
			for (int j = 0; j < t - 1; j++) {
				mass[j] = mass[j + 1];
				mass[t] = F;
			};
		};
	
	
	}
	if (min_3 == max * max) {
		min_3 = -1;
	};


	cout << min_3;
	return 0;
}
