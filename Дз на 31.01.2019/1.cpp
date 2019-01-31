#include "pch.h"
#include <iostream>

using namespace std;

class double_vector {
	double* Data;
	unsigned int vectorSize;
	unsigned int vectorCapacity;

public:
	
	
	double_vector() {
		vectorSize = vectorCapacity = 1;
		Data = new double[1];
		*Data = 0;
	};
	double_vector(unsigned int N) {
		vectorSize = vectorCapacity = N;
		Data = new double[N];
		for (int i = 0; i < N; i++) 
			Data[i] = 0;
		
	};
	double_vector(double* A, unsigned int N) {
		vectorSize = vectorCapacity = N;
		for (int i = 0; i < N; i++) 
			Data[i] = A[i];
	};
	double_vector(const double_vector& A) {
		vectorSize = A.vectorSize;
		vectorCapacity = A.vectorCapacity;
		Data = A.Data;
	};
	~double_vector() {
		delete[] Data;
	};
	const double_vector& operator=(const double_vector& A) {
		vectorSize = A.vectorSize;
		vectorCapacity = A.vectorCapacity;
		Data = A.Data;
		return *this;
	};
	double &operator[] (int i) {
		return Data[i];
	};
	void push_back(int x) {
		if (vectorSize >= vectorCapacity) {
			vectorCapacity *= 2;
			double* T = new double[vectorCapacity];
			for (int i = 0; i < vectorSize; i++) 
				T[i] = Data[i];
				delete[] Data;
				Data = T;
		};
		Data[vectorSize] = x;
		vectorSize++;
	};
	double pop_back() {
		double T = Data[vectorSize - 1];
		delete (Data + vectorSize - 1);
		vectorSize--;
		return T;
	};
	unsigned int Size() {
		return vectorSize;
	};
	unsigned int Capacity() {
		return vectorCapacity;
	};
	void resize(unsigned int N) {

		vectorCapacity += N;
		double* T = new double[vectorCapacity];
		for (int i = 0; i < vectorSize; i++)
			T[i] = Data[i];
		delete[] Data;
		Data = T;
	};
	void push_front(double x) {
		if (vectorSize >= vectorCapacity) {
			vectorCapacity *= 2;
			double* T = new double[vectorCapacity];
			for (int i = 1; i < vectorSize + 1; i++)
				T[i] = Data[i];
			delete[] Data;
			Data = T;
		} else {
			double* T = new double[vectorCapacity];
			for (int i = 1; i < vectorSize + 1; i++)
				T[i] = Data[i];
			delete[] Data;
			Data = T;
		};
		vectorSize++;
	};
	int pop_front() {
		double T = Data[0];
		delete (Data + 0);
		vectorSize--;
		return T;
	};
	void insert(double x, int k) {
		if (vectorSize >= vectorCapacity) {
			vectorCapacity *= 2;
			double* T = new double[vectorCapacity];
			for (int i = 1; i < k; i++)
				T[i] = Data[i];
			for (int i = k + 1; i < vectorSize; i++)
				T[i] = Data[i - 1];
			delete[] Data;
			Data = T;
		};
		Data[k] = x;
	};
	void erase(int k) {
		delete (Data + k);
		vectorSize--;
	};
	void erase(int a, int b) {
		if (a > b) {
			int T = b;
			b = a;
			a = T;
		};
		int length = b - a;
		for (int i = 1; i <= b; i++)
			delete (Data + i);
		vectorSize -= length;
	};
};

double_vector &operator+ (double_vector& A, double_vector& B ) {
	unsigned int a = A.Size(), b = B.Size();
	double_vector T(a + b);
	for (int i = 0; i < a; i++)
		T[i] = A[i];
	for (int i = a; i < a + b; i++)
		T[i] = B[i - a];
	return T;
};

int main( ) {
	double_vector A();
	cout << A[0] << '\n';  // without ponatie chto ne tak
	int N, k, x, a, b;
	cin >> N;
	double_vector B(N);
	for (int i; i < N; i++)
		cout << B[i] << ' ';
	cout << '\n';
	cin >> N;
	double* T = new double(N);
	for (int i; i < N; i++)
		cin >> T[i];
	double_vector C(T, N);
	cin >> x;
	C.push_front(x);
	cout << C.pop_front() << '\n';
	cin >> x;
	C.push_back(x);
	cout << C.pop_back() << '\n';
	cin >> k >> x;
	C.insert(x, k);
	cin >> a;
	C.erase(a);
	cin >> a >> b;
	C.erase(a, b);
	double_vector D = C + B;
	for (int i = 0; i < D.Size(); i++)
		cout << D[i] << ' ';
	return 0;
};


