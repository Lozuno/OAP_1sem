#include <iostream>
using namespace std;
int t = 10;
double a, b, n = 200;
double func(double x) {
	switch (t) {
	case 10: {
		a = 4; b = 8;
		return x * x - 4;
	}
	case 15: {
		a = 2; b = 7;
		return sin(x) * sin(x) + 1;
	}
	case 12: {
		a = 5; b = 11;
		return exp(x) + 6;
	}
	case 4: {
		a = 2; b = 3;
		return exp(x) - 1 / x;
	}
	}
}
double res1() {
	double h = (b - a) / n, x = a, s = 0;
	while (	x <= (b - h)) {
		s += h * (func(x) + func(x + h)) / 2;
		x += h;
	}
	return s;
}
double res2() {
	double h = (b - a) / (2 * n);
	double s1 = 0, s2 = 0;
	double x = a + h;
	for (int i = 1; i < 2 * n; i++) {
		if (i % 2 == 0) {
			s1 += func(x);
		}
		else {
			s2 += func(x);
		}
		x += h;
	}
	double s = (h / 3) * (func(a) + 4 * s2 + 2 * s1 + func(b));
	return s;
}
int main() {
	cout << "var :";
	cin >> t;
	func(1);
	cout << abs(res1() - res2());
	return 0;
}
