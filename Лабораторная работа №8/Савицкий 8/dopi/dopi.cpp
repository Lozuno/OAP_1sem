#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int t;
	cout << "Введите номер допа: ";
	cin >> t;
	switch (t) {
	case 1:{
		int n, a, sum = 0;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a;
			if (a % 2 == 0) {
				sum += a;
			}
		}
		cout << "sum=" << sum;
		return 0;
	}
	case 2: {
		int n, a, mini = -1;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a;
			if (a < 0) {
				mini = i;
			}
		}
		cout << "Номер последнего отрицательного элемента:" << mini + 1;
		return 0;
	}
	case 3: {
		int n,mini,maxi;
		double min=DBL_MAX,max=-DBL_MAX;
		double a;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a;
			if (a > max) {
				max = a;
				maxi = i;
			}
			if (a < min) {
				min = a;
				mini = i;
			}
		}
		cout << maxi - mini;
	}
	}
	return 0;
}