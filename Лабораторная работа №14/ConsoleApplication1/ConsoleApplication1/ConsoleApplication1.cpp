#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int n, m;
	cin >> n >> m;
	int a[10][10];
	int sum = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			if (a[i][j] > 0 && a[i][j] % 2 == 0) {
				sum *= a[i][j];
			}
		}
	}
	cout << "Произведение элементов: " << sum;
	return 0;
}