#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	int sum;
	sum = 0;
	int c;
	int a;
	cin >> a;
	while (a >= 1) {
		c = a % 10;
		if (c % 2 != 0) {
			sum = sum + c;
		};
		a = (a - c) / 10;

	}
	cout << sum;
	return 0;
}