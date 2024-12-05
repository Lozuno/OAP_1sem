#include <iostream>
#include <ctime>
#include <vector>
using namespace std;
int main() {
	srand(time(0));
	setlocale(LC_ALL, "rus");
	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		a[i]=(rand() % 100);
		cout << a[i] << ' ';
	}
	cout << endl;
	int b = (a[n - 1] + a[n - 2] + a[n - 3]) / 3;
	for (int i = 0; i < n; i++) {
		if (a[i] == b) {
			cout << "Элемент номер: ";
			cout << i+1 << endl;
		}
	}
	return 0;
}