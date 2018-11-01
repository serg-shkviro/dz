#include "pch.h" 
#include <iostream> 
using namespace std;


int main()
{
	
	
	
	
	int ym;
	ym = 1;
	int a;
	cin >> a;
	int n;
	n = a % 10;
	while (a >= 1) {
		int c = a % 10;
		if (c % 2 == n %2 ) {
			ym *= c;
		};
		a = a / 10;

	}
	cout << " The product of digits whose parity coincides with the parity of the last digit : " << ym;
	return 0;
}