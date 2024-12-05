#include <iostream>
#include <cmath>
using namespace std;
int main()  {
	double s = 7.4, f = 3.2e4;
	double k[3] = {4,0.5,8};
	for (int i = 0; i < 3; i++) {
		double m = 0.3;
		while (m < 0.7) {
			double y = s / log(5.2 * f) / (exp(-s) + 2);
			double v = (1 + m * y - m * k[i]) / log(y);
			cout << "y=" << y << endl;
			cout << "v=" << v << endl;
			m += 0.1;
		}
	}
}