#include <iostream>
using namespace std;
int main() {
	double a = 1.055, x = 0.6;
	for (int n = 6; n <= 14; n += 2) {
		double y = pow(cos(x * x / abs(x)), 2);
		double z = y < (a * x * n) ? abs(y) : sqrt(1 + exp(-y));
		cout << "y=" << y << ' ';
		cout << "z=" << z << endl;
	}
	return 0;
}