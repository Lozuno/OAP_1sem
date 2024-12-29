#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	cout << "Введите номер варианта:";
	int var;
	cin >> var;
	switch (var) {
	case 10: {
		int x[100];
		int y[100];
		int z[200];
		int n;
		cout << "Введите размер массивов:";
		cin >> n;
<<<<<<< HEAD
=======
		for (int i = 0; i < n; i++) {
			cin >> *(x + i);
		}
>>>>>>> master
		for (int* pi = x; pi < x + n; pi++) {
			cin >> *pi;
		}
		for (int* pi = y; pi < y + n; pi++) {
			cin >> *pi;
		}
		for (int i = 0; i < n; i++) {
			*(z + i) = *(x + i) + *(y + i);
		}
		for (int* pi = z; pi < z + n; pi++) {
			cout << *pi << ' ';
		}
		return 0;
	}
	case 16: {
		int a[100];
		int n;
		cout << "Введите размер массива ";
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
	case 6: {
		int s[100];
		int d[100];
		int n1, n2;
		cin >> n1 >> n2;
		int f;
		cin >> f;
		for (int *pi = s; pi < s + n1; pi++) {
			cin >> *pi;
		}
		for (int* pi = d; pi < d + n2; pi++) {
			cin >> *pi;
		}
		int min = INT_MAX, mina=-1, minb=-1;
		for (int* pa = s; pa < s + n1; pa++) {
			for (int* pb = d; pb < d + n2; pb++) {
				if (abs(*pa + *pb - f) < abs(min)) {
					min = *pa + *pb - f;
					mina = pa - s;
					minb = pb - d;
				}
			}
		}
		cout << "Ближе всего: ";
		cout << min + f;
		cout << "\nСумма элементов номер " << mina + 1 << "и" << minb + 1;
		return 0;
	}
	case 11: {
		int s[100];
		int d[100];
		int n1, n2;
		cin >> n1 >> n2;
		int z;
		cin >> z;
		int sum1 = 0, sum2 = 0;
		for (int* pi = s; pi < s + n1; pi++) {
			cin >> *pi;
			if (*pi < z) sum1++;
		}
		for (int* pi = d; pi < d + n2; pi++) {
			cin >> *pi;
			if (*pi < z) sum2++;
		}
		if (sum1 > sum2) {
			for (int* pi = d; pi < d + n2; pi++) {
				cout << *pi << ' ';
			}
			for (int* pi = s; pi < s + n1; pi++) {
				cout << *pi << ' ';
			}
		}
		else {
			for (int* pi = s; pi < s + n2; pi++) {
				cout << *pi << ' ';
			}
			for (int* pi = d; pi < d + n2; pi++) {
				cout << *pi << ' ';
			}
		}
	}
	}

}