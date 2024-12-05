#include <iostream>
using namespace std;
int main()	{
	setlocale(LC_ALL, "Russian");
	cout << "Номер варианта:";
	int var;
	cin >> var;
	switch (var) {
		case 14: {
			double a = 1.5, b = -8.1, j = 4, t = 4e-8;
			double s, w, v;
			s = sqrt(t * a / t + 1) + 4 * exp(2 * b);
			w = s * a / (1 + 0.1 * a);
			v = s + j * sqrt(pow(a, 2) + pow(b, 2));
			printf("s=%lf\n", s);
			printf("w=%lf\n", w);
			printf("v=%lf\n", v);
			return 0;
		}
		case 13: {
			double d = 0.5e-8, c = 9, a = 1.5, t, y;
			t = (d * c + a * sqrt(c - 1));//при c=-9 корень будет от отрицательного числа, поэтому я заменил c на 9
			y = 0.5 * t / d + exp(a);
			printf("t=%lf\n", t);
			printf("y=%lf\n", y);
			return 0;
		}
		case 10: {
			double z = 1.7, a = 4e-8, m = 3, n = 3, y, s;
			y = (z + log(z)) / (exp(-3) + sqrt(a));
			s = (1 + m * n) / log(1 + z);
			printf("y=%lf\n", y);
			printf("s=%lf\n", s);
			return 0;
		}
		case 8: {
			double x = 0.1, j = 12, y = 5e-6;
			double s, t;
			s = 0.4 * x - 1 / j * tan(y);
			t = s - sin(s);
			printf("s=%lf\n", s);
			printf("t=%lf\n", t);
			return 0;
		}
		case 2: {
			double n = 2, b = -0.12, x = 1.3e-4;
			double z, y;
			z = 1 / (x - 1) + sin(x) - sqrt(n);
			y = (exp(-b) + 1) / (2 * z);
			printf("z=%lf\n", z);
			printf("y=%lf\n", y);
			return 0;
		}
		default: {
			double t, u, k = 4, a = 4.1, x = 5e-5;
			t = 2 * tan(k) / a + log(3 + x) + exp(x);
			u = sqrt(t + 1) - sin(x) * cos(t);
			printf("t=%lf\n", t);
			printf("u=%lf\n", u);
			return 0;
		}
	}
}