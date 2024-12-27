#include <iostream>
using namespace std;
int main() {
	double p, q;
	cin >> p >> q;
	int d = 1;
	while (p < q) {
		p += p * 0.03;
		d++;
	}
	cout << "p=" << p << endl;
	cout << "d=" << d << endl;
	return 0;
}