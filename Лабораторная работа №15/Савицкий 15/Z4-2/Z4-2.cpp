#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	cout << "Внесите номер варианта:";
	int var;
	cin >> var;
	switch (var) {
	case 10: {
		int n, m;
		cin >> m >> n;
		int** a = new int* [n];
		for (int i = 0; i < n; i++) {
			a[i] = new int[m];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
			}
		}
		int i1 = -1;
		cout << '\n';
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i][j] >= 0) {
					break;
				}
				if (j == m - 1) {
					i1 = i;
				}
			}
			if (i1 != -1) break;
		}
		if (i1 == -1) {
			cout << "Нет строки из отрицательных";
			return 0;
		}
		cout << "Изменённый массив:\n";
		int temp = a[i1][0];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				a[i][j] += temp;
				cout << a[i][j] << ' ';
			}
			cout << '\n';
		}
		for (int i = 0; i < n; i++) {
			delete[] a[i];
		}
		delete[] a;
		return 0;
	}
	case 9: {
		int n, m;
		cin >> n >> m;
		int** a = new int* [n];
		for (int i = 0; i < n; i++) {
			a[i] = new int[m];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
			}
		}
		cout << '\n';
		int i1 = -1;
		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum = 0;
			for (int j = 0; j < m; j++) {
				if (a[i][j] <= 0) {
					break;
				}
				sum += a[i][j];
				if (j == m - 1) {
					i1 = i;
				}
			}
			if (i1 != -1) break;
		}
		if (i1 == -1) {
			cout << "Нет строки из положительных";
			return 0;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				a[i][j] -= sum;
				cout << a[i][j] << ' ';
			}
			cout << '\n';
		}
		for (int i = 0; i < n; i++) {
			delete[] a[i];
		}
		delete[] a;
		return 0;
	}
	case 1: {
		int n, m;
		cin >> n >> m;
		int** a = new int* [n];
		for (int i = 0; i < n; i++) {
			a[i] = new int[m];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
			}
		}
		cout << '\n';
		int j1 = -1;
		for (int j = 0; j < m; j++) {
			for (int i = 0; i < n; i++) {
				if (a[i][j] <= 0) {
					break;
				}
				if (i == n - 1) {
					j1 = j;
				}
			}
			if (j1 != -1) break;
		}
		if (j1 == -1) {
			cout << "Нет столбца из положительных";
			return 0;
		}
		if (j1 == 0) {
			cout << "Предыдущего столбца нет";
			return 0;
		}
		for (int i = 0; i < n; i++) {
			a[i][j1 - 1] *= -1;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << a[i][j] << ' ';
			}
			cout << '\n';
		}
		for (int i = 0; i < n; i++) {
			delete[] a[i];
		}
		delete[] a;
		return 0;
	}
	case 12: {
		int n, m;
		cin >> n >> m;
		int** a = new int* [n];
		for (int i = 0; i < n; i++) {
			a[i] = new int[m];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
			}
		}
		cout << '\n';
		int i1 = -1;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i][j] > 0) {
					if (i != 0) {
						i1 = i;
						break;
					}
					else {
						i1 = -2;
					}
				}
			}
			if (i1 != -1) break;
		}
		if (i1 == -1) {
			cout << "Нет строки c положительным";
			return 0;
		}
		if (i1 == -2) {
			cout << "Нет предыдущей строки для найденной";
			return 0;
		}
		for (int j = 0; j < m; j++) {
			a[i1 - 1][j] *= -1;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << a[i][j] << ' ';
			}
			cout << '\n';
		}
		for (int i = 0; i < n; i++) {
			delete[] a[i];
		}
		delete[] a;
		return 0;
	}
	default:
		break;
	}
	
}