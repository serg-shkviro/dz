#include "pch.h"
#include <iostream>
using namespace std;
int main() {
int n;
setlocale(LC_CTYPE, "rus");
cout << "������� ���������� �����" << endl;
cin >> n;
double *x = new double[n-1];
double *y = new double[n-1];
double *m = new double[n-1];
double *s = new double[n-1];
for (int i = 0;i < n;i++) {
cout << " ������� �������� x[" << i << "]:";
cin >> x[i];
cout << " ������� �������� y[" << i << "]:";
cin >> y[i];
};
cout << endl;
cout << "������� �������� ������� ��� ������ ��������: ";
double X;
cin >> X;
// ����������� ��������� ��������� ��� � = �

for (int i = 0; i < n;i++) {
s[i] = 1;
m[i] = 1;
for (int j = 0; j < n; j++) {
if (i != j) {
s[i] = s[i] * (X - x[j]);
m[i] = m[i] * (x[i] - x[j]);
};
};
};
// ��������� s m!!!!!!
cout << endl;

for (int i = 0; i < n;i++) {
cout << "s[" << i << "] = " << s[i] << endl;
cout << "m[" << i << "] = " << m[i] << endl;
};

double Y;
Y = 0;
cout << endl;

for (int i = 0; i < n;i++) {
Y = Y + (y[i] * s[i] / m[i]);
};

cout << "������� �������� ������� � ����� � = " << X << " ����� " << Y << endl;
};

