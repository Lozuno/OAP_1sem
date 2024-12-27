#include <iostream>
#define ll long long
using namespace std;
bool val(ll a) {
	if (a > 8 || a < 1) {
		return 1;
	}
	return 0;
}
bool slon(ll k, ll l, ll m, ll n) {
	if (abs(k - m) == abs(l - n)) {
		return 1;
	}
	else {
		return 0;
	}
	return 0;
}
bool rook(ll k, ll l, ll m, ll n) {
	if (k == m || l == n) {
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	setlocale(LC_ALL, "rus");
	ll temp;
	cout << "Введите номер допа:";
	cin >> temp;
	switch (temp) {
	case 2: {
		cout << "Введите координаты клетки слона(в стиле \"e 4\"):";
		char a;
		ll k, l;
		cin >> a >> l;
		k = a - 'a' + 1;
		cout << "Введите координаты клетки(в стиле \"e 4\"):";
		ll m, n;
		cin >> a >> n;
		m = a - 'a' + 1;
		if (val(k) || val(l) || val(m) || val(n)) {
			cout << "Неверный ввод";
			return 0;
		}
		if (slon(k, l, m, n)) {
			cout << "Слон угрожает клетке";
		}
		else {
			cout << "Слон не угрожает клетке";
		}
		return 0;
	}
	case 6: {
		cout << "Введите координаты клетки слона(в стиле \"e 4\"):";
		char a;
		ll k, l;
		cin >> a >> l;
		k = a - 'a' + 1;
		cout << "Введите координаты клетки ладьи(в стиле \"e 4\"):";
		ll x, y;
		cin >> a >> y;
		x = a - 'a' + 1;
		cout << "Введите координаты короля(в стиле \"e 4\"):";
		ll m, n;
		cin >> a >> n;
		m = a - 'a' + 1;
		if (val(k) || val(l) || val(x) || val(y) || val(m) || val(n)) {
			cout << "Неверный ввод";
			return 0;
		}
		if ((x == m && m == k) && ((n - l) * (y - l) < 0)) {
			cout << "Король не под угрозой";
			return 0;
		}
		if ((n == l && n == y) && ((x - k) * (m - k) < 0)) {
			cout << "Король не под угрозой";
			return 0;
		}
		if (abs(k - x) == abs(l - y) && abs(l - n) == abs(k - m) && ((x + y - m - n) * (x + y - k - l) < 0)) {//не работает чек слона
			cout << "Король не под угрозой";
			return 0;
		}
		if (rook(x, y, m, n)) {
			cout << "Король под угрозой от ладьи";
			return 0;
		}
		if (slon(k, l, m, n)) {
			cout << "Король под угрозой от слона";
			return 0;
		}
		cout << "Король не под угрозой";
		return 0;
	}
	case 1: {
		ll a, b, c;
		cin >> a >> b >> c;
		ll sum = 0;
		sum = (a % 5 == 0) ? sum + a : sum;
		sum = (b % 5 == 0) ? sum + b : sum;
		sum = (c % 5 == 0) ? sum + c : sum;
		sum == 0 ? cout << "Error" : cout << sum;
		return 0;
	}
	}
	
}