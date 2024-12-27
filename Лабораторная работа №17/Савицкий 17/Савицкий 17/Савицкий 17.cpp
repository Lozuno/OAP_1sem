#include <iostream>
using namespace std;
void Z10_1(int* a, int  n);
void Z10_2(int** a, int n, int m);
float* Z13_1(float* a, int n);
void Z13_2(int** a, int n);
int* Z7_1(int* a);
void Z7_2(int** a, int n, int m);
void Z2_1(int* a, int n,int k);
int* Z2_2(int** a, int n, int m);
int main() {
	setlocale(LC_ALL, "rus");
	int var;
	cout << "Введите номер варианта:";
	cin >> var;
	switch (var) {
	case 10: {
		int part;
		cout << "Введите номер задания:";
		cin >> part;
		switch (part) {
		case 1: {
			int n;
			cout << "Введите количество элементов массива:";
			cin >> n;
			int* a = new int[n];
			for (int i = 0; i < n; i++) {
				cin >> a[i];
			}
			cout << "Номера чётных на нечётных местах:";
			Z10_1(a, n);
			delete[] a;
			return 0;
		}
		case 2: {
			int n, m;
			cin >> n >> m;
			int** a = new int* [n];
			for (int i = 0; i < n; i++) {
				a[i] = new int[m];
				for (int j = 0; j < m; j++) {
					cin >> a[i][j];
				}
			}
			Z10_2(a, n, m);
			for (int i = 0; i < n; i++) {
				delete[] a[i];
			}
			delete[] a;
			return 0;
		}
		}
	}
	case 13: {
		int part;
		cout << "Введите номер задания:";
		cin >> part;
		switch (part) {
		case 1: {
			float a[20];
			cout << "Введите элементы массива\n";
			for (int i = 0; i < 20; i++) {
				cin >> a[i];
			}
			float sum = *Z13_1(a, 20);
			cout << "\nСумма квадратов элементов:" << sum;
			return 0;
		}
		case 2: {
			int n;
			cout << "Введите размерность массива:";
			cin >> n;
			int** a = new int* [n];
			for (int i = 0; i < n; i++) {
				a[i] = new int[n];
				for (int j = 0; j < n; j++) {
					cin >> a[i][j];
				}
			}
			Z13_2(a, n);
			return 0;
		}
		}
	}
	case 7: {
		int part;
		cout << "Введите номер задания:";
		cin >> part;
		switch (part) {
		case 1: {
			int a[15];
			for (int i = 0; i < 15; i++) {
				a[i] = rand() % 200 + 1;
			}
			int sum = *Z7_1(a);
			cout << "Произведение 2-7 элементов:" << sum;
			return 0;
		}
		case 2: {
			int n, m;
			cin >> n >> m;
			int** a = new int* [n];
			for (int i = 0; i < n; i++) {
				a[i] = new int[m];
				for (int j = 0; j < m; j++) {
					cin >> a[i][j];
				}
			}
			Z7_2(a, n, m);
			return 0;
		}
		}
	}
	case 2: {
		int part;
		cout << "Введите номер задания:";
		cin >> part;
		switch (part) {
		case 1: {
			int n;
			cout << "Введите размер массива:";
			cin >> n;
			int* a = new int[n];
			for (int i = 0; i < n; i++) {
				cin >> a[i];
			}
			int k;
			cout << "Введите количество чисел для вывода:";
			cin >> k;
			Z2_1(a, n, k);
			return 0;
		}
		case 2: {
			int n, m;
			cin >> n >> m;
			int** a = new int* [n];
			for (int i = 0; i < n; i++) {
				a[i] = new int[m];
				for (int j = 0; j < m; j++) {
					cin >> a[i][j];
				}
			}
			cout << *Z2_2(a, n, m) << " строк содержат нули";
			return 0;
		}
		}
	}
	}
	return 0;
}
void Z10_1(int* a,int  n) {
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0 && (i + 1) % 2 != 0) {
			cout << i+1 << ' ';
		}
	}
}
void Z10_2(int** a, int n, int m) {
	int maxi = 0, maxj = 0, col = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] > a[maxi][maxj]) {
				maxi = i; maxj = j;
				col = 1;
				continue;
			}
			if (a[i][j] == a[maxi][maxj]) {
				col++;
			}
		}
	}
	cout << "Максимальный элемент:" << a[maxi][maxj] << " i=" << maxi << " j=" << maxj << " встречается " << col << " раз";
}
float* Z13_1(float* a, int n) {
	float sum = 0;
	int m = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > 0 && i % 2 == 0) {
			m++;
		}
	}
	float* b = new float[m];
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > 0 && i % 2 == 0) {
			b[j] = a[i];
			sum += b[j] * b[j];
			j++;
		}
	}
	cout << "Новый массив:\n";
	for (int i = 0; i < m; i++) {
		cout << b[i] << ' ';
	}
	float* ptr = &sum;
	return ptr;
}
void Z13_2(int** a, int n) {	
	int mini = 0, minj = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j]<a[mini][minj]) {
				mini = i;
				minj = j;
			}
		}
	}
	if (mini == minj) {
		cout << "Минимальный элемент:" << a[mini][minj] << " i=" << mini << " j=" << minj;
	}
	return;
}
int* Z7_1(int* a) {
	int sum = 1;
	int* ptr = &sum;
	for (int i = 2; i <= 7; i++) {
		sum *= a[i];
	}
	return ptr;
}
void Z7_2(int** a, int n, int m) {
	int ans = 0;
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			if (a[i][j] > 0) {
				ans = 0;
				break;
			}
			ans += a[i][j];
			if (i + 1 == n) {
				ans = ans / n;
			}
		}
		if (ans != 0) break;
	}
	if (ans == 0) {
		cout << "Нет столбца из отрицательных элементов";
		return;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] -= ans;
			cout << a[i][j] << ' ';
		}
		cout << '\n';
	}
	return;
}
void Z2_1(int* a, int n, int k) {
	int* b[2];
	b[0] = new int[k];
	b[1] = new int[k];
	for (int q = 0; q < k; q++) {
		for (int i = 0; i < n; i++) {
			int sum = 0;
			for (int j = 0; j < n; j++) {
				if (a[i] == a[j]) {
					sum++;
				}
			}
			bool flag = true;
			for (int j = 0; j < q; j++) {
				if (a[i] == b[0][j]) {
					flag = false;
					break;
				}
			}
			if (flag) {
				if (i == 0) {
					b[0][q] = a[i];
					b[1][q] = sum;
				}
				else {
					if (b[1][q] < sum) {
						b[0][q] = a[i];
						b[1][q] = sum;
					}
				}
			}
		}
	}
	for (int i = 0; i < k; i++) {
		cout << b[0][i] << ":" << (b[1][i] * 1.0) / n * 100 << "%\n";
	}
	return;
}
int* Z2_2(int** a, int n, int m) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 0) {
				sum++;
				break;
			}
		}
	}
	int* ptr = &sum;
	return ptr;
}