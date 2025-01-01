#include <iostream>
#pragma warning(disable:4996)
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
double func14_1(double x) {
	return exp(x) + x - 4;
}
double func14_2(double x) {
	return pow(x, 2) - 4;
}
double func6_1(double x) {
	return 2 - pow(x, 2) + x;
}
double func6_2(double x) {
	return (pow(sin(x), 2) + 0.2);
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
int fsum(int n,int *b, ...) {
	int sum = 0;
	int* a = b;
	for (int i = 1; i < n; i++) {
		sum += *(a+i) * *(a+i-1);
	}
	return sum;
}
char* compr(int n, char* a, ...) {
	char** ptr = &a;
	int len = strlen(*ptr);
	char* ans = new char [len];
	strcpy(ans, *ptr);
	for (int i = 1; i < n; i++) {
		int newlen = len + strlen(*(ptr + i));
		char* temp = new char[newlen];
		strcpy(temp, ans);
		strcat(temp, *(ptr + i));
		ans = temp;
	}
	return ans;
}
int main() {
	setlocale(LC_ALL, "rus");
	cout << "Введите вариант: ";
	int var;
	cin >> var;
	switch (var) {
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
			if (n < 4) {
				cout << "Слишком мало слов!";
				return 0;
			}
			int* a = new int[n];
			for (int i = 0; i < n; i++) {
				cin >> a[i];
			}
			cout << "\nfsum для первых двух элементов: " << fsum(2, a, a + 1);
			cout << "\nfsum для первых трёх элементов: " << fsum(3, a, a + 1, a + 2);
			cout << "\nfsum для первых четырёх элементов: " << fsum(4, a, a + 1, a + 2, a + 3);
			int sum = 0;
			for (int i = 1; i < n; i++) {
				sum += fsum(2, a + i - 1, a + i);
			}
			cout << "\nfsum для всех элементов: " << sum;
			break;
		}
		}
		return 0;
	}
	case 14: {
		int temp;
		cout << "Выберите вариант исполнения 1-дихотомия 2-переменное число параметров \n";
		cin >> temp;
		switch (temp) {
		case 1: {
			cout << "Выберите функцию \n1: e^x+x-4\n2: x^2-4\n";
			int t;
			cin >> t;
			switch (t) {
			case 1: {
				double a, b;
				cout << "Введите границы a и b:";
				cin >> a >> b;
				double ans = dihot(func14_1, a, b);
				if (ans == -1) return 0;
				cout << "\nx=" << ans;
				break;
			}
			case 2: {

				double a, b;
				cout << "Введите границы a и b:";
				cin >> a >> b;
				double ans = dihot(func14_2, a, b);
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
			cout << "Введите строку\n";
			for (int i = 0; i < n; i++) {
				a[i] = new char[256];
				cin >> a[i];
			}
			cout << "Сжатая строка из первых двух слов: " << compr(2, a[0], a[1]);
			cout << "\nСжатая строка из первых трёх слов: " << compr(3, a[0], a[1], a[2]);
			cout << "\nСжатая строка из первых четырёх слов: " << compr(4, a[0], a[1], a[2], a[3]) << '\n';
			char* ans = a[0];
			for (int i = 2; i < n; i += 2) {
				strcat(ans, compr(2, a[i - 1], a[i]));
			}
			if (n % 2 == 0) {
				strcat(ans, a[n - 1]);
			}
			cout << "\nСжатая строка из слов: " << ans;
		}
		}
		return 0;
	}
	case 6: {
		int temp;
		cout << "Выберите вариант исполнения 1-дихотомия 2-переменное число параметров \n";
		cin >> temp;
		switch (temp) {
		case 1: {
			cout << "Выберите функцию \n1: 2-x^2+x\n2: sin(x)^2+0.2\n";
			int t;
			cin >> t;
			switch (t) {
			case 1: {
				double a, b;
				cout << "Введите границы a и b:";
				cin >> a >> b;
				double ans = dihot(func6_1, a, b);
				if (ans == -1) return 0;
				cout << "\nx=" << ans;
				break;
			}
			case 2: {

				double a, b;
				cout << "Введите границы a и b:";
				cin >> a >> b;
				double ans = dihot(func6_2, a, b);
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
			if (n < 4) {
				cout << "Слишком мало слов!";
				return 0;
			}
			int* a = new int[n];
			for (int i = 0; i < n; i++) {
				cin >> a[i];
			}
			cout << "\nfsum для первых двух элементов: " << fsum(2, a, a + 1);
			cout << "\nfsum для первых трёх элементов: " << fsum(3, a, a + 1, a + 2);
			cout << "\nfsum для первых четырёх элементов: " << fsum(4, a, a + 1, a + 2, a + 3);
			int sum = 0;
			for (int i = 1; i < n; i++) {
				sum += fsum(2, a + i - 1, a + i);
			}
			cout << "\nfsum для всех элементов: " << sum;
			break;
		}
		}
	default:
		break;
	}
	}
}