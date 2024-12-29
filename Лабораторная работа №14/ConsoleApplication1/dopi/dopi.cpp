#include <iostream>
#include <ctime>
using namespace std;
int main() {
	int var;
	setlocale(LC_ALL, "rus");
	cout << "Введите номер варианта: ";
	cin >> var;
	switch (var) {
	case 1: {
		srand(time(0));
		int n;
		cin >> n;
		int a[20][20];
		cout << "Исходный массив:\n";
		for (int i = 0; i < 2 * n; i++) {
			for (int j = 0; j < 2 * n; j++) {
				a[i][j] = (rand() % 21);
				cout << a[i][j] << ' ';
			}
			cout << '\n';
		}
		cout << "Изменённый массив:\n";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				int temp = a[i][j];
				a[i][j] = a[i + n][j + n];
				a[i + n][j + n] = temp;
			}
		}
		for (int i = n; i < 2 * n; i++) {
			for (int j = 0; j < n; j++) {
				int temp = a[i][j];
				a[i][j] = a[i - n][j + n];
				a[i - n][j + n] = temp;
			}
		}
		for (int i = 0; i < 2 * n; i++) {
			for (int j = 0; j < 2 * n; j++) {
				cout << a[i][j] << ' ';
			}
			cout << '\n';
		}
		return 0;
	}
	case 2: {
		int n;
		cin >> n;
		int a[20][20];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				a[i][j] = (j + i) % n + 1;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << a[i][j] << ' ';
			}
			cout << '\n';
		}
		return 0;
	}
	case 3: {
		int n;
		cin >> n;
		float a[10][10];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		for (int k = 0; k < n; k++) {
			int maxi = k, maxj = k;
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if(i==j && i<=k) continue;
					if (a[maxi][maxj] < a[i][j]) {
						maxi = i;
						maxj = j;
					}
				}
			}
			int temp = a[k][k];
			a[k][k] = a[maxi][maxj];
			a[maxi][maxj] = temp;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << a[i][j] << ' ';
			}
			cout << '\n';
		}
		return 0; 
	}
	default:
		break;
	}
	
}
