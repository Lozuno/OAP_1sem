#include <iostream>
#include <iomanip> 
#define ll long long
#define N 15
#define M 5
#define H 1
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Номер вырианта:";
	ll var;
	cin >> var;
	cout << "Введите символ ";
	char s;
	cin >> s;
	switch (var){
		case 10:
			for (ll i = 0; i < M; i++) {
				cout << setfill(' ') << setw(33 - i*2) << ' ';
				cout << setfill(s) << setw(N + i * 4) << s << endl;
			}
			for (ll i = 0; i < M; i++) {
				cout << setfill(' ') << setw(33 - (M-1-i)*2) << ' ';
				cout << setfill(s) << setw(N + (M-1-i) * 4) << s << endl;
			}
			break;
		case 11:
			for (ll i = 0; i < 5; i++) {
				cout << setfill(' ') << setw(33) << ' ';
				cout << setfill(s) << setw(7) << s << endl;
			}
			break;
	}
	return 0;
}