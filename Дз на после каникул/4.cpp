#include "pch.h" 
#include <iostream> 
using namespace std;

bool prime(int a)
{
	int sq;
	sq = sqrt(a);
	if (a == 1)
	{
		return false;
	};
	for (int i = 2; i < sq; i++)
	{
		if (a % i == 0)
		{
			return false;
		}
		else {
			return true;
		}
	}
}

	int main()
	{
		int b;
		cin >> b;
			int *a = new int[b];
		for (int i = 0; i < b; i++)
			cin >> *(a + i);
		for (int i = 0; i < b; i++)
			cout << *(a + i);

		int sum;
		sum = 0;
			for (int i = 0; i < b; i++)
				if (prime(a[i]))
					sum += a[i];
		cout << "\n" << sum;
		return 0;
	}