#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	cout << "Введите номер варианта:";
	int var;
	cin >> var;
	switch (var){
	case 10: {
		int a[100];
		int b[100];
		int n, m;
		cout << "Введите размер первого массива:";
		cin >> n;
		cout << "Введите массив второго массива:";
		cin >> m;
		for (int* pi = a; pi < a + n; pi++) {
			cin >> *pi;
		}
		for (int* pi = b; pi < b + m; pi++) {
			cin >> *pi;
		}
		int min = INT_MAX;
		for (int* pa = a; pa < a + n; pa++) {
			bool flag = true;
			for (int* pb = b; pb < b + m; pb++) {
				if (*pa == *pb) {
					flag = false;
					break;
				}
			}
			if (flag)
				if (min > *pa)
					min = *pa;
		}
		cout << min;
		return 0;
	}
	case 16: {
		int x[100];
		int y[100];
		int z[200];
		int k, n;
		cout << "Введите размер первого массива:";
		cin >> k;
		cout << "Введите массив второго массива:";
		cin >> n;
		for (int* pi = x; pi < x + k; pi++) {
			cin >> *pi;
		}
		for (int* pi = y; pi < y + n; pi++) {
			cin >> *pi;
		}
		int j = 0;
		for (int* pa = x; pa < x + k; pa++) {
			for (int* pb = y; pb < y + n; pb++) {
				if (*pa == *pb) {
					*(z + j) = *pa;
					j++;
					break;
				}
			}
		}
		for (int* pi = z; pi < z + j; pi++) {
			cout << *pi << ' ';
		}
		return 0;
	}
	case 6: {
		int a[100];
		int n;
		cin >> n;
		for (int* pi = a; pi < a + n; pi++) {
			cin >> *pi;
		}
		int* pi = a, * pj = a + n - 1;
		while (pi != pj) {
			if (*pi > 0) {
				if (*pj < 0) {
					int t = *pi;
					*pi = *pj;
					*pj = t;
				}
				else {
					pj--;
				}
			}
			else {
				pi++;
			}
		}
		for (int* pi = a; pi < a + n; pi++) {
			cout << *pi << ' ';
		}
		return 0;
	}
	case 11: {
		int a[100];
		int n;
		cin >> n;
		int* min = a;
		for (int* pi = a; pi < a + n; pi++) {
			cin >> *pi;
		}
		for (int i = 1; i <= n+1; i++) {
			bool flag = true;
			for (int* pi = a; pi < a + n; pi++) {
				if (*pi == i) {
					flag = false;
					break;
				}
			}
			if (flag) {
				cout << i;
				return 0;
			}
		}
	}
	}
}