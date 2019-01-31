
#include "pch.h"
#include <iostream>
#include <utility>

using namespace std;

class CycleArray {
public:
	pair <int, int>* Data;
	int b = 0;
	int size;
	
	
	CycleArray(int N) {
		size = N;
		Data = new pair <int, int>[N];
	};
	CycleArray(CycleArray& A) {
		size = A.size;
		Data = A.Data;
	};
	~CycleArray() {
		delete[] Data;
	};
	pair <int, int> &operator[](int i) {
		while (i >= size) {
			i -= size;
		};
		return Data[i];
	};
	

	void input() {
		int j, a, b;
		for (int i = b; i < size + b; i++) {
			j = i;
			while (j >= size) {
				j -= size;
				cin >> a >> b;
				Data[j] = make_pair(a, b);
			};
		};
	};
	
	void output() {
		int j;
		for (int i = b; i < size + b; i++) {
			j = i;
			while (j >= size) {
				j -= size;
				cout << Data[j].first << " ";
			    cout << Data[j].second << "\n";
			};
		};
	};
	
	 int Move(int n) {
		b += n;
	 };
};

int main() {
	int N, n;
	cin >> N;
	CycleArray A(N);
	A.input();
	A.output();
	cin >> n;
	A.Move(n);
	A.output();
}

