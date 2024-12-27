#include <iostream>
using namespace std;
double func(double x) {
	return x * x - 4;
}
double res1() {
	double a = 4, b = 8, n = 200;
	double h = (b - a) / n, x = a, s = 0;
	while (!(x > (b - h))) {
		s += h * (func(x) + func(x + h)) / 2;
		x += h;
	}
	return s;
}
double res2() {
	double a = 4, b = 8;
	int n = 200;
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
	cout << res1() - res2() << endl;
	return 0;
}
