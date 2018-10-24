#include "pch.h"
#include <iostream>
using namespace std;

struct Array
{
	int n;
	double* data;

	Array(int a)
	{
		n = a;
		data = new double[a];
	};

	Array(const Array & A)
	{
		n = A.n;
		data = A.data;
	};

	~Array()
	{
		delete [] data;
	};

	void input()
	{
		for (int i = 0; i < n; i++)
			cin >> *(data + i);
	};

	void output()
	{
		for (int i = 0; i < n; i++)
			cout << *(data + i);

	};

	double &operator [](int i)
	{
		return data[i];
	};

	double Max()
	{
		double H = *data;
		for (int i = 0; i < n; i++)
			if (*(data + i) > H)
			{
				H = *(data + i);
			}
		return H;
	};

	double Min()
	{
		double c = *data;
		for (int i = 0; i < n; i++)
			if (*(data + i) < c)
			{
				c = *(data + i);
			};
		return c;
	};

	double Avg()
	{
		double s = 0;
		for (int i = 0; i < n; i++)
		{
			s += *(data + i);
		};
		return (s / n);
	};
};


int main()
{
	int N;
	cin >> N;

	Array serf(N);
	serf.input();
	serf.output();


	cout << "\n" << "Max value: " << serf.Max() << endl;
	cout << "Min value: " << serf.Min() << endl;
	cout << "Average value: " << serf.Avg() << endl;


	cout << "First element: " << serf[0]  << "\n" << "Last element: " << serf[N - 1] << endl;
	

	return 0;
}