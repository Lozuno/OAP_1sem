#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int a[10][10];
	int n, m;
	cin >> n >> m;
	int i1 = -1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> *(*(a + i) + j);
			if (*(*(a+i)+j) == 0) {
				i1 = i;
			}
		}
	}
	if (i1 == -1) {
		cout << "Нет строки с 0";
		return 0;
	}
	int temp = **(a + i1);
	cout << "Строка номер: " << i1 + 1 << '\n';
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			*(*(a + i) + j) -= temp;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << *(*(a + i) + j) << ' ';
		}
		cout << endl;
	}
	return 0;
}