#include <iostream>
using namespace std;
int main() {
	int sum = 0;
	for (int i = 0; i < 150; i++) {
		if (i % 5 == 0) {
			sum += i;
		}
	}
	cout << sum;
	return 0;
}