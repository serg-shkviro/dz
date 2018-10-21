#include <iostream>
using namespace std;

struct rational {
	int numerator;
	int denominator;

	rational(int a, int b) {
		numerator = a;
		denominator = b;
		reduction();
	}

	void reduction() {
		int ab = nod(numerator, denominator);
		numerator = numerator / ab;
		denominator = denominator / ab;
	}

	rational*sum(rational b)
	{
		numerator = numerator * b.denominator + b.numerator*denominator;
		denominator = denominator * b.denominator;
		reduction();
		return this;
	}


	rational* mult(rational b)
	{
		numerator = numerator * b.numerator;
		denominator = denominator * b.denominator;
		reduction();
		return this;
	}


	rational* sub(rational b)
	{
		numerator = numerator * b.denominator - b.numerator*denominator;
		denominator = denominator * b.denominator;
		reduction();
		return this;
	}

	rational* div(rational b)
	{
		numerator = numerator * b.denominator;
		denominator = denominator * b.numerator;
		reduction();
		return this;
	}

	int comp(rational b)
	{
		rational* c = new rational (numerator,denominator);
		c->sub(b);




		if (c->numerator > 0 && c->denominator < 0) 
		{
			return -1;
		}
		if (c->numerator < 0 && c->denominator > 0)
		{
			return -1;
		}
		if (c->numerator == 0)
		{
			return 0;
		}
		if (c->numerator > 0 && c->denominator > 0)
		{
			return 1;
		}

		if (c->numerator < 0 && c->denominator < 0)
		{
			return 1;
		}
		return 0;
	}

};

	

	int main() {
		int x1, y1, x2, y2;

		cin >> x1;
		cin >> y1;
		cin >> x2;
		cin >> y2;

		rational* a = new rational(x1, y1);
		rational* b = new rational(x2, y2);
		a->mult(*b);
		cout << " mult " << endl;
		cout << a->numerator << "|" << a->denominator << endl;

		a = new rational(x1, y1);
		b = new rational(x2, y2);
		a->sum(*b);
		cout << " sum " << endl;
		cout << a->numerator << " | " << a->denominator << endl;


		a = new rational(x1, y1);
		b = new rational(x2, y2);
		a->sub(*b);
		cout << " sub " << endl;
		cout << a->numerator << " | " << a->denominator << endl;


		a = new rational(x1, y1);
		b = new rational(x2, y2);
		a->div(*b);
		cout << " div " << endl;
		cout << a->numerator << " | " << a->denominator << endl;

		a = new rational(x1, y1);
		b = new rational(x2, y2);
		a->comp(*b);
		cout << " comp " << endl;
		cout << a->comp(*b);

	}















	int nod(int a, int b)
	{
		if (a < b) {
			swap(a, b);
		}
		if (b == 0) {
			return 1;
		}
		int q = a / b;
		int r = a - b * q;
		int r1 = b;
		while (r > 0) {
			r1 = r;
			q = b / r;
			r = b - r * q;
			b = r1;
		}
		return r1;
	}