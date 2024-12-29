#include <iostream>
#include <Windows.h>
using namespace std;
int Z10_1(int**, int, int, int);
void Z10_2(char*, int);
int Z3_2(char*, int, char);
int Z3_1(int**, int);
void Z8_1(int**, int, int, int [3]);
int Z8_2(char*, int);
void Z1_1(int**, int, int);
void Z1_2(char*, int);
int main() {
	setlocale(LC_ALL, "rus");
	cout << "Введите номер варианта:";
	int var;
	cin >> var;
	switch (var) {
	case 10: {
		int part;
		cout << "Введите номер задания:";
		cin >> part;
		switch (part) {
		case 1: {
			int n, m;
			cin >> n >> m;
			int** a = new int* [n];
			for (int i = 0; i < n; i++) {
				a[i] = new int[m];
				for (int j = 0; j < m; j++) {
					cin >> a[i][j];
				}
			}
			int k;
			cout << "Введите число которое необходимо найти:";
			cin >> k;
			int temp = Z10_1(a, n, m, k);
			if (temp == -1) {
				cout << "Нет столбца с элементом k";
			}
			else {
				cout << "Столбец номер:" << temp + 1;
			}
			for (int i = 0; i < n; i++) {
				delete[] a[i];
			}
			delete[] a;
			return 0;
		}
		case 2: {
			int n;
			cout << "Введите длину строки:";
			cin >> n;
			n++;
			char* s = new char[n];
			cin.ignore(cin.rdbuf()->in_avail());
			cin.getline(s, n);
			cout << '\n';
			Z10_2(s, n);
			delete[] s;
			return 0;
		}
		}
	}
	case 3: {
		int part;
		cout << "Введите номер задания:";
		cin >> part;
		switch (part){
		case 1: {
			int n;
			cin >> n;
			int** a = new int* [n];
			for (int i = 0; i < n; i++) {
				a[i] = new int [n];
				for (int j = 0; j < n; j++) {
					cin >> a[i][j];
				}
			}
			int sum = Z3_1(a, n);
			cout << "Сумма элементов ниже главной диагонали " << sum;
			return 0;
		}
		case 2: {
			int n;
			cout << "Введите количество символов в тексте";
			cin >> n;
			char* s = new char [n];
			for (int i = 0; i < n;) {
				char* a = new char[n];
				cin.ignore(cin.rdbuf()->in_avail());
				cin.getline(a, n);
				int m = strnlen_s(a, n);
				for (int j = 0; j < m; j++) {
					s[i] = a[j];
					i++;
				}
			}
			char k;
			cout << "Введите искомый символ:";
			cin >> k;
			int sum = Z3_2(s, n, k);
			cout << "Количество вхождений:" << sum;
			return 0;
		}
		}
	}
	case 8: {
		int part;
		cout << "Введите номер задания:";
		cin >> part;
		switch (part){
		case 1: {
			int n, m;
			cin >> n >> m;
			int** a = new int* [n];
			for (int i = 0; i < n; i++) {
				a[i] = new int[m];
				for (int j = 0; j < m; j++) {
					cin >> a[i][j];
				}
			}
			int ans[3] = { 0,0,0 };
			Z8_1(a, n, m,ans);
			cout << "Количество положительных:" << *(ans + 0) << '\n';;
			cout << "Количество нулей:" << ans[1] << '\n';
			cout << "Количество отрицательных:" << ans[2] << '\n';
			return 0;
		}
		case 2: {
			int n;
			cout << "Введите количество символов:";
			cin >> n;
			char* s = new char[n];
			cin.ignore(cin.rdbuf()->in_avail());
			cin.getline(s, n);
			int sum = Z8_2(s, n);
			cout << "Количество слов:" << sum + 1;
			return 0;
		}
		}
	}
	case 1: {
		int part;
		cout << "Введите номер задания:";
		cin >> part;
		switch (part) {
		case 1: {
			int n, m;
			cin >> n >> m;
			int** a = new int* [n];
			for (int i = 0; i < n; i++) {
				a[i] = new int[m];
				for (int j = 0; j < m; j++) {
					cin >> a[i][j];
				}
			}
			Z1_1(a, n, m);
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					cout << a[i][j] << ' ';
				}
				cout << '\n';
			}
			return 0;
		}
		case 2: {
			int n;
			cout << "Введите количество символов:";
			cin >> n;
			char* s = new char[n + 1];
			cin.ignore(cin.rdbuf()->in_avail());
			char* a = new char[n + 1];
			cin.getline(a, n);
			for (int i = 0; i < n; i++) {
				s[i] = a[i];
			}
			s[n] = '\0';
			Z1_2(s, n);
			return 0;
		}
		}
	}
	default:
		break;
	}
	return 0;
}
int Z10_1(int** a, int n, int m, int k) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == k) {
				return j;
			}
		}
	}
	return -1;
}
void Z10_2(char* s, int n) {
	setlocale(LC_ALL, "rus");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == ' ') {
			k++;
		}
	}
	if (k % 2 == 0) {
		cout << "Количество слов нечётно";
		return;
	}
	k = (k - 1) / 2;
	int start = -1,end=-1;
	int m;
	for (int i = 0; i < n; i++) {
		if (s[i] == ' ') {
			k--;
		}
		if (k > 0) {
			continue;
		}
		if (start == -1)
			start = i;
		if (k == -1 && s[i] == ' ') {
			m = i-start;
		}
		if ((k == -2 && s[i] == ' ') || s[i] == '.') {
			end = i;
			break;
		}
	}
	char* first = new char[m];
	for (int i = start; i < start + m; i++) {
		first[i - start] = s[i];
	}
	for (int i = start+1; i < start+(end-start-m); i++) {
		s[i] = s[i + m];
	}
	for (int i = end - m; i < end; i++) {
		s[i] = first[i - end + m];
	}
	cout << s;
	return;
}
int Z3_1(int** a, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			sum += a[i][j];
		}
	}
	return sum;
}
int Z3_2(char* s, int n, char k) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == k)
			sum++;
	}
	return sum;
}
void Z8_1(int** a, int n, int m, int ans[3]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] > 0) {
				ans[0]++;
			}
			if (a[i][j] == 0) {
				ans[1]++;
			}
			if (a[i][j] < 0) {
				ans[2]++;
			}
		}
	}
}
int Z8_2(char* s, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == ' ') {
			sum++;
		}
	}
	return sum;
}
void Z1_1(int** a, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] < 0 && i % 2 != 0) {
				a[i][j] *= -1;
			}
		}
	}
}
void Z1_2(char* s, int n) {
	for (int i = 0; i < n; i++) {
		if (s[i] != ' ' &&s[i]!='.') {
			s[i] += 32;
		}
	}
	for (int i = 1; i < n; i++) {
		if (s[i - 1] == ' ' || s[i - 1] == '.') {
			s[i] -= 32;
		}
	}
	cout << s;
}