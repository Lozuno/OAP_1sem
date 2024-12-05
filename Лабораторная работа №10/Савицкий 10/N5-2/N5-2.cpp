#include <iostream>
#include <time.h>
using namespace std;
int main() {
	int a[100];
	int k;
	cin >> k;
	srand(time(0));
	for (int i = 0; i < k; i++) {
		a[i] = (rand() % 100);
		cout << a[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < k; i++) {
		bool flag = true;
		for (int j = 0; j < k; j++) {
			if (i == j) continue;
			if (a[i] == a[j]) {
				flag = false;
				break;
			}
		}
		if (flag) cout << a[i] << ' ';
	}
	return 0;
}