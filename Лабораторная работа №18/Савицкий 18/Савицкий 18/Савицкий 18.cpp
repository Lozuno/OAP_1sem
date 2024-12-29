#include <iostream>
using namespace std;
const double e = 0.001;
double func10_1(double x) {
	return sin(x) + pow(x, 3);
}
double func10_2(double x) {
	return 0.4 + pow(x, 3);
}
double func2_1(double x) {
	return pow(x, 3) + x - 3;
}
double func2_2(double x) {
	return pow(cos(x),3);
}
double dihot(double (*f)(double x), double a, double b) {
	double x;
	if (f(a) * f(b) >= 0) {
		cout << "Корней на промежутке нет";
		return -1;
	}
	while (abs(a - b) > 2 * e) {
		x = (a + b) / 2;
		if (f(x) * f(a) <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	}
	return x;
}
int Z10_1(int n,char *a, ...) {
	int max = 0;
	char** ptr = &a;
	for (int i = 1; i < n; i++) {
		if (int(*(ptr + max)[0]) > int(*(ptr + i)[0])) {
			max = i;
		}
	}
	return max;
}
int fsum(int n,int b, ...) {
	int sum = 0;
	int* a = &b;
	for (int i = 1; i < n; i++) {
		sum += *(a+i) * *(a+i-1);
	}
	return sum;
}
int main() {
	setlocale(LC_ALL, "rus");
	cout << "Введите вариант: ";
	int var;
	cin >> var;
	switch (var){
	case 10: {
		int temp;
		cout << "Выберите вариант исполнения 1-дихотомия 2-переменное число параметров \n";
		cin >> temp;
		switch (temp) {
		case 1: {
			cout << "Выберите функцию \n1: sin(x)+x^3\n2: 0.4+x^3\n";
			int t;
			cin >> t;
			switch (t) {
			case 1: {
				double a, b;
				cout << "Введите границы a и b:";
				cin >> a >> b;
				double ans = dihot(func10_1, a, b);
				if (ans == -1) return 0;
				cout << "\nx=" << ans;
				break;
			}
			case 2: {

				double a, b;
				cout << "Введите границы a и b:";
				cin >> a >> b;
				double ans = dihot(func10_2, a, b);
				if (ans == -1) return 0;
				cout << "\nx=" << ans;
				break;
			}
			}
			break;
		}
		case 2: {
			int n;
			cout << "Введите количество слов(>=4):";
			cin >> n;
			if (n < 4) {
				cout << "Слишком мало слов!";
				return 0;
			}
			char** a = new char* [n];
			cout << "Введите слова\n";
			for (int i = 0; i < n; i++) {
				a[i] = new char[256];
				cin >> a[i];
			}
			cout << "\nСлово с самой первой по алфовиту буквы" << " среди первых двух: " << a[Z10_1(2, a[0], a[1])];
			cout << "\nСлово с самой первой по алфовиту буквы" << " среди первых трёх: " << a[Z10_1(3, a[0], a[1], a[2])];
			cout << "\nСлово с самой первой по алфовиту буквы" << " среди первых четырёх: " << a[Z10_1(4, a[0], a[1], a[2], a[3])] << '\n';
			for (int i = 0; i < n - 1; i++) {
				for (int j = n - 1; j > i; j--) {
					int t1 = Z10_1(2, a[j - 1], a[j]);
					if (t1 == 1) {
						char* temp = a[j];
						a[j] = a[j - 1];
						a[j - 1] = temp;
					}
				}
			}
			for (int i = 0; i < n; i++) {
				cout << a[i] << ' ';
			}
		}
		}
		return 0;
	}
	case 2: {
		int temp;
		cout << "Выберите вариант исполнения 1-дихотомия 2-переменное число параметров \n";
		cin >> temp;
		switch (temp) {
		case 1: {
			cout << "Выберите функцию \n1: x^3 + x - 3\n2: cos(x)^3\n";
			int t;
			cin >> t;
			switch (t) {
			case 1: {
				double a, b;
				cout << "Введите границы a и b:";
				cin >> a >> b;
				double ans = dihot(func2_1, a, b);
				if (ans == -1) return 0;
				cout << "\nx=" << ans;
				break;
			}
			case 2: {

				double a, b;
				cout << "Введите границы a и b:";
				cin >> a >> b;
				double ans = dihot(func2_2, a, b);
				if (ans == -1) return 0;
				cout << "\nx=" << ans;
				break;
			}
			}
			break;
		}
		case 2: {
			int n;
			cout << "Введите количество элементов >=4: ";
			cin >> n;
			int* a = new int[n];
			for (int i = 0; i < n; i++) {
				cin >> a[i];
			}
			cout << "\nfsum для первых двух элементов: " << fsum(2, a[0], a[1]);
			cout << "\nfsum для первых трёх элементов: " << fsum(3, a[0], a[1],a[2]);
			cout << "\nfsum для первых четырёх элементов: " << fsum(4, a[0], a[1],a[2],a[3]);
			int sum = 0;
			for (int i = 1; i < n; i++){
				sum += fsum(2, a[i], a[i - 1]);
			}
			cout << "\nfsum для всех элементов: " << sum;
		}
		}
	}
	default:
		break;
	}
	
}