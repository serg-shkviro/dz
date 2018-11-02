#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int *A = new int[n];

	for (int i = 0; i < n; i++)
	{
		int k = 0;
		cin >> *(A + i);

		int e = *(A + i);
		for (int j = 1; j <= *(A + i); j++) if ((e % j) == 0) k += 1;

		if (k == 7) {
			cout << "Number with 7 divisors" << *(A + i);
		}
	}
	return 0;
}