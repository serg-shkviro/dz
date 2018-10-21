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

	rational(rational* other) {
		numerator = other->numerator;
		denominator = other->denominator;
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
		rational* c = new rational(numerator, denominator);
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

istream& operator>> (istream& stream, rational& rat)
{
	stream >> rat.numerator >> rat.denominator;
	return stream;
}

ostream& operator<< (ostream& stream, rational& rat)
{
	stream << rat.numerator << "/" << rat.denominator;
	return stream;
}


int main() {
	rational* x = new rational(0, 1);
	rational* y = new rational(0, 1);

	cin >> *x;
	cin >> *y;

	rational* a = new rational(x);
	rational* b = new rational(y);
	a->mult(*b);
	cout << " mult " << endl;
	//cout << a->numerator << "|" << a->denominator << endl;
	cout << *a << endl;

	a = new rational(x);
	b = new rational(y);
	a->sum(*b);
	cout << " sum " << endl;
	//cout << a->numerator << " | " << a->denominator << endl;
	cout << *a << endl;

	a = new rational(x);
	b = new rational(y);
	a->sub(*b);
	cout << " sub " << endl;
	//cout << a->numerator << " | " << a->denominator << endl;
	cout << *a << endl;

	a = new rational(x);
	b = new rational(y);
	a->div(*b);
	cout << " div " << endl;
	//cout << a->numerator << " | " << a->denominator << endl;
	cout << *a << endl;

	a = new rational(x);
	b = new rational(y);
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