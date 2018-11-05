#include <cstdio>
using namespace std;

void snake(int** &a, int b) {
	b -= 1;

	int c = b, d = 0, k = 1;
	while (c >= d) {
		int x = c, y = d;

		while (x > d) {
			a[y][x] = k;
			k ++;
			x -= 1;
		};

		while (y < c) {
			a[y][x] = k;
			k ++;
			y ++;
		};

		while (x < c) {
			a[y][x] = k;
			k ++;
			x ++;
		};

		while (y > d) {
			a[y][x] = k;
			k ++;
			y -= 1;
		};
		d ++;
		c -= 1;
	};

	if ((b % 2) == 0) {
		a[(b / 2)][(b / 2)] = ((b + 1)*(b + 1));
	};
}

int main() {
	int n;
	scanf("%d", &n);
	int** okolo_otvet = new int*[n];
	for (int j = 0; j < n; j++) {
		*(okolo_otvet + j) = new int[n];
	};

	int opa = 3;
	if ((n*n) >= 10) {
		opa += 2;
	};

	snake(okolo_otvet, n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%*d", opa, okolo_otvet[i][j]);
		};
		printf("\n");
	};
}