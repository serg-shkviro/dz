#include "pch.h"
#include <iostream>
using namespace std;

double sq(double n) {
	
	for (double i = 0; 0==0; i += 0.001) {
		if (i*i <= n && (i + 0.001)*(i + 0.001) >= n) {
			return i;
			break;

		};
	};
}

double se(double n)
{

	for (double i = 0; 0 == 0; i += 0.001)
	{
		if ((i * i * i <= n) && ((i + 0.001) * (i + 0.001) * (i + 0.001) >= n)) {
			return i;
			break;
		};
	};
}


int main() {
	int z;
	cin >> z;
	cout << "sqrt" << sq(z) << endl;
	cout << " kub koren" << se(z);
	return 0;
	
}