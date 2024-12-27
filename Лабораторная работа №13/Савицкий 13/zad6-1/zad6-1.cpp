#include <iostream>
using namespace std;
int main() {
	char a[100];
	cin.getline(a, 100);
	int i = 99;
	while (a[i] != '\0') {
		i--;
	}
	while (i > -1) {
		cout << a[i];
		i--;
	}
	return 0;
}