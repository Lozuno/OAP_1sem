#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	float sum =0,p;
	cin >> p;
	for (int i = 0; i < n; i++) {
		int s;
		sum *= (100 - p)*0.01;
		cin >> s;
		sum += s;
	}
	cout << sum;
	return 0;
}