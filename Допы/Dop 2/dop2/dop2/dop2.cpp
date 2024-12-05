#include <iostream>
#include <string>
#define ll long long
using namespace std;
string dectot(ll a,ll n) {
	string res = "";
	if (a == 0) return "0";
	while (a > 0) {
		if (a % n < 10) {
			res += char(a % n + 48);
			a /= n;
		}
		else {
			res += char((a % n) % 10 + 65);
			a /= n;
		}
	}
	reverse(res.begin(), res.end());
	return res;
}
ll frtodec(string a,ll n) {
	ll res = 0;
	reverse(a.begin(), a.end());
	for (ll i = 0; i < a.size(); i++) {
		if (a[i] <= '9') {
			res += pow(n, i) * (a[i] - '0');
		}
		else {
			res += pow(n, i) * (a[i] - 'A'+10);
		}
	}
	return res;
}
int main() {
	setlocale(LC_ALL, "russian");
	string a;
	cout << "Введите число:";
	cin >> a;
	ll fr;
	cout << "В какой системе это число?\n";
	cin >> fr;
	ll b = frtodec(a, fr);
	ll t;
	cout << "Перевод в какую систему?(2-двоичная,8-восьмеричная,10-десятичная,16-шестнадцатеричная)\n";
	cin >> t;
	cout << dectot(b,t);
	return 0;
}