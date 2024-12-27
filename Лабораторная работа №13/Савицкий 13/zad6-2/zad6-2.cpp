#include <iostream>
using namespace std;
int main() {
	char a[100];
	char b[100];
	char c[100];
	cin.getline(a, 100);
	cin.ignore(cin.rdbuf()->in_avail());
	int k;
	cin >> k;
	int starti = 0;
	int bi = 0, ci = 0;
	int i = 0;
	while (*(a+i-1) != '\0') {
		if (i <= k) {
			if (*(a + i) != ' ') {
				i++;
			}
			else {
				for (int j = starti; j <= i; j++) {
					*(b + bi + (j - starti)) = *(a + j);
				}
				bi += i - starti + 1;
				i++;
				starti = i;
			}
		}
		else {
			*(b + bi) = '\0';
			if (*(a + i) == ' ' || *(a + i) == '\0') {
				for (int j = starti; j <= i; j++) {
					*(c + ci + (j - starti)) = *(a + j);
				}
				ci += i - starti + 1;
				i++;
				starti = i;
			}
			else {
				i++;
			}
		}
	}
	*(c +ci) = '\0';
	for (char* i = b; *i != '\0'; i++) {
		cout << *i;
	}
	cout << '\n';
	for (char* i = c; *i != '\0'; i++) {
		cout << *i;
	}
	return 0;
}