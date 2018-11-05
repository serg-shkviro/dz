#include <cstdio>
using namespace std;

void krug(int **&a, int b) {
	b -= 1;
	int c = b, d = 0, k = 1;
	while (c >= d) {
		int x = d, y = d;
		
		while (x < c) {
			a[y][x] = k;
			x++;
		}; 
		
		while (y < c) {
			a[y][x] = k;
			y++;
		};
		
		while (x > d) {
			a[y][x] = k;
			x -= 1;
		};
		
		while (y > d) {
			a[y][x] = k;
			y -= 1;
		};
		
		
		c -= 1;
		d++;
		k++;
	};
	if ((b % 2) == 0) {
		a[(b / 2)][(b / 2)] = ((b / 2) + 1);
	};
}



int main() {
	int n;
	scanf("%d", &n);
	int **okolo_otvet = new int *[n];
	for (int j = 0; j < n; j++) {
		*(okolo_otvet + j) = new int[n];
	};
	krug(l, n);
	for (int i = 0; i < n; i++) {
		for (int v = 0; v < n; v++) {
			printf("%3d", okolo_otvet[i][v]);
		};
		printf("\n");
	};
}