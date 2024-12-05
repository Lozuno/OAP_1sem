#include <iostream>
using namespace std;
double func(double x) {
	return exp(x) - 3 - 1 / x;
}
int main() {
	double a = 0, b = 2, e=0.0001;
	double x;
	while (abs(a - b) > 2 * e) {
		x = (a + b) / 2;
		if (func(x) * func(a) <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	}
	cout << x;
}