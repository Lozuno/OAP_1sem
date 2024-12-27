#include <iostream>
#define ll long long
using namespace std;
int main()	{
	ll a;
	setlocale(LC_ALL, "rus");
	cout << "Введите трёхзначное число: ";
	cin >> a;
	ll sum = 0;
	while (a > 0) {
		sum += a % 10;
		a /= 10;
	}
	if (sum % 3 == 0) {
		cout << "Число делится на 3";
	}
	else {
		cout << "Число НЕ делится на 3";
	}
	return 0;
}