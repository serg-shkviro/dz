#include "pch.h"
#include <iostream>
using namespace std;

bool a_a(double a) {
	return (a >= 0);
}

double f(double a) {
	return (a * a * a);
}

int main() {
	double accuracy, start = 0, spread = 7;   //stavly chto xochy zakonom ne zapresheno
	double l_1 = (start - spread), l_2 = (start + spread);
	cin >> accuracy;




	while (a_a(f(l_1)) == a_a(f(l_2))) {
		l_1 -= spread;
		l_2 += spread;
	};

	double d = (l_2 - l_1);
	while ((f(start) != 0) && (a_a(f(start - accuracy)) == a_a(f(start + accuracy)))) {
		d /= 2;
		if (a_a(f(l_1)) != a_a(f(start))) {
			l_2 -= d;
			start -= (d / 2);
		} else {
			l_1 += d;
			start += (d / 2);
		};
	};
	cout << start;
}