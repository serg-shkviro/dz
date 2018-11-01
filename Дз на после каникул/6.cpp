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

		int q = *(A + i);
		for (int y = 1; y <= *(A + i); y++)
		{
			if ((q % y) == 0)
			{
				k += 1;
			};
		};
		if (k >= 5)
		{
			cout << *(A + i);
		};
	};
}