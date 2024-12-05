#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int t;
	cin >> t;
	switch (t) {
	case 1: {
		int a[100];
		int k;
		cin >> k;
		for (int i = 0; i < k; i++) {
			cin >> a[i];
		}
		int sum = 0;
		int max = 0,maxi=0;
		for (int i = 0; i < k; i++) {
			if (i % 7 == 0) {
				if (sum > max) {
					maxi = i / 7;
					max = sum;
				}
				sum = 0;
			}
			sum += a[i];

		}
		if (sum > max) {
			maxi = k / 7+1;
			max = sum;
		}
		cout << "За неделю номер " << maxi << " Выпало больше всего осадков: " << max;
		return 0;
	}
	case 2: {
		int a[100];
		int k;
		cin >> k;
		for (int i = 0; i < k; i++) {
			cin >> a[i];
		}
		int sum = 0;
		for (int i = 0; i < k-1; i++) {
			if (a[i] == a[i + 1]) {
				sum++;
			}
		}
		cout << "Количество пар одинкавых элементов: " << sum;
		return 0;
	}
	case 3: {
		int a[100];
		int k;
		cin >> k;
		for (int i = 0; i < k; i++) {
			cin >> a[i];
		}
		int sum = 1, maxsum = -1;
		for (int i = 0; i < k-1; i++) {
			if (a[i] == a[i + 1]) {
				sum++;
			}
			else if (sum > maxsum) {
				maxsum = sum;
				sum = 1;
			}
		}
		if (sum > maxsum) {
			maxsum = sum;
			sum = 0;
		}
		cout << "max=" << maxsum;
		return 0;
	}
	default:
		break;
	}
}