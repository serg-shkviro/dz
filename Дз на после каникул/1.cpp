#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	int sum;
	sum = 0;
	int a;
	cin >> a;
	while (a >= 1) {
		int c = a % 10;
		if (c % 2 != 0) {
			sum += c;
		};
		a = a / 10;

	}
	cout << " Sum of all odd digits : " << sum;
	return 0;
}