#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double s = 7.4, m = 10, f = 3.2e4;
	double k[3] = { 4,0.5,8 };
	for (int i = 0; i < 3; i++) {
		double y = s / log(5.2 * f) / (exp(-s) + 2);
		double v = (1 + m * y - m * k[i]) / log(y);
		cout << "y=" << y << endl;
		cout << "v=" << v << endl;
	}
	return 0;
}
