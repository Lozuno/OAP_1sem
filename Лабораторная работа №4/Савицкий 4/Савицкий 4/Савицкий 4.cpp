#include <iostream>
#include <iomanip> 
#define ll long long
#define N 10
#define M 4
#define H 1
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	ll var;
	cout << "Введите номер варианта:";
	cin >> var;
	cout << "Введите символ ";
	char s;
	cin >> s;
	switch (var){
		case 10: {
			for (ll i = 0; i < M; i++) {
				cout << setfill(' ') << setw(33 - i*2) << ' ';
				cout << setfill(s) << setw(N + i * 4) << s << endl;
			}
			for (ll i = 0; i < M; i++) {
				cout << setfill(' ') << setw(33 - (M-1-i)*2) << ' ';
				cout << setfill(s) << setw(N + (M-1-i) * 4) << s << endl;
			}
			return 0;
		}
		case 11: {
			for (ll i = 0; i < M; i++) {
				cout << setfill(' ') << setw(33) << ' ';
				cout << setfill(s) << setw(M+3) << s << endl;
			}
			return 0;
		}
		case 9: {
			for (ll i = 0; i < 5; i++) {
				cout << setfill(' ') << setw(16+2*i) << ' ';
				cout << setfill(s) << setw(3) << s;
				cout << setfill(' ') << setw(20 - i * 4) << ' ';
				cout << setfill(s) << setw(3) << s << endl;
			}
			cout << setfill(s) << setw(28) << s;
			cout << setfill(' ') << setw(2) << ' ';
			cout << setfill(s) << setw(28) << s<<endl;
			cout << setfill(s) << setw(28) << s;
			cout << setfill(' ') << setw(2) << ' ';
			cout << setfill(s) << setw(28) << s<<endl;
			for (ll i = 0; i < 5; i++) {
				cout << setfill(' ') << setw(16 + (8-2*i)) << ' ';
				cout << setfill(s) << setw(3) << s;
				cout << setfill(' ') << setw(4+i * 4) << ' ';
				cout << setfill(s) << setw(3) << s << endl;
			}
			cout << endl << setfill(' ') << setw(9) << ' ' << setfill(s) << setw(4) << s << setfill(' ') << setw(9) << ' ' << endl;
			for (ll i = 1; i < 5; i++) {
				cout << setfill(' ') << setw(8 - i) << ' ';
				cout << setfill(s) << setw(2) << s;
				cout << setfill(' ') << setw(i) << ' ';
				cout << setfill(s) << setw(2) << s;
				cout << setfill(' ') << setw(i) << ' ';
				cout << setfill(s) << setw(2) << s;
				cout << setfill(' ') << setw(8 - i) << ' ';
				cout << setfill(' ') << setw(10) << ' ';
				cout << setfill(s) << setw(2) << s << endl;
				
			}
			for (ll i = 0; i < 5; i++) {
				cout << setfill(' ') << setw(10) << ' ';
				cout << setfill(s) << setw(2) << s;
				cout << setfill(' ') << setw(10) << ' ';
				cout << setfill(' ') << setw(8 - (5 - i)) << ' ';
				cout << setfill(s) << setw(2) << s;
				cout << setfill(' ') << setw(5 - i) << ' ';
				cout << setfill(s) << setw(2) << s;
				cout << setfill(' ') << setw(5 - i) << ' ';
				cout << setfill(s) << setw(2) << s;
				cout << setfill(' ') << setw(8 - (5 - i)) << ' ' << endl;
			}
			cout << setfill(' ') << setw(10) << ' ';
			cout << setfill(s) << setw(2) << s;
			cout << setfill(' ') << setw(10) << ' ';
			cout << setfill(' ') << setw(9) << ' ' << setfill(s) << setw(4) << s << setfill(' ') << setw(9) << ' ' << endl;
			return 0;
		}
		case 14:{
			for (ll i = 0; i < 8; i++) {
				cout << setfill(' ') << setw(20-i) << ' ';
				cout << setfill(s) << setw(1 + i * 2) << s << endl;
			}
			for (ll i = 0; i < 7; i++) {
				cout << setfill(' ') << setw(20 - (6 - i)) << ' ';
				cout << setfill(s) << setw(1 + (6 - i) * 2) << s << endl;
			}
			return 0;
		}
	}
}