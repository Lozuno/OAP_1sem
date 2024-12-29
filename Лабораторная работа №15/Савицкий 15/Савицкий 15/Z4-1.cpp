#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int var;
	cout << "Введите номер варианта:";
	cin >> var;
	switch (var) {
	case 10: {
		int n;
		cin >> n;
		float* a = (float*)malloc(n * sizeof(float));
		float sum = 0;
		int maxi = 0, mini = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] > 0) sum += a[i];
			if (abs(a[i]) > abs(a[maxi]))
				maxi = i;
			if (abs(a[i]) < abs(a[mini]))
				mini = i;
		}
		cout << "Сумма положительных:" << sum;
		cout << "\nПроизведение между макс и мин:";
		if (mini > maxi) {
			int temp = maxi;
			maxi = mini;
			mini = temp;
		}
		if (abs(maxi - mini) == 1) {
			cout << 0;
			return 0;
		}
		float mult = 1;
		for (int i = mini + 1; i < maxi; i++) {
			mult *= a[i];
		}
		cout << mult;
		free(a);
		return 0;
	}
	case 9: {
		int n;
		cin >> n;
		float* a = (float*)malloc(n * sizeof(float));
		float mult = 1;
		int mini = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] > 0) {
				mult *= a[i];
			}
			if (a[i] < a[mini]) {
				mini = i;
			}
		}
		float sum = 0;
		for (int i = 0; i < mini; i++) {
			sum += a[i];
		}
		cout << "Произведение положительных элементов:" << mult;
		cout << "\nСумма до минимального:" << sum;
		free(a);
		return 0;
	}
	case 1: {
		int n;
		cin >> n;
		float* a = (float*)malloc(n * sizeof(float));
		int k = 0;
		int mini = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] < 0) {
				k++;
			}
			if (abs(a[i]) < abs(a[mini])) {
				mini = i;
			}
		}
		float sum = 0;
		for (int i = mini; i < n; i++) {
			sum += abs(a[i]);
		}
		cout << "Количество отрицательных элементов:" << k;
		cout << "\nСумма после минимального:" << sum;
		free(a);
		return 0;
	}
	case 12: {
		int n;
		cin >> n;
		float* a = (float*)malloc(n * sizeof(float));
		int k = 0;
		int maxi = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] > a[maxi]) {
				maxi = i;
				k = 0;	
			}
			if (a[i] == a[maxi]) {
				k++;
			}
		}
		cout << "Максимальный элемент:" << a[maxi];
		cout << "\nКоличество максимальных элементов:" << k;
		free(a);
		return 0;
	}
	default:
		break;
	}
	
}