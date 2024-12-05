#include <iostream>
using namespace std;
void main(){
	setlocale(LC_CTYPE, "Russian");
	float a, sum = 0; int i;
	unsigned int size = 4;
	for (i = 0; i < size; i++)	{
		cout << "Введите a" << i << endl;
		cin >> a;
		sum = sum + a;
	}
	cout << "Ответ:" << sum << endl;
}