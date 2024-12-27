#include <iostream>
using namespace std;
int main()  {
	float s = 7.4, m = 10, f = 3.2e4;
	float k = 0;
	while (k < 4) {
		float y = s / log(5.2 * f) / (exp(-s) + 2);
		float v = (1 + m * y - m * k) / log(y);
		cout << "y=" << y << endl;
		cout << "v=" << v << endl;
		k += 0.5;
	}
	return 0;
}