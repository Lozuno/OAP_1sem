#include <iostream>
using namespace std;
bool isprime(int a) {
	for (int i = 2; i < a / 2; i++) {
		if (a % i == 0) return false;
	}
	return true;
}
int coin[4] = {50,20,5,2};
int ans(int a, int k) {
	int sum = 0;
	if (a == 0) return 1; 
	for (int i = k; i < 4; i++) {
		if (a < coin[i]) continue;
		sum += ans(a - coin[i], i);
	}
	return sum;
}
int main() {
	int temp;
	setlocale(LC_ALL, "rus");
	cout << "Введите номер допа";
	cin >> temp;
	switch (temp){
	case 1: {
		for (int i = 1; i * i < 1000; i++) {
			if (i * i < 99) continue;
			if (!isprime(i)) continue;
			int a, b, c;
			a = i * i;
			c = a % 10;
			a /= 10;
			b = a % 10;
			a /= 10;
			if (a < b && b < c) cout << i * i << endl;
		}
		return 0;
	}
	case 2: {
		int a = 100;
		cout << ans(a, 0);
		return 0;
	}
	case 3: {
		double C1, C2;
		cin >> C1 >> C2;
		for (int i = 0; i < 12; i++) {
			if (i % 2 == 0) {
				C2 += C1 / 2;
				C1 /= 2;
			}
			else {
				C1 += C2 / 2;
				C2 /= 2;
			}
		}
		cout << "C1=" << C1 << "л" << endl;
		cout << "C2=" << C2 << "л" << endl;
		return 0;
	}
	}
}