#include "pch.h"
#include <iostream>
using namespace std;

struct Date {
	int Day;
	int Month;
	int Year;

	Date() {
		Day = 0;
		Month = 0;
		Year = 0;
	}

	void input() {
		cin >> Day >> Month >> Year;
	}

	void output() {
		if ((Day / 10) == 0) {
			cout << 0;
		};
		cout << Day << ".";
		
		if ((Month / 10) == 0) {
			cout << 0;
		};
		cout << Month << "." << Year;
	}

	bool every_four() {
		if ((Year % 400) == 0) {
			return true;
		} else {
			if ((Year % 100) == 0) {
				return false;
			} else {
				if ((Year % 4) == 0) {
					return true;
				} else {
					return false;
				};
			};
		};
	}

	int nado_echo_ito_prodymat() {
		if (Month == 2) {
			if (every_four()) {
				return 29;
			} else {
				return 28;
			};
		} else {
			if (((Month <= 7) && (((Month % 2) != 0))) || ((Month >= 8) && ((Month % 2) == 0))) {
				return 31;
			} else {
				return 30;
			};
		};
	}

	int residue() {
		int k = 0;
		while (Month < 12) {
			k += nado_echo_ito_prodymat();
			Month++;
		};
		while (Day <= 31) {
			k++;
			Day++;
		};
		return k;
	}
};

int main() {
	Date suicide_ne_vixod;

	suicide_ne_vixod.input();
	suicide_ne_vixod.output();
	cout << '\n';

	cout << suicide_ne_vixod.residue();
}