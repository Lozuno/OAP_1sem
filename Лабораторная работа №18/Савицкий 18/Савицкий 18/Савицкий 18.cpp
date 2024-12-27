#include <iostream>
using namespace std;
const double e = 0.001;
double func1(double x) {
	return sin(x) + pow(x, 3);
}
double func2(double x) {
	return 0.4 + pow(x, 3);
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
int find_alphobetical(int n,...) {
	int max = 0;
	char** ptr = (char**)(&(n)+1) ;
	for (int i = 1; i < n; i++) {
		if (int((ptr + max)[0]) < int((ptr + i)[0])) {
			max = i;
		}
	}
	return max;
}
int main() {
	setlocale(LC_ALL, "rus");
	int temp;
	cout << "Выберите вариант исполнения 1-дихотомия 2-переменное число параметров \n";
	cin >> temp;
	switch (temp){
	case 1: {
		cout << "Выберите функцию \n1: sin(x)+x^3\n2: 0.4+x^3\n";
		int t;
		cin >> t;
		switch (t) {
		case 1: {
			double a, b;
			cout << "Введите границы a и b:";
			cin >> a >> b;
			double ans = dihot(func1, a, b);
			if (ans == -1) return 0;
			cout << "\nx=" << ans;
			break;
		}
		case 2: {

			double a, b;
			cout << "Введите границы a и b:";
			cin >> a >> b;
			double ans = dihot(func2, a, b);
			if (ans == -1) return 0;
			cout << "\nx=" << ans;
			break;
		}
		}
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
		cout << "\nСлово с самой первой по алфовиту буквы" << " среди первых трёх: " << a[find_alphobetical(3, a[0], a[1], a[2])];
		cout << "\nСлово с самой первой по алфовиту буквы" << " среди первых четырёх: " << a[find_alphobetical(4, a[0], a[1], a[2], a[3])];
		cout << "\nСлово с самой первой по алфовиту буквы" << " среди первых двух: " << a[find_alphobetical(2, a[0], a[1])];
	}
	}
	
	return 0;
}